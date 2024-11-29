
//
// created by AheadLibEx
// Author:i1tao
// Blog:https://www.cnblogs.com/0xc5
// Github:https://github.com/i1tao/AheadLibEx
// 

#include <windows.h>
#include <Shlwapi.h>
#include "detours.h"

#pragma comment( lib, "Shlwapi.lib")
#pragma comment( lib, "detours.lib")

#pragma comment(linker, "/EXPORT:Noname2=AheadLibEx_Unnamed2,@2,NONAME")
#pragma comment(linker, "/EXPORT:mciExecute=AheadLibEx_mciExecute,@3")
#pragma comment(linker, "/EXPORT:CloseDriver=AheadLibEx_CloseDriver,@4")
#pragma comment(linker, "/EXPORT:DefDriverProc=AheadLibEx_DefDriverProc,@5")
#pragma comment(linker, "/EXPORT:DriverCallback=AheadLibEx_DriverCallback,@6")
#pragma comment(linker, "/EXPORT:DrvGetModuleHandle=AheadLibEx_DrvGetModuleHandle,@7")
#pragma comment(linker, "/EXPORT:GetDriverModuleHandle=AheadLibEx_GetDriverModuleHandle,@8")
#pragma comment(linker, "/EXPORT:OpenDriver=AheadLibEx_OpenDriver,@9")
#pragma comment(linker, "/EXPORT:PlaySound=AheadLibEx_PlaySound,@10")
#pragma comment(linker, "/EXPORT:PlaySoundA=AheadLibEx_PlaySoundA,@11")
#pragma comment(linker, "/EXPORT:PlaySoundW=AheadLibEx_PlaySoundW,@12")
#pragma comment(linker, "/EXPORT:SendDriverMessage=AheadLibEx_SendDriverMessage,@13")
#pragma comment(linker, "/EXPORT:WOWAppExit=AheadLibEx_WOWAppExit,@14")
#pragma comment(linker, "/EXPORT:auxGetDevCapsA=AheadLibEx_auxGetDevCapsA,@15")
#pragma comment(linker, "/EXPORT:auxGetDevCapsW=AheadLibEx_auxGetDevCapsW,@16")
#pragma comment(linker, "/EXPORT:auxGetNumDevs=AheadLibEx_auxGetNumDevs,@17")
#pragma comment(linker, "/EXPORT:auxGetVolume=AheadLibEx_auxGetVolume,@18")
#pragma comment(linker, "/EXPORT:auxOutMessage=AheadLibEx_auxOutMessage,@19")
#pragma comment(linker, "/EXPORT:auxSetVolume=AheadLibEx_auxSetVolume,@20")
#pragma comment(linker, "/EXPORT:joyConfigChanged=AheadLibEx_joyConfigChanged,@21")
#pragma comment(linker, "/EXPORT:joyGetDevCapsA=AheadLibEx_joyGetDevCapsA,@22")
#pragma comment(linker, "/EXPORT:joyGetDevCapsW=AheadLibEx_joyGetDevCapsW,@23")
#pragma comment(linker, "/EXPORT:joyGetNumDevs=AheadLibEx_joyGetNumDevs,@24")
#pragma comment(linker, "/EXPORT:joyGetPos=AheadLibEx_joyGetPos,@25")
#pragma comment(linker, "/EXPORT:joyGetPosEx=AheadLibEx_joyGetPosEx,@26")
#pragma comment(linker, "/EXPORT:joyGetThreshold=AheadLibEx_joyGetThreshold,@27")
#pragma comment(linker, "/EXPORT:joyReleaseCapture=AheadLibEx_joyReleaseCapture,@28")
#pragma comment(linker, "/EXPORT:joySetCapture=AheadLibEx_joySetCapture,@29")
#pragma comment(linker, "/EXPORT:joySetThreshold=AheadLibEx_joySetThreshold,@30")
#pragma comment(linker, "/EXPORT:mciDriverNotify=AheadLibEx_mciDriverNotify,@31")
#pragma comment(linker, "/EXPORT:mciDriverYield=AheadLibEx_mciDriverYield,@32")
#pragma comment(linker, "/EXPORT:mciFreeCommandResource=AheadLibEx_mciFreeCommandResource,@33")
#pragma comment(linker, "/EXPORT:mciGetCreatorTask=AheadLibEx_mciGetCreatorTask,@34")
#pragma comment(linker, "/EXPORT:mciGetDeviceIDA=AheadLibEx_mciGetDeviceIDA,@35")
#pragma comment(linker, "/EXPORT:mciGetDeviceIDFromElementIDA=AheadLibEx_mciGetDeviceIDFromElementIDA,@36")
#pragma comment(linker, "/EXPORT:mciGetDeviceIDFromElementIDW=AheadLibEx_mciGetDeviceIDFromElementIDW,@37")
#pragma comment(linker, "/EXPORT:mciGetDeviceIDW=AheadLibEx_mciGetDeviceIDW,@38")
#pragma comment(linker, "/EXPORT:mciGetDriverData=AheadLibEx_mciGetDriverData,@39")
#pragma comment(linker, "/EXPORT:mciGetErrorStringA=AheadLibEx_mciGetErrorStringA,@40")
#pragma comment(linker, "/EXPORT:mciGetErrorStringW=AheadLibEx_mciGetErrorStringW,@41")
#pragma comment(linker, "/EXPORT:mciGetYieldProc=AheadLibEx_mciGetYieldProc,@42")
#pragma comment(linker, "/EXPORT:mciLoadCommandResource=AheadLibEx_mciLoadCommandResource,@43")
#pragma comment(linker, "/EXPORT:mciSendCommandA=AheadLibEx_mciSendCommandA,@44")
#pragma comment(linker, "/EXPORT:mciSendCommandW=AheadLibEx_mciSendCommandW,@45")
#pragma comment(linker, "/EXPORT:mciSendStringA=AheadLibEx_mciSendStringA,@46")
#pragma comment(linker, "/EXPORT:mciSendStringW=AheadLibEx_mciSendStringW,@47")
#pragma comment(linker, "/EXPORT:mciSetDriverData=AheadLibEx_mciSetDriverData,@48")
#pragma comment(linker, "/EXPORT:mciSetYieldProc=AheadLibEx_mciSetYieldProc,@49")
#pragma comment(linker, "/EXPORT:midiConnect=AheadLibEx_midiConnect,@50")
#pragma comment(linker, "/EXPORT:midiDisconnect=AheadLibEx_midiDisconnect,@51")
#pragma comment(linker, "/EXPORT:midiInAddBuffer=AheadLibEx_midiInAddBuffer,@52")
#pragma comment(linker, "/EXPORT:midiInClose=AheadLibEx_midiInClose,@53")
#pragma comment(linker, "/EXPORT:midiInGetDevCapsA=AheadLibEx_midiInGetDevCapsA,@54")
#pragma comment(linker, "/EXPORT:midiInGetDevCapsW=AheadLibEx_midiInGetDevCapsW,@55")
#pragma comment(linker, "/EXPORT:midiInGetErrorTextA=AheadLibEx_midiInGetErrorTextA,@56")
#pragma comment(linker, "/EXPORT:midiInGetErrorTextW=AheadLibEx_midiInGetErrorTextW,@57")
#pragma comment(linker, "/EXPORT:midiInGetID=AheadLibEx_midiInGetID,@58")
#pragma comment(linker, "/EXPORT:midiInGetNumDevs=AheadLibEx_midiInGetNumDevs,@59")
#pragma comment(linker, "/EXPORT:midiInMessage=AheadLibEx_midiInMessage,@60")
#pragma comment(linker, "/EXPORT:midiInOpen=AheadLibEx_midiInOpen,@61")
#pragma comment(linker, "/EXPORT:midiInPrepareHeader=AheadLibEx_midiInPrepareHeader,@62")
#pragma comment(linker, "/EXPORT:midiInReset=AheadLibEx_midiInReset,@63")
#pragma comment(linker, "/EXPORT:midiInStart=AheadLibEx_midiInStart,@64")
#pragma comment(linker, "/EXPORT:midiInStop=AheadLibEx_midiInStop,@65")
#pragma comment(linker, "/EXPORT:midiInUnprepareHeader=AheadLibEx_midiInUnprepareHeader,@66")
#pragma comment(linker, "/EXPORT:midiOutCacheDrumPatches=AheadLibEx_midiOutCacheDrumPatches,@67")
#pragma comment(linker, "/EXPORT:midiOutCachePatches=AheadLibEx_midiOutCachePatches,@68")
#pragma comment(linker, "/EXPORT:midiOutClose=AheadLibEx_midiOutClose,@69")
#pragma comment(linker, "/EXPORT:midiOutGetDevCapsA=AheadLibEx_midiOutGetDevCapsA,@70")
#pragma comment(linker, "/EXPORT:midiOutGetDevCapsW=AheadLibEx_midiOutGetDevCapsW,@71")
#pragma comment(linker, "/EXPORT:midiOutGetErrorTextA=AheadLibEx_midiOutGetErrorTextA,@72")
#pragma comment(linker, "/EXPORT:midiOutGetErrorTextW=AheadLibEx_midiOutGetErrorTextW,@73")
#pragma comment(linker, "/EXPORT:midiOutGetID=AheadLibEx_midiOutGetID,@74")
#pragma comment(linker, "/EXPORT:midiOutGetNumDevs=AheadLibEx_midiOutGetNumDevs,@75")
#pragma comment(linker, "/EXPORT:midiOutGetVolume=AheadLibEx_midiOutGetVolume,@76")
#pragma comment(linker, "/EXPORT:midiOutLongMsg=AheadLibEx_midiOutLongMsg,@77")
#pragma comment(linker, "/EXPORT:midiOutMessage=AheadLibEx_midiOutMessage,@78")
#pragma comment(linker, "/EXPORT:midiOutOpen=AheadLibEx_midiOutOpen,@79")
#pragma comment(linker, "/EXPORT:midiOutPrepareHeader=AheadLibEx_midiOutPrepareHeader,@80")
#pragma comment(linker, "/EXPORT:midiOutReset=AheadLibEx_midiOutReset,@81")
#pragma comment(linker, "/EXPORT:midiOutSetVolume=AheadLibEx_midiOutSetVolume,@82")
#pragma comment(linker, "/EXPORT:midiOutShortMsg=AheadLibEx_midiOutShortMsg,@83")
#pragma comment(linker, "/EXPORT:midiOutUnprepareHeader=AheadLibEx_midiOutUnprepareHeader,@84")
#pragma comment(linker, "/EXPORT:midiStreamClose=AheadLibEx_midiStreamClose,@85")
#pragma comment(linker, "/EXPORT:midiStreamOpen=AheadLibEx_midiStreamOpen,@86")
#pragma comment(linker, "/EXPORT:midiStreamOut=AheadLibEx_midiStreamOut,@87")
#pragma comment(linker, "/EXPORT:midiStreamPause=AheadLibEx_midiStreamPause,@88")
#pragma comment(linker, "/EXPORT:midiStreamPosition=AheadLibEx_midiStreamPosition,@89")
#pragma comment(linker, "/EXPORT:midiStreamProperty=AheadLibEx_midiStreamProperty,@90")
#pragma comment(linker, "/EXPORT:midiStreamRestart=AheadLibEx_midiStreamRestart,@91")
#pragma comment(linker, "/EXPORT:midiStreamStop=AheadLibEx_midiStreamStop,@92")
#pragma comment(linker, "/EXPORT:mixerClose=AheadLibEx_mixerClose,@93")
#pragma comment(linker, "/EXPORT:mixerGetControlDetailsA=AheadLibEx_mixerGetControlDetailsA,@94")
#pragma comment(linker, "/EXPORT:mixerGetControlDetailsW=AheadLibEx_mixerGetControlDetailsW,@95")
#pragma comment(linker, "/EXPORT:mixerGetDevCapsA=AheadLibEx_mixerGetDevCapsA,@96")
#pragma comment(linker, "/EXPORT:mixerGetDevCapsW=AheadLibEx_mixerGetDevCapsW,@97")
#pragma comment(linker, "/EXPORT:mixerGetID=AheadLibEx_mixerGetID,@98")
#pragma comment(linker, "/EXPORT:mixerGetLineControlsA=AheadLibEx_mixerGetLineControlsA,@99")
#pragma comment(linker, "/EXPORT:mixerGetLineControlsW=AheadLibEx_mixerGetLineControlsW,@100")
#pragma comment(linker, "/EXPORT:mixerGetLineInfoA=AheadLibEx_mixerGetLineInfoA,@101")
#pragma comment(linker, "/EXPORT:mixerGetLineInfoW=AheadLibEx_mixerGetLineInfoW,@102")
#pragma comment(linker, "/EXPORT:mixerGetNumDevs=AheadLibEx_mixerGetNumDevs,@103")
#pragma comment(linker, "/EXPORT:mixerMessage=AheadLibEx_mixerMessage,@104")
#pragma comment(linker, "/EXPORT:mixerOpen=AheadLibEx_mixerOpen,@105")
#pragma comment(linker, "/EXPORT:mixerSetControlDetails=AheadLibEx_mixerSetControlDetails,@106")
#pragma comment(linker, "/EXPORT:mmDrvInstall=AheadLibEx_mmDrvInstall,@107")
#pragma comment(linker, "/EXPORT:mmGetCurrentTask=AheadLibEx_mmGetCurrentTask,@108")
#pragma comment(linker, "/EXPORT:mmTaskBlock=AheadLibEx_mmTaskBlock,@109")
#pragma comment(linker, "/EXPORT:mmTaskCreate=AheadLibEx_mmTaskCreate,@110")
#pragma comment(linker, "/EXPORT:mmTaskSignal=AheadLibEx_mmTaskSignal,@111")
#pragma comment(linker, "/EXPORT:mmTaskYield=AheadLibEx_mmTaskYield,@112")
#pragma comment(linker, "/EXPORT:mmioAdvance=AheadLibEx_mmioAdvance,@113")
#pragma comment(linker, "/EXPORT:mmioAscend=AheadLibEx_mmioAscend,@114")
#pragma comment(linker, "/EXPORT:mmioClose=AheadLibEx_mmioClose,@115")
#pragma comment(linker, "/EXPORT:mmioCreateChunk=AheadLibEx_mmioCreateChunk,@116")
#pragma comment(linker, "/EXPORT:mmioDescend=AheadLibEx_mmioDescend,@117")
#pragma comment(linker, "/EXPORT:mmioFlush=AheadLibEx_mmioFlush,@118")
#pragma comment(linker, "/EXPORT:mmioGetInfo=AheadLibEx_mmioGetInfo,@119")
#pragma comment(linker, "/EXPORT:mmioInstallIOProcA=AheadLibEx_mmioInstallIOProcA,@120")
#pragma comment(linker, "/EXPORT:mmioInstallIOProcW=AheadLibEx_mmioInstallIOProcW,@121")
#pragma comment(linker, "/EXPORT:mmioOpenA=AheadLibEx_mmioOpenA,@122")
#pragma comment(linker, "/EXPORT:mmioOpenW=AheadLibEx_mmioOpenW,@123")
#pragma comment(linker, "/EXPORT:mmioRead=AheadLibEx_mmioRead,@124")
#pragma comment(linker, "/EXPORT:mmioRenameA=AheadLibEx_mmioRenameA,@125")
#pragma comment(linker, "/EXPORT:mmioRenameW=AheadLibEx_mmioRenameW,@126")
#pragma comment(linker, "/EXPORT:mmioSeek=AheadLibEx_mmioSeek,@127")
#pragma comment(linker, "/EXPORT:mmioSendMessage=AheadLibEx_mmioSendMessage,@128")
#pragma comment(linker, "/EXPORT:mmioSetBuffer=AheadLibEx_mmioSetBuffer,@129")
#pragma comment(linker, "/EXPORT:mmioSetInfo=AheadLibEx_mmioSetInfo,@130")
#pragma comment(linker, "/EXPORT:mmioStringToFOURCCA=AheadLibEx_mmioStringToFOURCCA,@131")
#pragma comment(linker, "/EXPORT:mmioStringToFOURCCW=AheadLibEx_mmioStringToFOURCCW,@132")
#pragma comment(linker, "/EXPORT:mmioWrite=AheadLibEx_mmioWrite,@133")
#pragma comment(linker, "/EXPORT:mmsystemGetVersion=AheadLibEx_mmsystemGetVersion,@134")
#pragma comment(linker, "/EXPORT:sndPlaySoundA=AheadLibEx_sndPlaySoundA,@135")
#pragma comment(linker, "/EXPORT:sndPlaySoundW=AheadLibEx_sndPlaySoundW,@136")
#pragma comment(linker, "/EXPORT:timeBeginPeriod=AheadLibEx_timeBeginPeriod,@137")
#pragma comment(linker, "/EXPORT:timeEndPeriod=AheadLibEx_timeEndPeriod,@138")
#pragma comment(linker, "/EXPORT:timeGetDevCaps=AheadLibEx_timeGetDevCaps,@139")
#pragma comment(linker, "/EXPORT:timeGetSystemTime=AheadLibEx_timeGetSystemTime,@140")
#pragma comment(linker, "/EXPORT:timeGetTime=AheadLibEx_timeGetTime,@141")
#pragma comment(linker, "/EXPORT:timeKillEvent=AheadLibEx_timeKillEvent,@142")
#pragma comment(linker, "/EXPORT:timeSetEvent=AheadLibEx_timeSetEvent,@143")
#pragma comment(linker, "/EXPORT:waveInAddBuffer=AheadLibEx_waveInAddBuffer,@144")
#pragma comment(linker, "/EXPORT:waveInClose=AheadLibEx_waveInClose,@145")
#pragma comment(linker, "/EXPORT:waveInGetDevCapsA=AheadLibEx_waveInGetDevCapsA,@146")
#pragma comment(linker, "/EXPORT:waveInGetDevCapsW=AheadLibEx_waveInGetDevCapsW,@147")
#pragma comment(linker, "/EXPORT:waveInGetErrorTextA=AheadLibEx_waveInGetErrorTextA,@148")
#pragma comment(linker, "/EXPORT:waveInGetErrorTextW=AheadLibEx_waveInGetErrorTextW,@149")
#pragma comment(linker, "/EXPORT:waveInGetID=AheadLibEx_waveInGetID,@150")
#pragma comment(linker, "/EXPORT:waveInGetNumDevs=AheadLibEx_waveInGetNumDevs,@151")
#pragma comment(linker, "/EXPORT:waveInGetPosition=AheadLibEx_waveInGetPosition,@152")
#pragma comment(linker, "/EXPORT:waveInMessage=AheadLibEx_waveInMessage,@153")
#pragma comment(linker, "/EXPORT:waveInOpen=AheadLibEx_waveInOpen,@154")
#pragma comment(linker, "/EXPORT:waveInPrepareHeader=AheadLibEx_waveInPrepareHeader,@155")
#pragma comment(linker, "/EXPORT:waveInReset=AheadLibEx_waveInReset,@156")
#pragma comment(linker, "/EXPORT:waveInStart=AheadLibEx_waveInStart,@157")
#pragma comment(linker, "/EXPORT:waveInStop=AheadLibEx_waveInStop,@158")
#pragma comment(linker, "/EXPORT:waveInUnprepareHeader=AheadLibEx_waveInUnprepareHeader,@159")
#pragma comment(linker, "/EXPORT:waveOutBreakLoop=AheadLibEx_waveOutBreakLoop,@160")
#pragma comment(linker, "/EXPORT:waveOutClose=AheadLibEx_waveOutClose,@161")
#pragma comment(linker, "/EXPORT:waveOutGetDevCapsA=AheadLibEx_waveOutGetDevCapsA,@162")
#pragma comment(linker, "/EXPORT:waveOutGetDevCapsW=AheadLibEx_waveOutGetDevCapsW,@163")
#pragma comment(linker, "/EXPORT:waveOutGetErrorTextA=AheadLibEx_waveOutGetErrorTextA,@164")
#pragma comment(linker, "/EXPORT:waveOutGetErrorTextW=AheadLibEx_waveOutGetErrorTextW,@165")
#pragma comment(linker, "/EXPORT:waveOutGetID=AheadLibEx_waveOutGetID,@166")
#pragma comment(linker, "/EXPORT:waveOutGetNumDevs=AheadLibEx_waveOutGetNumDevs,@167")
#pragma comment(linker, "/EXPORT:waveOutGetPitch=AheadLibEx_waveOutGetPitch,@168")
#pragma comment(linker, "/EXPORT:waveOutGetPlaybackRate=AheadLibEx_waveOutGetPlaybackRate,@169")
#pragma comment(linker, "/EXPORT:waveOutGetPosition=AheadLibEx_waveOutGetPosition,@170")
#pragma comment(linker, "/EXPORT:waveOutGetVolume=AheadLibEx_waveOutGetVolume,@171")
#pragma comment(linker, "/EXPORT:waveOutMessage=AheadLibEx_waveOutMessage,@172")
#pragma comment(linker, "/EXPORT:waveOutOpen=AheadLibEx_waveOutOpen,@173")
#pragma comment(linker, "/EXPORT:waveOutPause=AheadLibEx_waveOutPause,@174")
#pragma comment(linker, "/EXPORT:waveOutPrepareHeader=AheadLibEx_waveOutPrepareHeader,@175")
#pragma comment(linker, "/EXPORT:waveOutReset=AheadLibEx_waveOutReset,@176")
#pragma comment(linker, "/EXPORT:waveOutRestart=AheadLibEx_waveOutRestart,@177")
#pragma comment(linker, "/EXPORT:waveOutSetPitch=AheadLibEx_waveOutSetPitch,@178")
#pragma comment(linker, "/EXPORT:waveOutSetPlaybackRate=AheadLibEx_waveOutSetPlaybackRate,@179")
#pragma comment(linker, "/EXPORT:waveOutSetVolume=AheadLibEx_waveOutSetVolume,@180")
#pragma comment(linker, "/EXPORT:waveOutUnprepareHeader=AheadLibEx_waveOutUnprepareHeader,@181")
#pragma comment(linker, "/EXPORT:waveOutWrite=AheadLibEx_waveOutWrite,@182")


