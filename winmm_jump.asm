
;
; created by AheadLibEx
; Author:i1tao
; Blog:https://www.cnblogs.com/0xc5
; Github:https://github.com/i1tao/AheadLibEx
;

.DATA
EXTERN pfnAheadLibEx_Unnamed2:dq;
EXTERN pfnAheadLibEx_mciExecute:dq;
EXTERN pfnAheadLibEx_CloseDriver:dq;
EXTERN pfnAheadLibEx_DefDriverProc:dq;
EXTERN pfnAheadLibEx_DriverCallback:dq;
EXTERN pfnAheadLibEx_DrvGetModuleHandle:dq;
EXTERN pfnAheadLibEx_GetDriverModuleHandle:dq;
EXTERN pfnAheadLibEx_OpenDriver:dq;
EXTERN pfnAheadLibEx_PlaySound:dq;
EXTERN pfnAheadLibEx_PlaySoundA:dq;
EXTERN pfnAheadLibEx_PlaySoundW:dq;
EXTERN pfnAheadLibEx_SendDriverMessage:dq;
EXTERN pfnAheadLibEx_WOWAppExit:dq;
EXTERN pfnAheadLibEx_auxGetDevCapsA:dq;
EXTERN pfnAheadLibEx_auxGetDevCapsW:dq;
EXTERN pfnAheadLibEx_auxGetNumDevs:dq;
EXTERN pfnAheadLibEx_auxGetVolume:dq;
EXTERN pfnAheadLibEx_auxOutMessage:dq;
EXTERN pfnAheadLibEx_auxSetVolume:dq;
EXTERN pfnAheadLibEx_joyConfigChanged:dq;
EXTERN pfnAheadLibEx_joyGetDevCapsA:dq;
EXTERN pfnAheadLibEx_joyGetDevCapsW:dq;
EXTERN pfnAheadLibEx_joyGetNumDevs:dq;
EXTERN pfnAheadLibEx_joyGetPos:dq;
EXTERN pfnAheadLibEx_joyGetPosEx:dq;
EXTERN pfnAheadLibEx_joyGetThreshold:dq;
EXTERN pfnAheadLibEx_joyReleaseCapture:dq;
EXTERN pfnAheadLibEx_joySetCapture:dq;
EXTERN pfnAheadLibEx_joySetThreshold:dq;
EXTERN pfnAheadLibEx_mciDriverNotify:dq;
EXTERN pfnAheadLibEx_mciDriverYield:dq;
EXTERN pfnAheadLibEx_mciFreeCommandResource:dq;
EXTERN pfnAheadLibEx_mciGetCreatorTask:dq;
EXTERN pfnAheadLibEx_mciGetDeviceIDA:dq;
EXTERN pfnAheadLibEx_mciGetDeviceIDFromElementIDA:dq;
EXTERN pfnAheadLibEx_mciGetDeviceIDFromElementIDW:dq;
EXTERN pfnAheadLibEx_mciGetDeviceIDW:dq;
EXTERN pfnAheadLibEx_mciGetDriverData:dq;
EXTERN pfnAheadLibEx_mciGetErrorStringA:dq;
EXTERN pfnAheadLibEx_mciGetErrorStringW:dq;
EXTERN pfnAheadLibEx_mciGetYieldProc:dq;
EXTERN pfnAheadLibEx_mciLoadCommandResource:dq;
EXTERN pfnAheadLibEx_mciSendCommandA:dq;
EXTERN pfnAheadLibEx_mciSendCommandW:dq;
EXTERN pfnAheadLibEx_mciSendStringA:dq;
EXTERN pfnAheadLibEx_mciSendStringW:dq;
EXTERN pfnAheadLibEx_mciSetDriverData:dq;
EXTERN pfnAheadLibEx_mciSetYieldProc:dq;
EXTERN pfnAheadLibEx_midiConnect:dq;
EXTERN pfnAheadLibEx_midiDisconnect:dq;
EXTERN pfnAheadLibEx_midiInAddBuffer:dq;
EXTERN pfnAheadLibEx_midiInClose:dq;
EXTERN pfnAheadLibEx_midiInGetDevCapsA:dq;
EXTERN pfnAheadLibEx_midiInGetDevCapsW:dq;
EXTERN pfnAheadLibEx_midiInGetErrorTextA:dq;
EXTERN pfnAheadLibEx_midiInGetErrorTextW:dq;
EXTERN pfnAheadLibEx_midiInGetID:dq;
EXTERN pfnAheadLibEx_midiInGetNumDevs:dq;
EXTERN pfnAheadLibEx_midiInMessage:dq;
EXTERN pfnAheadLibEx_midiInOpen:dq;
EXTERN pfnAheadLibEx_midiInPrepareHeader:dq;
EXTERN pfnAheadLibEx_midiInReset:dq;
EXTERN pfnAheadLibEx_midiInStart:dq;
EXTERN pfnAheadLibEx_midiInStop:dq;
EXTERN pfnAheadLibEx_midiInUnprepareHeader:dq;
EXTERN pfnAheadLibEx_midiOutCacheDrumPatches:dq;
EXTERN pfnAheadLibEx_midiOutCachePatches:dq;
EXTERN pfnAheadLibEx_midiOutClose:dq;
EXTERN pfnAheadLibEx_midiOutGetDevCapsA:dq;
EXTERN pfnAheadLibEx_midiOutGetDevCapsW:dq;
EXTERN pfnAheadLibEx_midiOutGetErrorTextA:dq;
EXTERN pfnAheadLibEx_midiOutGetErrorTextW:dq;
EXTERN pfnAheadLibEx_midiOutGetID:dq;
EXTERN pfnAheadLibEx_midiOutGetNumDevs:dq;
EXTERN pfnAheadLibEx_midiOutGetVolume:dq;
EXTERN pfnAheadLibEx_midiOutLongMsg:dq;
EXTERN pfnAheadLibEx_midiOutMessage:dq;
EXTERN pfnAheadLibEx_midiOutOpen:dq;
EXTERN pfnAheadLibEx_midiOutPrepareHeader:dq;
EXTERN pfnAheadLibEx_midiOutReset:dq;
EXTERN pfnAheadLibEx_midiOutSetVolume:dq;
EXTERN pfnAheadLibEx_midiOutShortMsg:dq;
EXTERN pfnAheadLibEx_midiOutUnprepareHeader:dq;
EXTERN pfnAheadLibEx_midiStreamClose:dq;
EXTERN pfnAheadLibEx_midiStreamOpen:dq;
EXTERN pfnAheadLibEx_midiStreamOut:dq;
EXTERN pfnAheadLibEx_midiStreamPause:dq;
EXTERN pfnAheadLibEx_midiStreamPosition:dq;
EXTERN pfnAheadLibEx_midiStreamProperty:dq;
EXTERN pfnAheadLibEx_midiStreamRestart:dq;
EXTERN pfnAheadLibEx_midiStreamStop:dq;
EXTERN pfnAheadLibEx_mixerClose:dq;
EXTERN pfnAheadLibEx_mixerGetControlDetailsA:dq;
EXTERN pfnAheadLibEx_mixerGetControlDetailsW:dq;
EXTERN pfnAheadLibEx_mixerGetDevCapsA:dq;
EXTERN pfnAheadLibEx_mixerGetDevCapsW:dq;
EXTERN pfnAheadLibEx_mixerGetID:dq;
EXTERN pfnAheadLibEx_mixerGetLineControlsA:dq;
EXTERN pfnAheadLibEx_mixerGetLineControlsW:dq;
EXTERN pfnAheadLibEx_mixerGetLineInfoA:dq;
EXTERN pfnAheadLibEx_mixerGetLineInfoW:dq;
EXTERN pfnAheadLibEx_mixerGetNumDevs:dq;
EXTERN pfnAheadLibEx_mixerMessage:dq;
EXTERN pfnAheadLibEx_mixerOpen:dq;
EXTERN pfnAheadLibEx_mixerSetControlDetails:dq;
EXTERN pfnAheadLibEx_mmDrvInstall:dq;
EXTERN pfnAheadLibEx_mmGetCurrentTask:dq;
EXTERN pfnAheadLibEx_mmTaskBlock:dq;
EXTERN pfnAheadLibEx_mmTaskCreate:dq;
EXTERN pfnAheadLibEx_mmTaskSignal:dq;
EXTERN pfnAheadLibEx_mmTaskYield:dq;
EXTERN pfnAheadLibEx_mmioAdvance:dq;
EXTERN pfnAheadLibEx_mmioAscend:dq;
EXTERN pfnAheadLibEx_mmioClose:dq;
EXTERN pfnAheadLibEx_mmioCreateChunk:dq;
EXTERN pfnAheadLibEx_mmioDescend:dq;
EXTERN pfnAheadLibEx_mmioFlush:dq;
EXTERN pfnAheadLibEx_mmioGetInfo:dq;
EXTERN pfnAheadLibEx_mmioInstallIOProcA:dq;
EXTERN pfnAheadLibEx_mmioInstallIOProcW:dq;
EXTERN pfnAheadLibEx_mmioOpenA:dq;
EXTERN pfnAheadLibEx_mmioOpenW:dq;
EXTERN pfnAheadLibEx_mmioRead:dq;
EXTERN pfnAheadLibEx_mmioRenameA:dq;
EXTERN pfnAheadLibEx_mmioRenameW:dq;
EXTERN pfnAheadLibEx_mmioSeek:dq;
EXTERN pfnAheadLibEx_mmioSendMessage:dq;
EXTERN pfnAheadLibEx_mmioSetBuffer:dq;
EXTERN pfnAheadLibEx_mmioSetInfo:dq;
EXTERN pfnAheadLibEx_mmioStringToFOURCCA:dq;
EXTERN pfnAheadLibEx_mmioStringToFOURCCW:dq;
EXTERN pfnAheadLibEx_mmioWrite:dq;
EXTERN pfnAheadLibEx_mmsystemGetVersion:dq;
EXTERN pfnAheadLibEx_sndPlaySoundA:dq;
EXTERN pfnAheadLibEx_sndPlaySoundW:dq;
EXTERN pfnAheadLibEx_timeBeginPeriod:dq;
EXTERN pfnAheadLibEx_timeEndPeriod:dq;
EXTERN pfnAheadLibEx_timeGetDevCaps:dq;
EXTERN pfnAheadLibEx_timeGetSystemTime:dq;
EXTERN pfnAheadLibEx_timeGetTime:dq;
EXTERN pfnAheadLibEx_timeKillEvent:dq;
EXTERN pfnAheadLibEx_timeSetEvent:dq;
EXTERN pfnAheadLibEx_waveInAddBuffer:dq;
EXTERN pfnAheadLibEx_waveInClose:dq;
EXTERN pfnAheadLibEx_waveInGetDevCapsA:dq;
EXTERN pfnAheadLibEx_waveInGetDevCapsW:dq;
EXTERN pfnAheadLibEx_waveInGetErrorTextA:dq;
EXTERN pfnAheadLibEx_waveInGetErrorTextW:dq;
EXTERN pfnAheadLibEx_waveInGetID:dq;
EXTERN pfnAheadLibEx_waveInGetNumDevs:dq;
EXTERN pfnAheadLibEx_waveInGetPosition:dq;
EXTERN pfnAheadLibEx_waveInMessage:dq;
EXTERN pfnAheadLibEx_waveInOpen:dq;
EXTERN pfnAheadLibEx_waveInPrepareHeader:dq;
EXTERN pfnAheadLibEx_waveInReset:dq;
EXTERN pfnAheadLibEx_waveInStart:dq;
EXTERN pfnAheadLibEx_waveInStop:dq;
EXTERN pfnAheadLibEx_waveInUnprepareHeader:dq;
EXTERN pfnAheadLibEx_waveOutBreakLoop:dq;
EXTERN pfnAheadLibEx_waveOutClose:dq;
EXTERN pfnAheadLibEx_waveOutGetDevCapsA:dq;
EXTERN pfnAheadLibEx_waveOutGetDevCapsW:dq;
EXTERN pfnAheadLibEx_waveOutGetErrorTextA:dq;
EXTERN pfnAheadLibEx_waveOutGetErrorTextW:dq;
EXTERN pfnAheadLibEx_waveOutGetID:dq;
EXTERN pfnAheadLibEx_waveOutGetNumDevs:dq;
EXTERN pfnAheadLibEx_waveOutGetPitch:dq;
EXTERN pfnAheadLibEx_waveOutGetPlaybackRate:dq;
EXTERN pfnAheadLibEx_waveOutGetPosition:dq;
EXTERN pfnAheadLibEx_waveOutGetVolume:dq;
EXTERN pfnAheadLibEx_waveOutMessage:dq;
EXTERN pfnAheadLibEx_waveOutOpen:dq;
EXTERN pfnAheadLibEx_waveOutPause:dq;
EXTERN pfnAheadLibEx_waveOutPrepareHeader:dq;
EXTERN pfnAheadLibEx_waveOutReset:dq;
EXTERN pfnAheadLibEx_waveOutRestart:dq;
EXTERN pfnAheadLibEx_waveOutSetPitch:dq;
EXTERN pfnAheadLibEx_waveOutSetPlaybackRate:dq;
EXTERN pfnAheadLibEx_waveOutSetVolume:dq;
EXTERN pfnAheadLibEx_waveOutUnprepareHeader:dq;
EXTERN pfnAheadLibEx_waveOutWrite:dq;

