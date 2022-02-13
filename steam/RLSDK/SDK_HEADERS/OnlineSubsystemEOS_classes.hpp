/*
#############################################################################################
# Rocket League (220128.59469.363257) SDK
# Generated with the UE3SDKGenerator v2.0.8
# ========================================================================================= #
# File: OnlineSubsystemEOS_classes.hpp
# ========================================================================================= #
# Credits: TheFeckless, ItsBranK
# Links: www.github.com/ItsBranK/UE3SDKGenerator, www.twitter.com/ItsBranK
#############################################################################################
*/
#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum OnlineSubsystemEOS.OnlineVoiceInterfaceEOS.EPlayerVoiceTransitionState
enum class EPlayerVoiceTransitionState : uint8_t
{
	PVTS_Idle                                          = 0,
	PVTS_Joining                                       = 1,
	PVTS_Leaving                                       = 2,
	PVTS_END                                           = 3
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class OnlineSubsystemEOS.AudioDevicesChangedEvent
// 0x0000 (0x0060 - 0x0060)
class UAudioDevicesChangedEvent : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.AudioDevicesChangedEvent");
		}

		return uClassPointer;
	};

};

// Class OnlineSubsystemEOS.EOSErrors
// 0x0010 (0x0080 - 0x0090)
class UEOSErrors : public UErrorList
{
public:
	class UErrorType*                                  AcceptFriendRequestFailed;                     // 0x0080 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  RejectFriendRequestFailed;                     // 0x0088 (0x0008) [0x0000000000000002] (CPF_Const)   
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.EOSErrors");
		}

		return uClassPointer;
	};

};

