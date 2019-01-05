#if defined(GO) && defined(GOM) && defined(GO2) && defined(DATA)

// _fini
// _init
//GOM(SDL_AddTimer, pFEupp)
GO(SDL_AllocRW, pFv)    // no need to use a my_ version here
GO(SDL_CDClose, vFp)
GO(SDL_CDEject, iFp)
GO(SDL_CDName, pFi)
GO(SDL_CDNumDrives, iFv)
GO(SDL_CDOpen, pFi)
GO(SDL_CDPause, iFp)
GO(SDL_CDPlay, iFpii)
GO(SDL_CDPlayTracks, iFpiiii)
GO(SDL_CDResume, iFp)
GO(SDL_CDStatus, iFp)
GO(SDL_CDStop, iFp)
GO(SDL_ClearError, vFv)
GO(SDL_CondBroadcast, iFp)
GO(SDL_CondSignal, iFp)
GO(SDL_CondWait, iFpp)
GO(SDL_CondWaitTimeout, iFppu)
GO(SDL_ConvertSurface, pFppu)
GO(SDL_CreateCond, pFv)
GO(SDL_CreateCursor, pFppiiii)
GO(SDL_CreateMutex, pFv)
GO(SDL_CreateRGBSurface, pFuiiiuuuu)
GO(SDL_CreateRGBSurfaceFrom, pFpiiiiuuuu)
GO(SDL_CreateSemaphore, pFu)
//GOM(SDL_CreateThread, pFEpp)
GO(SDL_CreateYUVOverlay, pFiiup)
GO(SDL_Delay, vFu)
GO(SDL_DestroyCond, vFp)
GO(SDL_DestroyMutex, vFp)
GO(SDL_DestroySemaphore, vFp)
GO(SDL_DisplayFormat, pFp)
GO(SDL_DisplayFormatAlpha, pFp)
GO(SDL_DisplayYUVOverlay, iFpp)
GO(SDL_EnableKeyRepeat, iFii)
GO(SDL_EnableUNICODE, iFi)
GO(SDL_Error, vFi)
GO(SDL_EventState, uFui)
GO(SDL_FillRect, iFppu)
GO(SDL_Flip, iFp)
GO(SDL_FreeCursor, vFp)
GOM(SDL_FreeRW, vFEp)
GO(SDL_FreeSurface, vFp)
GO(SDL_FreeYUVOverlay, vFp)
GO(SDL_GL_GetAttribute, iFup)
GO(SDL_GL_GetProcAddress, pFp)
GO(SDL_GL_LoadLibrary, iFp)
GO(SDL_GL_Lock, vFv)
GO(SDL_GL_SetAttribute, iFui)
GO(SDL_GL_SwapBuffers, vFv)
GO(SDL_GL_Unlock, vFv)
GO(SDL_GL_UpdateRects, vFip)
GO(SDL_GetAppState, uFv)
GO(SDL_GetClipRect, vFpp)
GO(SDL_GetCursor, pFv)
GO(SDL_GetError, pFv)
//GOM(SDL_GetEventFilter, pFEv)
GO(SDL_GetGammaRamp, iFppp)
GO(SDL_GetKeyName, pFi)
GO(SDL_GetKeyRepeat, vFpp)
GO(SDL_GetKeyState, pFp)
GO(SDL_GetModState, iFv)
GO(SDL_GetMouseState, uFpp)
GO(SDL_GetRGB, vFupppp)
GO(SDL_GetRGBA, vFuppppp)
GO(SDL_GetRelativeMouseState, uFpp)
//GOM(SDL_GetThreadID, uFEp)
GO(SDL_GetTicks, uFv)
GO(SDL_GetVideoInfo, pFv)
GO(SDL_GetVideoSurface, pFv)
GO(SDL_GetWMInfo, iFp)
GOM(SDL_Has3DNow, iFv)
GOM(SDL_Has3DNowExt, iFv)
GOM(SDL_HasAltiVec, iFv)
GOM(SDL_HasMMX, iFv)
GOM(SDL_HasMMXExt, iFv)
GOM(SDL_HasRDTSC, iFv)
GOM(SDL_HasSSE, iFv)
GOM(SDL_HasSSE2, iFv)
GO(SDL_Init, iFu)
GO(SDL_InitQuickDraw, vFp)
GO(SDL_InitSubSystem, iFu)
GO(SDL_JoystickClose, vFp)
GO(SDL_JoystickEventState, iFi)
GO(SDL_JoystickGetAxis, iFpi)
GO(SDL_JoystickGetBall, iFpipp)
GO(SDL_JoystickGetButton, uFpi)
GO(SDL_JoystickGetHat, uFpi)
GO(SDL_JoystickIndex, iFp)
GO(SDL_JoystickName, pFi)
GO(SDL_JoystickNumAxes, iFp)
GO(SDL_JoystickNumBalls, iFp)
GO(SDL_JoystickNumButtons, iFp)
GO(SDL_JoystickNumHats, iFp)
GO(SDL_JoystickOpen, pFi)
GO(SDL_JoystickOpened, iFi)
GO(SDL_JoystickUpdate, vFv)
//GOM(SDL_KillThread, vFEp)
GO(SDL_Linked_Version, pFv)
GO(SDL_ListModes, pFpu)
GOM(SDL_LoadBMP_RW, pFEpi)
GO(SDL_LoadFunction, pFpp)
GO(SDL_LoadObject, pFp)
GO(SDL_LockSurface, iFp)
GO(SDL_LockYUVOverlay, iFp)
GO(SDL_LowerBlit, iFpppp)
GO(SDL_MapRGB, uFpccc)
GO(SDL_MapRGBA, uFpcccc)
GO(SDL_NumJoysticks, iFv)
GO(SDL_PeepEvents, iFpiiu)
GO(SDL_PollEvent, iFp)
GO(SDL_PumpEvents, vFv)
GO(SDL_PushEvent, iFp)
GO(SDL_Quit, vFv)
GO(SDL_QuitSubSystem, vFu)
GOM(SDL_RWFromConstMem, pFEpi)
GOM(SDL_RWFromFP, pFEpi)
GOM(SDL_RWFromFile, pFEpp)
GOM(SDL_RWFromMem, pFEpi)
GOM(SDL_ReadBE16, uFEp)
GOM(SDL_ReadBE32, uFEp)
GOM(SDL_ReadBE64, UFEp)
GOM(SDL_ReadLE16, uFEp)
GOM(SDL_ReadLE32, uFEp)
GOM(SDL_ReadLE64, UFEp)
GO(SDL_RegisterApp, iFpup)
//GOM(SDL_RemoveTimer, iFEp)
GOM(SDL_SaveBMP_RW, iFEppi)
GO(SDL_SemPost, iFp)
GO(SDL_SemTryWait, iFp)
GO(SDL_SemValue, uFp)
GO(SDL_SemWait, iFp)
GO(SDL_SemWaitTimeout, iFpu)
GO(SDL_SetAlpha, iFpuc)
GO(SDL_SetClipRect, iFpp)
GO(SDL_SetColorKey, iFpuu)
GO(SDL_SetColors, iFppii)
GO(SDL_SetCursor, vFp)
GO(SDL_SetError, vFpppppp)      // use ..., so putting arbitrary number of arguments...
//GOM(SDL_SetEventFilter, vFEp)
GO(SDL_SetGamma, iFfff)
GO(SDL_SetGammaRamp, iFppp)
GO(SDL_SetModState, vFi)
GO(SDL_SetModuleHandle, vFp)
GO(SDL_SetPalette, iFpipii)
//GOM(SDL_SetTimer, iFEup)
GO(SDL_SetVideoMode, pFiiiu)
GO(SDL_ShowCursor, iFi)
GO(SDL_SoftStretch, iFpppp)
//GOM(SDL_ThreadID, uFEv)
GO(SDL_UnloadObject, vFp)
GO(SDL_UnlockSurface, vFp)
GO(SDL_UnlockYUVOverlay, vFp)
GO(SDL_UnregisterApp, vFv)
GO(SDL_UpdateRect, vFpiiii)
GO(SDL_UpdateRects, vFpip)
GO(SDL_UpperBlit, iFpppp)
GO(SDL_VideoDriverName, pFpi)
GO(SDL_VideoInit, iFpu)
GO(SDL_VideoModeOK, iFiiiu)
GO(SDL_VideoQuit, vFv)
GO(SDL_WM_GetCaption, vFpp)
GO(SDL_WM_GrabInput, iFi)
GO(SDL_WM_IconifyWindow, iFv)
GO(SDL_WM_SetCaption, vFpp)
GO(SDL_WM_SetIcon, vFpp)
GO(SDL_WM_ToggleFullScreen, iFp)
GO(SDL_WaitEvent, iFp)
//GOM(SDL_WaitThread, vFEpp)
GO(SDL_WarpMouse, vFWW)
GO(SDL_WasInit, uFu)
GO(SDL_WriteBE16, iFpW)
GO(SDL_WriteBE32, iFpu)
GO(SDL_WriteBE64, iFpU)
GO(SDL_WriteLE16, iFpW)
GO(SDL_WriteLE32, iFpu)
GO(SDL_WriteLE64, iFpU)
GO(SDL_framerateDelay, uFp)
GO(SDL_getFramecount, iFp)
GO(SDL_getFramerate, iFp)
GO(SDL_iconv, uFppppp)
GO(SDL_iconv_close, iFp)
GO(SDL_iconv_open, pFpp)
GO(SDL_iconv_string, pFpppu)
GO(SDL_initFramerate, vFp)
GO(SDL_lltoa, pFIpi)
GO(SDL_ltoa, pFipi)
GO(SDL_main, iFip)
GO(SDL_memcmp, iFppu)
GO(SDL_mutexP, iFp)
GO(SDL_mutexV, iFp)
GO(SDL_revcpy, pFppu)
GO(SDL_setFramerate, iFpu)
GO(SDL_snprintf, iFpupppppp)    // use ...
GO(SDL_sscanf, iFppppppp)       // use ...
GO(SDL_strcasecmp, iFpp)
GO(SDL_strchr, pFpi)
GO(SDL_strcmp, iFpp)
GO(SDL_strdup, pFp)
GO(SDL_strlcat, uFppu)
GO(SDL_strlcpy, uFppu)
GO(SDL_strlen, uFp)
GO(SDL_strlwr, pFp)
GO(SDL_strncasecmp, iFppu)
GO(SDL_strncmp, iFppu)
GO(SDL_strrchr, pFpi)
GO(SDL_strrev, pFp)
GO(SDL_strstr, pFpp)
GO(SDL_strtod, dFpp)
GO(SDL_strtol, iFppi)
GO(SDL_strtoll, IFppi)
GO(SDL_strtoul, uFppi)
GO(SDL_strtoull, UFppi)
GO(SDL_strupr, pFp)
GO(SDL_ulltoa, pFUpi)
GO(SDL_ultoa, pFupi)
GO(SDL_vsnprintf, iFpupV)
GOM(SDL_OpenAudio, iFEpp)
GO(SDL_LockAudio, vFv)
GO(SDL_UnlockAudio, vFv)
GO(SDL_PauseAudio, vFi)
GO(SDL_GetAudioStatus, iFv)
GO(SDL_LoadWAV, pFpppp)
GO(SDL_FreeWAV, vFp)
GOM(SDL_LoadWAV_RW, pFEpippp)
//GOM(SDL_BuildAudioCVT, iFpuuiuui)
//GOM(SDL_ConvertAudio, iFp)
GO(SDL_MixAudio, vFppui)
GO(SDL_CloseAudio, vFv) // should free callback

#endif