.CODE
AheadLibEx_Unnamed2 PROC
	jmp pfnAheadLibEx_Unnamed2
AheadLibEx_Unnamed2 ENDP

AheadLibEx_mciExecute PROC
	jmp pfnAheadLibEx_mciExecute
AheadLibEx_mciExecute ENDP

AheadLibEx_CloseDriver PROC
	jmp pfnAheadLibEx_CloseDriver
AheadLibEx_CloseDriver ENDP

AheadLibEx_DefDriverProc PROC
	jmp pfnAheadLibEx_DefDriverProc
AheadLibEx_DefDriverProc ENDP

AheadLibEx_DriverCallback PROC
	jmp pfnAheadLibEx_DriverCallback
AheadLibEx_DriverCallback ENDP

AheadLibEx_DrvGetModuleHandle PROC
	jmp pfnAheadLibEx_DrvGetModuleHandle
AheadLibEx_DrvGetModuleHandle ENDP

AheadLibEx_GetDriverModuleHandle PROC
	jmp pfnAheadLibEx_GetDriverModuleHandle
AheadLibEx_GetDriverModuleHandle ENDP

AheadLibEx_OpenDriver PROC
	jmp pfnAheadLibEx_OpenDriver
AheadLibEx_OpenDriver ENDP

AheadLibEx_PlaySound PROC
	jmp pfnAheadLibEx_PlaySound