// Class OnlineSubsystemEOS.OnlineSubsystemEOS
// 0x02F0 (0x0370 - 0x0660)
class UOnlineSubsystemEOS : public UOnlineSubsystemCommonImpl
{
public:
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                            // 0x0370 (0x0008) [0x0000000000000000]               
	class UOnlineGameInterfaceEOS*                     GameInterfaceEOS;                              // 0x0378 (0x0008) [0x0000000000000000]               
	class UOnlineStatsInterfaceEOS*                    StatsInterfaceEOS;                             // 0x0380 (0x0008) [0x0000000000000000]               
	class UOnlineAuthInterfaceEOS*                     AuthInterfaceEOS;                              // 0x0388 (0x0008) [0x0000000000000000]               
	class UOnlinePersistentAuthInterfaceEOS*           PersistentAuthInterfaceEOS;                    // 0x0390 (0x0008) [0x0000000000000000]               
	class UOnlineFriendsInterfaceEOS*                  FriendsInterfaceEOS;                           // 0x0398 (0x0008) [0x0000000000000000]               
	class UOnlineUserCloudFileInterfaceEOS*            UserCloudFileInterfaceEOS;                     // 0x03A0 (0x0008) [0x0000000000000000]               
	class UOnlineVoiceInterfaceEOS*                    VoiceInterfaceEOS;                             // 0x03A8 (0x0008) [0x0000000000000000]               
	TArray<struct FScriptDelegate>                     SpeechRecognitionCompleteDelegates;            // 0x03B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPointer                                    AuthHandle;                                    // 0x03C0 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    FriendsHandle;                                 // 0x03C8 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    UserInfoHandle;                                // 0x03D0 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    PresenceHandle;                                // 0x03D8 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    ConnectHandle;                                 // 0x03E0 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    SessionsHandle;                                // 0x03E8 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    PDSHandle;                                     // 0x03F0 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    StatsHandle;                                   // 0x03F8 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    AchievementsHandle;                            // 0x0400 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    EcomHandle;                                    // 0x0408 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    UIHandle;                                      // 0x0410 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    RTCHandle;                                     // 0x0418 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    RTCAudioHandle;                                // 0x0420 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    RTCAdminHandle;                                // 0x0428 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    GameClipsHandle;                               // 0x0430 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	TArray<struct FName>                               UnlockedDLC;                                   // 0x0438 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     UnlockedDLCDelegates;                          // 0x0448 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ExternalUIChangeDelegates;                     // 0x0458 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnMicroTxnResponse__Delegate;                // 0x0468 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventGetAppPriceInfoComplete__Delegate;      // 0x0480 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerTalking__Delegate;                   // 0x0498 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;             // 0x04B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;         // 0x04C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;    // 0x04E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;        // 0x04F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                // 0x0510 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                // 0x0528 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnControllerChange__Delegate;                // 0x0540 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;          // 0x0558 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;             // 0x0570 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateOnlineAccountCompleted__Delegate;    // 0x0588 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;        // 0x05A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCloseKickPlayerDialog__Delegate;           // 0x05B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCommerceDialogClosed__Delegate;            // 0x05D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnErrorDialogClosed__Delegate;               // 0x05E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnlockedDLCChange__Delegate;               // 0x0600 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnStorePurchaseCompleteDelegate__Delegate;   // 0x0618 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUserOrphaned__Delegate;                    // 0x0630 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUserRestored__Delegate;                    // 0x0648 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.OnlineSubsystemEOS");
		}

		return uClassPointer;
	};

	bool ManuallyTickEOSPlatform();
	struct FString eventFormatCurrency(struct FString Currency, int32_t Price);
	void ClearMicroTxnResponseDelegate(struct FScriptDelegate ResponseMicroTxnDelegate);
	void AddMicroTxnResponseDelegate(struct FScriptDelegate ResponseMicroTxnDelegate);
	bool GetAppPriceInfo(struct FScriptDelegate Callback, struct FUniqueNetId& PlayerID, TArray<struct FName>& AppNames);
	bool HandleBootMessage();
	bool GetOverlayEnabled();
	bool RefreshNetworkErrorToggle();
	void ClearUserRestoredDelegate(struct FScriptDelegate UserRestoredDelegate);
	void AddUserRestoredDelegate(struct FScriptDelegate UserRestoredDelegate);
	void OnUserRestored(uint8_t ControllerId);
	void ClearUserOrphanedDelegate(struct FScriptDelegate UserOrphanedDelegate);
	void AddUserOrphanedDelegate(struct FScriptDelegate UserOrphanedDelegate);
	void OnUserOrphaned(uint8_t ControllerId);
	void OpenStoreForItemsAsync(uint8_t LocalUserNum, TArray<struct FString> Targets, struct FScriptDelegate OnStorePurchaseCompleteDelegate);
	void OnStorePurchaseCompleteDelegate();
	void OpenStoreForItems(uint8_t LocalUserNum, TArray<struct FString> Targets);
	void OpenStoreForDLC(uint8_t LocalUserNum, struct FName DLC);
	void OpenErrorDialog(uint8_t LocalUserNum, uint8_t ErrorCode);
	void OpenPS4DisplayMode(uint8_t LocalUserNum, uint8_t DisplayMode, TArray<struct FString> Targets, int32_t ServiceLabel);
	void ResetControllerColor(int32_t ControllerId);
	void SetControllerColor(int32_t ControllerId, struct FColor NewColor);
	void InitializeTrophyAPI();
	bool AnyPlayerChatRestricted();
	void ClearUnlockedDLCChangeDelegate(struct FScriptDelegate InDelegate);
	void AddUnlockedDLCChangeDelegate(struct FScriptDelegate InDelegate);
	TArray<struct FName> GetUnlockedDLC();
	void OnUnlockedDLCChange();
	void UpdateSessionStatusFromPlayers(int32_t CurrentPlayerCount, int32_t numBotPlayers);
	void ClearErrorDialogClosedDelegate(struct FScriptDelegate InDelegate);
	void AddErrorDialogClosedDelegate(struct FScriptDelegate InDelegate);
	void OnErrorDialogClosed(int32_t LocalUserNum);
	void ClearCommerceDialogClosedDelegate(struct FScriptDelegate InDelegate);
	void AddCommerceDialogClosedDelegate(struct FScriptDelegate InDelegate);
	void OnCommerceDialogClosed();
	uint8_t GetCurrentConnectionStatus();
	void ClearCloseKickPlayerDialogDelegate(struct FScriptDelegate InDelegate);
	void AddCloseKickPlayerDialogDelegate(struct FScriptDelegate InDelegate);
	void OnCloseKickPlayerDialog();
	void OnPlayerTalkingStateChange(struct FUniqueNetId Player, unsigned long bIsTalking);
	bool SetVoiceReceiveVolume(float VoiceVolume);
	int32_t GetDLCPurchaseTime(struct FName AppName);
	bool SaveKey(struct FString ProductKey);
	bool GetLocalAccountNames(TArray<struct FString>& Accounts);
	bool DeleteLocalAccount(struct FString Username, struct FString Password);
	bool RenameLocalAccount(struct FString NewUserName, struct FString OldUserName, struct FString Password);
	bool CreateLocalAccount(struct FString Username, struct FString Password);
	void ClearCreateOnlineAccountCompletedDelegate(struct FScriptDelegate AccountCreateDelegate);
	void AddCreateOnlineAccountCompletedDelegate(struct FScriptDelegate AccountCreateDelegate);
	void OnCreateOnlineAccountCompleted(uint8_t ErrorStatus);
	bool CreateOnlineAccount(struct FString Username, struct FString Password, struct FString EmailAddress, struct FString ProductKey);
	bool IsKeyValid();
	void ClearStorageDeviceChangeDelegate(struct FScriptDelegate StorageDeviceChangeDelegate);
	void AddStorageDeviceChangeDelegate(struct FScriptDelegate StorageDeviceChangeDelegate);
	void OnStorageDeviceChange();
	uint8_t GetNATType();
	void ClearConnectionStatusChangeDelegate(struct FScriptDelegate ConnectionStatusDelegate);
	void AddConnectionStatusChangeDelegate(struct FScriptDelegate ConnectionStatusDelegate);
	void OnConnectionStatusChange(uint8_t ConnectionStatus);
	bool IsControllerConnected(int32_t ControllerId);
	void ClearControllerChangeDelegate(struct FScriptDelegate ControllerChangeDelegate);
	void AddControllerChangeDelegate(struct FScriptDelegate ControllerChangeDelegate);
	void OnControllerChange(int32_t ControllerId, unsigned long bIsConnected);
	void SetNetworkNotificationPosition(uint8_t NewPos);
	uint8_t GetNetworkNotificationPosition();
	void NotifyExternalUIChanged(unsigned long bIsOpening);
	void ClearExternalUIChangeDelegate(struct FScriptDelegate InDelegate);
	void AddExternalUIChangeDelegate(struct FScriptDelegate InDelegate);
	void OnExternalUIChange(unsigned long bIsOpening);
	void ClearLinkStatusChangeDelegate(struct FScriptDelegate LinkStatusDelegate);
	void AddLinkStatusChangeDelegate(struct FScriptDelegate LinkStatusDelegate);
	void OnLinkStatusChange(unsigned long bIsConnected);
	bool HasLinkConnection();
	bool RegisterStatGuid(struct FUniqueNetId PlayerID, struct FString& ClientStatGuid);
	struct FString GetClientStatGuid();
	void ClearRegisterHostStatGuidCompleteDelegateDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate);
	void AddRegisterHostStatGuidCompleteDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate);
	void OnFlushOnlineStatsComplete(struct FName SessionName, unsigned long bWasSuccessful);
	void OnRegisterHostStatGuidComplete(unsigned long bWasSuccessful);
	bool RegisterHostStatGuid(struct FString& HostStatGuid);
	struct FString GetHostStatGuid();
	bool WriteOnlinePlayerScores(TArray<struct FOnlinePlayerScore>& PlayerScores);
	void FreeStats(class UOnlineStatsRead* StatsRead);
	void ClearReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate);
	void AddReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate);
	void OnReadOnlineStatsComplete(unsigned long bWasSuccessful);
	bool ReadOnlineStatsByRankAroundPlayer(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead, int32_t NumRows);
	bool ReadOnlineStatsByRank(class UOnlineStatsRead* StatsRead, int32_t StartIndex, int32_t NumToRead);
	bool ReadOnlineStatsForFriends(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead);
	bool ReadOnlineStats(class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>& Players);
	bool UnmuteAll(uint8_t LocalUserNum);
	bool MuteAll(uint8_t LocalUserNum, unsigned long bAllowFriends);
	bool SetSpeechRecognitionObject(uint8_t LocalUserNum, class USpeechRecognition* SpeechRecogObj);
	bool SelectVocabulary(uint8_t LocalUserNum, int32_t VocabularyId);
	void ClearRecognitionCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RecognitionDelegate);
	void AddRecognitionCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RecognitionDelegate);
	void OnRecognitionComplete();
	bool GetRecognitionResults(uint8_t LocalUserNum, TArray<struct FSpeechRecognizedWord>& Words);
	bool StopSpeechRecognition(uint8_t LocalUserNum);
	bool StartSpeechRecognition(uint8_t LocalUserNum);
	void StopNetworkedVoice(uint8_t LocalUserNum);
	void StartNetworkedVoice(uint8_t LocalUserNum);
	void ClearPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate);
	void AddPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate);
	void OnPlayerTalking(struct FUniqueNetId Player);
	bool UnmuteRemoteTalker(uint8_t LocalUserNum, struct FUniqueNetId PlayerID);
	bool MuteRemoteTalker(uint8_t LocalUserNum, struct FUniqueNetId PlayerID);
	bool SetRemoteTalkerPriority(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, int32_t Priority);
	bool IsHeadsetPresent(uint8_t LocalUserNum);
	bool IsRemotePlayerTalking(struct FUniqueNetId PlayerID);
	bool IsLocalPlayerTalking(uint8_t LocalUserNum);
	bool UnregisterRemoteTalker(struct FUniqueNetId PlayerID);
	bool RegisterRemoteTalker(struct FUniqueNetId PlayerID);
	bool UnregisterLocalTalker(uint8_t LocalUserNum);
	bool RegisterLocalTalker(uint8_t LocalUserNum);
	struct FUniqueNetId eventGetPlayerUniqueNetIdFromIndex(int32_t UserIndex);
	struct FString eventGetPlayerNicknameFromIndex(int32_t UserIndex);
	bool eventInit();
	bool InitEOS(struct FString& SandboxId, struct FString& DeploymentId);
	void EventGetAppPriceInfoComplete(struct FName AppName, struct FString Price, struct FString DiscountPrice, int32_t DiscountPercentage);
	void OnMicroTxnResponse(unsigned long bAuthorized, uint64_t OrderId);
};