extern "C" 
{
PVOID pfnAheadLibEx_Unnamed2;
PVOID pfnAheadLibEx_mciExecute;
PVOID pfnAheadLibEx_CloseDriver;
PVOID pfnAheadLibEx_DefDriverProc;
PVOID pfnAheadLibEx_DriverCallback;
PVOID pfnAheadLibEx_DrvGetModuleHandle;
PVOID pfnAheadLibEx_GetDriverModuleHandle;
PVOID pfnAheadLibEx_OpenDriver;
PVOID pfnAheadLibEx_PlaySound;
PVOID pfnAheadLibEx_PlaySoundA;
PVOID pfnAheadLibEx_PlaySoundW;
PVOID pfnAheadLibEx_SendDriverMessage;
PVOID pfnAheadLibEx_WOWAppExit;
PVOID pfnAheadLibEx_auxGetDevCapsA;
PVOID pfnAheadLibEx_auxGetDevCapsW;
PVOID pfnAheadLibEx_auxGetNumDevs;
PVOID pfnAheadLibEx_auxGetVolume;
PVOID pfnAheadLibEx_auxOutMessage;
PVOID pfnAheadLibEx_auxSetVolume;
PVOID pfnAheadLibEx_joyConfigChanged;
PVOID pfnAheadLibEx_joyGetDevCapsA;
PVOID pfnAheadLibEx_joyGetDevCapsW;
PVOID pfnAheadLibEx_joyGetNumDevs;
PVOID pfnAheadLibEx_joyGetPos;
PVOID pfnAheadLibEx_joyGetPosEx;
PVOID pfnAheadLibEx_joyGetThreshold;
PVOID pfnAheadLibEx_joyReleaseCapture;
PVOID pfnAheadLibEx_joySetCapture;
PVOID pfnAheadLibEx_joySetThreshold;
PVOID pfnAheadLibEx_mciDriverNotify;
PVOID pfnAheadLibEx_mciDriverYield;
PVOID pfnAheadLibEx_mciFreeCommandResource;
PVOID pfnAheadLibEx_mciGetCreatorTask;
PVOID pfnAheadLibEx_mciGetDeviceIDA;
PVOID pfnAheadLibEx_mciGetDeviceIDFromElementIDA;
PVOID pfnAheadLibEx_mciGetDeviceIDFromElementIDW;
PVOID pfnAheadLibEx_mciGetDeviceIDW;
PVOID pfnAheadLibEx_mciGetDriverData;
PVOID pfnAheadLibEx_mciGetErrorStringA;
PVOID pfnAheadLibEx_mciGetErrorStringW;
PVOID pfnAheadLibEx_mciGetYieldProc;
PVOID pfnAheadLibEx_mciLoadCommandResource;
PVOID pfnAheadLibEx_mciSendCommandA;
PVOID pfnAheadLibEx_mciSendCommandW;
PVOID pfnAheadLibEx_mciSendStringA;
PVOID pfnAheadLibEx_mciSendStringW;
PVOID pfnAheadLibEx_mciSetDriverData;
PVOID pfnAheadLibEx_mciSetYieldProc;
PVOID pfnAheadLibEx_midiConnect;
PVOID pfnAheadLibEx_midiDisconnect;
PVOID pfnAheadLibEx_midiInAddBuffer;
PVOID pfnAheadLibEx_midiInClose;
PVOID pfnAheadLibEx_midiInGetDevCapsA;
PVOID pfnAheadLibEx_midiInGetDevCapsW;
PVOID pfnAheadLibEx_midiInGetErrorTextA;
PVOID pfnAheadLibEx_midiInGetErrorTextW;
PVOID pfnAheadLibEx_midiInGetID;
PVOID pfnAheadLibEx_midiInGetNumDevs;
PVOID pfnAheadLibEx_midiInMessage;
PVOID pfnAheadLibEx_midiInOpen;
PVOID pfnAheadLibEx_midiInPrepareHeader;
PVOID pfnAheadLibEx_midiInReset;
PVOID pfnAheadLibEx_midiInStart;
PVOID pfnAheadLibEx_midiInStop;
PVOID pfnAheadLibEx_midiInUnprepareHeader;
PVOID pfnAheadLibEx_midiOutCacheDrumPatches;
PVOID pfnAheadLibEx_midiOutCachePatches;
PVOID pfnAheadLibEx_midiOutClose;
PVOID pfnAheadLibEx_midiOutGetDevCapsA;
PVOID pfnAheadLibEx_midiOutGetDevCapsW;
PVOID pfnAheadLibEx_midiOutGetErrorTextA;
PVOID pfnAheadLibEx_midiOutGetErrorTextW;
PVOID pfnAheadLibEx_midiOutGetID;
PVOID pfnAheadLibEx_midiOutGetNumDevs;
PVOID pfnAheadLibEx_midiOutGetVolume;
PVOID pfnAheadLibEx_midiOutLongMsg;
PVOID pfnAheadLibEx_midiOutMessage;
PVOID pfnAheadLibEx_midiOutOpen;
PVOID pfnAheadLibEx_midiOutPrepareHeader;
PVOID pfnAheadLibEx_midiOutReset;
PVOID pfnAheadLibEx_midiOutSetVolume;
PVOID pfnAheadLibEx_midiOutShortMsg;
PVOID pfnAheadLibEx_midiOutUnprepareHeader;
PVOID pfnAheadLibEx_midiStreamClose;
PVOID pfnAheadLibEx_midiStreamOpen;
PVOID pfnAheadLibEx_midiStreamOut;
PVOID pfnAheadLibEx_midiStreamPause;
PVOID pfnAheadLibEx_midiStreamPosition;
PVOID pfnAheadLibEx_midiStreamProperty;
PVOID pfnAheadLibEx_midiStreamRestart;
PVOID pfnAheadLibEx_midiStreamStop;
PVOID pfnAheadLibEx_mixerClose;
PVOID pfnAheadLibEx_mixerGetControlDetailsA;
PVOID pfnAheadLibEx_mixerGetControlDetailsW;
PVOID pfnAheadLibEx_mixerGetDevCapsA;
PVOID pfnAheadLibEx_mixerGetDevCapsW;
PVOID pfnAheadLibEx_mixerGetID;
PVOID pfnAheadLibEx_mixerGetLineControlsA;
PVOID pfnAheadLibEx_mixerGetLineControlsW;
PVOID pfnAheadLibEx_mixerGetLineInfoA;
PVOID pfnAheadLibEx_mixerGetLineInfoW;
PVOID pfnAheadLibEx_mixerGetNumDevs;
PVOID pfnAheadLibEx_mixerMessage;
PVOID pfnAheadLibEx_mixerOpen;
PVOID pfnAheadLibEx_mixerSetControlDetails;
PVOID pfnAheadLibEx_mmDrvInstall;
PVOID pfnAheadLibEx_mmGetCurrentTask;
PVOID pfnAheadLibEx_mmTaskBlock;
PVOID pfnAheadLibEx_mmTaskCreate;
PVOID pfnAheadLibEx_mmTaskSignal;
PVOID pfnAheadLibEx_mmTaskYield;
PVOID pfnAheadLibEx_mmioAdvance;
PVOID pfnAheadLibEx_mmioAscend;
PVOID pfnAheadLibEx_mmioClose;
PVOID pfnAheadLibEx_mmioCreateChunk;
PVOID pfnAheadLibEx_mmioDescend;
PVOID pfnAheadLibEx_mmioFlush;
PVOID pfnAheadLibEx_mmioGetInfo;
PVOID pfnAheadLibEx_mmioInstallIOProcA;
PVOID pfnAheadLibEx_mmioInstallIOProcW;
PVOID pfnAheadLibEx_mmioOpenA;
PVOID pfnAheadLibEx_mmioOpenW;
PVOID pfnAheadLibEx_mmioRead;
PVOID pfnAheadLibEx_mmioRenameA;
PVOID pfnAheadLibEx_mmioRenameW;
PVOID pfnAheadLibEx_mmioSeek;
PVOID pfnAheadLibEx_mmioSendMessage;
PVOID pfnAheadLibEx_mmioSetBuffer;
PVOID pfnAheadLibEx_mmioSetInfo;
PVOID pfnAheadLibEx_mmioStringToFOURCCA;
PVOID pfnAheadLibEx_mmioStringToFOURCCW;
PVOID pfnAheadLibEx_mmioWrite;
PVOID pfnAheadLibEx_mmsystemGetVersion;
PVOID pfnAheadLibEx_sndPlaySoundA;
PVOID pfnAheadLibEx_sndPlaySoundW;
PVOID pfnAheadLibEx_timeBeginPeriod;
PVOID pfnAheadLibEx_timeEndPeriod;
PVOID pfnAheadLibEx_timeGetDevCaps;
PVOID pfnAheadLibEx_timeGetSystemTime;
PVOID pfnAheadLibEx_timeGetTime;
PVOID pfnAheadLibEx_timeKillEvent;
PVOID pfnAheadLibEx_timeSetEvent;
PVOID pfnAheadLibEx_waveInAddBuffer;
PVOID pfnAheadLibEx_waveInClose;
PVOID pfnAheadLibEx_waveInGetDevCapsA;
PVOID pfnAheadLibEx_waveInGetDevCapsW;
PVOID pfnAheadLibEx_waveInGetErrorTextA;
PVOID pfnAheadLibEx_waveInGetErrorTextW;
PVOID pfnAheadLibEx_waveInGetID;
PVOID pfnAheadLibEx_waveInGetNumDevs;
PVOID pfnAheadLibEx_waveInGetPosition;
PVOID pfnAheadLibEx_waveInMessage;
PVOID pfnAheadLibEx_waveInOpen;
PVOID pfnAheadLibEx_waveInPrepareHeader;
PVOID pfnAheadLibEx_waveInReset;
PVOID pfnAheadLibEx_waveInStart;
PVOID pfnAheadLibEx_waveInStop;
PVOID pfnAheadLibEx_waveInUnprepareHeader;
PVOID pfnAheadLibEx_waveOutBreakLoop;
PVOID pfnAheadLibEx_waveOutClose;
PVOID pfnAheadLibEx_waveOutGetDevCapsA;
PVOID pfnAheadLibEx_waveOutGetDevCapsW;
PVOID pfnAheadLibEx_waveOutGetErrorTextA;
PVOID pfnAheadLibEx_waveOutGetErrorTextW;
PVOID pfnAheadLibEx_waveOutGetID;
PVOID pfnAheadLibEx_waveOutGetNumDevs;
PVOID pfnAheadLibEx_waveOutGetPitch;
PVOID pfnAheadLibEx_waveOutGetPlaybackRate;
PVOID pfnAheadLibEx_waveOutGetPosition;
PVOID pfnAheadLibEx_waveOutGetVolume;
PVOID pfnAheadLibEx_waveOutMessage;
PVOID pfnAheadLibEx_waveOutOpen;
PVOID pfnAheadLibEx_waveOutPause;
PVOID pfnAheadLibEx_waveOutPrepareHeader;
PVOID pfnAheadLibEx_waveOutReset;
PVOID pfnAheadLibEx_waveOutRestart;
PVOID pfnAheadLibEx_waveOutSetPitch;
PVOID pfnAheadLibEx_waveOutSetPlaybackRate;
PVOID pfnAheadLibEx_waveOutSetVolume;
PVOID pfnAheadLibEx_waveOutUnprepareHeader;
PVOID pfnAheadLibEx_waveOutWrite;
}