AheadLibEx_PlaySound ENDP

AheadLibEx_PlaySoundA PROC
	jmp pfnAheadLibEx_PlaySoundA
AheadLibEx_PlaySoundA ENDP

AheadLibEx_PlaySoundW PROC
	jmp pfnAheadLibEx_PlaySoundW
AheadLibEx_PlaySoundW ENDP

AheadLibEx_SendDriverMessage PROC
	jmp pfnAheadLibEx_SendDriverMessage
AheadLibEx_SendDriverMessage ENDP

AheadLibEx_WOWAppExit PROC
	jmp pfnAheadLibEx_WOWAppExit
AheadLibEx_WOWAppExit ENDP

AheadLibEx_auxGetDevCapsA PROC
	jmp pfnAheadLibEx_auxGetDevCapsA
AheadLibEx_auxGetDevCapsA ENDP

AheadLibEx_auxGetDevCapsW PROC
	jmp pfnAheadLibEx_auxGetDevCapsW
AheadLibEx_auxGetDevCapsW ENDP

AheadLibEx_auxGetNumDevs PROC
	jmp pfnAheadLibEx_auxGetNumDevs
AheadLibEx_auxGetNumDevs ENDP

AheadLibEx_auxGetVolume PROC
	jmp pfnAheadLibEx_auxGetVolume
AheadLibEx_auxGetVolume ENDP

AheadLibEx_auxOutMessage PROC
	jmp pfnAheadLibEx_auxOutMessage