// Class OnlineSubsystemEOS.OnlineAuthInterfaceEOS
// 0x0008 (0x03C8 - 0x03D0)
class UOnlineAuthInterfaceEOS : public UOnlineAuthInterfaceImpl
{
public:
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                            // 0x03C8 (0x0008) [0x0000004000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.OnlineAuthInterfaceEOS");
		}

		return uClassPointer;
	};

	bool RequiresAuthTicket();
	bool RequestAuthTicket(struct FUniqueNetId PlayerID, struct FScriptDelegate Callback);
	bool RequestMtxCode(struct FUniqueNetId PlayerID, struct FScriptDelegate Callback);
};

// Class OnlineSubsystemEOS.OnlineFriendsInterfaceEOS
// 0x0008 (0x0080 - 0x0088)
class UOnlineFriendsInterfaceEOS : public UOnlineFriendsInterfaceImpl
{
public:
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                            // 0x0080 (0x0008) [0x0000004000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.OnlineFriendsInterfaceEOS");
		}

		return uClassPointer;
	};

	bool GetActivePlatformId(uint8_t LocalUserNum, struct FUniqueNetId AccountId, struct FUniqueNetId& PlatformId);
	bool RequestLinkedAccounts(uint8_t LocalUserNum, TArray<struct FUniqueNetId> AccountIds, struct FScriptDelegate Callback);
};

// Class OnlineSubsystemEOS.OnlineGameInterfaceEOS
// 0x001C (0x0318 - 0x0334)
class UOnlineGameInterfaceEOS : public UOnlineGameInterfaceImpl
{
public:
	struct FPointer                                    SessionsHandle;                                // 0x0318 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    CurrentSearchHandle;                           // 0x0320 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                            // 0x0328 (0x0008) [0x0000000000000000]               
	unsigned long                                      bGameSessionUpdateInProgress : 1;              // 0x0330 (0x0004) [0x0000000000000000] [0x00000001] 
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.OnlineGameInterfaceEOS");
		}

		return uClassPointer;
	};

	bool AcceptGameInvite(uint8_t LocalUserNum, struct FName SessionName);
	bool FreeSearchResults(class UOnlineGameSearch* Search);
	bool UpdateOnlineGame(struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData);
};

// Class OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS
// 0x0008 (0x00B8 - 0x00C0)
class UOnlinePersistentAuthInterfaceEOS : public UOnlinePersistentAuthInterfaceImpl
{
public:
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                            // 0x00B8 (0x0008) [0x0000004000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.OnlinePersistentAuthInterfaceEOS");
		}

		return uClassPointer;
	};

	bool AuthWithNintendoAccountToken(uint8_t LocalUserNum, struct FString& NintendoAccountToken);
	class UDateTime* GetAuthExpirationTimestamp(uint8_t LocalUserNum);
	bool LaunchAccountPortal(uint8_t LocalUserNum);
	struct FString GetClientCredentials();
	struct FString GetContinuanceToken(uint8_t LocalUserNum);
	bool UseRefreshToken(uint8_t LocalUserNum, struct FString RefreshToken);
	struct FString GetRefreshToken(uint8_t LocalUserNum);
	bool RequestPinGrantCode(uint8_t LocalUserNum);
};

