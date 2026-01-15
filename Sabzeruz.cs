// inject me into WinFi.exe and call me from the entrypoint to hook GetSystemTimeAsFileTime
using System;
using System.Runtime.InteropServices;

namespace Sabzeruz
{
    public static class Sabzeruz
    {
        [DllImport("ntdll.dll")]
        static extern int NtQuerySystemTime(out long SystemTime);

        [DllImport("kernel32.dll", SetLastError = true)]
        static extern bool FileTimeToSystemTime(ref long lpFileTime, out SYSTEMTIME lpSystemTime);

        [DllImport("kernel32.dll", SetLastError = true)]
        static extern bool SystemTimeToFileTime(ref SYSTEMTIME lpSystemTime, out long lpFileTime);

        [DllImport("kernel32.dll", CharSet = CharSet.Auto, SetLastError = true)]
        static extern IntPtr GetModuleHandle(string lpModuleName);

        [DllImport("kernel32.dll", CharSet = CharSet.Ansi, ExactSpelling = true, SetLastError = true)]
        static extern IntPtr GetProcAddress(IntPtr hModule, string procName);

        [DllImport("kernel32.dll", SetLastError = true, ExactSpelling = true)]
        static extern bool VirtualProtect(IntPtr lpAddress, uint dwSize, uint flNewProtect, out uint lpflOldProtect);

        [StructLayout(LayoutKind.Sequential)]
        struct SYSTEMTIME
        {
            public ushort wYear;
            public ushort wMonth;
            public ushort wDayOfWeek;
            public ushort wDay;
            public ushort wHour;
            public ushort wMinute;
            public ushort wSecond;
            public ushort wMilliseconds;
        }

        [UnmanagedFunctionPointer(CallingConvention.StdCall)]
        private delegate void GetSystemTimeAsFileTimeDelegate(out long lpSystemTimeAsFileTime);
        private static GetSystemTimeAsFileTimeDelegate _hookDelegate;

        private static bool _isHooked = false;

        public static void Install()
        {
            if (_isHooked) return;

            try
            {
                IntPtr hKernel = GetModuleHandle("kernel32.dll");
                if (hKernel == IntPtr.Zero) return;

                IntPtr targetFuncAddress = GetProcAddress(hKernel, "GetSystemTimeAsFileTime");
                if (targetFuncAddress == IntPtr.Zero) return;

                _hookDelegate = new GetSystemTimeAsFileTimeDelegate(FakeGetSystemTimeAsFileTime);
                IntPtr myHookAddress = Marshal.GetFunctionPointerForDelegate(_hookDelegate);

                uint oldProtect;
                if (!VirtualProtect(targetFuncAddress, 14, 0x40, out oldProtect)) return;

                if (IntPtr.Size == 8)
                {
                    // x64 Absolute Jump (14 bytes)
                    // FF 25 00 00 00 00  = JMP [RIP+0]
                    // <Address>          = 8 bytes absolute address
                    byte[] patch = new byte[14];
                    patch[0] = 0xFF;
                    patch[1] = 0x25;
                    patch[2] = 0x00;
                    patch[3] = 0x00;
                    patch[4] = 0x00;
                    patch[5] = 0x00;

                    byte[] addrBytes = BitConverter.GetBytes(myHookAddress.ToInt64());
                    Array.Copy(addrBytes, 0, patch, 6, 8);

                    Marshal.Copy(patch, 0, targetFuncAddress, 14);
                }
                else
                {
                    // x86 Relative Jump (5 bytes)
                    // E9 <Offset>
                    int offset = myHookAddress.ToInt32() - targetFuncAddress.ToInt32() - 5;

                    byte[] patch = new byte[5];
                    patch[0] = 0xE9;
                    byte[] offsetBytes = BitConverter.GetBytes(offset);
                    Array.Copy(offsetBytes, 0, patch, 1, 4);

                    Marshal.Copy(patch, 0, targetFuncAddress, 5);
                }

                VirtualProtect(targetFuncAddress, 14, oldProtect, out oldProtect);
                _isHooked = true;
            }
            catch (Exception ex)
            {
                Console.WriteLine("Hook Error: " + ex.Message);
            }
        }

        private static void FakeGetSystemTimeAsFileTime(out long lpSystemTimeAsFileTime)
        {
            NtQuerySystemTime(out lpSystemTimeAsFileTime);
            SYSTEMTIME s;
            if (FileTimeToSystemTime(ref lpSystemTimeAsFileTime, out s))
            {
                s.wYear = 2022;
                s.wMonth = 10;
                SystemTimeToFileTime(ref s, out lpSystemTimeAsFileTime);
            }
        }
    }
}