AheadLibEx_auxOutMessage ENDP

AheadLibEx_auxSetVolume PROC
	jmp pfnAheadLibEx_auxSetVolume
AheadLibEx_auxSetVolume ENDP

AheadLibEx_joyConfigChanged PROC
	jmp pfnAheadLibEx_joyConfigChanged
AheadLibEx_joyConfigChanged ENDP

AheadLibEx_joyGetDevCapsA PROC
	jmp pfnAheadLibEx_joyGetDevCapsA
AheadLibEx_joyGetDevCapsA ENDP

AheadLibEx_joyGetDevCapsW PROC
	jmp pfnAheadLibEx_joyGetDevCapsW
AheadLibEx_joyGetDevCapsW ENDP

AheadLibEx_joyGetNumDevs PROC
	jmp pfnAheadLibEx_joyGetNumDevs
AheadLibEx_joyGetNumDevs ENDP

AheadLibEx_joyGetPos PROC
	jmp pfnAheadLibEx_joyGetPos
AheadLibEx_joyGetPos ENDP

AheadLibEx_joyGetPosEx PROC
	jmp pfnAheadLibEx_joyGetPosEx
AheadLibEx_joyGetPosEx ENDP

AheadLibEx_joyGetThreshold PROC
	jmp pfnAheadLibEx_joyGetThreshold
AheadLibEx_joyGetThreshold ENDP

AheadLibEx_joyReleaseCapture PROC
	jmp pfnAheadLibEx_joyReleaseCapture
AheadLibEx_joyReleaseCapture ENDP

AheadLibEx_joySetCapture PROC
	jmp pfnAheadLibEx_joySetCapture
AheadLibEx_joySetCapture ENDP

AheadLibEx_joySetThreshold PROC
	jmp pfnAheadLibEx_joySetThreshold
AheadLibEx_joySetThreshold ENDP

AheadLibEx_mciDriverNotify PROC
	jmp pfnAheadLibEx_mciDriverNotify
AheadLibEx_mciDriverNotify ENDP

AheadLibEx_mciDriverYield PROC
	jmp pfnAheadLibEx_mciDriverYield
AheadLibEx_mciDriverYield ENDP

AheadLibEx_mciFreeCommandResource PROC
	jmp pfnAheadLibEx_mciFreeCommandResource
AheadLibEx_mciFreeCommandResource ENDP

AheadLibEx_mciGetCreatorTask PROC
	jmp pfnAheadLibEx_mciGetCreatorTask
AheadLibEx_mciGetCreatorTask ENDP

AheadLibEx_mciGetDeviceIDA PROC
	jmp pfnAheadLibEx_mciGetDeviceIDA
AheadLibEx_mciGetDeviceIDA ENDP

AheadLibEx_mciGetDeviceIDFromElementIDA PROC
	jmp pfnAheadLibEx_mciGetDeviceIDFromElementIDA
AheadLibEx_mciGetDeviceIDFromElementIDA ENDP

AheadLibEx_mciGetDeviceIDFromElementIDW PROC
	jmp pfnAheadLibEx_mciGetDeviceIDFromElementIDW
AheadLibEx_mciGetDeviceIDFromElementIDW ENDP

AheadLibEx_mciGetDeviceIDW PROC
	jmp pfnAheadLibEx_mciGetDeviceIDW
AheadLibEx_mciGetDeviceIDW ENDP

AheadLibEx_mciGetDriverData PROC
	jmp pfnAheadLibEx_mciGetDriverData
AheadLibEx_mciGetDriverData ENDP

AheadLibEx_mciGetErrorStringA PROC
	jmp pfnAheadLibEx_mciGetErrorStringA
AheadLibEx_mciGetErrorStringA ENDP

AheadLibEx_mciGetErrorStringW PROC
	jmp pfnAheadLibEx_mciGetErrorStringW
AheadLibEx_mciGetErrorStringW ENDP

AheadLibEx_mciGetYieldProc PROC
	jmp pfnAheadLibEx_mciGetYieldProc
AheadLibEx_mciGetYieldProc ENDP

AheadLibEx_mciLoadCommandResource PROC
	jmp pfnAheadLibEx_mciLoadCommandResource
AheadLibEx_mciLoadCommandResource ENDP

AheadLibEx_mciSendCommandA PROC
	jmp pfnAheadLibEx_mciSendCommandA
AheadLibEx_mciSendCommandA ENDP

AheadLibEx_mciSendCommandW PROC
	jmp pfnAheadLibEx_mciSendCommandW
AheadLibEx_mciSendCommandW ENDP

AheadLibEx_mciSendStringA PROC
	jmp pfnAheadLibEx_mciSendStringA
AheadLibEx_mciSendStringA ENDP

AheadLibEx_mciSendStringW PROC
	jmp pfnAheadLibEx_mciSendStringW
AheadLibEx_mciSendStringW ENDP

AheadLibEx_mciSetDriverData PROC
	jmp pfnAheadLibEx_mciSetDriverData
AheadLibEx_mciSetDriverData ENDP

AheadLibEx_mciSetYieldProc PROC
	jmp pfnAheadLibEx_mciSetYieldProc
AheadLibEx_mciSetYieldProc ENDP

AheadLibEx_midiConnect PROC
	jmp pfnAheadLibEx_midiConnect
AheadLibEx_midiConnect ENDP

AheadLibEx_midiDisconnect PROC
	jmp pfnAheadLibEx_midiDisconnect
AheadLibEx_midiDisconnect ENDP