static HMODULE g_OldModule = NULL;

VOID WINAPI Free()
{
	if (g_OldModule)
	{
		FreeLibrary(g_OldModule);
	}
}


BOOL WINAPI Load()
{
	TCHAR tzPath[MAX_PATH];
	TCHAR tzTemp[MAX_PATH * 2];

	GetSystemDirectory(tzPath, MAX_PATH);

	lstrcat(tzPath, TEXT("\\winmm.dll"));

	g_OldModule = LoadLibrary(tzPath);
	if (g_OldModule == NULL)
	{
		wsprintf(tzTemp, TEXT("%s not found, exit."), tzPath);
		MessageBox(NULL, tzTemp, TEXT("AheadLibEx"), MB_ICONSTOP);
	}

	return (g_OldModule != NULL);

}


FARPROC WINAPI GetAddress(PCSTR pszProcName)
{
	FARPROC fpAddress;
	CHAR szProcName[64];
	TCHAR tzTemp[MAX_PATH];

	fpAddress = GetProcAddress(g_OldModule, pszProcName);
	if (fpAddress == NULL)
	{
		if (HIWORD(pszProcName) == 0)
		{
			wsprintfA(szProcName, "#%d", (DWORD)pszProcName);
			pszProcName = szProcName;
		}

		wsprintf(tzTemp, TEXT("function %hs not found, exit"), pszProcName);
		MessageBox(NULL, tzTemp, TEXT("AheadLibEx"), MB_ICONSTOP);
		ExitProcess(-2);
	}
	return fpAddress;
}

