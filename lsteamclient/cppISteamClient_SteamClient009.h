#ifdef __cplusplus
extern "C" {
#endif
extern HSteamPipe cppISteamClient_SteamClient009_CreateSteamPipe(void *);
extern bool cppISteamClient_SteamClient009_BReleaseSteamPipe(void *, HSteamPipe);
extern HSteamUser cppISteamClient_SteamClient009_ConnectToGlobalUser(void *, HSteamPipe);
extern HSteamUser cppISteamClient_SteamClient009_CreateLocalUser(void *, HSteamPipe *, EAccountType);
extern void cppISteamClient_SteamClient009_ReleaseUser(void *, HSteamPipe, HSteamUser);
extern void *cppISteamClient_SteamClient009_GetISteamUser(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient009_GetISteamGameServer(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient009_SetLocalIPBinding(void *, uint32, uint16);
extern void *cppISteamClient_SteamClient009_GetISteamFriends(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient009_GetISteamUtils(void *, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient009_GetISteamMatchmaking(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient009_GetISteamMasterServerUpdater(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient009_GetISteamMatchmakingServers(void *, HSteamUser, HSteamPipe, const char *);
extern void * cppISteamClient_SteamClient009_GetISteamGenericInterface(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient009_GetISteamUserStats(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient009_GetISteamGameServerStats(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient009_GetISteamApps(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient009_GetISteamNetworking(void *, HSteamUser, HSteamPipe, const char *);
extern void *cppISteamClient_SteamClient009_GetISteamRemoteStorage(void *, HSteamUser, HSteamPipe, const char *);
extern void cppISteamClient_SteamClient009_RunFrame(void *);
extern uint32 cppISteamClient_SteamClient009_GetIPCCallCount(void *);
extern void cppISteamClient_SteamClient009_SetWarningMessageHook(void *, SteamAPIWarningMessageHook_t);
#ifdef __cplusplus
}
#endif