AheadLibEx_midiInAddBuffer PROC
	jmp pfnAheadLibEx_midiInAddBuffer
AheadLibEx_midiInAddBuffer ENDP

AheadLibEx_midiInClose PROC
	jmp pfnAheadLibEx_midiInClose
AheadLibEx_midiInClose ENDP

AheadLibEx_midiInGetDevCapsA PROC
	jmp pfnAheadLibEx_midiInGetDevCapsA
AheadLibEx_midiInGetDevCapsA ENDP

AheadLibEx_midiInGetDevCapsW PROC
	jmp pfnAheadLibEx_midiInGetDevCapsW
AheadLibEx_midiInGetDevCapsW ENDP

AheadLibEx_midiInGetErrorTextA PROC
	jmp pfnAheadLibEx_midiInGetErrorTextA
AheadLibEx_midiInGetErrorTextA ENDP

AheadLibEx_midiInGetErrorTextW PROC
	jmp pfnAheadLibEx_midiInGetErrorTextW
AheadLibEx_midiInGetErrorTextW ENDP

AheadLibEx_midiInGetID PROC
	jmp pfnAheadLibEx_midiInGetID
AheadLibEx_midiInGetID ENDP

AheadLibEx_midiInGetNumDevs PROC
	jmp pfnAheadLibEx_midiInGetNumDevs
AheadLibEx_midiInGetNumDevs ENDP

AheadLibEx_midiInMessage PROC
	jmp pfnAheadLibEx_midiInMessage
AheadLibEx_midiInMessage ENDP

AheadLibEx_midiInOpen PROC
	jmp pfnAheadLibEx_midiInOpen
AheadLibEx_midiInOpen ENDP

AheadLibEx_midiInPrepareHeader PROC
	jmp pfnAheadLibEx_midiInPrepareHeader
AheadLibEx_midiInPrepareHeader ENDP

AheadLibEx_midiInReset PROC
	jmp pfnAheadLibEx_midiInReset
AheadLibEx_midiInReset ENDP

AheadLibEx_midiInStart PROC
	jmp pfnAheadLibEx_midiInStart
AheadLibEx_midiInStart ENDP

AheadLibEx_midiInStop PROC
	jmp pfnAheadLibEx_midiInStop
AheadLibEx_midiInStop ENDP

AheadLibEx_midiInUnprepareHeader PROC
	jmp pfnAheadLibEx_midiInUnprepareHeader
AheadLibEx_midiInUnprepareHeader ENDP

AheadLibEx_midiOutCacheDrumPatches PROC
	jmp pfnAheadLibEx_midiOutCacheDrumPatches
AheadLibEx_midiOutCacheDrumPatches ENDP

AheadLibEx_midiOutCachePatches PROC
	jmp pfnAheadLibEx_midiOutCachePatches
AheadLibEx_midiOutCachePatches ENDP

AheadLibEx_midiOutClose PROC
	jmp pfnAheadLibEx_midiOutClose
AheadLibEx_midiOutClose ENDP

AheadLibEx_midiOutGetDevCapsA PROC
	jmp pfnAheadLibEx_midiOutGetDevCapsA
AheadLibEx_midiOutGetDevCapsA ENDP

AheadLibEx_midiOutGetDevCapsW PROC
	jmp pfnAheadLibEx_midiOutGetDevCapsW
AheadLibEx_midiOutGetDevCapsW ENDP

AheadLibEx_midiOutGetErrorTextA PROC
	jmp pfnAheadLibEx_midiOutGetErrorTextA
AheadLibEx_midiOutGetErrorTextA ENDP

AheadLibEx_midiOutGetErrorTextW PROC
	jmp pfnAheadLibEx_midiOutGetErrorTextW
AheadLibEx_midiOutGetErrorTextW ENDP

AheadLibEx_midiOutGetID PROC
	jmp pfnAheadLibEx_midiOutGetID
AheadLibEx_midiOutGetID ENDP

AheadLibEx_midiOutGetNumDevs PROC
	jmp pfnAheadLibEx_midiOutGetNumDevs
AheadLibEx_midiOutGetNumDevs ENDP

AheadLibEx_midiOutGetVolume PROC
	jmp pfnAheadLibEx_midiOutGetVolume
AheadLibEx_midiOutGetVolume ENDP

AheadLibEx_midiOutLongMsg PROC
	jmp pfnAheadLibEx_midiOutLongMsg
AheadLibEx_midiOutLongMsg ENDP

AheadLibEx_midiOutMessage PROC
	jmp pfnAheadLibEx_midiOutMessage
AheadLibEx_midiOutMessage ENDP

AheadLibEx_midiOutOpen PROC
	jmp pfnAheadLibEx_midiOutOpen
AheadLibEx_midiOutOpen ENDP

AheadLibEx_midiOutPrepareHeader PROC
	jmp pfnAheadLibEx_midiOutPrepareHeader
AheadLibEx_midiOutPrepareHeader ENDP

AheadLibEx_midiOutReset PROC
	jmp pfnAheadLibEx_midiOutReset
AheadLibEx_midiOutReset ENDP

AheadLibEx_midiOutSetVolume PROC
	jmp pfnAheadLibEx_midiOutSetVolume
AheadLibEx_midiOutSetVolume ENDP

AheadLibEx_midiOutShortMsg PROC
	jmp pfnAheadLibEx_midiOutShortMsg
AheadLibEx_midiOutShortMsg ENDP

AheadLibEx_midiOutUnprepareHeader PROC
	jmp pfnAheadLibEx_midiOutUnprepareHeader