// Class OnlineSubsystemEOS.OnlinePlayerInterfaceEOS
// 0x0600 (0x0060 - 0x0660)
class UOnlinePlayerInterfaceEOS : public UObject
{
public:
	struct FPointer                                    AuthHandle;                                    // 0x0060 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    FriendsHandle;                                 // 0x0068 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    UserInfoHandle;                                // 0x0070 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    PresenceHandle;                                // 0x0078 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    ConnectHandle;                                 // 0x0080 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    PDSHandle;                                     // 0x0088 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    EcomHandle;                                    // 0x0090 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                               // 0x0098 (0x0008) [0x0000000000000000]               
	class UOnlineGameInterfaceEOS*                     GameInterfaceEOS;                              // 0x00A0 (0x0008) [0x0000000000000000]               
	class UOnlinePersistentAuthInterfaceEOS*           PersistentAuthInterfaceEOS;                    // 0x00A8 (0x0008) [0x0000000000000000]               
	class UOnlineVoiceInterfaceEOS*                    VoiceInterfaceEOS;                             // 0x00B0 (0x0008) [0x0000000000000000]               
	int32_t                                            DefaultLocalUser;                              // 0x00B8 (0x0004) [0x0000000000000000]               
	struct FString                                     ProfileDataDirectory;                          // 0x00C0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     ProfileDataExtension;                          // 0x00D0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadProfileSettingsDelegates;                  // 0x00E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteProfileSettingsDelegates;                 // 0x00F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UOnlineProfileSettings*                      CachedProfile;                                 // 0x0100 (0x0008) [0x0000000000000000]               
	TArray<struct FOnlineProfileSetting>               LastProfileSettings;                           // 0x0108 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadFriendsDelegates;                          // 0x0118 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            FriendsReadState;                              // 0x0128 (0x0001) [0x0000000000000000]               
	TArray<struct FScriptDelegate>                     FriendsChangeDelegates;                        // 0x0130 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LoginFailedDelegates;                          // 0x0140 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LoginCancelledDelegates;                       // 0x0150 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LogoutCompletedDelegates;                      // 0x0160 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     MutingChangeDelegates;                         // 0x0170 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FOnlineStatusMappingEOS>             StatusMappings;                                // 0x0180 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	struct FString                                     DefaultStatus;                                 // 0x0190 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReceivedGameInviteDelegates;                   // 0x01A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FOnlineFriendMessage>                CachedFriendMessages;                          // 0x01B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     JoinFriendGameCompleteDelegates;               // 0x01C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     AchievementDelegates;                          // 0x01D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     AchievementReadDelegates;                      // 0x01E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPointer                                    AchievementsHandle;                            // 0x01F0 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	TArray<struct FScriptDelegate>                     LoginChangeDelegates;                          // 0x01F8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReceivedPinGrantDelegates;                     // 0x0208 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     BlockListUpdatedDelegates;                     // 0x0218 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginChange__Delegate;                     // 0x0228 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                  // 0x0240 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnMutingChange__Delegate;                    // 0x0258 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                   // 0x0270 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnBlockListUpdated__Delegate;                // 0x0288 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                     // 0x02A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReceievedPinGrantCode__Delegate;           // 0x02B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                 // 0x02D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;     // 0x02E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;    // 0x0300 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;             // 0x0318 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;           // 0x0330 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAddFriendComplete__Delegate;               // 0x0348 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryUserByDisplayName__Delegate;          // 0x0360 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;         // 0x0378 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAcceptFriendInviteComplete__Delegate;      // 0x0390 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDenyFriendInviteComplete__Delegate;        // 0x03A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRemoveFriendComplete__Delegate;            // 0x03C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;            // 0x03D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendInviteCanceled__Delegate;            // 0x03F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;              // 0x0408 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;          // 0x0420 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;           // 0x0438 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRequestNativePlatformAuthTicketComplete__Delegate;// 0x0450 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;       // 0x0468 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;// 0x0480 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;      // 0x0498 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadCrossTitleProfileSettingsComplete__Delegate;// 0x04B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUserSignInComplete__Delegate;              // 0x04C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __CanPlayOnlineChanged__Delegate;              // 0x04E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnSaveDataNoSpaceDialogComplete__Delegate;   // 0x04F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisteredController__Delegate;            // 0x0510 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnregisteredController__Delegate;          // 0x0528 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnInputAPIChanged__Delegate;                 // 0x0540 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;               // 0x0558 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUserSwitchComplete__Delegate;              // 0x0570 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeviceSelectionComplete__Delegate;         // 0x0588 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnProfileDataChanged__Delegate;              // 0x05A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;       // 0x05B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;        // 0x05D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAvatarChange__Delegate;                    // 0x05E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __FriendPresenceChange__Delegate;              // 0x0600 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerCountryRetrieved__Delegate;          // 0x0618 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnSanitizeStringComplete__Delegate;          // 0x0630 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EpicIDToPlatformIDCallback__Delegate;        // 0x0648 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.OnlinePlayerInterfaceEOS");
		}

		return uClassPointer;
	};

	void GetBlockList(uint8_t LocalUserNum, TArray<struct FOnlineFriend>& OutBlockList);
	void AddBlockListUpdatedDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate);
	void EpicIDToPlatformID(struct FUniqueNetId EpicAccountId, uint8_t TargetPlatform, struct FScriptDelegate Callback);
	void EpicIDToPlatformIDCallback(struct FUniqueNetId PlatformAccountId, struct FString Error);
	struct FUniqueNetId GetEpicAccountId(struct FUniqueNetId PlatformId);
	bool ShowInviteUI(uint8_t LocalUserNum, struct FString InviteText);
	bool ShowGamerCardUI(uint8_t LocalUserNum, struct FUniqueNetId PlayerID);
	void SetRichPresence(uint8_t LocalUserNum, struct FString PresenceString, struct FString GameDataString);
	void GetFriendPresence(struct FOnlineFriend& FriendData);
	bool RecordPlayersRecentlyMet(uint8_t LocalUserNum, struct FString GameDescription, TArray<struct FUniqueNetId>& Players);
	bool WordFilterSanitizeString(struct FString Comment, struct FScriptDelegate SanitizeDelegate, struct FUniqueNetId PlayerID);
	void OnSanitizeStringComplete(struct FWordFilterResult Result);
	bool HideKeyboardUI(uint8_t LocalUserNum);
	void ClearReadPlayerCountryDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadPlayerCountryDelegate);
	void AddReadPlayerCountryDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadPlayerCountryDelegate);
	void OnPlayerCountryRetrieved(struct FUniqueNetId PlayerID, struct FString Country);
	void GetPlayerCountry(uint8_t LocalUserNum);
	void ClearAvatarChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate AvatarDelegate);
	void AddAvatarChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate AvatarDelegate);
	void ClearFriendPresenceChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate PresenceDelegate);
	void eventAddFriendPresenceChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate PresenceDelegate);
	void FriendPresenceChange(struct FUniqueNetId PlayerID);
	void OnAvatarChange(struct FUniqueNetId PlayerID);
	bool UnlockAchievement(uint8_t LocalUserNum, int32_t AchievementId, float PercentComplete);
	bool ReadAchievements(uint8_t LocalUserNum, int32_t TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages);
	uint8_t GetAchievements(uint8_t LocalUserNum, int32_t TitleId, TArray<struct FAchievementDetails>& Achievements);
	void ClearReadAchievementsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate);
	void ClearUnlockAchievementCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate);
	void AddReadAchievementsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate);
	void AddUnlockAchievementCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate);
	void OnReadAchievementsComplete(int32_t TitleId);
	void OnUnlockAchievementComplete(unsigned long bWasSuccessful);
	bool ShowControllerUI();
	struct FString GetPlayerLanguage(uint8_t LocalUserNum);
	bool ShowPlayersUI(uint8_t LocalUserNum);
	void ClearProfileDataChangedDelegate(uint8_t LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate);
	void AddProfileDataChangedDelegate(uint8_t LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate);
	void OnProfileDataChanged();
	bool UnlockGamerPicture(uint8_t LocalUserNum, int32_t PictureId);
	bool IsDeviceValid(int32_t DeviceID);
	int32_t GetDeviceSelectionResults(uint8_t LocalUserNum, struct FString& DeviceName);
	void ClearDeviceSelectionDoneDelegate(uint8_t LocalUserNum, struct FScriptDelegate DeviceDelegate);
	void AddDeviceSelectionDoneDelegate(uint8_t LocalUserNum, struct FScriptDelegate DeviceDelegate);
	void OnDeviceSelectionComplete(unsigned long bWasSuccessful);
	bool ShowDeviceSelectionUI(uint8_t LocalUserNum, int32_t SizeNeeded, unsigned long bForceShowUI);
	bool ShowCustomPlayersUI(uint8_t LocalUserNum, struct FString Title, struct FString Description, TArray<struct FUniqueNetId>& Players);
	bool IsUserSwitchActive();
	void SetKickPlayerDialogActive(unsigned long Active);
	void SetKickPreviousUser(uint8_t LocalUserNum);
	bool ShowLoginUIForOrphanedUser(uint8_t LocalUserNum);
	TArray<bool> GetSyncedAchievements(uint8_t LocalUserNum);
	bool IsGuestLogin(uint8_t LocalUserNum);
	void RequestRestrictedFeatureMessaging(uint8_t LocalUserNum, uint8_t RestrictedFeature);
	bool CanCommunicateVoice(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint);
	bool CanCommunicateVideo(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint);
	bool CanCommunicateText(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint);
	bool CanShareUserCreatedContent(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint);
	bool CanAccessPremiumVideoContent(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint);
	bool CanAccessPremiumContent(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint);
	bool CanUseCloudStorage(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint);
	bool CanRecordDVRClips(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint);
	bool CanBrowseInternet(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint);
	bool CanShareWithSocialNetwork(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint);
	bool CanShareKinectContent(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint);
	bool CanUploadFitnessData(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint);
	void SetPrimaryPlayerGamepadToLastInput();
	void ClearUserSwitchCompleteDelegate(struct FScriptDelegate UserSwitchCompleteDelegate);
	void AddUserSwitchCompleteDelegate(struct FScriptDelegate UserSwitchCompleteDelegate);
	void OnUserSwitchComplete(uint8_t LocalUserNum);
	void ClearLoginStatusChangeDelegate(struct FScriptDelegate InDelegate, uint8_t LocalUserNum);
	void AddLoginStatusChangeDelegate(struct FScriptDelegate InDelegate, uint8_t LocalUserNum);
	void OnLoginStatusChange(uint8_t NewStatus, struct FUniqueNetId NewId);
	bool GetPlayHistoryRegistrationKey(TArray<uint8_t>& Key);
	bool CheckParentalControlInfo(unsigned long bShowUi);
	TArray<struct FName> GetActiveDiscDLC();
	void SetOnlineSubscriptionRequirement(unsigned long bRequiresOnlineSubscription);
	int32_t GetControllerID(int32_t LocalPlayerNum);
	TArray<struct FName> GetConnectedControllerNames();
	void OnLocalPlayerRemoved(int32_t LocalPlayerNum);
	void UnregisterController(int32_t LocalPlayerNum);
	void RegisterController(int32_t LocalPlayerNum, int32_t ControllerId);
	bool CanRegisterController(int32_t LocalPlayerNum);
	bool ShowBindings(int32_t ControllerId);
	void SetControllerLayout(int32_t ControllerId, struct FName LayoutName);
	void SetInputAPI(uint8_t TargetAPI);
	void ClearInputAPIChangedDelegate(struct FScriptDelegate InputAPIChangedDelegate);
	void AddInputAPIChangedDelegate(struct FScriptDelegate InputAPIChangedDelegate);
	void OnInputAPIChanged(uint8_t TargetAPI);
	void ClearUnregisteredControllerDelegate(struct FScriptDelegate UnregisteredControllerDelegate);
	void ClearRegisteredControllerDelegate(struct FScriptDelegate RegisteredControllerDelegate);
	void AddUnregisteredControllerDelegate(struct FScriptDelegate UnregisteredControllerDelegate);
	void AddRegisteredControllerDelegate(struct FScriptDelegate RegisteredControllerDelegate);
	void OnUnregisteredController(int32_t LocalPlayerNum);
	void OnRegisteredController(int32_t LocalPlayerNum, int32_t ControllerId);
	bool AddInGamePost(struct FString InPostID, uint8_t LocalUserNum, TArray<struct FString> StringReplaceList);
	bool UpdateStat(uint8_t LocalUserNum, struct FName StatName, int32_t Points);
	void ClearSaveDataNoSpaceDialogCompleteDelegate(struct FScriptDelegate DeviceDelegate);
	void AddSaveDataNoSpaceDialogCompleteDelegate(struct FScriptDelegate DeviceDelegate);
	void OnSaveDataNoSpaceDialogComplete(unsigned long bContinueWithoutSave);
	bool RecordPlayersRecentlyMetKeys(uint8_t LocalUserNum, TArray<struct FFriendHistoryKey> PlayerKeys);
	bool IsAchievementUnlocked(int32_t AchievementId);
	bool ShowContentMarketplaceUI(uint8_t LocalUserNum);
	bool ShowFriendsInviteUI(uint8_t LocalUserNum, struct FUniqueNetId PlayerID);
	bool ShowAchievementsUI(uint8_t LocalUserNum);
	bool ShowMessagesUI(uint8_t LocalUserNum);
	bool ShowFeedbackUI(uint8_t LocalUserNum, struct FUniqueNetId PlayerID);
	void RemoveCanPlayOnlineChangedDelegate(struct FScriptDelegate Callback);
	void AddCanPlayOnlineChangedDelegate(struct FScriptDelegate Callback);
	void CanPlayOnlineChanged(uint8_t LocalUserNum);
	void ClearUserSignInCompleteDelegate(struct FScriptDelegate InDelegate);
	void AddUserSignInCompleteDelegate(struct FScriptDelegate InDelegate);
	void OnUserSignInComplete(uint8_t LocalUserNum);
	bool ShowCustomMessageUI(uint8_t LocalUserNum, struct FString MessageTitle, struct FString NonEditableMessage, struct FString EditableMessage, TArray<struct FUniqueNetId>& Recipients);
	void ClearCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId);
	class UOnlineProfileSettings* GetCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId);
	void ClearReadCrossTitleProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate);
	void AddReadCrossTitleProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate);
	void OnReadCrossTitleProfileSettingsComplete(uint8_t LocalUserNum, int32_t TitleId, unsigned long bWasSuccessful);
	bool ReadCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId, class UOnlineProfileSettings* ProfileSettings);
	void ClearWritePlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate);
	void AddWritePlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate);
	void OnWritePlayerStorageComplete(uint8_t LocalUserNum, unsigned long bWasSuccessful);
	bool WritePlayerStorage(uint8_t LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int32_t DeviceID);
	void ClearReadPlayerStorageForNetIdCompleteDelegate(struct FUniqueNetId NetId, struct FScriptDelegate InDelegate);
	void AddReadPlayerStorageForNetIdCompleteDelegate(struct FUniqueNetId NetId, struct FScriptDelegate InDelegate);
	void OnReadPlayerStorageForNetIdComplete(struct FUniqueNetId NetId, unsigned long bWasSuccessful);
	bool ReadPlayerStorageForNetId(uint8_t LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage);
	void ClearReadPlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate);
	void AddReadPlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate InDelegate);
	void OnReadPlayerStorageComplete(uint8_t LocalUserNum, unsigned long bWasSuccessful);
	bool ReadPlayerStorage(uint8_t LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int32_t DeviceID);
	class UOnlinePlayerStorage* GetPlayerStorage(uint8_t LocalUserNum);
	void RequestNativePlatformAuthTicket(int32_t LocalUserNum, struct FScriptDelegate Callback);
	void OnRequestNativePlatformAuthTicketComplete(int32_t LocalUserNum, struct FString PlatformAuthTicket);
	void eventLinkedAccount(int32_t LocalUserNum);
	void RefreshConnectLogin(int32_t LocalUserNum);
	void ConnectLogin(int32_t LocalUserNum);
	bool HasIncomingFriendInvite(uint8_t LocalUserNum, struct FUniqueNetId InviteFrom);
	bool SupportInGameLogin();
	bool HasFriendsFunctionality();
	bool DeleteMessage(uint8_t LocalUserNum, int32_t MessageIndex);
	void ClearFriendMessageReceivedDelegate(uint8_t LocalUserNum, struct FScriptDelegate MessageDelegate);
	void AddFriendMessageReceivedDelegate(uint8_t LocalUserNum, struct FScriptDelegate MessageDelegate);
	void OnFriendMessageReceived(uint8_t LocalUserNum, struct FUniqueNetId SendingPlayer, struct FString SendingNick, struct FString Message);
	void GetFriendMessages(uint8_t LocalUserNum, TArray<struct FOnlineFriendMessage>& FriendMessages);
	void ClearJoinFriendGameCompleteDelegate(struct FScriptDelegate JoinFriendGameCompleteDelegate);
	void AddJoinFriendGameCompleteDelegate(struct FScriptDelegate JoinFriendGameCompleteDelegate);
	void OnJoinFriendGameComplete(unsigned long bWasSuccessful);
	bool JoinFriendGame(uint8_t LocalUserNum, struct FUniqueNetId Friend);
	void ClearReceivedGameInviteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate);
	void AddReceivedGameInviteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate);
	void OnReceivedGameInvite(uint8_t LocalUserNum, struct FString InviterName);
	bool SendGameInviteToFriends(uint8_t LocalUserNum, TArray<struct FUniqueNetId> Friends, struct FString Text);
	bool SendGameInviteToFriend(uint8_t LocalUserNum, struct FUniqueNetId Friend, struct FString Text);
	bool SendMessageToFriend(uint8_t LocalUserNum, struct FUniqueNetId Friend, struct FString Message);
	void ClearFriendInviteCanceledDelegate(uint8_t LocalUserNum, struct FScriptDelegate InviteDelegate);
	void AddFriendInviteCanceledDelegate(uint8_t LocalUserNum, struct FScriptDelegate InviteDelegate);
	void OnFriendInviteCanceled(uint8_t LocalUserNum, struct FUniqueNetId CanceledUserId);
	void ClearFriendInviteReceivedDelegate(uint8_t LocalUserNum, struct FScriptDelegate InviteDelegate);
	void AddFriendInviteReceivedDelegate(uint8_t LocalUserNum, struct FScriptDelegate InviteDelegate);
	void OnFriendInviteReceived(uint8_t LocalUserNum, struct FUniqueNetId RequestingPlayer, struct FString RequestingNick, struct FString Message);
	bool RemoveFriend(uint8_t LocalUserNum, struct FUniqueNetId FormerFriend);
	void ClearRemoveFriendCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RemoveFriendDelegate);
	void AddRemoveFriendCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RemoveFriendDelegate);
	void OnRemoveFriendComplete(unsigned long bWasSuccessful, struct FUniqueNetId RemovedID);
	bool DenyFriendInvite(uint8_t LocalUserNum, struct FUniqueNetId RequestingPlayer);
	void ClearDenyFriendInviteCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate);
	void AddDenyFriendInviteCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate);
	void OnDenyFriendInviteComplete(struct FUniqueNetId FriendId, class UError* Error);
	bool AcceptFriendInvite(uint8_t LocalUserNum, struct FUniqueNetId RequestingPlayer);
	void ClearAcceptFriendInviteCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate);
	void AddAcceptFriendInviteCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate);
	void OnAcceptFriendInviteComplete(struct FUniqueNetId FriendId, class UError* Error);
	void ClearAddFriendByNameCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate);
	void AddAddFriendByNameCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate);
	void OnAddFriendByNameComplete(unsigned long bWasSuccessful);
	bool AddFriendByName(uint8_t LocalUserNum, struct FString FriendName, struct FString Message);
	bool QueryUserByDisplayName(uint8_t LocalUserNum, struct FString DisplayName);
	void ClearQueryUserByDisplayNameCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate QueryDelegate);
	void AddQueryUserByDisplayNameCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate QueryDelegate);
	void OnQueryUserByDisplayName(unsigned long bWasSuccessful, struct FString QueriedDisplayName, struct FUniqueNetId UserId);
	bool AddFriend(uint8_t LocalUserNum, struct FUniqueNetId NewFriend, struct FString Message);
	void ClearAddFriendCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate);
	void AddAddFriendCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate);
	void OnAddFriendComplete(struct FUniqueNetId NewFriendId, class UError* Error);
	struct FString GetKeyboardInputResults(uint8_t& bWasCanceled);
	void ClearKeyboardInputDoneDelegate(struct FScriptDelegate InputDelegate);
	void AddKeyboardInputDoneDelegate(struct FScriptDelegate InputDelegate);
	void OnKeyboardInputComplete(unsigned long bWasSuccessful);
	bool ShowKeyboardUI(uint8_t LocalUserNum, struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString DefaultText, int32_t MaxResultLength);
	void SetOnlineStatus(uint8_t LocalUserNum, int32_t StatusId, TArray<struct FLocalizedStringSetting>& LocalizedStringSettings, TArray<struct FSettingsProperty>& Properties);
	uint8_t GetFriendsList(uint8_t LocalUserNum, int32_t Count, int32_t StartingAt, TArray<struct FOnlineFriend>& Friends);
	void ClearReadFriendsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate);
	void AddReadFriendsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate);
	void OnReadFriendsComplete(unsigned long bWasSuccessful);
	bool ReadFriendsList(uint8_t LocalUserNum, int32_t Count, int32_t StartingAt);
	void ClearWriteProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate);
	void AddWriteProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate);
	void OnWriteProfileSettingsComplete(uint8_t LocalUserNum, unsigned long bWasSuccessful);
	bool WriteProfileSettings(uint8_t LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	class UOnlineProfileSettings* GetProfileSettings(uint8_t LocalUserNum);
	void ClearReadProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate);
	void AddReadProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate);
	void OnReadProfileSettingsComplete(uint8_t LocalUserNum, unsigned long bWasSuccessful);
	bool ReadProfileSettings(uint8_t LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	void ClearFriendsChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendsDelegate);
	void eventAddFriendsChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendsDelegate);
	void ClearMutingChangeDelegate(struct FScriptDelegate MutingDelegate);
	void AddMutingChangeDelegate(struct FScriptDelegate MutingDelegate);
	void ClearLoginCancelledDelegate(struct FScriptDelegate CancelledDelegate);
	void AddLoginCancelledDelegate(struct FScriptDelegate CancelledDelegate);
	void ClearLoginChangeDelegate(struct FScriptDelegate LoginDelegate);
	void AddLoginChangeDelegate(struct FScriptDelegate LoginDelegate);
	bool ShowFriendsUI(uint8_t LocalUserNum);
	bool IsMuted(uint8_t LocalUserNum, struct FUniqueNetId PlayerID);
	bool AreAnyFriends(uint8_t LocalUserNum, TArray<struct FFriendsQuery>& Query);
	bool IsFriend(uint8_t LocalUserNum, struct FUniqueNetId PlayerID);
	bool CanShowPresenceInformation(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint);
	bool CanViewPlayerProfiles(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint);
	bool CanPurchaseContent(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint);
	bool CanDownloadUserContent(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint);
	uint8_t CanCommunicate(uint8_t LocalUserNum, uint8_t CommMethod, unsigned long bAttemptToResolve);
	bool CanPlayOnline(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint);
	struct FString GetPlayerNickname(uint8_t LocalUserNum);
	bool GetUniquePlayerId(uint8_t LocalUserNum, struct FUniqueNetId& PlayerID);
	uint8_t GetLoginStatus(uint8_t LocalUserNum);
	void ClearLogoutCompletedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LogoutDelegate);
	void AddLogoutCompletedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LogoutDelegate);
	void OnLogoutCompleted(unsigned long bWasSuccessful);
	bool Logout(uint8_t LocalUserNum);
	void ClearLoginFailedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LoginFailedDelegate);
	void AddLoginFailedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LoginFailedDelegate);
	void OnReceievedPinGrantCode(uint8_t Result, uint8_t LocalUserNum, struct FString Code, struct FString URL, int32_t SecondsUntilExpiration);
	void OnLoginFailed(uint8_t LocalUserNum, uint8_t ErrorCode);
	bool AutoLogin();
	bool Login(uint8_t LocalUserNum, struct FString LoginName, struct FString Password, unsigned long bWantsLocalOnly);
	bool ShowLoginUI(uint8_t LocalUserNum, unsigned long bShowOnlineOnly);
	void OnBlockListUpdated(uint8_t LocalUserNum);
	void OnFriendsChange();
	void OnMutingChange();
	void OnLoginCancelled();
	void OnLoginChange(uint8_t LocalUserNum);
};