BOOL WINAPI Init()
{
	pfnAheadLibEx_Unnamed2 = GetAddress(MAKEINTRESOURCEA(2));
	pfnAheadLibEx_mciExecute = GetAddress("mciExecute");
	pfnAheadLibEx_CloseDriver = GetAddress("CloseDriver");
	pfnAheadLibEx_DefDriverProc = GetAddress("DefDriverProc");
	pfnAheadLibEx_DriverCallback = GetAddress("DriverCallback");
	pfnAheadLibEx_DrvGetModuleHandle = GetAddress("DrvGetModuleHandle");
	pfnAheadLibEx_GetDriverModuleHandle = GetAddress("GetDriverModuleHandle");
	pfnAheadLibEx_OpenDriver = GetAddress("OpenDriver");
	pfnAheadLibEx_PlaySound = GetAddress("PlaySound");
	pfnAheadLibEx_PlaySoundA = GetAddress("PlaySoundA");
	pfnAheadLibEx_PlaySoundW = GetAddress("PlaySoundW");
	pfnAheadLibEx_SendDriverMessage = GetAddress("SendDriverMessage");
	pfnAheadLibEx_WOWAppExit = GetAddress("WOWAppExit");
	pfnAheadLibEx_auxGetDevCapsA = GetAddress("auxGetDevCapsA");
	pfnAheadLibEx_auxGetDevCapsW = GetAddress("auxGetDevCapsW");
	pfnAheadLibEx_auxGetNumDevs = GetAddress("auxGetNumDevs");
	pfnAheadLibEx_auxGetVolume = GetAddress("auxGetVolume");
	pfnAheadLibEx_auxOutMessage = GetAddress("auxOutMessage");
	pfnAheadLibEx_auxSetVolume = GetAddress("auxSetVolume");
	pfnAheadLibEx_joyConfigChanged = GetAddress("joyConfigChanged");
	pfnAheadLibEx_joyGetDevCapsA = GetAddress("joyGetDevCapsA");
	pfnAheadLibEx_joyGetDevCapsW = GetAddress("joyGetDevCapsW");
	pfnAheadLibEx_joyGetNumDevs = GetAddress("joyGetNumDevs");
	pfnAheadLibEx_joyGetPos = GetAddress("joyGetPos");
	pfnAheadLibEx_joyGetPosEx = GetAddress("joyGetPosEx");
	pfnAheadLibEx_joyGetThreshold = GetAddress("joyGetThreshold");
	pfnAheadLibEx_joyReleaseCapture = GetAddress("joyReleaseCapture");
	pfnAheadLibEx_joySetCapture = GetAddress("joySetCapture");
	pfnAheadLibEx_joySetThreshold = GetAddress("joySetThreshold");
	pfnAheadLibEx_mciDriverNotify = GetAddress("mciDriverNotify");
	pfnAheadLibEx_mciDriverYield = GetAddress("mciDriverYield");
	pfnAheadLibEx_mciFreeCommandResource = GetAddress("mciFreeCommandResource");
	pfnAheadLibEx_mciGetCreatorTask = GetAddress("mciGetCreatorTask");
	pfnAheadLibEx_mciGetDeviceIDA = GetAddress("mciGetDeviceIDA");
	pfnAheadLibEx_mciGetDeviceIDFromElementIDA = GetAddress("mciGetDeviceIDFromElementIDA");
	pfnAheadLibEx_mciGetDeviceIDFromElementIDW = GetAddress("mciGetDeviceIDFromElementIDW");
	pfnAheadLibEx_mciGetDeviceIDW = GetAddress("mciGetDeviceIDW");
	pfnAheadLibEx_mciGetDriverData = GetAddress("mciGetDriverData");
	pfnAheadLibEx_mciGetErrorStringA = GetAddress("mciGetErrorStringA");
	pfnAheadLibEx_mciGetErrorStringW = GetAddress("mciGetErrorStringW");
	pfnAheadLibEx_mciGetYieldProc = GetAddress("mciGetYieldProc");
	pfnAheadLibEx_mciLoadCommandResource = GetAddress("mciLoadCommandResource");
	pfnAheadLibEx_mciSendCommandA = GetAddress("mciSendCommandA");
	pfnAheadLibEx_mciSendCommandW = GetAddress("mciSendCommandW");
	pfnAheadLibEx_mciSendStringA = GetAddress("mciSendStringA");
	pfnAheadLibEx_mciSendStringW = GetAddress("mciSendStringW");
	pfnAheadLibEx_mciSetDriverData = GetAddress("mciSetDriverData");
	pfnAheadLibEx_mciSetYieldProc = GetAddress("mciSetYieldProc");
	pfnAheadLibEx_midiConnect = GetAddress("midiConnect");
	pfnAheadLibEx_midiDisconnect = GetAddress("midiDisconnect");
	pfnAheadLibEx_midiInAddBuffer = GetAddress("midiInAddBuffer");
	pfnAheadLibEx_midiInClose = GetAddress("midiInClose");
	pfnAheadLibEx_midiInGetDevCapsA = GetAddress("midiInGetDevCapsA");
	pfnAheadLibEx_midiInGetDevCapsW = GetAddress("midiInGetDevCapsW");
	pfnAheadLibEx_midiInGetErrorTextA = GetAddress("midiInGetErrorTextA");
	pfnAheadLibEx_midiInGetErrorTextW = GetAddress("midiInGetErrorTextW");
	pfnAheadLibEx_midiInGetID = GetAddress("midiInGetID");
	pfnAheadLibEx_midiInGetNumDevs = GetAddress("midiInGetNumDevs");
	pfnAheadLibEx_midiInMessage = GetAddress("midiInMessage");
	pfnAheadLibEx_midiInOpen = GetAddress("midiInOpen");
	pfnAheadLibEx_midiInPrepareHeader = GetAddress("midiInPrepareHeader");
	pfnAheadLibEx_midiInReset = GetAddress("midiInReset");
	pfnAheadLibEx_midiInStart = GetAddress("midiInStart");
	pfnAheadLibEx_midiInStop = GetAddress("midiInStop");
	pfnAheadLibEx_midiInUnprepareHeader = GetAddress("midiInUnprepareHeader");
	pfnAheadLibEx_midiOutCacheDrumPatches = GetAddress("midiOutCacheDrumPatches");
	pfnAheadLibEx_midiOutCachePatches = GetAddress("midiOutCachePatches");
	pfnAheadLibEx_midiOutClose = GetAddress("midiOutClose");
	pfnAheadLibEx_midiOutGetDevCapsA = GetAddress("midiOutGetDevCapsA");
	pfnAheadLibEx_midiOutGetDevCapsW = GetAddress("midiOutGetDevCapsW");
	pfnAheadLibEx_midiOutGetErrorTextA = GetAddress("midiOutGetErrorTextA");
	pfnAheadLibEx_midiOutGetErrorTextW = GetAddress("midiOutGetErrorTextW");
	pfnAheadLibEx_midiOutGetID = GetAddress("midiOutGetID");
	pfnAheadLibEx_midiOutGetNumDevs = GetAddress("midiOutGetNumDevs");
	pfnAheadLibEx_midiOutGetVolume = GetAddress("midiOutGetVolume");
	pfnAheadLibEx_midiOutLongMsg = GetAddress("midiOutLongMsg");
	pfnAheadLibEx_midiOutMessage = GetAddress("midiOutMessage");
	pfnAheadLibEx_midiOutOpen = GetAddress("midiOutOpen");
	pfnAheadLibEx_midiOutPrepareHeader = GetAddress("midiOutPrepareHeader");
	pfnAheadLibEx_midiOutReset = GetAddress("midiOutReset");
	pfnAheadLibEx_midiOutSetVolume = GetAddress("midiOutSetVolume");
	pfnAheadLibEx_midiOutShortMsg = GetAddress("midiOutShortMsg");
	pfnAheadLibEx_midiOutUnprepareHeader = GetAddress("midiOutUnprepareHeader");
	pfnAheadLibEx_midiStreamClose = GetAddress("midiStreamClose");
	pfnAheadLibEx_midiStreamOpen = GetAddress("midiStreamOpen");
	pfnAheadLibEx_midiStreamOut = GetAddress("midiStreamOut");
	pfnAheadLibEx_midiStreamPause = GetAddress("midiStreamPause");
	pfnAheadLibEx_midiStreamPosition = GetAddress("midiStreamPosition");
	pfnAheadLibEx_midiStreamProperty = GetAddress("midiStreamProperty");
	pfnAheadLibEx_midiStreamRestart = GetAddress("midiStreamRestart");
	pfnAheadLibEx_midiStreamStop = GetAddress("midiStreamStop");
	pfnAheadLibEx_mixerClose = GetAddress("mixerClose");
	pfnAheadLibEx_mixerGetControlDetailsA = GetAddress("mixerGetControlDetailsA");
	pfnAheadLibEx_mixerGetControlDetailsW = GetAddress("mixerGetControlDetailsW");
	pfnAheadLibEx_mixerGetDevCapsA = GetAddress("mixerGetDevCapsA");
	pfnAheadLibEx_mixerGetDevCapsW = GetAddress("mixerGetDevCapsW");
	pfnAheadLibEx_mixerGetID = GetAddress("mixerGetID");
	pfnAheadLibEx_mixerGetLineControlsA = GetAddress("mixerGetLineControlsA");
	pfnAheadLibEx_mixerGetLineControlsW = GetAddress("mixerGetLineControlsW");
	pfnAheadLibEx_mixerGetLineInfoA = GetAddress("mixerGetLineInfoA");
	pfnAheadLibEx_mixerGetLineInfoW = GetAddress("mixerGetLineInfoW");
	pfnAheadLibEx_mixerGetNumDevs = GetAddress("mixerGetNumDevs");
	pfnAheadLibEx_mixerMessage = GetAddress("mixerMessage");
	pfnAheadLibEx_mixerOpen = GetAddress("mixerOpen");
	pfnAheadLibEx_mixerSetControlDetails = GetAddress("mixerSetControlDetails");
	pfnAheadLibEx_mmDrvInstall = GetAddress("mmDrvInstall");
	pfnAheadLibEx_mmGetCurrentTask = GetAddress("mmGetCurrentTask");
	pfnAheadLibEx_mmTaskBlock = GetAddress("mmTaskBlock");
	pfnAheadLibEx_mmTaskCreate = GetAddress("mmTaskCreate");
	pfnAheadLibEx_mmTaskSignal = GetAddress("mmTaskSignal");
	pfnAheadLibEx_mmTaskYield = GetAddress("mmTaskYield");
	pfnAheadLibEx_mmioAdvance = GetAddress("mmioAdvance");
	pfnAheadLibEx_mmioAscend = GetAddress("mmioAscend");
	pfnAheadLibEx_mmioClose = GetAddress("mmioClose");
	pfnAheadLibEx_mmioCreateChunk = GetAddress("mmioCreateChunk");
	pfnAheadLibEx_mmioDescend = GetAddress("mmioDescend");
	pfnAheadLibEx_mmioFlush = GetAddress("mmioFlush");
	pfnAheadLibEx_mmioGetInfo = GetAddress("mmioGetInfo");
	pfnAheadLibEx_mmioInstallIOProcA = GetAddress("mmioInstallIOProcA");
	pfnAheadLibEx_mmioInstallIOProcW = GetAddress("mmioInstallIOProcW");
	pfnAheadLibEx_mmioOpenA = GetAddress("mmioOpenA");
	pfnAheadLibEx_mmioOpenW = GetAddress("mmioOpenW");
	pfnAheadLibEx_mmioRead = GetAddress("mmioRead");
	pfnAheadLibEx_mmioRenameA = GetAddress("mmioRenameA");
	pfnAheadLibEx_mmioRenameW = GetAddress("mmioRenameW");
	pfnAheadLibEx_mmioSeek = GetAddress("mmioSeek");
	pfnAheadLibEx_mmioSendMessage = GetAddress("mmioSendMessage");
	pfnAheadLibEx_mmioSetBuffer = GetAddress("mmioSetBuffer");
	pfnAheadLibEx_mmioSetInfo = GetAddress("mmioSetInfo");
	pfnAheadLibEx_mmioStringToFOURCCA = GetAddress("mmioStringToFOURCCA");
	pfnAheadLibEx_mmioStringToFOURCCW = GetAddress("mmioStringToFOURCCW");
	pfnAheadLibEx_mmioWrite = GetAddress("mmioWrite");
	pfnAheadLibEx_mmsystemGetVersion = GetAddress("mmsystemGetVersion");
	pfnAheadLibEx_sndPlaySoundA = GetAddress("sndPlaySoundA");
	pfnAheadLibEx_sndPlaySoundW = GetAddress("sndPlaySoundW");
	pfnAheadLibEx_timeBeginPeriod = GetAddress("timeBeginPeriod");
	pfnAheadLibEx_timeEndPeriod = GetAddress("timeEndPeriod");
	pfnAheadLibEx_timeGetDevCaps = GetAddress("timeGetDevCaps");
	pfnAheadLibEx_timeGetSystemTime = GetAddress("timeGetSystemTime");
	pfnAheadLibEx_timeGetTime = GetAddress("timeGetTime");
	pfnAheadLibEx_timeKillEvent = GetAddress("timeKillEvent");
	pfnAheadLibEx_timeSetEvent = GetAddress("timeSetEvent");
	pfnAheadLibEx_waveInAddBuffer = GetAddress("waveInAddBuffer");
	pfnAheadLibEx_waveInClose = GetAddress("waveInClose");
	pfnAheadLibEx_waveInGetDevCapsA = GetAddress("waveInGetDevCapsA");
	pfnAheadLibEx_waveInGetDevCapsW = GetAddress("waveInGetDevCapsW");
	pfnAheadLibEx_waveInGetErrorTextA = GetAddress("waveInGetErrorTextA");
	pfnAheadLibEx_waveInGetErrorTextW = GetAddress("waveInGetErrorTextW");
	pfnAheadLibEx_waveInGetID = GetAddress("waveInGetID");
	pfnAheadLibEx_waveInGetNumDevs = GetAddress("waveInGetNumDevs");
	pfnAheadLibEx_waveInGetPosition = GetAddress("waveInGetPosition");
	pfnAheadLibEx_waveInMessage = GetAddress("waveInMessage");
	pfnAheadLibEx_waveInOpen = GetAddress("waveInOpen");
	pfnAheadLibEx_waveInPrepareHeader = GetAddress("waveInPrepareHeader");
	pfnAheadLibEx_waveInReset = GetAddress("waveInReset");
	pfnAheadLibEx_waveInStart = GetAddress("waveInStart");
	pfnAheadLibEx_waveInStop = GetAddress("waveInStop");
	pfnAheadLibEx_waveInUnprepareHeader = GetAddress("waveInUnprepareHeader");
	pfnAheadLibEx_waveOutBreakLoop = GetAddress("waveOutBreakLoop");
	pfnAheadLibEx_waveOutClose = GetAddress("waveOutClose");
	pfnAheadLibEx_waveOutGetDevCapsA = GetAddress("waveOutGetDevCapsA");
	pfnAheadLibEx_waveOutGetDevCapsW = GetAddress("waveOutGetDevCapsW");
	pfnAheadLibEx_waveOutGetErrorTextA = GetAddress("waveOutGetErrorTextA");
	pfnAheadLibEx_waveOutGetErrorTextW = GetAddress("waveOutGetErrorTextW");
	pfnAheadLibEx_waveOutGetID = GetAddress("waveOutGetID");
	pfnAheadLibEx_waveOutGetNumDevs = GetAddress("waveOutGetNumDevs");
	pfnAheadLibEx_waveOutGetPitch = GetAddress("waveOutGetPitch");
	pfnAheadLibEx_waveOutGetPlaybackRate = GetAddress("waveOutGetPlaybackRate");
	pfnAheadLibEx_waveOutGetPosition = GetAddress("waveOutGetPosition");
	pfnAheadLibEx_waveOutGetVolume = GetAddress("waveOutGetVolume");
	pfnAheadLibEx_waveOutMessage = GetAddress("waveOutMessage");
	pfnAheadLibEx_waveOutOpen = GetAddress("waveOutOpen");
	pfnAheadLibEx_waveOutPause = GetAddress("waveOutPause");
	pfnAheadLibEx_waveOutPrepareHeader = GetAddress("waveOutPrepareHeader");
	pfnAheadLibEx_waveOutReset = GetAddress("waveOutReset");
	pfnAheadLibEx_waveOutRestart = GetAddress("waveOutRestart");
	pfnAheadLibEx_waveOutSetPitch = GetAddress("waveOutSetPitch");
	pfnAheadLibEx_waveOutSetPlaybackRate = GetAddress("waveOutSetPlaybackRate");
	pfnAheadLibEx_waveOutSetVolume = GetAddress("waveOutSetVolume");
	pfnAheadLibEx_waveOutUnprepareHeader = GetAddress("waveOutUnprepareHeader");
	pfnAheadLibEx_waveOutWrite = GetAddress("waveOutWrite");
	return TRUE;
}	