AheadLibEx_midiOutUnprepareHeader ENDP

AheadLibEx_midiStreamClose PROC
	jmp pfnAheadLibEx_midiStreamClose
AheadLibEx_midiStreamClose ENDP

AheadLibEx_midiStreamOpen PROC
	jmp pfnAheadLibEx_midiStreamOpen
AheadLibEx_midiStreamOpen ENDP

AheadLibEx_midiStreamOut PROC
	jmp pfnAheadLibEx_midiStreamOut
AheadLibEx_midiStreamOut ENDP

AheadLibEx_midiStreamPause PROC
	jmp pfnAheadLibEx_midiStreamPause
AheadLibEx_midiStreamPause ENDP

AheadLibEx_midiStreamPosition PROC
	jmp pfnAheadLibEx_midiStreamPosition
AheadLibEx_midiStreamPosition ENDP

AheadLibEx_midiStreamProperty PROC
	jmp pfnAheadLibEx_midiStreamProperty
AheadLibEx_midiStreamProperty ENDP

AheadLibEx_midiStreamRestart PROC
	jmp pfnAheadLibEx_midiStreamRestart
AheadLibEx_midiStreamRestart ENDP

AheadLibEx_midiStreamStop PROC
	jmp pfnAheadLibEx_midiStreamStop
AheadLibEx_midiStreamStop ENDP

AheadLibEx_mixerClose PROC
	jmp pfnAheadLibEx_mixerClose
AheadLibEx_mixerClose ENDP

AheadLibEx_mixerGetControlDetailsA PROC
	jmp pfnAheadLibEx_mixerGetControlDetailsA
AheadLibEx_mixerGetControlDetailsA ENDP

AheadLibEx_mixerGetControlDetailsW PROC
	jmp pfnAheadLibEx_mixerGetControlDetailsW
AheadLibEx_mixerGetControlDetailsW ENDP

AheadLibEx_mixerGetDevCapsA PROC
	jmp pfnAheadLibEx_mixerGetDevCapsA
AheadLibEx_mixerGetDevCapsA ENDP

AheadLibEx_mixerGetDevCapsW PROC
	jmp pfnAheadLibEx_mixerGetDevCapsW
AheadLibEx_mixerGetDevCapsW ENDP

AheadLibEx_mixerGetID PROC
	jmp pfnAheadLibEx_mixerGetID
AheadLibEx_mixerGetID ENDP

AheadLibEx_mixerGetLineControlsA PROC
	jmp pfnAheadLibEx_mixerGetLineControlsA
AheadLibEx_mixerGetLineControlsA ENDP

AheadLibEx_mixerGetLineControlsW PROC
	jmp pfnAheadLibEx_mixerGetLineControlsW
AheadLibEx_mixerGetLineControlsW ENDP

AheadLibEx_mixerGetLineInfoA PROC
	jmp pfnAheadLibEx_mixerGetLineInfoA
AheadLibEx_mixerGetLineInfoA ENDP

AheadLibEx_mixerGetLineInfoW PROC
	jmp pfnAheadLibEx_mixerGetLineInfoW
AheadLibEx_mixerGetLineInfoW ENDP

AheadLibEx_mixerGetNumDevs PROC
	jmp pfnAheadLibEx_mixerGetNumDevs
AheadLibEx_mixerGetNumDevs ENDP

AheadLibEx_mixerMessage PROC
	jmp pfnAheadLibEx_mixerMessage
AheadLibEx_mixerMessage ENDP

AheadLibEx_mixerOpen PROC
	jmp pfnAheadLibEx_mixerOpen
AheadLibEx_mixerOpen ENDP

AheadLibEx_mixerSetControlDetails PROC
	jmp pfnAheadLibEx_mixerSetControlDetails
AheadLibEx_mixerSetControlDetails ENDP

AheadLibEx_mmDrvInstall PROC
	jmp pfnAheadLibEx_mmDrvInstall
AheadLibEx_mmDrvInstall ENDP

AheadLibEx_mmGetCurrentTask PROC
	jmp pfnAheadLibEx_mmGetCurrentTask
AheadLibEx_mmGetCurrentTask ENDP

AheadLibEx_mmTaskBlock PROC
	jmp pfnAheadLibEx_mmTaskBlock
AheadLibEx_mmTaskBlock ENDP

AheadLibEx_mmTaskCreate PROC
	jmp pfnAheadLibEx_mmTaskCreate
AheadLibEx_mmTaskCreate ENDP

AheadLibEx_mmTaskSignal PROC
	jmp pfnAheadLibEx_mmTaskSignal
AheadLibEx_mmTaskSignal ENDP

AheadLibEx_mmTaskYield PROC
	jmp pfnAheadLibEx_mmTaskYield
AheadLibEx_mmTaskYield ENDP

AheadLibEx_mmioAdvance PROC
	jmp pfnAheadLibEx_mmioAdvance
AheadLibEx_mmioAdvance ENDP

AheadLibEx_mmioAscend PROC
	jmp pfnAheadLibEx_mmioAscend
AheadLibEx_mmioAscend ENDP

AheadLibEx_mmioClose PROC
	jmp pfnAheadLibEx_mmioClose
AheadLibEx_mmioClose ENDP

AheadLibEx_mmioCreateChunk PROC
	jmp pfnAheadLibEx_mmioCreateChunk
AheadLibEx_mmioCreateChunk ENDP

AheadLibEx_mmioDescend PROC
	jmp pfnAheadLibEx_mmioDescend