// Class OnlineSubsystemEOS.OnlineStatsInterfaceEOS
// 0x0068 (0x0060 - 0x00C8)
class UOnlineStatsInterfaceEOS : public UObject
{
public:
	struct FPointer                                    StatsHandle;                                   // 0x0060 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                            // 0x0068 (0x0008) [0x0000000000000000]               
	TArray<struct FScriptDelegate>                     ReadStatsDelegates;                            // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;         // 0x0080 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;        // 0x0098 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;    // 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.OnlineStatsInterfaceEOS");
		}

		return uClassPointer;
	};

	bool RegisterStatGuid(struct FUniqueNetId PlayerID, struct FString& ClientStatGuid);
	struct FString GetClientStatGuid();
	void ClearRegisterHostStatGuidCompleteDelegateDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate);
	void AddRegisterHostStatGuidCompleteDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate);
	void OnRegisterHostStatGuidComplete(unsigned long bWasSuccessful);
	bool RegisterHostStatGuid(struct FString& HostStatGuid);
	struct FString GetHostStatGuid();
	bool WriteOnlinePlayerScores(struct FName SessionName, int32_t LeaderboardId, TArray<struct FOnlinePlayerScore>& PlayerScores);
	void ClearFlushOnlineStatsCompleteDelegate(struct FScriptDelegate FlushOnlineStatsCompleteDelegate);
	void AddFlushOnlineStatsCompleteDelegate(struct FScriptDelegate FlushOnlineStatsCompleteDelegate);
	void OnFlushOnlineStatsComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool FlushOnlineStats(struct FName SessionName);
	bool WriteOnlineStats(struct FName SessionName, struct FUniqueNetId Player, class UOnlineStatsWrite* StatsWrite);
	void FreeStats(class UOnlineStatsRead* StatsRead);
	void ClearReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate);
	void AddReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate);
	void OnReadOnlineStatsComplete(unsigned long bWasSuccessful);
	bool ReadOnlineStatsByRankAroundPlayer(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead, int32_t NumRows);
	bool ReadOnlineStatsByRank(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead, int32_t StartIndex, int32_t NumToRead);
	bool ReadOnlineStatsForFriends(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead);
	bool ReadOnlineStats(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>& Players);
};