static void (WINAPI* RealGetSystemTimeAsFileTime)(LPFILETIME lpSystemTimeAsFileTime) = GetSystemTimeAsFileTime;

// This fake function always return 2022-10-DD-HH:MM:SS
void WINAPI FakeGetSystemTimeAsFileTime(LPFILETIME lpSystemTimeAsFileTime)
{
	SYSTEMTIME s;
	RealGetSystemTimeAsFileTime(lpSystemTimeAsFileTime);
	FileTimeToSystemTime(lpSystemTimeAsFileTime, &s);
	s.wYear = 2022;
	s.wMonth = 10;
	s.wDayOfWeek = (s.wDay + 5) % 7; // 20221001 is Saturday
	SystemTimeToFileTime(&s, lpSystemTimeAsFileTime);
}


BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, PVOID pvReserved)
{
	int dwHookDone = false;
	if (dwReason == DLL_PROCESS_ATTACH)
	{
		DisableThreadLibraryCalls(hModule);
		if (Load() && Init())
		{
			TCHAR szAppName[MAX_PATH] = TEXT("WinFi.exe");
			TCHAR szCurName[MAX_PATH];
			GetModuleFileName(NULL, szCurName, MAX_PATH);
			PathStripPath(szCurName);
			if (StrCmpI(szCurName, szAppName) == 0)
			{
				DetourTransactionBegin();
				DetourUpdateThread(GetCurrentThread());
				DetourAttach(&(PVOID&)RealGetSystemTimeAsFileTime, FakeGetSystemTimeAsFileTime);
				DetourTransactionCommit();
				dwHookDone = 1;
			}
		}
	}
	else if (dwReason == DLL_PROCESS_DETACH)
	{
		if (dwHookDone)
		{
			DetourTransactionBegin();
			DetourUpdateThread(GetCurrentThread());
			DetourDetach(&(PVOID&)RealGetSystemTimeAsFileTime, FakeGetSystemTimeAsFileTime);
			DetourTransactionCommit();
		}
		Free();
	}
	return TRUE;
}