AheadLibEx_mmioDescend ENDP

AheadLibEx_mmioFlush PROC
	jmp pfnAheadLibEx_mmioFlush
AheadLibEx_mmioFlush ENDP

AheadLibEx_mmioGetInfo PROC
	jmp pfnAheadLibEx_mmioGetInfo
AheadLibEx_mmioGetInfo ENDP

AheadLibEx_mmioInstallIOProcA PROC
	jmp pfnAheadLibEx_mmioInstallIOProcA
AheadLibEx_mmioInstallIOProcA ENDP

AheadLibEx_mmioInstallIOProcW PROC
	jmp pfnAheadLibEx_mmioInstallIOProcW
AheadLibEx_mmioInstallIOProcW ENDP

AheadLibEx_mmioOpenA PROC
	jmp pfnAheadLibEx_mmioOpenA
AheadLibEx_mmioOpenA ENDP

AheadLibEx_mmioOpenW PROC
	jmp pfnAheadLibEx_mmioOpenW
AheadLibEx_mmioOpenW ENDP

AheadLibEx_mmioRead PROC
	jmp pfnAheadLibEx_mmioRead
AheadLibEx_mmioRead ENDP

AheadLibEx_mmioRenameA PROC
	jmp pfnAheadLibEx_mmioRenameA
AheadLibEx_mmioRenameA ENDP

AheadLibEx_mmioRenameW PROC
	jmp pfnAheadLibEx_mmioRenameW
AheadLibEx_mmioRenameW ENDP

AheadLibEx_mmioSeek PROC
	jmp pfnAheadLibEx_mmioSeek
AheadLibEx_mmioSeek ENDP

AheadLibEx_mmioSendMessage PROC
	jmp pfnAheadLibEx_mmioSendMessage
AheadLibEx_mmioSendMessage ENDP

AheadLibEx_mmioSetBuffer PROC
	jmp pfnAheadLibEx_mmioSetBuffer
AheadLibEx_mmioSetBuffer ENDP

AheadLibEx_mmioSetInfo PROC
	jmp pfnAheadLibEx_mmioSetInfo
AheadLibEx_mmioSetInfo ENDP

AheadLibEx_mmioStringToFOURCCA PROC
	jmp pfnAheadLibEx_mmioStringToFOURCCA
AheadLibEx_mmioStringToFOURCCA ENDP

AheadLibEx_mmioStringToFOURCCW PROC
	jmp pfnAheadLibEx_mmioStringToFOURCCW
AheadLibEx_mmioStringToFOURCCW ENDP

AheadLibEx_mmioWrite PROC
	jmp pfnAheadLibEx_mmioWrite
AheadLibEx_mmioWrite ENDP

AheadLibEx_mmsystemGetVersion PROC
	jmp pfnAheadLibEx_mmsystemGetVersion
AheadLibEx_mmsystemGetVersion ENDP

AheadLibEx_sndPlaySoundA PROC
	jmp pfnAheadLibEx_sndPlaySoundA
AheadLibEx_sndPlaySoundA ENDP

AheadLibEx_sndPlaySoundW PROC
	jmp pfnAheadLibEx_sndPlaySoundW
AheadLibEx_sndPlaySoundW ENDP

AheadLibEx_timeBeginPeriod PROC
	jmp pfnAheadLibEx_timeBeginPeriod
AheadLibEx_timeBeginPeriod ENDP

AheadLibEx_timeEndPeriod PROC
	jmp pfnAheadLibEx_timeEndPeriod
AheadLibEx_timeEndPeriod ENDP

AheadLibEx_timeGetDevCaps PROC
	jmp pfnAheadLibEx_timeGetDevCaps
AheadLibEx_timeGetDevCaps ENDP

AheadLibEx_timeGetSystemTime PROC
	jmp pfnAheadLibEx_timeGetSystemTime
AheadLibEx_timeGetSystemTime ENDP

AheadLibEx_timeGetTime PROC
	jmp pfnAheadLibEx_timeGetTime
AheadLibEx_timeGetTime ENDP

AheadLibEx_timeKillEvent PROC
	jmp pfnAheadLibEx_timeKillEvent
AheadLibEx_timeKillEvent ENDP

AheadLibEx_timeSetEvent PROC
	jmp pfnAheadLibEx_timeSetEvent
AheadLibEx_timeSetEvent ENDP

AheadLibEx_waveInAddBuffer PROC
	jmp pfnAheadLibEx_waveInAddBuffer
AheadLibEx_waveInAddBuffer ENDP

AheadLibEx_waveInClose PROC
	jmp pfnAheadLibEx_waveInClose
AheadLibEx_waveInClose ENDP

AheadLibEx_waveInGetDevCapsA PROC
	jmp pfnAheadLibEx_waveInGetDevCapsA
AheadLibEx_waveInGetDevCapsA ENDP

AheadLibEx_waveInGetDevCapsW PROC
	jmp pfnAheadLibEx_waveInGetDevCapsW
AheadLibEx_waveInGetDevCapsW ENDP

AheadLibEx_waveInGetErrorTextA PROC
	jmp pfnAheadLibEx_waveInGetErrorTextA
AheadLibEx_waveInGetErrorTextA ENDP

AheadLibEx_waveInGetErrorTextW PROC
	jmp pfnAheadLibEx_waveInGetErrorTextW
AheadLibEx_waveInGetErrorTextW ENDP

AheadLibEx_waveInGetID PROC
	jmp pfnAheadLibEx_waveInGetID