// Class OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS
// 0x00B8 (0x0060 - 0x0118)
class UOnlineUserCloudFileInterfaceEOS : public UObject
{
public:
	struct FPointer                                    PDSHandle;                                     // 0x0060 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	int32_t                                            LastReadFileErrorCode;                         // 0x0068 (0x0004) [0x0000000000003000] (CPF_Native | CPF_Transient)
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                            // 0x0070 (0x0008) [0x0000000000000000]               
	TArray<struct FScriptDelegate>                     EnumerateUserFileCompleteDelegates;            // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadUserFileCompleteDelegates;                 // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteUserFileCompleteDelegates;                // 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     DeleteUserFileCompleteDelegates;               // 0x00A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnEnumerateUserFilesComplete__Delegate;      // 0x00B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadUserFileComplete__Delegate;            // 0x00D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWriteUserFileComplete__Delegate;           // 0x00E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteUserFileComplete__Delegate;          // 0x0100 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.OnlineUserCloudFileInterfaceEOS");
		}

		return uClassPointer;
	};

	void ClearAllDelegates();
	void ClearDeleteUserFileCompleteDelegate(struct FScriptDelegate DeleteUserFileCompleteDelegate);
	void AddDeleteUserFileCompleteDelegate(struct FScriptDelegate DeleteUserFileCompleteDelegate);
	bool DeleteUserFile(struct FString UserId, struct FString Filename, unsigned long bShouldCloudDelete, unsigned long bShouldLocallyDelete);
	void OnDeleteUserFileComplete(unsigned long bWasSuccessful, struct FString UserId, struct FString Filename);
	void ClearWriteUserFileCompleteDelegate(struct FScriptDelegate WriteUserFileCompleteDelegate);
	void AddWriteUserFileCompleteDelegate(struct FScriptDelegate WriteUserFileCompleteDelegate);
	bool WriteUserFile(struct FString UserId, struct FString Filename, TArray<uint8_t>& FileContents);
	void OnWriteUserFileComplete(unsigned long bWasSuccessful, struct FString UserId, struct FString Filename);
	void ClearReadUserFileCompleteDelegate(struct FScriptDelegate ReadUserFileCompleteDelegate);
	void AddReadUserFileCompleteDelegate(struct FScriptDelegate ReadUserFileCompleteDelegate);
	bool ReadUserFile(struct FString UserId, struct FString Filename);
	void OnReadUserFileComplete(unsigned long bWasSuccessful, struct FString UserId, struct FString Filename);
	void GetUserFileList(struct FString UserId, TArray<struct FEmsFile>& UserFiles);
	void ClearEnumerateUserFileCompleteDelegate(struct FScriptDelegate EnumerateUserFileCompleteDelegate);
	void AddEnumerateUserFileCompleteDelegate(struct FScriptDelegate EnumerateUserFileCompleteDelegate);
	void EnumerateUserFiles(struct FString UserId);
	void OnEnumerateUserFilesComplete(unsigned long bWasSuccessful, struct FString UserId);
	bool ClearFile(struct FString UserId, struct FString Filename);
	bool ClearFiles(struct FString UserId);
	bool GetFileContents(struct FString UserId, struct FString Filename, TArray<uint8_t>& FileContents);
};