AheadLibEx_waveInGetID ENDP

AheadLibEx_waveInGetNumDevs PROC
	jmp pfnAheadLibEx_waveInGetNumDevs
AheadLibEx_waveInGetNumDevs ENDP

AheadLibEx_waveInGetPosition PROC
	jmp pfnAheadLibEx_waveInGetPosition
AheadLibEx_waveInGetPosition ENDP

AheadLibEx_waveInMessage PROC
	jmp pfnAheadLibEx_waveInMessage
AheadLibEx_waveInMessage ENDP

AheadLibEx_waveInOpen PROC
	jmp pfnAheadLibEx_waveInOpen
AheadLibEx_waveInOpen ENDP

AheadLibEx_waveInPrepareHeader PROC
	jmp pfnAheadLibEx_waveInPrepareHeader
AheadLibEx_waveInPrepareHeader ENDP

AheadLibEx_waveInReset PROC
	jmp pfnAheadLibEx_waveInReset
AheadLibEx_waveInReset ENDP

AheadLibEx_waveInStart PROC
	jmp pfnAheadLibEx_waveInStart
AheadLibEx_waveInStart ENDP

AheadLibEx_waveInStop PROC
	jmp pfnAheadLibEx_waveInStop
AheadLibEx_waveInStop ENDP

AheadLibEx_waveInUnprepareHeader PROC
	jmp pfnAheadLibEx_waveInUnprepareHeader
AheadLibEx_waveInUnprepareHeader ENDP

AheadLibEx_waveOutBreakLoop PROC
	jmp pfnAheadLibEx_waveOutBreakLoop
AheadLibEx_waveOutBreakLoop ENDP

AheadLibEx_waveOutClose PROC
	jmp pfnAheadLibEx_waveOutClose
AheadLibEx_waveOutClose ENDP

AheadLibEx_waveOutGetDevCapsA PROC
	jmp pfnAheadLibEx_waveOutGetDevCapsA
AheadLibEx_waveOutGetDevCapsA ENDP

AheadLibEx_waveOutGetDevCapsW PROC
	jmp pfnAheadLibEx_waveOutGetDevCapsW
AheadLibEx_waveOutGetDevCapsW ENDP

AheadLibEx_waveOutGetErrorTextA PROC
	jmp pfnAheadLibEx_waveOutGetErrorTextA
AheadLibEx_waveOutGetErrorTextA ENDP

AheadLibEx_waveOutGetErrorTextW PROC
	jmp pfnAheadLibEx_waveOutGetErrorTextW
AheadLibEx_waveOutGetErrorTextW ENDP

AheadLibEx_waveOutGetID PROC
	jmp pfnAheadLibEx_waveOutGetID
AheadLibEx_waveOutGetID ENDP

AheadLibEx_waveOutGetNumDevs PROC
	jmp pfnAheadLibEx_waveOutGetNumDevs
AheadLibEx_waveOutGetNumDevs ENDP

AheadLibEx_waveOutGetPitch PROC
	jmp pfnAheadLibEx_waveOutGetPitch
AheadLibEx_waveOutGetPitch ENDP

AheadLibEx_waveOutGetPlaybackRate PROC
	jmp pfnAheadLibEx_waveOutGetPlaybackRate
AheadLibEx_waveOutGetPlaybackRate ENDP

AheadLibEx_waveOutGetPosition PROC
	jmp pfnAheadLibEx_waveOutGetPosition
AheadLibEx_waveOutGetPosition ENDP

AheadLibEx_waveOutGetVolume PROC
	jmp pfnAheadLibEx_waveOutGetVolume
AheadLibEx_waveOutGetVolume ENDP

AheadLibEx_waveOutMessage PROC
	jmp pfnAheadLibEx_waveOutMessage
AheadLibEx_waveOutMessage ENDP

AheadLibEx_waveOutOpen PROC
	jmp pfnAheadLibEx_waveOutOpen
AheadLibEx_waveOutOpen ENDP

AheadLibEx_waveOutPause PROC
	jmp pfnAheadLibEx_waveOutPause
AheadLibEx_waveOutPause ENDP

AheadLibEx_waveOutPrepareHeader PROC
	jmp pfnAheadLibEx_waveOutPrepareHeader
AheadLibEx_waveOutPrepareHeader ENDP

AheadLibEx_waveOutReset PROC
	jmp pfnAheadLibEx_waveOutReset
AheadLibEx_waveOutReset ENDP

AheadLibEx_waveOutRestart PROC
	jmp pfnAheadLibEx_waveOutRestart
AheadLibEx_waveOutRestart ENDP

AheadLibEx_waveOutSetPitch PROC
	jmp pfnAheadLibEx_waveOutSetPitch
AheadLibEx_waveOutSetPitch ENDP

AheadLibEx_waveOutSetPlaybackRate PROC
	jmp pfnAheadLibEx_waveOutSetPlaybackRate
AheadLibEx_waveOutSetPlaybackRate ENDP

AheadLibEx_waveOutSetVolume PROC
	jmp pfnAheadLibEx_waveOutSetVolume
AheadLibEx_waveOutSetVolume ENDP

AheadLibEx_waveOutUnprepareHeader PROC
	jmp pfnAheadLibEx_waveOutUnprepareHeader
AheadLibEx_waveOutUnprepareHeader ENDP

AheadLibEx_waveOutWrite PROC
	jmp pfnAheadLibEx_waveOutWrite
AheadLibEx_waveOutWrite ENDP


END