// Class OnlineSubsystemEOS.OnlineVoiceInterfaceEOS
// 0x0100 (0x0060 - 0x0160)
class UOnlineVoiceInterfaceEOS : public UObject
{
public:
	struct FPointer                                    RTCHandle;                                     // 0x0060 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    RTCAudioHandle;                                // 0x0068 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    RTCAdminHandle;                                // 0x0070 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	class UOnlinePlayerInterfaceEOS*                   PlayerInterfaceEOS;                            // 0x0078 (0x0008) [0x0000000000000000]               
	TArray<struct FVoiceAudioDevice>                   InputAudioDevices;                             // 0x0080 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	TArray<struct FVoiceAudioDevice>                   OutputAudioDevices;                            // 0x0090 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLeftVoiceRoom__Delegate;                // 0x00A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventJoinedVoiceRoom__Delegate;              // 0x00B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventRemovedFromVoiceRoom__Delegate;         // 0x00D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerJoinedVoiceRoom__Delegate;        // 0x00E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerLeftVoiceRoom__Delegate;          // 0x0100 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerStatusChanged__Delegate;          // 0x0118 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;        // 0x0130 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;             // 0x0148 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.OnlineVoiceInterfaceEOS");
		}

		return uClassPointer;
	};

	bool SetVoiceReceiveVolume(float VoiceVolume);
	bool UnmuteAll(uint8_t LocalUserNum);
	bool MuteAll(uint8_t LocalUserNum, unsigned long bAllowFriends);
	bool SetSpeechRecognitionObject(uint8_t LocalUserNum, class USpeechRecognition* SpeechRecogObj);
	bool SelectVocabulary(uint8_t LocalUserNum, int32_t VocabularyId);
	void ClearRecognitionCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RecognitionDelegate);
	void AddRecognitionCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RecognitionDelegate);
	bool GetRecognitionResults(uint8_t LocalUserNum, TArray<struct FSpeechRecognizedWord>& Words);
	bool StopSpeechRecognition(uint8_t LocalUserNum);
	bool StartSpeechRecognition(uint8_t LocalUserNum);
	void StopNetworkedVoice(uint8_t LocalUserNum);
	void StartNetworkedVoice(uint8_t LocalUserNum);
	void ClearPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate);
	void AddPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate);
	bool UnmuteRemoteTalker(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide);
	bool MuteRemoteTalker(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide);
	bool SetRemoteTalkerPriority(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, int32_t Priority);
	bool IsHeadsetPresent(uint8_t LocalUserNum);
	bool IsRemotePlayerTalking(struct FUniqueNetId PlayerID);
	bool IsLocalPlayerTalking(uint8_t LocalUserNum);
	bool UnregisterRemoteTalker(struct FUniqueNetId PlayerID);
	bool RegisterRemoteTalker(struct FUniqueNetId PlayerID);
	bool UnregisterLocalTalker(uint8_t LocalUserNum);
	bool RegisterLocalTalker(uint8_t LocalUserNum);
	void OnRecognitionComplete();
	void OnPlayerTalkingStateChange(struct FUniqueNetId Player, unsigned long bIsTalking);
	void SetPlayerBlockStatus(unsigned long bBlocked, struct FString& LocalEpicAccountId, struct FString& TargetEpicAccountId, struct FString& RoomName);
	void SetPlayerMuteStatus(unsigned long bMuted, struct FString& LocalEpicAccountId, struct FString& TargetEpicAccountId, struct FString& RoomName);
	uint8_t GetUserState(struct FString& EpicAccountId);
	struct FString GetCurrentRoomNameForUser(struct FString& EpicAccountId);
	bool LeaveVoiceRoom(struct FString& EpicAccountId, struct FString& RoomName);
	bool JoinVoiceRoom(struct FString& EpicAccountId, struct FString& RoomName, struct FString& ClientBaseUrl, struct FString& JoinToken);
	bool SetAudioOutputDevice(float OutputVolume, struct FString& EpicAccountId, struct FString& DeviceID);
	bool SetAudioInputDevice(float InputVolume, struct FString& EpicAccountId, struct FString& DeviceID);
	void SetLocalPlayerRegisteredStatus(unsigned long bRegister, struct FString& PlatformId);
	void CacheOutputAudioDevices();
	void CacheInputAudioDevices();
	void Init();
	void EventPlayerStatusChanged(struct FString EpicAccountId, struct FString RoomName, struct FVoiceRoomMemberStatus MemberStatus);
	void EventPlayerLeftVoiceRoom(struct FString EpicAccountId, struct FString RoomName);
	void EventPlayerJoinedVoiceRoom(struct FString EpicAccountId, struct FString RoomName);
	void EventRemovedFromVoiceRoom(struct FString EpicAccountId, struct FString RoomName, uint8_t RemovedResult);
	void EventJoinedVoiceRoom(struct FString EpicAccountId, struct FString RoomName, uint8_t JoinResult);
	void EventLeftVoiceRoom(struct FString EpicAccountId, struct FString RoomName, uint8_t LeaveResult);
};

// Class OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__LinkedAccount_2FA5512A4E5356722DD5479B425A4538
// 0x0004 (0x0060 - 0x0064)
class U__OnlinePlayerInterfaceEOS__LinkedAccount_2FA5512A4E5356722DD5479B425A4538 : public UObject
{
public:
	int32_t                                            LocalUserNum;                                  // 0x0060 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__LinkedAccount_2FA5512A4E5356722DD5479B425A4538");
		}

		return uClassPointer;
	};

	void __OnlinePlayerInterfaceEOS__LinkedAccount_2FA5512A4E5356722DD5479B425A4538(int32_t _, struct FString PlatformAuthTicket);
};

// Class OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_8B525AF64E91E4581EBEF186F52568D2
// 0x0020 (0x0060 - 0x0080)
class U__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_8B525AF64E91E4581EBEF186F52568D2 : public UObject
{
public:
	int32_t                                            LocalUserNum;                                  // 0x0060 (0x0004) [0x0000000000000000]               
	struct FScriptDelegate                             Callback;                                      // 0x0068 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class OnlineSubsystemEOS.__OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_8B525AF64E91E4581EBEF186F52568D2");
		}

		return uClassPointer;
	};

	void __OnlinePlayerInterfaceEOS__RequestNativePlatformAuthTicket_8B525AF64E91E4581EBEF186F52568D2(unsigned long bSuccess, struct FString Code);
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
