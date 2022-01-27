/*
#############################################################################################
# Rocket League (220114.63961.361013) SDK
# Generated with the UE3SDKGenerator v2.0.8
# ========================================================================================= #
# File: IpDrv_classes.hpp
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

#define CONST_PLAYER_MATCH                                       0
#define CONST_RANKED_MATCH                                       1
#define CONST_REC_MATCH                                          2
#define CONST_PRIVATE_MATCH                                      3
#define CONST_RANKEDPROVIDERTAG                                  "PlaylistsRanked"
#define CONST_UNRANKEDPROVIDERTAG                                "PlaylistsUnranked"
#define CONST_RECMODEPROVIDERTAG                                 "PlaylistsRecMode"
#define CONST_PRIVATEPROVIDERTAG                                 "PlaylistsPrivate"

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum IpDrv.AdHocDelegates.EAdHocDesiredState
enum class EAdHocDesiredState : uint8_t
{
	AHDS_None                                          = 0,
	AHDS_Initialized                                   = 1,
	AHDS_CreateAccessPoint                             = 2,
	AHDS_CreateStation                                 = 3,
	AHDS_ScanForAccessPoints                           = 4,
	AHDS_ConnectToChosenStation                        = 5,
	AHDS_DisconnectSpecifiedStation                    = 6,
	AHDS_DisconnectFromAccessPoint                     = 7,
	AHDS_AccessPointRejecting                          = 8,
	AHDS_Exit                                          = 9,
	AHDS_Max                                           = 10
};

// Enum IpDrv.AdHocDelegates.EAdHocCurrentState
enum class EAdHocCurrentState : uint8_t
{
	AHCS_None                                          = 0,
	AHCS_Initializing                                  = 1,
	AHCS_Initialized                                   = 2,
	AHCS_Station                                       = 3,
	AHCS_StationScanning                               = 4,
	AHCS_StationConnecting                             = 5,
	AHCS_StationConnected                              = 6,
	AHCS_StationDisconnected                           = 7,
	AHCS_StationClosing                                = 8,
	AHCS_AccessPointCreating                           = 9,
	AHCS_AccessPointCreated                            = 10,
	AHCS_AccessPointScanning                           = 11,
	AHCS_AccessPointRejecting                          = 12,
	AHCS_AccessPointClosing                            = 13,
	AHCS_Finalizing                                    = 14,
	AHCS_Error                                         = 15,
	AHCS_END                                           = 16
};

// Enum IpDrv.OnlineImageDownloaderWeb.EOnlineImageDownloadState
enum class EOnlineImageDownloadState : uint8_t
{
	PIDS_NotStarted                                    = 0,
	PIDS_Downloading                                   = 1,
	PIDS_Succeeded                                     = 2,
	PIDS_Failed                                        = 3,
	PIDS_END                                           = 4
};

// Enum IpDrv.InternetLink.ELinkMode
enum class ELinkMode : uint8_t
{
	MODE_Text                                          = 0,
	MODE_Line                                          = 1,
	MODE_Binary                                        = 2,
	MODE_END                                           = 3
};

// Enum IpDrv.InternetLink.EReceiveMode
enum class EReceiveMode : uint8_t
{
	RMODE_Manual                                       = 0,
	RMODE_Event                                        = 1,
	RMODE_END                                          = 2
};

// Enum IpDrv.InternetLink.ELineMode
enum class ELineMode : uint8_t
{
	LMODE_auto                                         = 0,
	LMODE_DOS                                          = 1,
	LMODE_UNIX                                         = 2,
	LMODE_MAC                                          = 3,
	LMODE_END                                          = 4
};

// Enum IpDrv.McpClashMobBase.McpChallengeFileStatus
enum class EMcpChallengeFileStatus : uint8_t
{
	MCFS_NotStarted                                    = 0,
	MCFS_Pending                                       = 1,
	MCFS_Success                                       = 2,
	MCFS_Failed                                        = 3,
	MCFS_END                                           = 4
};

// Enum IpDrv.OnlineTitleFileDownloadBase.EMcpFileCompressionType
enum class EMcpFileCompressionType : uint8_t
{
	MFCT_NONE                                          = 0,
	MFCT_ZLIB                                          = 1,
	MFCT_END                                           = 2
};

// Enum IpDrv.McpGroupsBase.EMcpGroupAccessLevel
enum class EMcpGroupAccessLevel : uint8_t
{
	MGAL_Owner                                         = 0,
	MGAL_Member                                        = 1,
	MGAL_Public                                        = 2,
	MGAL_END                                           = 3
};

// Enum IpDrv.McpGroupsBase.EMcpGroupAcceptState
enum class EMcpGroupAcceptState : uint8_t
{
	MGAS_Error                                         = 0,
	MGAS_Pending                                       = 1,
	MGAS_Accepted                                      = 2,
	MGAS_END                                           = 3
};

// Enum IpDrv.McpMessageBase.EMcpMessageCompressionType
enum class EMcpMessageCompressionType : uint8_t
{
	MMCT_NONE                                          = 0,
	MMCT_LZO                                           = 1,
	MMCT_ZLIB                                          = 2,
	MMCT_END                                           = 3
};

// Enum IpDrv.MeshBeacon.EMeshBeaconPacketType
enum class EMeshBeaconPacketType : uint8_t
{
	MB_Packet_UnknownType                              = 0,
	MB_Packet_ClientNewConnectionRequest               = 1,
	MB_Packet_ClientBeginBandwidthTest                 = 2,
	MB_Packet_ClientCreateNewSessionResponse           = 3,
	MB_Packet_HostNewConnectionResponse                = 4,
	MB_Packet_HostBandwidthTestRequest                 = 5,
	MB_Packet_HostCompletedBandwidthTest               = 6,
	MB_Packet_HostTravelRequest                        = 7,
	MB_Packet_HostCreateNewSessionRequest              = 8,
	MB_Packet_DummyData                                = 9,
	MB_Packet_Heartbeat                                = 10,
	MB_Packet_END                                      = 11
};

// Enum IpDrv.MeshBeacon.EMeshBeaconConnectionResult
enum class EMeshBeaconConnectionResult : uint8_t
{
	MB_ConnectionResult_Succeeded                      = 0,
	MB_ConnectionResult_Duplicate                      = 1,
	MB_ConnectionResult_Timeout                        = 2,
	MB_ConnectionResult_Error                          = 3,
	MB_ConnectionResult_END                            = 4
};

// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestState
enum class EMeshBeaconBandwidthTestState : uint8_t
{
	MB_BandwidthTestState_NotStarted                   = 0,
	MB_BandwidthTestState_RequestPending               = 1,
	MB_BandwidthTestState_StartPending                 = 2,
	MB_BandwidthTestState_InProgress                   = 3,
	MB_BandwidthTestState_Completed                    = 4,
	MB_BandwidthTestState_Incomplete                   = 5,
	MB_BandwidthTestState_Timeout                      = 6,
	MB_BandwidthTestState_Error                        = 7,
	MB_BandwidthTestState_END                          = 8
};

// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestResult
enum class EMeshBeaconBandwidthTestResult : uint8_t
{
	MB_BandwidthTestResult_Succeeded                   = 0,
	MB_BandwidthTestResult_Timeout                     = 1,
	MB_BandwidthTestResult_Error                       = 2,
	MB_BandwidthTestResult_END                         = 3
};

// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestType
enum class EMeshBeaconBandwidthTestType : uint8_t
{
	MB_BandwidthTestType_Upstream                      = 0,
	MB_BandwidthTestType_Downstream                    = 1,
	MB_BandwidthTestType_RoundtripLatency              = 2,
	MB_BandwidthTestType_END                           = 3
};

// Enum IpDrv.MeshBeaconClient.EMeshBeaconClientState
enum class EMeshBeaconClientState : uint8_t
{
	MBCS_None                                          = 0,
	MBCS_Connecting                                    = 1,
	MBCS_Connected                                     = 2,
	MBCS_ConnectionFailed                              = 3,
	MBCS_AwaitingResponse                              = 4,
	MBCS_Closed                                        = 5,
	MBCS_END                                           = 6
};

// Enum IpDrv.OnlineEventsInterfaceMcp.EEventUploadType
enum class EEventUploadType : uint8_t
{
	EUT_GenericStats                                   = 0,
	EUT_ProfileData                                    = 1,
	EUT_MatchmakingData                                = 2,
	EUT_PlaylistPopulation                             = 3,
	EUT_END                                            = 4
};

// Enum IpDrv.PartyBeacon.EReservationPacketType
enum class EReservationPacketType : uint8_t
{
	RPT_UnknownPacketType                              = 0,
	RPT_ClientReservationRequest                       = 1,
	RPT_ClientReservationUpdateRequest                 = 2,
	RPT_ClientCancellationRequest                      = 3,
	RPT_HostReservationResponse                        = 4,
	RPT_HostReservationCountUpdate                     = 5,
	RPT_HostTravelRequest                              = 6,
	RPT_HostIsReady                                    = 7,
	RPT_HostHasCancelled                               = 8,
	RPT_Heartbeat                                      = 9,
	RPT_END                                            = 10
};

// Enum IpDrv.PartyBeacon.EPartyReservationResult
enum class EPartyReservationResult : uint8_t
{
	PRR_GeneralError                                   = 0,
	PRR_PartyLimitReached                              = 1,
	PRR_IncorrectPlayerCount                           = 2,
	PRR_RequestTimedOut                                = 3,
	PRR_ReservationDuplicate                           = 4,
	PRR_ReservationNotFound                            = 5,
	PRR_ReservationAccepted                            = 6,
	PRR_ReservationDenied                              = 7,
	PRR_END                                            = 8
};

// Enum IpDrv.PartyBeaconClient.EPartyBeaconClientRequest
enum class EPartyBeaconClientRequest : uint8_t
{
	PBClientRequest_NewReservation                     = 0,
	PBClientRequest_UpdateReservation                  = 1,
	PBClientRequest_END                                = 2
};

// Enum IpDrv.PartyBeaconClient.EPartyBeaconClientState
enum class EPartyBeaconClientState : uint8_t
{
	PBCS_None                                          = 0,
	PBCS_Connecting                                    = 1,
	PBCS_Connected                                     = 2,
	PBCS_ConnectionFailed                              = 3,
	PBCS_AwaitingResponse                              = 4,
	PBCS_Closed                                        = 5,
	PBCS_END                                           = 6
};

// Enum IpDrv.PartyBeaconHost.EPartyBeaconHostState
enum class EPartyBeaconHostState : uint8_t
{
	PBHS_AllowReservations                             = 0,
	PBHS_DenyReservations                              = 1,
	PBHS_END                                           = 2
};

// Enum IpDrv.TcpLink.ELinkState
enum class ELinkState : uint8_t
{
	STATE_Initialized                                  = 0,
	STATE_Ready                                        = 1,
	STATE_Listening                                    = 2,
	STATE_Connecting                                   = 3,
	STATE_Connected                                    = 4,
	STATE_ListenClosePending                           = 5,
	STATE_ConnectClosePending                          = 6,
	STATE_ListenClosing                                = 7,
	STATE_ConnectClosing                               = 8,
	STATE_END                                          = 9
};

// Enum IpDrv.TitleFileDownloadCache.ETitleFileFileOp
enum class ETitleFileFileOp : uint8_t
{
	TitleFile_None                                     = 0,
	TitleFile_Save                                     = 1,
	TitleFile_Load                                     = 2,
	TitleFile_END                                      = 3
};

// Enum IpDrv.WebRequest.ERequestType
enum class ERequestType : uint8_t
{
	Request_GET                                        = 0,
	Request_POST                                       = 1,
	Request_END                                        = 2
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class IpDrv.AdHocDelegates
// 0x00D8 (0x0060 - 0x0138)
class UAdHocDelegates : public UObject
{
public:
	struct FScriptDelegate                             __EventAdHocOnNetworkChanged__Delegate;        // 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAdHocError__Delegate;                   // 0x0078 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAdHocInitialized__Delegate;             // 0x0090 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAccessPointCreated__Delegate;           // 0x00A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventBecomeStation__Delegate;                // 0x00C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventStationConnected__Delegate;             // 0x00D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventStationDisconnected__Delegate;          // 0x00F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAdHocFinalized__Delegate;               // 0x0108 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAdHocDestroyed__Delegate;               // 0x0120 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.AdHocDelegates");
		}

		return uClassPointer;
	};

	void EventAdHocDestroyed();
	void EventAdHocFinalized();
	void EventStationDisconnected();
	void EventStationConnected();
	void EventBecomeStation();
	void EventAccessPointCreated();
	void EventAdHocInitialized();
	void EventAdHocError(class UError* Error);
	void EventAdHocOnNetworkChanged(TArray<struct FAdHocAccessPointInfo> Ahapis);
};

// Class IpDrv.AdHocErrors
// 0x0008 (0x0080 - 0x0088)
class UAdHocErrors : public UErrorList
{
public:
	class UErrorType*                                  AdHocError;                                    // 0x0080 (0x0008) [0x0000000000000002] (CPF_Const)   
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.AdHocErrors");
		}

		return uClassPointer;
	};

};

// Class IpDrv.AvatarDownload
// 0x0080 (0x0060 - 0x00E0)
class UAvatarDownload : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x0060 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     URL;                                           // 0x00A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            AvatarSize;                                    // 0x00B8 (0x0001) [0x0000000000000000]               
	class UTexture*                                    Texture;                                       // 0x00C0 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             Callbacks;                                     // 0x00C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.AvatarDownload");
		}

		return uClassPointer;
	};

};

// Class IpDrv.OnlineSubsystemCommonImpl
// 0x0060 (0x0310 - 0x0370)
class UOnlineSubsystemCommonImpl : public UOnlineSubsystem
{
public:
	struct FPointer                                    VoiceEngine;                                   // 0x0310 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	int32_t                                            MaxLocalTalkers;                               // 0x0318 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxRemoteTalkers;                              // 0x031C (0x0004) [0x0000000000004000] (CPF_Config)  
	unsigned long                                      bIsUsingSpeechRecognition : 1;                 // 0x0320 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	class UOnlineGameInterfaceImpl*                    GameInterfaceImpl;                             // 0x0328 (0x0008) [0x0000000000000000]               
	class UOnlineAuthInterfaceImpl*                    AuthInterfaceImpl;                             // 0x0330 (0x0008) [0x0000000000000000]               
	class UOnlinePurchaseInterfaceImpl*                PurchaseInterfaceImpl;                         // 0x0338 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __OnSanitizeStringComplete__Delegate;          // 0x0340 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlayerCountryRetrieved__Delegate;          // 0x0358 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineSubsystemCommonImpl");
		}

		return uClassPointer;
	};

	void GetRegisteredPlayers(struct FName SessionName, TArray<struct FUniqueNetId>& OutRegisteredPlayers);
	bool IsPlayerInSession(struct FName SessionName, struct FUniqueNetId PlayerID);
	struct FString eventGetPlayerNicknameFromIndex(int32_t UserIndex);
	void OnPlayerCountryRetrieved(struct FUniqueNetId PlayerID, struct FString Country);
	void OnSanitizeStringComplete(struct FWordFilterResult Result);
};

// Class IpDrv.AvatarDownloadComponent
// 0x0010 (0x0070 - 0x0080)
class UAvatarDownloadComponent : public UComponent
{
public:
	class UAvatarDownloadMap*                          AvatarDownloadCache;                           // 0x0070 (0x0008) [0x0000004004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UOnlineImageDownloaderWeb*                   ImageDownloader;                               // 0x0078 (0x0008) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.AvatarDownloadComponent");
		}

		return uClassPointer;
	};

	void TriggerAvatarCallbacks(class UAvatarDownload* Avatar);
	void HandleOnlineImageDownloaded(struct FOnlineImageDownload ImageInfo);
	class UAvatarDownload* GetAvatar(struct FUniqueNetId PlayerID, uint8_t Size);
	void ClearPendingDownloads();
	void CleanupAvatars();
	void DownloadAvatar(struct FUniqueNetId PlayerID, uint8_t Size, struct FString URL);
	void StoreNewAvatars(uint8_t Size, struct FScriptDelegate ReadOnlineAvatarCompleteDelegate, TArray<struct FUniqueNetId>& NewPlayerIDs);
	void ProcessOldRequests(uint8_t SizeType, struct FScriptDelegate ReadOnlineAvatarCompleteDelegate, TArray<struct FUniqueNetId>& InPlayerIDs, TArray<struct FUniqueNetId>& NewRequestIDs);
	bool TryAddAvatarTextureCallback(struct FUniqueNetId PlayerNetId, uint8_t Size, struct FScriptDelegate ReadOnlineAvatarCompleteDelegate);
};

// Class IpDrv.AvatarDownloadMap
// 0x00F0 (0x0070 - 0x0160)
class UAvatarDownloadMap : public UComponent
{
public:
	struct FMap_Mirror                                 AvatarMap;                                     // 0x0070 (0x0050) [0x0000000000001000] (CPF_Native)  
	struct FMap_Mirror                                 ImageMap;                                      // 0x00C0 (0x0050) [0x0000000000001000] (CPF_Native)  
	struct FMap_Mirror                                 AvatarsPendingImages;                          // 0x0110 (0x0050) [0x0000000000001000] (CPF_Native)  
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.AvatarDownloadMap");
		}

		return uClassPointer;
	};

	bool ContainsImage(struct FString Key);
	bool ContainsAvatar(struct FAvatarKey& Key);
	void OnAvatarReceivedImage(class UAvatarDownload* Avatar);
	void RemoveImage(struct FString Key);
	void RemoveAvatar(struct FAvatarKey& Key);
	void RemoveAllNetIDs(struct FUniqueNetId& PlayerID);
	void ClearAvatarsPendingImages();
	void ClearImages();
	void ClearAvatars();
	void Clear();
	bool TryGetImage(struct FString Key, class UTexture*& OutValue);
	bool TryGetAvatar(struct FAvatarKey& Key, class UAvatarDownload*& OutValue);
	void GetAvatarsPendingImage(struct FString Key, TArray<class UAvatarDownload*>& OutAvatars);
	class UTexture* GetImage(struct FString Key);
	class UAvatarDownload* GetAvatar(struct FAvatarKey& Key);
	void AddAvatarPendingImage(class UAvatarDownload* Avatar);
	void SetImage(struct FString URL, class UTexture* Value);
	void SetAvatar(class UAvatarDownload* Value);
	int32_t CountAvatars();
	void AllValues(int32_t StartIndex, int32_t MaxValues, class UAvatarDownload*& OutAvatar);
};

// Class IpDrv.ClientBeaconAddressResolver
// 0x000C (0x0060 - 0x006C)
class UClientBeaconAddressResolver : public UObject
{
public:
	int32_t                                            BeaconPort;                                    // 0x0060 (0x0004) [0x0000000000000000]               
	struct FName                                       BeaconName;                                    // 0x0064 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.ClientBeaconAddressResolver");
		}

		return uClassPointer;
	};

};

// Class IpDrv.HTTPDownload
// 0x0140 (0x0AB0 - 0x0BF0)
class UHTTPDownload : public UDownload
{
public:
	struct FString                                     ProxyServerHost;                               // 0x0AB0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	int32_t                                            ProxyServerPort;                               // 0x0AC0 (0x0004) [0x0000000000004000] (CPF_Config)  
	unsigned long                                      MaxRedirection : 1;                            // 0x0AC4 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	float                                              ConnectionTimeout;                             // 0x0AC8 (0x0004) [0x0000000000004000] (CPF_Config)  
	uint8_t                                            UnknownData00[0x124];                          // 0x0ACC (0x0124) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.HTTPDownload");
		}

		return uClassPointer;
	};

};

// Class IpDrv.HttpRequestCurl
// 0x0038 (0x0078 - 0x00B0)
class UHttpRequestCurl : public UHttpRequestInterface
{
public:
	struct FPointer                                    Request;                                       // 0x0078 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FString                                     RequestVerb;                                   // 0x0080 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FString                                     RequestURL;                                    // 0x0090 (0x0010) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	TArray<uint8_t>                                    Payload;                                       // 0x00A0 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.HttpRequestCurl");
		}

		return uClassPointer;
	};

	bool ProcessRequest();
	class UHttpRequestInterface* SetHeader(struct FString HeaderName, struct FString HeaderValue);
	class UHttpRequestInterface* SetContentAsString(struct FString ContentString);
	class UHttpRequestInterface* SetContent(TArray<uint8_t>& ContentPayload);
	class UHttpRequestInterface* SetURL(struct FString URL);
	class UHttpRequestInterface* SetVerb(struct FString Verb);
	struct FString GetVerb();
	void GetContent(TArray<uint8_t>& Content);
	struct FString GetURL();
	int32_t GetContentLength();
	struct FString GetContentType();
	struct FString GetURLParameter(struct FString ParameterName);
	TArray<struct FString> GetHeaders();
	struct FString GetHeader(struct FString HeaderName);
};

// Class IpDrv.HttpResponseCurl
// 0x0018 (0x0060 - 0x0078)
class UHttpResponseCurl : public UHttpResponseInterface
{
public:
	struct FPointer                                    Response;                                      // 0x0060 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	TArray<uint8_t>                                    Payload;                                       // 0x0068 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.HttpResponseCurl");
		}

		return uClassPointer;
	};

	int32_t GetResponseCode();
	struct FString GetContentAsString();
	void GetContent(TArray<uint8_t>& Content);
	struct FString GetURL();
	int32_t GetContentLength();
	struct FString GetContentType();
	struct FString GetURLParameter(struct FString ParameterName);
	TArray<struct FString> GetHeaders();
	struct FString GetHeader(struct FString HeaderName);
};

// Class IpDrv.ImageDecoder
// 0x0030 (0x0060 - 0x0090)
class UImageDecoder : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	TArray<struct FDecodeImageRequest>                 ActiveDecodeRequests;                          // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ImageDecodedDelegate__Delegate;              // 0x0078 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.ImageDecoder");
		}

		return uClassPointer;
	};

	void RequestDecodeImage(struct FString RequestURL, uint8_t ImageType, struct FScriptDelegate FinishedCallback, TArray<uint8_t>& ImageData);
	void ImageDecodedDelegate(struct FString RequestURL, struct FImageLayout Image);
};

// Class IpDrv.InternetLink
// 0x002C (0x0268 - 0x0294)
class AInternetLink : public AInfo
{
public:
	uint8_t                                            LinkMode;                                      // 0x0268 (0x0001) [0x0000000000000000]               
	uint8_t                                            InLineMode;                                    // 0x0269 (0x0001) [0x0000000000000000]               
	uint8_t                                            OutLineMode;                                   // 0x026A (0x0001) [0x0000000000000000]               
	uint8_t                                            ReceiveMode;                                   // 0x026B (0x0001) [0x0000000000000000]               
	struct FPointer                                    Socket;                                        // 0x0270 (0x0008) [0x0000000000000002] (CPF_Const)   
	int32_t                                            Port;                                          // 0x0278 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FPointer                                    RemoteSocket;                                  // 0x0280 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FPointer                                    PrivateResolveInfo;                            // 0x0288 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            DataPending;                                   // 0x0290 (0x0004) [0x0000000000000002] (CPF_Const)   
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.InternetLink");
		}

		return uClassPointer;
	};

	void eventResolveFailed();
	void eventResolved(struct FIpAddr Addr);
	void GetLocalIP(struct FIpAddr& Arg);
	bool StringToIpAddr(struct FString Str, struct FIpAddr& Addr);
	struct FString IpAddrToString(struct FIpAddr Arg);
	int32_t GetLastError();
	void Resolve(struct FString Domain);
	bool ParseURL(struct FString URL, struct FString& Addr, int32_t& PortNum, struct FString& LevelName, struct FString& EntryName);
	bool IsDataPending();
};

// Class IpDrv.TcpLink
// 0x0044 (0x0294 - 0x02D8)
class ATcpLink : public AInternetLink
{
public:
	uint8_t                                            LinkState;                                     // 0x0298 (0x0001) [0x0000000000000000]               
	struct FIpAddr                                     RemoteAddr;                                    // 0x029C (0x0014) [0x0000000000000000]               
	class UClass*                                      AcceptClass;                                   // 0x02B0 (0x0008) [0x0000000000000000]               
	TArray<uint8_t>                                    SendFIFO;                                      // 0x02B8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FString                                     RecvBuf;                                       // 0x02C8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.TcpLink");
		}

		return uClassPointer;
	};

	void eventReceivedBinary(int32_t Count, uint8_t B);
	void eventReceivedLine(struct FString Line);
	void eventReceivedText(struct FString Text);
	void eventClosed();
	void eventOpened();
	void eventAccepted();
	int32_t ReadBinary(int32_t Count, uint8_t& B);
	int32_t ReadText(struct FString& Str);
	int32_t SendBinary(int32_t Count, uint8_t B);
	int32_t SendText(struct FString Str);
	bool IsConnected();
	bool Close();
	bool Open(struct FIpAddr Addr);
	bool Listen();
	int32_t BindPort(int32_t PortNum, unsigned long bUseNextAvailable);
};

// Class IpDrv.McpServiceBase
// 0x0018 (0x0060 - 0x0078)
class UMcpServiceBase : public UObject
{
public:
	struct FString                                     McpConfigClassName;                            // 0x0060 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UMcpServiceConfig*                           McpConfig;                                     // 0x0070 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpServiceBase");
		}

		return uClassPointer;
	};

	struct FString GetUserAuthURL(struct FString McpId);
	struct FString GetAppAccessURL();
	struct FString GetBaseURL();
	void eventInit();
};

// Class IpDrv.MCPBase
// 0x0008 (0x0078 - 0x0080)
class UMCPBase : public UMcpServiceBase
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0078 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.MCPBase");
		}

		return uClassPointer;
	};

};

// Class IpDrv.OnlineEventsInterfaceMcp
// 0x0034 (0x0080 - 0x00B4)
class UOnlineEventsInterfaceMcp : public UMCPBase
{
public:
	TArray<struct FEventUploadConfig>                  EventUploadConfigs;                            // 0x0080 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	TArray<struct FPointer>                            MCPEventPostObjects;                           // 0x0090 (0x0010) [0x0000000000001002] (CPF_Const | CPF_Native)
	TArray<uint8_t>                                    DisabledUploadTypes;                           // 0x00A0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	unsigned long                                      bBinaryStats : 1;                              // 0x00B0 (0x0004) [0x0000000000004002] [0x00000001] (CPF_Const | CPF_Config)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineEventsInterfaceMcp");
		}

		return uClassPointer;
	};

	bool UploadMatchmakingStats(struct FUniqueNetId UniqueId, class UOnlineMatchmakingStats* MMStats);
	bool UpdatePlaylistPopulation(int32_t PlaylistId, int32_t NumPlayers);
	bool UploadGameplayEventsData(struct FUniqueNetId UniqueId, TArray<uint8_t>& Payload);
	bool UploadPlayerData(struct FUniqueNetId UniqueId, struct FString PlayerNick, class UOnlineProfileSettings* ProfileSettings, class UOnlinePlayerStorage* PlayerStorage);
};

// Class IpDrv.OnlineNewsInterfaceMcp
// 0x0040 (0x0080 - 0x00C0)
class UOnlineNewsInterfaceMcp : public UMCPBase
{
public:
	TArray<struct FNewsCacheEntry>                     NewsItems;                                     // 0x0080 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadNewsDelegates;                             // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bNeedsTicking : 1;                             // 0x00A0 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	struct FScriptDelegate                             __OnReadNewsCompleted__Delegate;               // 0x00A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineNewsInterfaceMcp");
		}

		return uClassPointer;
	};

	struct FString GetNews(uint8_t LocalUserNum, uint8_t NewsType);
	void ClearReadNewsCompletedDelegate(struct FScriptDelegate ReadGameNewsDelegate);
	void AddReadNewsCompletedDelegate(struct FScriptDelegate ReadNewsDelegate);
	void OnReadNewsCompleted(unsigned long bWasSuccessful, uint8_t NewsType);
	bool ReadNews(uint8_t LocalUserNum, uint8_t NewsType);
};

// Class IpDrv.OnlineTitleFileDownloadBase
// 0x0098 (0x0080 - 0x0118)
class UOnlineTitleFileDownloadBase : public UMCPBase
{
public:
	TArray<struct FScriptDelegate>                     ReadTitleFileCompleteDelegates;                // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     RequestTitleFileListCompleteDelegates;         // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     BaseUrl;                                       // 0x00A0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     RequestFileListURL;                            // 0x00B0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     RequestFileURL;                                // 0x00C0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	float                                              Timeout;                                       // 0x00D0 (0x0004) [0x0000000000004000] (CPF_Config)  
	TArray<struct FFileNameToURLMapping>               FilesToUrls;                                   // 0x00D8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;           // 0x00E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRequestTitleFileListComplete__Delegate;    // 0x0100 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineTitleFileDownloadBase");
		}

		return uClassPointer;
	};

	struct FString GetUrlForFile(struct FString Filename);
	void ClearRequestTitleFileListCompleteDelegate(struct FScriptDelegate RequestTitleFileListDelegate);
	void AddRequestTitleFileListCompleteDelegate(struct FScriptDelegate RequestTitleFileListDelegate);
	void OnRequestTitleFileListComplete(unsigned long bWasSuccessful, TArray<struct FString> ResultStr);
	bool RequestTitleFileList();
	bool ClearDownloadedFile(struct FString Filename);
	bool ClearDownloadedFiles();
	uint8_t GetTitleFileState(struct FString Filename);
	bool GetTitleFileContents(struct FString Filename, TArray<uint8_t>& FileContents);
	void ClearReadTitleFileCompleteDelegate(struct FScriptDelegate ReadTitleFileCompleteDelegate);
	void AddReadTitleFileCompleteDelegate(struct FScriptDelegate ReadTitleFileCompleteDelegate);
	bool ReadTitleFile(struct FString FileToRead, uint8_t FileType);
	void OnReadTitleFileComplete(unsigned long bWasSuccessful, struct FString Filename);
};

// Class IpDrv.OnlineTitleFileDownloadMcp
// 0x0014 (0x0118 - 0x012C)
class UOnlineTitleFileDownloadMcp : public UOnlineTitleFileDownloadBase
{
public:
	TArray<struct FTitleFileMcp>                       TitleFiles;                                    // 0x0118 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            DownloadCount;                                 // 0x0128 (0x0004) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineTitleFileDownloadMcp");
		}

		return uClassPointer;
	};

	bool ClearDownloadedFile(struct FString Filename);
	bool ClearDownloadedFiles();
	uint8_t GetTitleFileState(struct FString Filename);
	bool GetTitleFileContents(struct FString Filename, TArray<uint8_t>& FileContents);
	bool ReadTitleFile(struct FString FileToRead, uint8_t FileType);
};

// Class IpDrv.OnlineTitleFileDownloadWeb
// 0x0010 (0x0118 - 0x0128)
class UOnlineTitleFileDownloadWeb : public UOnlineTitleFileDownloadBase
{
public:
	TArray<struct FTitleFileWeb>                       TitleFiles;                                    // 0x0118 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineTitleFileDownloadWeb");
		}

		return uClassPointer;
	};

	struct FString GetUrlForFile(struct FString Filename);
	void OnFileListReceived(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bDidSucceed);
	bool RequestTitleFileList();
	bool ClearDownloadedFile(struct FString Filename);
	bool ClearDownloadedFiles();
	uint8_t GetTitleFileState(struct FString Filename);
	bool GetTitleFileContents(struct FString Filename, TArray<uint8_t>& FileContents);
	void TriggerDelegates(unsigned long bSuccess, struct FString FileRead);
	void OnFileDownloadComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bDidSucceed);
	bool ReadTitleFile(struct FString FileToRead, uint8_t FileType);
	bool UncompressTitleFileContents(uint8_t FileCompressionType, TArray<uint8_t>& CompressedFileContents, TArray<uint8_t>& UncompressedFileContents);
};

// Class IpDrv.TitleFileDownloadCache
// 0x0060 (0x0080 - 0x00E0)
class UTitleFileDownloadCache : public UMCPBase
{
public:
	TArray<struct FTitleFileCacheEntry>                TitleFiles;                                    // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LoadCompleteDelegates;                         // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     SaveCompleteDelegates;                         // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLoadTitleFileComplete__Delegate;           // 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnSaveTitleFileComplete__Delegate;           // 0x00C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.TitleFileDownloadCache");
		}

		return uClassPointer;
	};

	bool DeleteTitleFile(struct FString Filename);
	bool DeleteTitleFiles(float MaxAgeSeconds);
	bool ClearCachedFile(struct FString Filename);
	bool ClearCachedFiles();
	struct FString GetTitleFileLogicalName(struct FString Filename);
	struct FString GetTitleFileHash(struct FString Filename);
	uint8_t GetTitleFileState(struct FString Filename);
	bool GetTitleFileContents(struct FString Filename, TArray<uint8_t>& FileContents);
	void ClearSaveTitleFileCompleteDelegate(struct FScriptDelegate SaveCompleteDelegate);
	void AddSaveTitleFileCompleteDelegate(struct FScriptDelegate SaveCompleteDelegate);
	void OnSaveTitleFileComplete(unsigned long bWasSuccessful, struct FString Filename);
	bool SaveTitleFile(struct FString Filename, struct FString LogicalName, TArray<uint8_t> FileContents);
	void ClearLoadTitleFileCompleteDelegate(struct FScriptDelegate LoadCompleteDelegate);
	void AddLoadTitleFileCompleteDelegate(struct FScriptDelegate LoadCompleteDelegate);
	void OnLoadTitleFileComplete(unsigned long bWasSuccessful, struct FString Filename);
	bool LoadTitleFile(struct FString Filename);
};

// Class IpDrv.McpMessageBase
// 0x0098 (0x0078 - 0x0110)
class UMcpMessageBase : public UMcpServiceBase
{
public:
	struct FString                                     McpMessageManagerClassName;                    // 0x0078 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	uint8_t                                            CompressionType;                               // 0x0088 (0x0001) [0x0000000000004000] (CPF_Config)  
	TArray<struct FMcpMessageContents>                 MessageContentsList;                           // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FMcpMessageList>                     MessageLists;                                  // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateMessageComplete__Delegate;           // 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteMessageComplete__Delegate;           // 0x00C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryMessagesComplete__Delegate;           // 0x00E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryMessageContentsComplete__Delegate;    // 0x00F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpMessageBase");
		}

		return uClassPointer;
	};

	bool CacheMessageContents(struct FString MessageId, TArray<uint8_t>& MessageContents);
	void CacheMessage(struct FMcpMessage Message);
	bool GetMessageContents(struct FString MessageId, TArray<uint8_t>& MessageContents);
	void OnQueryMessageContentsComplete(struct FString MessageId, unsigned long bWasSuccessful, struct FString Error);
	void QueryMessageContents(struct FString MessageId);
	void GetMessageList(struct FString ToUniqueUserId, struct FMcpMessageList& MessageList);
	void OnQueryMessagesComplete(struct FString UserId, unsigned long bWasSuccessful, struct FString Error);
	void QueryMessages(struct FString ToUniqueUserId);
	void OnDeleteMessageComplete(struct FString MessageId, unsigned long bWasSuccessful, struct FString Error);
	void DeleteMessage(struct FString MessageId);
	void OnCreateMessageComplete(struct FMcpMessage Message, unsigned long bWasSuccessful, struct FString Error);
	void CreateMessage(struct FString FromUniqueUserId, struct FString FromFriendlyName, struct FString MessageType, struct FString PushMessage, struct FString ValidUntil, TArray<struct FString>& ToUniqueUserIds, TArray<uint8_t>& MessageContents);
	class UMcpMessageBase* CreateInstance();
};

// Class IpDrv.McpMessageManager
// 0x0078 (0x0110 - 0x0188)
class UMcpMessageManager : public UMcpMessageBase
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0110 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FString                                     CreateMessageUrl;                              // 0x0118 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     DeleteMessageUrl;                              // 0x0128 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     QueryMessagesUrl;                              // 0x0138 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     QueryMessageContentsUrl;                       // 0x0148 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     DeleteAllMessagesUrl;                          // 0x0158 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FMcpCompressMessageRequest>          CompressMessageRequests;                       // 0x0168 (0x0010) [0x0000000000001000] (CPF_Native)  
	TArray<struct FMcpUncompressMessageRequest>        UncompressMessageRequests;                     // 0x0178 (0x0010) [0x0000000000001000] (CPF_Native)  
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpMessageManager");
		}

		return uClassPointer;
	};

	bool CacheMessageContents(struct FString MessageId, TArray<uint8_t>& MessageContents);
	bool GetMessageById(struct FString MessageId, struct FMcpMessage& Message);
	void CacheMessage(struct FMcpMessage Message);
	bool GetMessageContents(struct FString MessageId, TArray<uint8_t>& MessageContents);
	void OnQueryMessageContentsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful);
	void QueryMessageContents(struct FString MessageId);
	void GetMessageList(struct FString ToUniqueUserId, struct FMcpMessageList& MessageList);
	void OnQueryMessagesRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful);
	void QueryMessages(struct FString ToUniqueUserId);
	void OnDeleteMessageRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful);
	void DeleteMessage(struct FString MessageId);
	void OnCreateMessageRequestComplete(class UHttpRequestInterface* CreateMessageRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful);
	void CreateMessage(struct FString FromUniqueUserId, struct FString FromFriendlyName, struct FString MessageType, struct FString PushMessage, struct FString ValidUntil, TArray<struct FString>& ToUniqueUserIds, TArray<uint8_t>& MessageContents);
	void eventFinishedAsyncUncompression(unsigned long bWasSuccessful, struct FString MessageId, TArray<uint8_t>& UncompressedMessageContents);
	bool StartAsyncUncompression(struct FString MessageId, uint8_t MessageCompressionType, TArray<uint8_t>& MessageContent);
	bool StartAsyncCompression(uint8_t MessageCompressionType, class UHttpRequestInterface* Request, TArray<uint8_t>& MessageContent);
};

// Class IpDrv.McpUserCloudFileDownload
// 0x00F0 (0x0078 - 0x0168)
class UMcpUserCloudFileDownload : public UMcpServiceBase
{
public:
	struct FString                                     EnumerateCloudFilesUrl;                        // 0x0078 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     ReadCloudFileUrl;                              // 0x0088 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     WriteCloudFileUrl;                             // 0x0098 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     DeleteCloudFileUrl;                            // 0x00A8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FMcpUserCloudFilesEntry>             UserCloudFileRequests;                         // 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     EnumerateUserFilesCompleteDelegates;           // 0x00C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadUserFileCompleteDelegates;                 // 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteUserFileCompleteDelegates;                // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     DeleteUserFileCompleteDelegates;               // 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnEnumerateUserFilesComplete__Delegate;      // 0x0108 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadUserFileComplete__Delegate;            // 0x0120 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnWriteUserFileComplete__Delegate;           // 0x0138 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteUserFileComplete__Delegate;          // 0x0150 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpUserCloudFileDownload");
		}

		return uClassPointer;
	};

	void ClearAllDelegates();
	void ClearDeleteUserFileCompleteDelegate(struct FScriptDelegate DeleteUserFileCompleteDelegate);
	void AddDeleteUserFileCompleteDelegate(struct FScriptDelegate DeleteUserFileCompleteDelegate);
	void CallDeleteUserFileCompleteDelegates(unsigned long bWasSuccessful, struct FString UserId, struct FString Filename);
	void OnDeleteUserFileComplete(unsigned long bWasSuccessful, struct FString UserId, struct FString Filename);
	void OnHTTPRequestDeleteUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	bool DeleteUserFile(struct FString UserId, struct FString Filename, unsigned long bShouldCloudDelete, unsigned long bShouldLocallyDelete);
	void ClearWriteUserFileCompleteDelegate(struct FScriptDelegate WriteUserFileCompleteDelegate);
	void AddWriteUserFileCompleteDelegate(struct FScriptDelegate WriteUserFileCompleteDelegate);
	void CallWriteUserFileCompleteDelegates(unsigned long bWasSuccessful, struct FString UserId, struct FString Filename);
	void OnWriteUserFileComplete(unsigned long bWasSuccessful, struct FString UserId, struct FString Filename);
	void OnHTTPRequestWriteUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void GetUserFileIndexForRequest(class UHttpRequestInterface* Request, int32_t& UserIdx, int32_t& FileIdx);
	bool WriteUserFile(struct FString UserId, struct FString Filename, TArray<uint8_t>& FileContents);
	void ClearReadUserFileCompleteDelegate(struct FScriptDelegate ReadUserFileCompleteDelegate);
	void AddReadUserFileCompleteDelegate(struct FScriptDelegate ReadUserFileCompleteDelegate);
	void CallReadUserFileCompleteDelegates(unsigned long bWasSuccessful, struct FString UserId, struct FString Filename);
	void OnReadUserFileComplete(unsigned long bWasSuccessful, struct FString UserId, struct FString Filename);
	void OnHTTPRequestReadUserFileComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	bool ReadUserFile(struct FString UserId, struct FString Filename);
	void GetUserFileList(struct FString UserId, TArray<struct FEmsFile>& UserFiles);
	void ClearEnumerateUserFileCompleteDelegate(struct FScriptDelegate EnumerateUserFileCompleteDelegate);
	void AddEnumerateUserFileCompleteDelegate(struct FScriptDelegate EnumerateUserFileCompleteDelegate);
	void CallEnumerateUserFileCompleteDelegates(unsigned long bWasSuccessful, struct FString UserId);
	void OnEnumerateUserFilesComplete(unsigned long bWasSuccessful, struct FString UserId);
	void OnHTTPRequestEnumerateUserFilesComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void EnumerateUserFiles(struct FString UserId);
	bool ClearFile(struct FString UserId, struct FString Filename);
	bool ClearFiles(struct FString UserId);
	bool GetFileContents(struct FString UserId, struct FString Filename, TArray<uint8_t>& FileContents);
};

// Class IpDrv.MeshBeacon
// 0x0048 (0x0060 - 0x00A8)
class UMeshBeacon : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	int32_t                                            MeshBeaconPort;                                // 0x0068 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FPointer                                    Socket;                                        // 0x0070 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	unsigned long                                      bIsInTick : 1;                                 // 0x0078 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      bWantsDeferredDestroy : 1;                     // 0x0078 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	unsigned long                                      bShouldTick : 1;                               // 0x0078 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              HeartbeatTimeout;                              // 0x007C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ElapsedHeartbeatTime;                          // 0x0080 (0x0004) [0x0000000000000000]               
	struct FName                                       BeaconName;                                    // 0x0084 (0x0008) [0x0000000000000000]               
	int32_t                                            SocketSendBufferSize;                          // 0x008C (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            SocketReceiveBufferSize;                       // 0x0090 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxBandwidthTestBufferSize;                    // 0x0094 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MinBandwidthTestBufferSize;                    // 0x0098 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              MaxBandwidthTestSendTime;                      // 0x009C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              MaxBandwidthTestReceiveTime;                   // 0x00A0 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxBandwidthHistoryEntries;                    // 0x00A4 (0x0004) [0x0000000000004000] (CPF_Config)  
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.MeshBeacon");
		}

		return uClassPointer;
	};

	void eventDestroyBeacon();
};

// Class IpDrv.MeshBeaconClient
// 0x0140 (0x00A8 - 0x01E8)
class UMeshBeaconClient : public UMeshBeacon
{
public:
	struct FOnlineGameSearchResult                     HostPendingRequest;                            // 0x00A8 (0x0010) [0x0000000000000002] (CPF_Const)   
	struct FClientConnectionRequest                    ClientPendingRequest;                          // 0x00B8 (0x0070) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FClientBandwidthTestData                    CurrentBandwidthTest;                          // 0x0128 (0x0014) [0x0000000000000000]               
	uint8_t                                            ClientBeaconState;                             // 0x013C (0x0001) [0x0000000000000000]               
	uint8_t                                            ClientBeaconRequestType;                       // 0x013D (0x0001) [0x0000000000000000]               
	float                                              ConnectionRequestTimeout;                      // 0x0140 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ConnectionRequestElapsedTime;                  // 0x0144 (0x0004) [0x0000000000000000]               
	struct FString                                     ResolverClassName;                             // 0x0148 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UClass*                                      ResolverClass;                                 // 0x0158 (0x0008) [0x0000000000000000]               
	class UClientBeaconAddressResolver*                Resolver;                                      // 0x0160 (0x0008) [0x0000000000000000]               
	unsigned long                                      bUsingRegisteredAddr : 1;                      // 0x0168 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	struct FScriptDelegate                             __OnConnectionRequestResult__Delegate;         // 0x0170 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedBandwidthTestRequest__Delegate;    // 0x0188 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedBandwidthTestResults__Delegate;    // 0x01A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnTravelRequestReceived__Delegate;           // 0x01B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateNewSessionRequestReceived__Delegate; // 0x01D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.MeshBeaconClient");
		}

		return uClassPointer;
	};

	bool SendHostNewGameSessionResponse(unsigned long bSuccess, struct FName SessionName, class UClass* SearchClass, uint8_t& PlatformSpecificInfo);
	void OnCreateNewSessionRequestReceived(struct FName SessionName, class UClass* SearchClass, TArray<struct FPlayerMember>& Players);
	void OnTravelRequestReceived(struct FName SessionName, class UClass* SearchClass, uint8_t& PlatformSpecificInfo);
	void OnReceivedBandwidthTestResults(uint8_t TestType, uint8_t TestResult, struct FConnectionBandwidthStats& BandwidthStats);
	void OnReceivedBandwidthTestRequest(uint8_t TestType);
	void OnConnectionRequestResult(uint8_t ConnectionResult);
	bool BeginBandwidthTest(uint8_t TestType, int32_t TestBufferSize);
	bool RequestConnection(unsigned long bRegisterSecureAddress, struct FOnlineGameSearchResult& DesiredHost, struct FClientConnectionRequest& ClientRequest);
	void eventDestroyBeacon();
};

// Class IpDrv.MeshBeaconHost
// 0x00E8 (0x00A8 - 0x0190)
class UMeshBeaconHost : public UMeshBeacon
{
public:
	TArray<struct FClientMeshBeaconConnection>         ClientConnections;                             // 0x00A8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FUniqueNetId>                        PendingPlayerConnections;                      // 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                OwningPlayerId;                                // 0x00C8 (0x0048) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	unsigned long                                      bAllowBandwidthTesting : 1;                    // 0x0110 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            ConnectionBacklog;                             // 0x0114 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FScriptDelegate                             __OnReceivedClientConnectionRequest__Delegate; // 0x0118 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnStartedBandwidthTest__Delegate;            // 0x0130 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFinishedBandwidthTest__Delegate;           // 0x0148 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAllPendingPlayersConnected__Delegate;      // 0x0160 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedClientCreateNewSessionResult__Delegate;// 0x0178 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.MeshBeaconHost");
		}

		return uClassPointer;
	};

	void OnReceivedClientCreateNewSessionResult(unsigned long bSucceeded, struct FName SessionName, class UClass* SearchClass, uint8_t& PlatformSpecificInfo);
	bool RequestClientCreateNewSession(struct FUniqueNetId PlayerNetId, struct FName SessionName, class UClass* SearchClass, TArray<struct FPlayerMember>& Players);
	void TellClientsToTravel(struct FName SessionName, class UClass* SearchClass, uint8_t& PlatformSpecificInfo);
	void OnAllPendingPlayersConnected();
	bool AllPlayersConnected(TArray<struct FUniqueNetId>& Players);
	int32_t GetConnectionIndexForPlayer(struct FUniqueNetId PlayerNetId);
	void SetPendingPlayerConnections(TArray<struct FUniqueNetId>& Players);
	void OnFinishedBandwidthTest(struct FUniqueNetId PlayerNetId, uint8_t TestType, uint8_t TestResult, struct FConnectionBandwidthStats& BandwidthStats);
	void OnStartedBandwidthTest(struct FUniqueNetId PlayerNetId, uint8_t TestType);
	void OnReceivedClientConnectionRequest(struct FClientMeshBeaconConnection& NewClientConnection);
	void AllowBandwidthTesting(unsigned long bEnabled);
	void CancelPendingBandwidthTests();
	bool HasPendingBandwidthTest();
	void CancelInProgressBandwidthTests();
	bool HasInProgressBandwidthTest();
	bool RequestClientBandwidthTest(struct FUniqueNetId PlayerNetId, uint8_t TestType, int32_t TestBufferSize);
	void eventDestroyBeacon();
	bool InitHostBeacon(struct FUniqueNetId InOwningPlayerId);
};

// Class IpDrv.OnlineAuthInterfaceImpl
// 0x0368 (0x0060 - 0x03C8)
class UOnlineAuthInterfaceImpl : public UObject
{
public:
	struct FPointer                                    VfTable_IOnlineAuthInterface;                  // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	TArray<struct FAuthCodeRequest>                    AuthCodeRequests;                              // 0x0068 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            NextAuthCodeID;                                // 0x0078 (0x0004) [0x0000000000002000] (CPF_Transient)
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                               // 0x0080 (0x0008) [0x0000000000000000]               
	unsigned long                                      bAuthReady : 1;                                // 0x0088 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	struct FSparseArray_Mirror                         ClientAuthSessions;                            // 0x0090 (0x0038) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FSparseArray_Mirror                         ServerAuthSessions;                            // 0x00C8 (0x0038) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FSparseArray_Mirror                         PeerAuthSessions;                              // 0x0100 (0x0038) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FSparseArray_Mirror                         LocalClientAuthSessions;                       // 0x0138 (0x0038) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FSparseArray_Mirror                         LocalServerAuthSessions;                       // 0x0170 (0x0038) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FSparseArray_Mirror                         LocalPeerAuthSessions;                         // 0x01A8 (0x0038) [0x0000000000001002] (CPF_Const | CPF_Native)
	TArray<struct FScriptDelegate>                     AuthReadyDelegates;                            // 0x01E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ClientAuthRequestDelegates;                    // 0x01F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ServerAuthRequestDelegates;                    // 0x0200 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ClientAuthResponseDelegates;                   // 0x0210 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ServerAuthResponseDelegates;                   // 0x0220 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ClientAuthCompleteDelegates;                   // 0x0230 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ServerAuthCompleteDelegates;                   // 0x0240 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ClientAuthEndSessionRequestDelegates;          // 0x0250 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ServerAuthRetryRequestDelegates;               // 0x0260 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ClientConnectionCloseDelegates;                // 0x0270 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ServerConnectionCloseDelegates;                // 0x0280 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAuthReady__Delegate;                       // 0x0290 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnClientAuthRequest__Delegate;               // 0x02A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnServerAuthRequest__Delegate;               // 0x02C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnClientAuthResponse__Delegate;              // 0x02D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnServerAuthResponse__Delegate;              // 0x02F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnClientAuthComplete__Delegate;              // 0x0308 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnServerAuthComplete__Delegate;              // 0x0320 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnClientAuthEndSessionRequest__Delegate;     // 0x0338 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnServerAuthRetryRequest__Delegate;          // 0x0350 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnClientConnectionClose__Delegate;           // 0x0368 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnServerConnectionClose__Delegate;           // 0x0380 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedAuthCode__Delegate;                // 0x0398 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAccountAuthorization__Delegate;            // 0x03B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineAuthInterfaceImpl");
		}

		return uClassPointer;
	};

	class UAsyncTask* RequestAccountAuthorization(struct FUniqueNetId PlayerID, struct FScriptDelegate Callback);
	void OnAccountAuthorization(struct FString Token);
	void OnLoginChanged(unsigned long bLoggedIn);
	bool RequestMtxCode(struct FUniqueNetId PlayerID, struct FScriptDelegate Callback);
	bool RequestAuthTicket(struct FUniqueNetId PlayerID, struct FScriptDelegate Callback);
	bool RequiresAuthTicket();
	void OnReceivedAuthCode(unsigned long bSuccess, struct FString Code);
	bool GetServerAddr(struct FIpAddr& OutServerIP, int32_t& OutServerPort);
	bool GetServerUniqueId(struct FUniqueNetId& OutServerUID);
	bool FindLocalServerAuthSession(class UPlayer* ClientConnection, struct FLocalAuthSession& OutSessionInfo);
	bool FindServerAuthSession(class UPlayer* ServerConnection, struct FAuthSession& OutSessionInfo);
	bool FindLocalClientAuthSession(class UPlayer* ServerConnection, struct FLocalAuthSession& OutSessionInfo);
	bool FindClientAuthSession(class UPlayer* ClientConnection, struct FAuthSession& OutSessionInfo);
	void AllLocalServerAuthSessions(struct FLocalAuthSession& OutSessionInfo);
	void AllServerAuthSessions(struct FAuthSession& OutSessionInfo);
	void AllLocalClientAuthSessions(struct FLocalAuthSession& OutSessionInfo);
	void AllClientAuthSessions(struct FAuthSession& OutSessionInfo);
	void EndAllRemoteServerAuthSessions();
	void EndAllLocalServerAuthSessions();
	void EndRemoteServerAuthSession(struct FUniqueNetId ServerUID, struct FIpAddr ServerIP);
	void EndLocalServerAuthSession(struct FUniqueNetId ClientUID, struct FIpAddr ClientIP);
	bool VerifyServerAuthSession(struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int32_t AuthTicketUID);
	bool CreateServerAuthSession(struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int32_t ClientPort, int32_t& OutAuthTicketUID);
	void EndAllRemoteClientAuthSessions();
	void EndAllLocalClientAuthSessions();
	void EndRemoteClientAuthSession(struct FUniqueNetId ClientUID, struct FIpAddr ClientIP);
	void EndLocalClientAuthSession(struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int32_t ServerPort);
	bool VerifyClientAuthSession(struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int32_t ClientPort, int32_t AuthTicketUID);
	bool CreateClientAuthSession(struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int32_t ServerPort, unsigned long bSecure, int32_t& OutAuthTicketUID);
	bool SendServerAuthRetryRequest();
	bool SendClientAuthEndSessionRequest(class UPlayer* ClientConnection);
	bool SendServerAuthResponse(class UPlayer* ClientConnection, int32_t AuthTicketUID);
	bool SendClientAuthResponse(int32_t AuthTicketUID);
	bool SendServerAuthRequest(struct FUniqueNetId ServerUID);
	bool SendClientAuthRequest(class UPlayer* ClientConnection, struct FUniqueNetId ClientUID);
	void ClearServerConnectionCloseDelegate(struct FScriptDelegate ServerConnectionCloseDelegate);
	void AddServerConnectionCloseDelegate(struct FScriptDelegate ServerConnectionCloseDelegate);
	void OnServerConnectionClose(class UPlayer* ServerConnection);
	void ClearClientConnectionCloseDelegate(struct FScriptDelegate ClientConnectionCloseDelegate);
	void AddClientConnectionCloseDelegate(struct FScriptDelegate ClientConnectionCloseDelegate);
	void OnClientConnectionClose(class UPlayer* ClientConnection);
	void ClearServerAuthRetryRequestDelegate(struct FScriptDelegate ServerAuthRetryRequestDelegate);
	void AddServerAuthRetryRequestDelegate(struct FScriptDelegate ServerAuthRetryRequestDelegate);
	void OnServerAuthRetryRequest(class UPlayer* ClientConnection);
	void ClearClientAuthEndSessionRequestDelegate(struct FScriptDelegate ClientAuthEndSessionRequestDelegate);
	void AddClientAuthEndSessionRequestDelegate(struct FScriptDelegate ClientAuthEndSessionRequestDelegate);
	void OnClientAuthEndSessionRequest(class UPlayer* ServerConnection);
	void ClearServerAuthCompleteDelegate(struct FScriptDelegate ServerAuthCompleteDelegate);
	void AddServerAuthCompleteDelegate(struct FScriptDelegate ServerAuthCompleteDelegate);
	void OnServerAuthComplete(unsigned long bSuccess, struct FUniqueNetId ServerUID, class UPlayer* ServerConnection, struct FString ExtraInfo);
	void ClearClientAuthCompleteDelegate(struct FScriptDelegate ClientAuthCompleteDelegate);
	void AddClientAuthCompleteDelegate(struct FScriptDelegate ClientAuthCompleteDelegate);
	void OnClientAuthComplete(unsigned long bSuccess, struct FUniqueNetId ClientUID, class UPlayer* ClientConnection, struct FString ExtraInfo);
	void ClearServerAuthResponseDelegate(struct FScriptDelegate ServerAuthResponseDelegate);
	void AddServerAuthResponseDelegate(struct FScriptDelegate ServerAuthResponseDelegate);
	void OnServerAuthResponse(struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int32_t AuthTicketUID);
	void ClearClientAuthResponseDelegate(struct FScriptDelegate ClientAuthResponseDelegate);
	void AddClientAuthResponseDelegate(struct FScriptDelegate ClientAuthResponseDelegate);
	void OnClientAuthResponse(struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int32_t AuthTicketUID);
	void ClearServerAuthRequestDelegate(struct FScriptDelegate ServerAuthRequestDelegate);
	void AddServerAuthRequestDelegate(struct FScriptDelegate ServerAuthRequestDelegate);
	void OnServerAuthRequest(class UPlayer* ClientConnection, struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int32_t ClientPort);
	void ClearClientAuthRequestDelegate(struct FScriptDelegate ClientAuthRequestDelegate);
	void AddClientAuthRequestDelegate(struct FScriptDelegate ClientAuthRequestDelegate);
	void OnClientAuthRequest(struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int32_t ServerPort, unsigned long bSecure);
	void ClearAuthReadyDelegate(struct FScriptDelegate AuthReadyDelegate);
	void AddAuthReadyDelegate(struct FScriptDelegate AuthReadyDelegate);
	void OnAuthReady();
	bool IsReady();
};

// Class IpDrv.OnlineFriendsInterfaceImpl
// 0x0020 (0x0060 - 0x0080)
class UOnlineFriendsInterfaceImpl : public UObject
{
public:
	struct FPointer                                    VfTable_IOnlineFriendsInterface;               // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FScriptDelegate                             __OnReceivedLinkedAccount__Delegate;           // 0x0068 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineFriendsInterfaceImpl");
		}

		return uClassPointer;
	};

	bool GetActivePlatformId(uint8_t LocalUserNum, struct FUniqueNetId AccountId, struct FUniqueNetId& PlatformId);
	bool RequestLinkedAccounts(uint8_t LocalUserNum, TArray<struct FUniqueNetId> AccountIds, struct FScriptDelegate Callback);
	void OnReceivedLinkedAccount(unsigned long bSuccess, TArray<struct FLinkedAccountData> LinkedAccountData);
};

// Class IpDrv.OnlineGameInterfaceImpl
// 0x02B8 (0x0060 - 0x0318)
class UOnlineGameInterfaceImpl : public UObject
{
public:
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                               // 0x0060 (0x0008) [0x0000000000000000]               
	class UOnlineGameSettings*                         GameSettings;                                  // 0x0068 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UOnlineGameSearch*                           GameSearch;                                    // 0x0070 (0x0008) [0x0000000000000002] (CPF_Const)   
	TArray<struct FScriptDelegate>                     CreateOnlineGameCompleteDelegates;             // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     UpdateOnlineGameCompleteDelegates;             // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     DestroyOnlineGameCompleteDelegates;            // 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     JoinOnlineGameCompleteDelegates;               // 0x00A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     MigrateOnlineGameCompleteDelegates;            // 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     JoinMigratedOnlineGameCompleteDelegates;       // 0x00C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     RecalculateSkillRatingCompleteDelegates;       // 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     StartOnlineGameCompleteDelegates;              // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     EndOnlineGameCompleteDelegates;                // 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     FindOnlineGamesCompleteDelegates;              // 0x0108 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     CancelFindOnlineGamesCompleteDelegates;        // 0x0118 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            LanBeaconState;                                // 0x0128 (0x0001) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            LanNonce[0x8];                                 // 0x0129 (0x0008) [0x0000000000000002] (CPF_Const)   
	int32_t                                            LanAnnouncePort;                               // 0x0134 (0x0004) [0x0000000000004002] (CPF_Const | CPF_Config)
	int32_t                                            LanGameUniqueId;                               // 0x0138 (0x0004) [0x0000000000004002] (CPF_Const | CPF_Config)
	int32_t                                            LanPacketPlatformMask;                         // 0x013C (0x0004) [0x0000000000004002] (CPF_Const | CPF_Config)
	float                                              LanQueryTimeLeft;                              // 0x0140 (0x0004) [0x0000000000000000]               
	float                                              LanQueryTimeout;                               // 0x0144 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FPointer                                    LanBeacon;                                     // 0x0148 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	struct FPointer                                    SessionInfo;                                   // 0x0150 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	TArray<struct FScriptDelegate>                     GameInviteAcceptedDelegates;                   // 0x0158 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFindOnlineGamesComplete__Delegate;         // 0x0168 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateOnlineGameComplete__Delegate;        // 0x0180 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUpdateOnlineGameComplete__Delegate;        // 0x0198 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDestroyOnlineGameComplete__Delegate;       // 0x01B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCancelFindOnlineGamesComplete__Delegate;   // 0x01C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnJoinOnlineGameComplete__Delegate;          // 0x01E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;          // 0x01F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;        // 0x0210 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnStartOnlineGameComplete__Delegate;         // 0x0228 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnEndOnlineGameComplete__Delegate;           // 0x0240 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnArbitrationRegistrationComplete__Delegate; // 0x0258 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;              // 0x0270 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRecalculateSkillRatingComplete__Delegate;  // 0x0288 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnMigrateOnlineGameComplete__Delegate;       // 0x02A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnJoinMigratedOnlineGameComplete__Delegate;  // 0x02B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQosStatusChanged__Delegate;                // 0x02D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventReportMatchmakingInfo__Delegate;        // 0x02E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGamePlayersChanged__Delegate;              // 0x0300 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineGameInterfaceImpl");
		}

		return uClassPointer;
	};

	void ClearGamePlayersChangedDelegate(struct FScriptDelegate GamePlayersChangedDelegate);
	void AddGamePlayersChangedDelegate(struct FScriptDelegate GamePlayersChangedDelegate);
	void OnGamePlayersChanged(struct FName SessionName, TArray<struct FUniqueNetId> Players);
	void SetFriendJoinLocation(struct FUniqueNetId JoinablePlayerID, struct FString ServerAddress, uint8_t Visibility);
	void ClearReportMatchmakingInfoDelegate(struct FScriptDelegate OldDelegate);
	void AddReportMatchmakingInfoDelegate(struct FScriptDelegate NewDelegate);
	void EventReportMatchmakingInfo(struct FString NewInfo);
	void ClearQosStatusChangedDelegate(struct FScriptDelegate QosStatusChangedDelegate);
	void AddQosStatusChangedDelegate(struct FScriptDelegate QosStatusChangedDelegate);
	void OnQosStatusChanged(int32_t NumComplete, int32_t NumTotal);
	bool BindPlatformSpecificSessionToSearch(uint8_t SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, uint8_t PlatformSpecificInfo);
	bool ReadPlatformSpecificSessionInfoBySessionName(struct FName SessionName, uint8_t& PlatformSpecificInfo);
	bool ReadPlatformSpecificSessionInfo(struct FOnlineGameSearchResult& DesiredGame, uint8_t& PlatformSpecificInfo);
	bool QueryNonAdvertisedData(int32_t StartAt, int32_t NumberToQuery);
	void ClearJoinMigratedOnlineGameCompleteDelegate(struct FScriptDelegate JoinMigratedOnlineGameCompleteDelegate);
	void AddJoinMigratedOnlineGameCompleteDelegate(struct FScriptDelegate JoinMigratedOnlineGameCompleteDelegate);
	void OnJoinMigratedOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool JoinMigratedOnlineGame(uint8_t PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult& DesiredGame);
	void ClearMigrateOnlineGameCompleteDelegate(struct FScriptDelegate MigrateOnlineGameCompleteDelegate);
	void AddMigrateOnlineGameCompleteDelegate(struct FScriptDelegate MigrateOnlineGameCompleteDelegate);
	void OnMigrateOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool MigrateOnlineGame(uint8_t HostingPlayerNum, struct FName SessionName);
	void ClearRecalculateSkillRatingCompleteDelegate(struct FScriptDelegate RecalculateSkillRatingGameCompleteDelegate);
	void AddRecalculateSkillRatingCompleteDelegate(struct FScriptDelegate RecalculateSkillRatingCompleteDelegate);
	void OnRecalculateSkillRatingComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool RecalculateSkillRating(struct FName SessionName, TArray<struct FUniqueNetId>& Players);
	bool AcceptGameInvite(uint8_t LocalUserNum, struct FName SessionName);
	void ClearGameInviteAcceptedDelegate(uint8_t LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate);
	void AddGameInviteAcceptedDelegate(uint8_t LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate);
	void OnGameInviteAccepted(struct FString ErrorString, struct FOnlineGameSearchResult& InviteResult);
	TArray<struct FOnlineArbitrationRegistrant> GetArbitratedPlayers(struct FName SessionName);
	void ClearArbitrationRegistrationCompleteDelegate(struct FScriptDelegate ArbitrationRegistrationCompleteDelegate);
	void AddArbitrationRegistrationCompleteDelegate(struct FScriptDelegate ArbitrationRegistrationCompleteDelegate);
	void OnArbitrationRegistrationComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool RegisterForArbitration(struct FName SessionName);
	void ClearEndOnlineGameCompleteDelegate(struct FScriptDelegate EndOnlineGameCompleteDelegate);
	void AddEndOnlineGameCompleteDelegate(struct FScriptDelegate EndOnlineGameCompleteDelegate);
	void OnEndOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool EndOnlineGame(struct FName SessionName);
	void ClearStartOnlineGameCompleteDelegate(struct FScriptDelegate StartOnlineGameCompleteDelegate);
	void AddStartOnlineGameCompleteDelegate(struct FScriptDelegate StartOnlineGameCompleteDelegate);
	void OnStartOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool StartOnlineGame(struct FName SessionName);
	void ClearUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate);
	void AddUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate);
	void OnUnregisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful);
	bool UnregisterPlayers(struct FName SessionName, TArray<struct FUniqueNetId>& Players);
	bool UnregisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID);
	void ClearRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate);
	void AddRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate);
	void OnRegisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful);
	bool RegisterPlayers(struct FName SessionName, TArray<struct FUniqueNetId>& Players);
	bool RegisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited);
	bool GetResolvedConnectString(struct FName SessionName, struct FString& ConnectInfo);
	void ClearJoinOnlineGameCompleteDelegate(struct FScriptDelegate JoinOnlineGameCompleteDelegate);
	void AddJoinOnlineGameCompleteDelegate(struct FScriptDelegate JoinOnlineGameCompleteDelegate);
	void OnJoinOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool JoinOnlineGame(uint8_t PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult& DesiredGame);
	bool FreeSearchResults(class UOnlineGameSearch* Search);
	void ClearCancelFindOnlineGamesCompleteDelegate(struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate);
	void AddCancelFindOnlineGamesCompleteDelegate(struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate);
	void OnCancelFindOnlineGamesComplete(unsigned long bWasSuccessful);
	bool CancelFindOnlineGames();
	void ClearFindOnlineGamesCompleteDelegate(struct FScriptDelegate FindOnlineGamesCompleteDelegate);
	void AddFindOnlineGamesCompleteDelegate(struct FScriptDelegate FindOnlineGamesCompleteDelegate);
	bool FindOnlineGames(uint8_t SearchingPlayerNum, class UOnlineGameSearch* SearchSettings);
	void ClearDestroyOnlineGameCompleteDelegate(struct FScriptDelegate DestroyOnlineGameCompleteDelegate);
	void AddDestroyOnlineGameCompleteDelegate(struct FScriptDelegate DestroyOnlineGameCompleteDelegate);
	void OnDestroyOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool DestroyOnlineGame(struct FName SessionName);
	void ClearUpdateOnlineGameCompleteDelegate(struct FScriptDelegate UpdateOnlineGameCompleteDelegate);
	void AddUpdateOnlineGameCompleteDelegate(struct FScriptDelegate UpdateOnlineGameCompleteDelegate);
	void OnUpdateOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool UpdateOnlineGame(struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData);
	void ClearCreateOnlineGameCompleteDelegate(struct FScriptDelegate CreateOnlineGameCompleteDelegate);
	void AddCreateOnlineGameCompleteDelegate(struct FScriptDelegate CreateOnlineGameCompleteDelegate);
	void OnCreateOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool CreateOnlineGame(uint8_t HostingPlayerNum, struct FName SessionName, class UOnlineGameSettings* NewGameSettings);
	class UOnlineGameSearch* GetGameSearch();
	class UOnlineGameSettings* GetGameSettings(struct FName SessionName);
	void OnFindOnlineGamesComplete(unsigned long bWasSuccessful);
};

// Class IpDrv.OnlineImageDownloaderWeb
// 0x00B0 (0x0060 - 0x0110)
class UOnlineImageDownloaderWeb : public UObject
{
public:
	int32_t                                            MaxSimultaneousDownloads;                      // 0x0060 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FMap_Mirror                                 Downloads;                                     // 0x0068 (0x0050) [0x0000000000001000] (CPF_Native)  
	TArray<struct FString>                             URLQueue;                                      // 0x00B8 (0x0010) [0x0000000000001000] (CPF_Native)  
	class UImageDecoder*                               Decoder;                                       // 0x00C8 (0x0008) [0x0000000000000000]               
	int32_t                                            PendingDownloadCount;                          // 0x00D0 (0x0004) [0x0000004000001000] (CPF_Native)  
	int32_t                                            ActiveDownloadCount;                           // 0x00D4 (0x0004) [0x0000004000001000] (CPF_Native)  
	int32_t                                            SucceededDownloadCount;                        // 0x00D8 (0x0004) [0x0000004000001000] (CPF_Native)  
	int32_t                                            FailedDownloadCount;                           // 0x00DC (0x0004) [0x0000004000001000] (CPF_Native)  
	struct FScriptDelegate                             __OnOnlineImageFinished__Delegate;             // 0x00E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventImageDecoded__Delegate;                 // 0x00F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineImageDownloaderWeb");
		}

		return uClassPointer;
	};

	uint8_t GetImageType(struct FString ContentType);
	void QueueURLForDownload(struct FString NewURL, struct FScriptDelegate InternalCallbackOnComplete, struct FScriptDelegate ExternalCallback, unsigned long bSupportSRGB);
	void DebugDraw(class UCanvas* Canvas);
	void OnDownloadComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, unsigned long bDidSucceed);
	void DownloadNextImage();
	void RequestOnlineImages(struct FScriptDelegate FinishedCallback, unsigned long bSupportSRGB, TArray<struct FString>& URLs);
	class UTexture* GetOnlineImageTexture(struct FString URL);
	void ClearQueue();
	struct FString Dequeue();
	void Enqueue(struct FString URL);
	void ClearActiveDownloads();
	void ClearCompletedDownloads();
	void HandleImageDecoded(struct FString RequestedURL, struct FImageLayout& DecodedImage);
	void RequeueFailedURL(struct FString URL);
	void DownloadNextQueuedURL();
	void UpdateActiveDownloadFromResponse(struct FString URL, class UHttpResponseInterface* Response, struct FScriptDelegate OnDecodedCallback);
	void MarkActiveDownloadFailed(struct FString URL);
	void QueueURLForDownloadInternal(struct FString NewURL, class UHttpRequestInterface* Request, class UTexture2DDynamic* TextureHolder, struct FScriptDelegate OnDecodedCallback);
	void AddCallbackToDownload(struct FString URL, struct FScriptDelegate NewCallback);
	struct FOnlineImageDownload GetDownload(struct FString URL);
	bool IsURLQueued(struct FString URL);
	bool IsURLActive(struct FString URL);
	bool DidURLFail(struct FString URL);
	bool DidURLSucceed(struct FString URL);
	bool IsURLTracked(struct FString URL);
	void AllValues(int32_t StartIndex, int32_t MaxValues, struct FOnlineImageDownload& OutImage);
	void ClearPendingDownloads();
	void ClearAllDownloads();
	void EventImageDecoded(struct FString RequestURL, struct FImageLayout& Image);
	void OnOnlineImageFinished(struct FOnlineImageDownload ImageInfo);
	void eventConstruct();
};

// Class IpDrv.OnlineLobbyInterfaceImpl
// 0x0260 (0x0060 - 0x02C0)
class UOnlineLobbyInterfaceImpl : public UObject
{
public:
	TArray<struct FScriptDelegate>                     CreateLobbyCompleteDelegates;                  // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     FindLobbiesCompleteDelegates;                  // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     JoinLobbyCompleteDelegates;                    // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LobbySettingsUpdateDelegates;                  // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LobbyMemberSettingsUpdateDelegates;            // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LobbyMemberStatusUpdateDelegates;              // 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LobbyReceiveMessageDelegates;                  // 0x00C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LobbyReceiveBinaryDataDelegates;               // 0x00D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LobbyJoinGameDelegates;                        // 0x00E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LobbyInviteDelegates;                          // 0x00F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LobbyErrorDelegates;                           // 0x0100 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LobbyDestroyedDelegates;                       // 0x0110 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     LobbySessionCreatedDelegates;                  // 0x0120 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     HostStartPlayTogetherDelegates;                // 0x0130 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FActiveLobbyInfo>                    ActiveLobbies;                                 // 0x0140 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<struct FBasicLobbyInfo>                     CachedFindLobbyResults;                        // 0x0150 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<uint8_t>                                    CachedBinaryData;                              // 0x0160 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateLobbyComplete__Delegate;             // 0x0170 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFindLobbiesComplete__Delegate;             // 0x0188 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnJoinLobbyComplete__Delegate;               // 0x01A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbySettingsUpdate__Delegate;             // 0x01B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyMemberSettingsUpdate__Delegate;       // 0x01D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyMemberStatusUpdate__Delegate;         // 0x01E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyReceiveMessage__Delegate;             // 0x0200 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyReceiveBinaryData__Delegate;          // 0x0218 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyJoinGame__Delegate;                   // 0x0230 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyInvite__Delegate;                     // 0x0248 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyDestroyed__Delegate;                  // 0x0260 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbySessionCreated__Delegate;             // 0x0278 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyError__Delegate;                      // 0x0290 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnHostStartPlayTogether__Delegate;           // 0x02A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlineLobbyInterfaceImpl");
		}

		return uClassPointer;
	};

	void ClearHostStartPlayTogetherDelegate(struct FScriptDelegate InDelegate);
	void AddHostStartPlayTogetherDelegate(struct FScriptDelegate InDelegate);
	void OnHostStartPlayTogether(uint8_t LocalUserNum);
	void ClearLobbyErrorDelegate(struct FScriptDelegate LobbyErrorDelegate);
	void AddLobbyErrorDelegate(struct FScriptDelegate LobbyErrorDelegate);
	void OnLobbyError(struct FString Error);
	bool eventGetLobbyMembers(struct FUniqueLobbyId& LobbyId, TArray<struct FLobbyMember>& Members);
	void ClearLobbySessionCretedeDelegate(struct FScriptDelegate LobbySessionCreatedDelegate);
	void ClearLobbySessionCreatedDelegate(struct FScriptDelegate LobbySessionCreatedDelegate);
	void AddLobbySessionCreatedDelegate(struct FScriptDelegate LobbySessionCreatedDelegate);
	void eventTriggerLobbySessionCreatedDelegates();
	void OnLobbySessionCreated();
	int32_t eventGetLobbyIndex(struct FUniqueLobbyId& LobbyId);
	void RemoveLocalPlayerFromSession(struct FUniqueNetId& PartyMember);
	void AddLocalPartyMemberToSession(struct FUniqueNetId& NewPartyMember);
	bool KickPlayer(uint8_t Reason, struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID);
	bool ShowInviteUI(uint8_t LocalUserNum, struct FUniqueLobbyId& LobbyId);
	void eventTriggerLobbyDestroyedDelegates(int32_t LobbyIndex, uint8_t Reason);
	void ClearLobbyDestroyedDelegate(struct FScriptDelegate LobbyDestroyedDelegate);
	void AddLobbyDestroyedDelegate(struct FScriptDelegate LobbyDestroyedDelegate);
	void OnLobbyDestroyed(uint8_t Reason, struct FUniqueLobbyId& LobbyId);
	void ClearLobbyInviteDelegate(struct FScriptDelegate LobbyInviteDelegate);
	void AddLobbyInviteDelegate(struct FScriptDelegate LobbyInviteDelegate);
	void OnLobbyInvite(unsigned long bAccepted, struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& FriendId);
	bool InviteToLobby(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID);
	bool CanInviteToLobby(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID);
	bool SetLobbyOwner(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& NewOwner);
	bool SetLobbyLock(unsigned long bLocked, struct FUniqueLobbyId& LobbyId);
	bool SetLobbyServer(struct FString ServerIP, struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& ServerUID);
	bool RemoveLobbySetting(struct FString Key, struct FUniqueLobbyId& LobbyId);
	bool SetLobbySetting(struct FString Key, struct FString Value, struct FUniqueLobbyId& LobbyId);
	bool GetLobbyAdmin(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& AdminId);
	void ClearLobbyJoinGameDelegate(struct FScriptDelegate LobbyJoinGameDelegate);
	void AddLobbyJoinGameDelegate(struct FScriptDelegate LobbyJoinGameDelegate);
	void eventTriggerLobbyJoinGameDelegates(int32_t LobbyIndex, struct FString ServerIP, struct FUniqueNetId& ServerId);
	void OnLobbyJoinGame(struct FString ServerIP, struct FActiveLobbyInfo& LobbyInfo, struct FUniqueNetId& ServerId);
	void ClearLobbyReceiveBinaryDataDelegate(struct FScriptDelegate LobbyReceiveBinaryDataDelegate);
	void AddLobbyReceiveBinaryDataDelegate(struct FScriptDelegate LobbyReceiveBinaryDataDelegate);
	void eventTriggerLobbyReceiveBinaryDataDelegates(int32_t LobbyIndex, int32_t MemberIndex);
	void OnLobbyReceiveBinaryData(int32_t MemberIndex, struct FActiveLobbyInfo& LobbyInfo, TArray<uint8_t>& Data);
	bool SendLobbyBinaryData(struct FUniqueLobbyId& LobbyId, TArray<uint8_t>& Data);
	void ClearLobbyReceiveMessageDelegate(struct FScriptDelegate LobbyReceiveMessageDelegate);
	void AddLobbyReceiveMessageDelegate(struct FScriptDelegate LobbyReceiveMessageDelegate);
	void eventTriggerLobbyReceiveMessageDelegates(int32_t LobbyIndex, int32_t MemberIndex, struct FString Type, struct FString Message);
	void OnLobbyReceiveMessage(int32_t MemberIndex, struct FString Type, struct FString Message, struct FActiveLobbyInfo& LobbyInfo);
	bool SendLobbyMessage(struct FString Message, struct FUniqueLobbyId& LobbyId);
	void ClearLobbyMemberStatusUpdateDelegate(struct FScriptDelegate LobbyMemberStatusUpdateDelegate);
	void AddLobbyMemberStatusUpdateDelegate(struct FScriptDelegate LobbyMemberStatusUpdateDelegate);
	void eventTriggerLobbyMemberStatusUpdateDelegates(int32_t LobbyIndex, int32_t MemberIndex, int32_t InstigatorIndex, struct FString Status);
	void OnLobbyMemberStatusUpdate(int32_t MemberIndex, int32_t InstigatorIndex, struct FString Status, struct FActiveLobbyInfo& LobbyInfo);
	void ClearLobbyMemberSettingsUpdateDelegate(struct FScriptDelegate LobbyMemberSettingsUpdateDelegate);
	void AddLobbyMemberSettingsUpdateDelegate(struct FScriptDelegate LobbyMemberSettingsUpdateDelegate);
	void eventTriggerLobbyMemberSettingsUpdateDelegates(int32_t LobbyIndex, int32_t MemberIndex);
	void OnLobbyMemberSettingsUpdate(int32_t MemberIndex, struct FActiveLobbyInfo& LobbyInfo);
	void ClearLobbySettingsUpdateDelegate(struct FScriptDelegate LobbySettingsUpdateDelegate);
	void AddLobbySettingsUpdateDelegate(struct FScriptDelegate LobbySettingsUpdateDelegate);
	void eventTriggerLobbySettingsUpdateDelegates(int32_t LobbyIndex);
	void OnLobbySettingsUpdate(struct FActiveLobbyInfo& LobbyInfo);
	bool SetLobbyUserSetting(struct FString Key, struct FString Value, struct FUniqueLobbyId& LobbyId);
	bool LeaveLobby(struct FUniqueLobbyId& LobbyId);
	void ClearJoinLobbyCompleteDelegate(struct FScriptDelegate JoinLobbyCompleteDelegate);
	void AddJoinLobbyCompleteDelegate(struct FScriptDelegate JoinLobbyCompleteDelegate);
	void eventTriggerJoinLobbyCompleteDelegates(unsigned long bWasSuccessful, struct FString Error, struct FActiveLobbyInfo& LobbyInfo, struct FUniqueLobbyId& LobbyUID);
	void OnJoinLobbyComplete(unsigned long bWasSuccessful, struct FString Error, struct FActiveLobbyInfo& LobbyInfo, struct FUniqueLobbyId& LobbyUID);
	bool JoinLobby(int32_t LocalPlayerNum, struct FUniqueLobbyId& LobbyId);
	void ClearFindLobbiesCompleteDelegate(struct FScriptDelegate FindLobbiesCompleteDelegate);
	void AddFindLobbiesCompleteDelegate(struct FScriptDelegate FindLobbiesCompleteDelegate);
	void eventTriggerFindLobbiesCompleteDelegates(unsigned long bWasSuccessful);
	void OnFindLobbiesComplete(unsigned long bWasSuccessful, TArray<struct FBasicLobbyInfo>& LobbyList);
	bool UpdateFoundLobbies(struct FUniqueLobbyId LobbyId);
	bool FindLobbies(int32_t MaxResults, TArray<struct FLobbyFilter> Filters, TArray<struct FLobbySortFilter> SortFilters, int32_t MinSlots, uint8_t Distance);
	void ClearCreateLobbyCompleteDelegate(struct FScriptDelegate CreateLobbyCompleteDelegate);
	void AddCreateLobbyCompleteDelegate(struct FScriptDelegate CreateLobbyCompleteDelegate);
	void OnCreateLobbyComplete(unsigned long bWasSuccessful, struct FString Error, struct FUniqueLobbyId& LobbyId);
	bool CreateLobby(int32_t LocalPlayerNum, int32_t MaxPlayers, uint8_t Type, TArray<struct FLobbyMetaData> InitialSettings);
};

// Class IpDrv.OnlinePersistentAuthInterfaceImpl
// 0x0058 (0x0060 - 0x00B8)
class UOnlinePersistentAuthInterfaceImpl : public UObject
{
public:
	struct FPointer                                    VfTable_IOnlinePersistentAuthInterface;        // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	TArray<struct FScriptDelegate>                     RequestPinGrantCodeDelegates;                  // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     UnderageUserDetectedDelegates;                 // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReceievedPinGrantCode__Delegate;           // 0x0088 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUnderageUserDetected__Delegate;            // 0x00A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlinePersistentAuthInterfaceImpl");
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
	void ClearUnderageUserDetectedDelegate(struct FScriptDelegate Callback);
	void AddUnderageUserDetectedDelegate(struct FScriptDelegate Callback);
	void OnUnderageUserDetected(uint8_t LocalUserNum, struct FString ParentalConsentURL);
	void ClearRequestPinGrantCodeDelegate(uint8_t LocalUserNum, struct FScriptDelegate Callback);
	void AddRequestPinGrantCodeDelegate(uint8_t LocalUserNum, struct FScriptDelegate Callback);
	void OnReceievedPinGrantCode(uint8_t Result, uint8_t LocalUserNum, struct FString Code, struct FString URL, int32_t SecondsUntilExpiration);
};

// Class IpDrv.OnlinePlaylistManager
// 0x00E8 (0x0060 - 0x0148)
class UOnlinePlaylistManager : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	TArray<struct FPlaylist>                           Playlists;                                     // 0x0068 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FString>                             PlaylistFileNames;                             // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               DatastoresToRefresh;                           // 0x0088 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	int32_t                                            DownloadCount;                                 // 0x0098 (0x0004) [0x0000000000000000]               
	int32_t                                            SuccessfulCount;                               // 0x009C (0x0004) [0x0000000000000000]               
	int32_t                                            VersionNumber;                                 // 0x00A0 (0x0004) [0x0000000000004000] (CPF_Config)  
	TArray<struct FPlaylistPopulation>                 PopulationData;                                // 0x00A8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	int32_t                                            WorldwideTotalPlayers;                         // 0x00B8 (0x0004) [0x0000000000000000]               
	int32_t                                            RegionTotalPlayers;                            // 0x00BC (0x0004) [0x0000000000000000]               
	class UOnlineTitleFileInterface*                   TitleFileInterface;                            // 0x00C0 (0x0010) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            TitleFileInterface_UnknownData00[0x8];         // 0x00C8 (0x0008) FIX WRONG SIZE OF PREVIOUS PROPERTY [Original: 0x0010, Missing: 0x0008]
	struct FString                                     PopulationFileName;                            // 0x00D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              NextPlaylistPopulationUpdateTime;              // 0x00E0 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              PlaylistPopulationUpdateInterval;              // 0x00E4 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MinPlaylistIdToReport;                         // 0x00E8 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            CurrentPlaylistId;                             // 0x00EC (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FName                                       EventsInterfaceName;                           // 0x00F0 (0x0008) [0x0000000000004000] (CPF_Config)  
	int32_t                                            DataCenterId;                                  // 0x00F8 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FString                                     DataCenterFileName;                            // 0x0100 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              LastPlaylistDownloadTime;                      // 0x0110 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              PlaylistRefreshInterval;                       // 0x0114 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FScriptDelegate                             __OnReadPlaylistComplete__Delegate;            // 0x0118 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPlaylistPopulationDataUpdated__Delegate;   // 0x0130 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlinePlaylistManager");
		}

		return uClassPointer;
	};

	void ParseDataCenterId(TArray<uint8_t>& Data);
	void OnReadDataCenterIdComplete(unsigned long bWasSuccessful, struct FString Filename);
	void ReadDataCenterId();
	void eventSendPlaylistPopulationUpdate(int32_t NumPlayers);
	void GetPopulationInfoFromPlaylist(int32_t PlaylistId, int32_t& WorldwideTotal, int32_t& RegionTotal);
	void ParsePlaylistPopulationData(TArray<uint8_t>& Data);
	void OnPlaylistPopulationDataUpdated();
	void OnReadPlaylistPopulationComplete(unsigned long bWasSuccessful, struct FString Filename);
	void ReadPlaylistPopulation();
	void Reset();
	void GetContentIdsFromPlaylist(int32_t PlaylistId, TArray<int32_t>& ContentIds);
	void GetMapCycleFromPlaylist(int32_t PlaylistId, TArray<struct FName>& MapCycle);
	struct FString GetUrlFromPlaylist(int32_t PlaylistId);
	int32_t GetMatchType(int32_t PlaylistId);
	bool IsPlaylistArbitrated(int32_t PlaylistId);
	void GetLoadBalanceIdFromPlaylist(int32_t PlaylistId, int32_t& LoadBalanceId);
	void GetTeamInfoFromPlaylist(int32_t PlaylistId, int32_t& TeamSize, int32_t& TeamCount, int32_t& MaxPartySize);
	bool PlaylistSupportsDedicatedServers(int32_t PlaylistId);
	bool HasAnyGameSettings(int32_t PlaylistId);
	class UOnlineGameSettings* GetGameSettings(int32_t PlaylistId, int32_t GameSettingsId);
	void FinalizePlaylistObjects();
	void OnReadTitleFileComplete(unsigned long bWasSuccessful, struct FString Filename);
	bool ShouldRefreshPlaylists();
	void DetermineFilesToDownload();
	void DownloadPlaylist();
	void OnReadPlaylistComplete(unsigned long bWasSuccessful);
};

// Class IpDrv.OnlinePurchaseInterfaceImpl
// 0x0030 (0x0060 - 0x0090)
class UOnlinePurchaseInterfaceImpl : public UObject
{
public:
	struct FScriptDelegate                             __EventGetAppPriceInfoComplete__Delegate;      // 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnMicroTxnResponse__Delegate;                // 0x0078 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlinePurchaseInterfaceImpl");
		}

		return uClassPointer;
	};

	void ClearMicroTxnResponseDelegate(struct FScriptDelegate ResponseMicroTxnDelegate);
	void AddMicroTxnResponseDelegate(struct FScriptDelegate ResponseMicroTxnDelegate);
	void OnMicroTxnResponse(unsigned long bAuthorized, uint64_t OrderId);
	struct FString FormatCurrency(struct FString Currency, int32_t Price);
	bool GetAppPriceInfo(struct FScriptDelegate Callback, struct FUniqueNetId& PlayerID, TArray<struct FName>& AppNames);
	void EventGetAppPriceInfoComplete(struct FName AppName, struct FString Price, struct FString DiscountPrice, int32_t DiscountPercentage);
};

// Class IpDrv.PartyBeacon
// 0x0048 (0x0060 - 0x00A8)
class UPartyBeacon : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	int32_t                                            PartyBeaconPort;                               // 0x0068 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FPointer                                    Socket;                                        // 0x0070 (0x0008) [0x0000000000003000] (CPF_Native | CPF_Transient)
	unsigned long                                      bIsInTick : 1;                                 // 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bWantsDeferredDestroy : 1;                     // 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bShouldTick : 1;                               // 0x0078 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              HeartbeatTimeout;                              // 0x007C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ElapsedHeartbeatTime;                          // 0x0080 (0x0004) [0x0000000000000000]               
	struct FName                                       BeaconName;                                    // 0x0084 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __OnDestroyComplete__Delegate;                 // 0x0090 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.PartyBeacon");
		}

		return uClassPointer;
	};

	void OnDestroyComplete();
	void eventDestroyBeacon();
};

// Class IpDrv.PartyBeaconClient
// 0x0118 (0x00A8 - 0x01C0)
class UPartyBeaconClient : public UPartyBeacon
{
public:
	struct FOnlineGameSearchResult                     HostPendingRequest;                            // 0x00A8 (0x0010) [0x0000000000000002] (CPF_Const)   
	struct FPartyReservation                           PendingRequest;                                // 0x00B8 (0x0060) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            ClientBeaconState;                             // 0x0118 (0x0001) [0x0000000000000000]               
	uint8_t                                            ClientBeaconRequestType;                       // 0x0119 (0x0001) [0x0000000000000000]               
	float                                              ReservationRequestTimeout;                     // 0x011C (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ReservationRequestElapsedTime;                 // 0x0120 (0x0004) [0x0000000000000000]               
	struct FString                                     ResolverClassName;                             // 0x0128 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UClass*                                      ResolverClass;                                 // 0x0138 (0x0008) [0x0000000000000000]               
	class UClientBeaconAddressResolver*                Resolver;                                      // 0x0140 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __OnReservationRequestComplete__Delegate;      // 0x0148 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReservationCountUpdated__Delegate;         // 0x0160 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnTravelRequestReceived__Delegate;           // 0x0178 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnHostIsReady__Delegate;                     // 0x0190 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnHostHasCancelled__Delegate;                // 0x01A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.PartyBeaconClient");
		}

		return uClassPointer;
	};

	void eventDestroyBeacon();
	bool CancelReservation(struct FUniqueNetId CancellingPartyLeader);
	bool RequestReservationUpdate(struct FUniqueNetId RequestingPartyLeader, struct FOnlineGameSearchResult& DesiredHost, TArray<struct FPlayerReservation>& PlayersToAdd);
	bool RequestReservation(struct FUniqueNetId RequestingPartyLeader, struct FOnlineGameSearchResult& DesiredHost, TArray<struct FPlayerReservation>& Players);
	void OnHostHasCancelled();
	void OnHostIsReady();
	void OnTravelRequestReceived(struct FName SessionName, class UClass* SearchClass, uint8_t PlatformSpecificInfo);
	void OnReservationCountUpdated(int32_t ReservationRemaining);
	void OnReservationRequestComplete(uint8_t ReservationResult);
};

// Class IpDrv.PartyBeaconHost
// 0x0098 (0x00A8 - 0x0140)
class UPartyBeaconHost : public UPartyBeacon
{
public:
	TArray<struct FClientBeaconConnection>             Clients;                                       // 0x00A8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	int32_t                                            NumTeams;                                      // 0x00B8 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            NumPlayersPerTeam;                             // 0x00BC (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            NumReservations;                               // 0x00C0 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            NumConsumedReservations;                       // 0x00C4 (0x0004) [0x0000000000000002] (CPF_Const)   
	TArray<struct FPartyReservation>                   Reservations;                                  // 0x00C8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FName                                       OnlineSessionName;                             // 0x00D8 (0x0008) [0x0000000000000000]               
	int32_t                                            ConnectionBacklog;                             // 0x00E0 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            ForceTeamNum;                                  // 0x00E4 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            ReservedHostTeamNum;                           // 0x00E8 (0x0004) [0x0000000000000002] (CPF_Const)   
	unsigned long                                      bBestFitTeamAssignment : 1;                    // 0x00EC (0x0004) [0x0000000000000000] [0x00000001] 
	uint8_t                                            BeaconState;                                   // 0x00F0 (0x0001) [0x0000000000000002] (CPF_Const)   
	struct FScriptDelegate                             __OnReservationChange__Delegate;               // 0x00F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReservationsFull__Delegate;                // 0x0110 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnClientCancellationReceived__Delegate;      // 0x0128 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.PartyBeaconHost");
		}

		return uClassPointer;
	};

	int32_t GetMaxAvailableTeamSize();
	void GetPartyLeaders(TArray<struct FUniqueNetId>& PartyLeaders);
	void GetPlayers(TArray<struct FUniqueNetId>& Players);
	void AppendReservationSkillsToSearch(class UOnlineGameSearch* Search);
	void eventUnregisterParty(struct FUniqueNetId PartyLeader);
	void eventUnregisterPartyMembers();
	void eventRegisterPartyMembers();
	bool AreReservationsFull();
	void TellClientsHostHasCancelled();
	void TellClientsHostIsReady();
	void TellClientsToTravel(struct FName SessionName, class UClass* SearchClass, uint8_t PlatformSpecificInfo);
	void eventDestroyBeacon();
	void OnClientCancellationReceived(struct FUniqueNetId PartyLeader);
	void OnReservationsFull();
	void OnReservationChange();
	void HandlePlayerLogout(struct FUniqueNetId PlayerID, unsigned long bMaintainParty);
	int32_t GetExistingReservation(struct FUniqueNetId& PartyLeader);
	uint8_t UpdatePartyReservationEntry(struct FUniqueNetId PartyLeader, TArray<struct FPlayerReservation>& PlayerMembers);
	uint8_t AddPartyReservationEntry(struct FUniqueNetId PartyLeader, int32_t TeamNum, unsigned long bIsHost, TArray<struct FPlayerReservation>& PlayerMembers);
	bool InitHostBeacon(int32_t InNumTeams, int32_t InNumPlayersPerTeam, int32_t InNumReservations, struct FName InSessionName, int32_t InForceTeamNum);
	void PauseReservationRequests(unsigned long bPause);
};

// Class IpDrv.TcpipConnection
// 0x0028 (0xB1E8 - 0xB210)
class UTcpipConnection : public UNetConnection
{
public:
	uint8_t                                            UnknownData00[0x28];                           // 0xB1E8 (0x0028) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.TcpipConnection");
		}

		return uClassPointer;
	};

};

// Class IpDrv.TcpNetDriver
// 0x0078 (0x0210 - 0x0288)
class UTcpNetDriver : public UNetDriver
{
public:
	uint8_t                                            UnknownData00[0x58];                           // 0x0210 (0x0058) MISSED OFFSET
	unsigned long                                      AllowPlayerPortUnreach : 1;                    // 0x0268 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	unsigned long                                      LogPortUnreach : 1;                            // 0x026C (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	uint8_t                                            UnknownData01[0x18];                           // 0x0270 (0x0018) MISSED OFFSET
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.TcpNetDriver");
		}

		return uClassPointer;
	};

};

// Class IpDrv.WebRequest
// 0x0100 (0x0060 - 0x0160)
class UWebRequest : public UObject
{
public:
	struct FString                                     RemoteAddr;                                    // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     URI;                                           // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Username;                                      // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Password;                                      // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            ContentLength;                                 // 0x00A0 (0x0004) [0x0000000000000000]               
	struct FString                                     ContentType;                                   // 0x00A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            RequestType;                                   // 0x00B8 (0x0001) [0x0000000000000000]               
	struct FMap_Mirror                                 HeaderMap;                                     // 0x00C0 (0x0050) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FMap_Mirror                                 VariableMap;                                   // 0x0110 (0x0050) [0x0000000000001002] (CPF_Const | CPF_Native)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.WebRequest");
		}

		return uClassPointer;
	};

	int32_t GetHexDigit(struct FString D);
	void DecodeFormData(struct FString Data);
	void ProcessHeaderString(struct FString S);
	void Dump();
	void GetVariables(TArray<struct FString>& varNames);
	struct FString GetVariableNumber(struct FString VariableName, int32_t Number, struct FString DefaultValue);
	int32_t GetVariableCount(struct FString VariableName);
	struct FString GetVariable(struct FString VariableName, struct FString DefaultValue);
	void AddVariable(struct FString VariableName, struct FString Value);
	void GetHeaders(TArray<struct FString>& Headers);
	struct FString GetHeader(struct FString HeaderName, struct FString DefaultValue);
	void AddHeader(struct FString HeaderName, struct FString Value);
	struct FString EncodeBase64(struct FString Decoded);
	struct FString DecodeBase64(struct FString Encoded);
};

// Class IpDrv.WebResponse
// 0x008C (0x0060 - 0x00EC)
class UWebResponse : public UObject
{
public:
	TArray<struct FString>                             Headers;                                       // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FMap_Mirror                                 ReplacementMap;                                // 0x0070 (0x0050) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FString                                     IncludePath;                                   // 0x00C0 (0x0010) [0x0000000000404002] (CPF_Const | CPF_Config | CPF_NeedCtorLink)
	struct FString                                     CharSet;                                       // 0x00D0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class AWebConnection*                              Connection;                                    // 0x00E0 (0x0008) [0x0000000000000000]               
	unsigned long                                      bSentText : 1;                                 // 0x00E8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSentResponse : 1;                             // 0x00E8 (0x0004) [0x0000000000000000] [0x00000002] 
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.WebResponse");
		}

		return uClassPointer;
	};

	bool SentResponse();
	bool SentText();
	void Redirect(struct FString URL);
	void SendStandardHeaders(struct FString ContentType, unsigned long bCache);
	void HTTPError(int32_t ErrorNum, struct FString Data);
	void SendHeaders();
	void AddHeader(struct FString Header, unsigned long bReplace);
	void HTTPHeader(struct FString Header);
	void HttpResponse(struct FString Header);
	void FailAuthentication(struct FString Realm);
	bool SendCachedFile(struct FString Filename, struct FString ContentType);
	void eventSendBinary(int32_t Count, uint8_t B);
	void eventSendText(struct FString Text, unsigned long bNoCRLF);
	void Dump();
	struct FString GetHTTPExpiration(int32_t OffsetSeconds);
	struct FString LoadParsedUHTM(struct FString Filename);
	bool IncludeBinaryFile(struct FString Filename);
	bool IncludeUHTM(struct FString Filename);
	void ClearSubst();
	void Subst(struct FString Variable, struct FString Value, unsigned long bClear);
	bool FileExists(struct FString Filename);
};

// Class IpDrv.OnlinePlaylistProvider
// 0x0030 (0x009C - 0x00CC)
class UOnlinePlaylistProvider : public UUIResourceDataProvider
{
public:
	int32_t                                            PlaylistId;                                    // 0x00A0 (0x0004) [0x0000000000004000] (CPF_Config)  
	TArray<struct FName>                               PlaylistGameTypeNames;                         // 0x00A8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     DisplayName;                                   // 0x00B8 (0x0010) [0x000000000040C002] (CPF_Const | CPF_Config | CPF_Localized | CPF_NeedCtorLink)
	int32_t                                            Priority;                                      // 0x00C8 (0x0004) [0x0000000000004000] (CPF_Config)  
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.OnlinePlaylistProvider");
		}

		return uClassPointer;
	};

};

// Class IpDrv.UIDataStore_OnlinePlaylists
// 0x0060 (0x00A0 - 0x0100)
class UUIDataStore_OnlinePlaylists : public UUIDataStore
{
public:
	struct FString                                     ProviderClassName;                             // 0x00A0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UClass*                                      ProviderClass;                                 // 0x00B0 (0x0008) [0x0000000000002000] (CPF_Transient)
	TArray<class UUIResourceDataProvider*>             RankedDataProviders;                           // 0x00B8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<class UUIResourceDataProvider*>             UnrankedDataProviders;                         // 0x00C8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<class UUIResourceDataProvider*>             RecModeDataProviders;                          // 0x00D8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<class UUIResourceDataProvider*>             PrivateDataProviders;                          // 0x00E8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class UOnlinePlaylistManager*                      PlaylistMan;                                   // 0x00F8 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.UIDataStore_OnlinePlaylists");
		}

		return uClassPointer;
	};

	int32_t eventGetMatchTypeForPlaylistId(int32_t PlaylistId);
	class UOnlinePlaylistProvider* GetOnlinePlaylistProvider(struct FName ProviderTag, int32_t PlaylistId, int32_t& ProviderIndex);
	bool GetPlaylistProvider(struct FName ProviderTag, int32_t ProviderIndex, class UUIResourceDataProvider*& out_Provider);
	bool GetResourceProviders(struct FName ProviderTag, TArray<class UUIResourceDataProvider*>& out_Providers);
	void eventInit();
};

// Class IpDrv.WebApplication
// 0x0020 (0x0060 - 0x0080)
class UWebApplication : public UObject
{
public:
	class AWorldInfo*                                  WorldInfo;                                     // 0x0060 (0x0008) [0x0000000000000000]               
	class AWebServer*                                  WebServer;                                     // 0x0068 (0x0008) [0x0000000000000000]               
	struct FString                                     Path;                                          // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.WebApplication");
		}

		return uClassPointer;
	};

	void PostQuery(class UWebRequest* Request, class UWebResponse* Response);
	void Query(class UWebRequest* Request, class UWebResponse* Response);
	bool PreQuery(class UWebRequest* Request, class UWebResponse* Response);
	void CleanupApp();
	void Cleanup();
	void Init();
};

// Class IpDrv.WebServer
// 0x01D0 (0x02D8 - 0x04A8)
class AWebServer : public ATcpLink
{
public:
	struct FString                                     ServerName;                                    // 0x02D8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     Applications[0xA];                             // 0x02E8 (0x00A0) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     ApplicationPaths[0xA];                         // 0x0388 (0x00A0) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	unsigned long                                      bEnabled : 1;                                  // 0x0428 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	int32_t                                            ListenPort;                                    // 0x042C (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxConnections;                                // 0x0430 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            DefaultApplication;                            // 0x0434 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            ExpirationSeconds;                             // 0x0438 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FString                                     ServerURL;                                     // 0x0440 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UWebApplication*                             ApplicationObjects[0xA];                       // 0x0450 (0x0050) [0x0000000000000000]               
	int32_t                                            ConnectionCount;                               // 0x04A0 (0x0004) [0x0000000000000000]               
	int32_t                                            ConnID;                                        // 0x04A4 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.WebServer");
		}

		return uClassPointer;
	};

	class UWebApplication* GetApplication(struct FString URI, struct FString& SubURI);
	void eventLostChild(class AActor* C);
	void eventGainedChild(class AActor* C);
	void eventDestroyed();
	void PostBeginPlay();
};

// Class IpDrv.HelloWeb
// 0x0000 (0x0080 - 0x0080)
class UHelloWeb : public UWebApplication
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.HelloWeb");
		}

		return uClassPointer;
	};

	void eventQuery(class UWebRequest* Request, class UWebResponse* Response);
	void Init();
};

// Class IpDrv.ImageServer
// 0x0000 (0x0080 - 0x0080)
class UImageServer : public UWebApplication
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.ImageServer");
		}

		return uClassPointer;
	};

	void eventQuery(class UWebRequest* Request, class UWebResponse* Response);
};

// Class IpDrv.McpServiceConfig
// 0x0040 (0x0060 - 0x00A0)
class UMcpServiceConfig : public UObject
{
public:
	struct FString                                     Protocol;                                      // 0x0060 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     Domain;                                        // 0x0070 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     AppKey;                                        // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     AppSecret;                                     // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpServiceConfig");
		}

		return uClassPointer;
	};

	struct FString GetUserAuthTicket(struct FString McpId);
};

// Class IpDrv.McpClashMobBase
// 0x00A0 (0x0078 - 0x0118)
class UMcpClashMobBase : public UMcpServiceBase
{
public:
	struct FString                                     McpClashMobClassName;                          // 0x0078 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryChallengeListComplete__Delegate;      // 0x0088 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDownloadChallengeFileComplete__Delegate;   // 0x00A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAcceptChallengeComplete__Delegate;         // 0x00B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryChallengeUserStatusComplete__Delegate;// 0x00D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUpdateChallengeUserProgressComplete__Delegate;// 0x00E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUpdateChallengeUserRewardComplete__Delegate;// 0x0100 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpClashMobBase");
		}

		return uClassPointer;
	};

	void UpdateChallengeUserReward(struct FString UniqueChallengeId, struct FString UniqueUserId, int32_t UserReward);
	void OnUpdateChallengeUserRewardComplete(unsigned long bWasSuccessful, struct FString UniqueChallengeId, struct FString UniqueUserId, struct FString Error);
	void UpdateChallengeUserProgress(struct FString UniqueChallengeId, struct FString UniqueUserId, unsigned long bDidComplete, int32_t GoalProgress);
	void OnUpdateChallengeUserProgressComplete(unsigned long bWasSuccessful, struct FString UniqueChallengeId, struct FString UniqueUserId, struct FString Error);
	void GetChallengeUserStatus(struct FString UniqueChallengeId, struct FString UniqueUserId, struct FMcpClashMobChallengeUserStatus& OutChallengeUserStatus);
	void QueryChallengeMultiUserStatus(struct FString UniqueChallengeId, struct FString UniqueUserId, TArray<struct FString>& UserIdsToRead);
	void QueryChallengeUserStatus(struct FString UniqueChallengeId, struct FString UniqueUserId);
	void OnQueryChallengeUserStatusComplete(unsigned long bWasSuccessful, struct FString UniqueChallengeId, struct FString UniqueUserId, struct FString Error);
	void AcceptChallenge(struct FString UniqueChallengeId, struct FString UniqueUserId);
	void OnAcceptChallengeComplete(unsigned long bWasSuccessful, struct FString UniqueChallengeId, struct FString UniqueUserId, struct FString Error);
	void DeleteCachedChallengeFile(struct FString UniqueChallengeId, struct FString DLName);
	void ClearCachedChallengeFile(struct FString UniqueChallengeId, struct FString DLName);
	void GetChallengeFileContents(struct FString UniqueChallengeId, struct FString DLName, TArray<uint8_t>& OutFileContents);
	void DownloadChallengeFile(struct FString UniqueChallengeId, struct FString DLName);
	void GetChallengeFileList(struct FString UniqueChallengeId, TArray<struct FMcpClashMobChallengeFile>& OutChallengeFiles);
	void OnDownloadChallengeFileComplete(unsigned long bWasSuccessful, struct FString UniqueChallengeId, struct FString DLName, struct FString Filename, struct FString Error);
	void GetChallengeList(TArray<struct FMcpClashMobChallengeEvent>& OutChallengeEvents);
	void QueryChallengeList();
	void OnQueryChallengeListComplete(unsigned long bWasSuccessful, struct FString Error);
	class UMcpClashMobBase* CreateInstance();
};

// Class IpDrv.McpClashMobFileDownload
// 0x0000 (0x0128 - 0x0128)
class UMcpClashMobFileDownload : public UOnlineTitleFileDownloadWeb
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpClashMobFileDownload");
		}

		return uClassPointer;
	};

	struct FString GetUrlForFile(struct FString Filename);
};

// Class IpDrv.McpClashMobManager
// 0x0150 (0x0118 - 0x0268)
class UMcpClashMobManager : public UMcpClashMobBase
{
public:
	struct FString                                     ChallengeListUrl;                              // 0x0118 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     ChallengeStatusUrl;                            // 0x0128 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     ChallengeMultiStatusUrl;                       // 0x0138 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     AcceptChallengeUrl;                            // 0x0148 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     UpdateChallengeProgressUrl;                    // 0x0158 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     UpdateRewardProgressUrl;                       // 0x0168 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequestChallengeList;                      // 0x0178 (0x0008) [0x0000000000000000]               
	TArray<struct FMcpChallengeUserRequest>            ChallengeUserRequests;                         // 0x0180 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FMcpClashMobChallengeEvent>          ChallengeEvents;                               // 0x0190 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FMcpClashMobChallengeUserStatus>     ChallengeUserStatus;                           // 0x01A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FMcpClashMobChallengeUserStatus             TempChallengeUserStatus;                       // 0x01B0 (0x0090) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FMcpClashMobChallengeUserStatus>     TempChallengeUserStatusArray;                  // 0x0240 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UOnlineTitleFileCacheInterface*              FileCache;                                     // 0x0250 (0x0010) [0x0000000000000000]               
	uint8_t                                            FileCache_UnknownData00[0x8];                  // 0x0258 (0x0008) FIX WRONG SIZE OF PREVIOUS PROPERTY [Original: 0x0010, Missing: 0x0008]
	class UMcpClashMobFileDownload*                    FileDownloader;                                // 0x0260 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpClashMobManager");
		}

		return uClassPointer;
	};

	void OnUpdateChallengeUserRewardHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void UpdateChallengeUserReward(struct FString UniqueChallengeId, struct FString UniqueUserId, int32_t UserReward);
	void OnUpdateChallengeUserProgressHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void UpdateChallengeUserProgress(struct FString UniqueChallengeId, struct FString UniqueUserId, unsigned long bDidComplete, int32_t GoalProgress);
	void GetChallengeUserStatus(struct FString UniqueChallengeId, struct FString UniqueUserId, struct FMcpClashMobChallengeUserStatus& OutChallengeUserStatus);
	void OnQueryChallengeMultiStatusHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void QueryChallengeMultiUserStatus(struct FString UniqueChallengeId, struct FString UniqueUserId, TArray<struct FString>& UserIdsToRead);
	void OnQueryChallengeStatusHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void QueryChallengeUserStatus(struct FString UniqueChallengeId, struct FString UniqueUserId);
	void OnAcceptChallengeHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void AcceptChallenge(struct FString UniqueChallengeId, struct FString UniqueUserId);
	void DeleteCachedChallengeFile(struct FString UniqueChallengeId, struct FString DLName);
	void ClearCachedChallengeFile(struct FString UniqueChallengeId, struct FString DLName);
	void GetChallengeFileContents(struct FString UniqueChallengeId, struct FString DLName, TArray<uint8_t>& OutFileContents);
	void OnDownloadMcpFileComplete(unsigned long bWasSuccessful, struct FString DLName);
	void OnLoadCachedFileComplete(unsigned long bWasSuccessful, struct FString DLName);
	void DownloadChallengeFile(struct FString UniqueChallengeId, struct FString DLName);
	void GetChallengeFileList(struct FString UniqueChallengeId, TArray<struct FMcpClashMobChallengeFile>& OutChallengeFiles);
	void GetChallengeList(TArray<struct FMcpClashMobChallengeEvent>& OutChallengeEvents);
	void OnQueryChallengeListHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void QueryChallengeList();
	void Init();
};

// Class IpDrv.McpGroupsBase
// 0x00F8 (0x0078 - 0x0170)
class UMcpGroupsBase : public UMcpServiceBase
{
public:
	struct FString                                     McpGroupsManagerClassName;                     // 0x0078 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FMcpGroupList>                       GroupLists;                                    // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateGroupComplete__Delegate;             // 0x0098 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteGroupComplete__Delegate;             // 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryGroupsComplete__Delegate;             // 0x00C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryGroupMembersComplete__Delegate;       // 0x00E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAddGroupMembersComplete__Delegate;         // 0x00F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRemoveGroupMembersComplete__Delegate;      // 0x0110 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteAllGroupsComplete__Delegate;         // 0x0128 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryGroupInvitesComplete__Delegate;       // 0x0140 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAcceptGroupInviteComplete__Delegate;       // 0x0158 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpGroupsBase");
		}

		return uClassPointer;
	};

	void OnAcceptGroupInviteComplete(struct FString GroupId, unsigned long bWasSuccessful, struct FString Error);
	void AcceptGroupInvite(struct FString UniqueUserId, struct FString GroupId, unsigned long bShouldAccept);
	void GetGroupInviteList(struct FString UserId, struct FMcpGroupList& InviteList);
	void OnQueryGroupInvitesComplete(unsigned long bWasSuccessful, struct FString Error);
	void QueryGroupInvites(struct FString UniqueUserId);
	void OnDeleteAllGroupsComplete(struct FString RequesterId, unsigned long bWasSuccessful, struct FString Error);
	void DeleteAllGroups(struct FString OwnerId);
	void OnRemoveGroupMembersComplete(struct FString GroupId, unsigned long bWasSuccessful, struct FString Error);
	void RemoveGroupMembers(struct FString OwnerId, struct FString GroupId, TArray<struct FString>& MemberIds);
	void OnAddGroupMembersComplete(struct FString GroupId, unsigned long bWasSuccessful, struct FString Error);
	void AddGroupMembers(struct FString OwnerId, struct FString GroupId, unsigned long bRequiresAcceptance, TArray<struct FString>& MemberIds);
	void GetGroupMembers(struct FString GroupId, TArray<struct FMcpGroupMember>& GroupMembers);
	void OnQueryGroupMembersComplete(struct FString GroupId, unsigned long bWasSuccessful, struct FString Error);
	void QueryGroupMembers(struct FString UniqueUserId, struct FString GroupId);
	void GetGroupList(struct FString UserId, struct FMcpGroupList& GroupList);
	void OnQueryGroupsComplete(struct FString UserId, unsigned long bWasSuccessful, struct FString Error);
	void QueryGroups(struct FString RequesterId);
	void OnDeleteGroupComplete(struct FString GroupId, unsigned long bWasSuccessful, struct FString Error);
	void DeleteGroup(struct FString UniqueUserId, struct FString GroupId);
	void OnCreateGroupComplete(struct FMcpGroup Group, unsigned long bWasSuccessful, struct FString Error);
	void CreateGroup(struct FString OwnerId, struct FString GroupName);
	class UMcpGroupsBase* CreateInstance();
};

// Class IpDrv.McpGroupsManager
// 0x00F0 (0x0170 - 0x0260)
class UMcpGroupsManager : public UMcpGroupsBase
{
public:
	struct FString                                     CreateGroupUrl;                                // 0x0170 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     DeleteGroupUrl;                                // 0x0180 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     QueryGroupsUrl;                                // 0x0190 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     QueryGroupMembersUrl;                          // 0x01A0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     AddGroupMembersUrl;                            // 0x01B0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     RemoveGroupMembersUrl;                         // 0x01C0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     DeleteAllGroupsUrl;                            // 0x01D0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     AcceptGroupInviteUrl;                          // 0x01E0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     RejectGroupInviteUrl;                          // 0x01F0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryGroupsRequestComplete__Delegate;      // 0x0200 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryGroupMembersRequestComplete__Delegate;// 0x0218 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAddGroupMembersRequestComplete__Delegate;  // 0x0230 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAcceptGroupInviteRequestComplete__Delegate;// 0x0248 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpGroupsManager");
		}

		return uClassPointer;
	};

	void CacheGroupMember(struct FString MemberId, struct FString GroupId, uint8_t AcceptState);
	void CacheGroup(struct FString RequesterId, struct FMcpGroup Group);
	void OnAcceptGroupInviteRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful);
	void AcceptGroupInvite(struct FString UniqueUserId, struct FString GroupId, unsigned long bShouldAccept);
	void OnDeleteAllGroupsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful);
	void DeleteAllGroups(struct FString UniqueUserId);
	void OnRemoveGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful);
	void RemoveGroupMembers(struct FString UniqueUserId, struct FString GroupId, TArray<struct FString>& MemberIds);
	void OnAddGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful);
	void AddGroupMembers(struct FString UniqueUserId, struct FString GroupId, unsigned long bRequiresAcceptance, TArray<struct FString>& MemberIds);
	void GetGroupMembers(struct FString GroupId, TArray<struct FMcpGroupMember>& GroupMembers);
	void OnQueryGroupMembersRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful);
	void QueryGroupMembers(struct FString UniqueUserId, struct FString GroupId);
	void GetGroupList(struct FString UserId, struct FMcpGroupList& GroupList);
	void OnQueryGroupsRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful);
	void QueryGroups(struct FString RequesterId);
	void OnDeleteGroupRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful);
	void DeleteGroup(struct FString UniqueUserId, struct FString GroupId);
	void OnCreateGroupRequestComplete(class UHttpRequestInterface* CreateGroupRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful);
	void CreateGroup(struct FString UniqueUserId, struct FString GroupName);
};

// Class IpDrv.McpIdMappingBase
// 0x0040 (0x0078 - 0x00B8)
class UMcpIdMappingBase : public UMcpServiceBase
{
public:
	struct FString                                     McpIdMappingClassName;                         // 0x0078 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAddMappingComplete__Delegate;              // 0x0088 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryMappingsComplete__Delegate;           // 0x00A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpIdMappingBase");
		}

		return uClassPointer;
	};

	void GetIdMappings(struct FString ExternalType, TArray<struct FMcpIdMapping>& IDMappings);
	void OnQueryMappingsComplete(struct FString ExternalType, unsigned long bWasSuccessful, struct FString Error);
	void QueryMappings(struct FString ExternalType, TArray<struct FString>& ExternalIds);
	void OnAddMappingComplete(struct FString McpId, struct FString ExternalId, struct FString ExternalType, unsigned long bWasSuccessful, struct FString Error);
	void AddMapping(struct FString McpId, struct FString ExternalId, struct FString ExternalType);
	class UMcpIdMappingBase* CreateInstance();
};

// Class IpDrv.McpIdMappingManager
// 0x0050 (0x00B8 - 0x0108)
class UMcpIdMappingManager : public UMcpIdMappingBase
{
public:
	TArray<struct FMcpIdMapping>                       AccountMappings;                               // 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     AddMappingUrl;                                 // 0x00C8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     QueryMappingUrl;                               // 0x00D8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FAddMappingRequest>                  AddMappingRequests;                            // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FQueryMappingRequest>                QueryMappingRequests;                          // 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpIdMappingManager");
		}

		return uClassPointer;
	};

	void GetIdMappings(struct FString ExternalType, TArray<struct FMcpIdMapping>& IDMappings);
	void OnQueryMappingsRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void QueryMappings(struct FString ExternalType, TArray<struct FString>& ExternalIds);
	void OnAddMappingRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void AddMapping(struct FString McpId, struct FString ExternalId, struct FString ExternalType);
};

// Class IpDrv.McpManagedValueManagerBase
// 0x0070 (0x0078 - 0x00E8)
class UMcpManagedValueManagerBase : public UMcpServiceBase
{
public:
	struct FString                                     McpManagedValueManagerClassName;               // 0x0078 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateSaveSlotComplete__Delegate;          // 0x0088 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnReadSaveSlotComplete__Delegate;            // 0x00A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnUpdateValueComplete__Delegate;             // 0x00B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteValueComplete__Delegate;             // 0x00D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpManagedValueManagerBase");
		}

		return uClassPointer;
	};

	void OnDeleteValueComplete(struct FString McpId, struct FString SaveSlot, struct FName ValueId, unsigned long bWasSuccessful, struct FString Error);
	void DeleteValue(struct FString McpId, struct FString SaveSlot, struct FName ValueId);
	void OnUpdateValueComplete(struct FString McpId, struct FString SaveSlot, struct FName ValueId, int32_t Value, unsigned long bWasSuccessful, struct FString Error);
	void UpdateValue(struct FString McpId, struct FString SaveSlot, struct FName ValueId, int32_t Value);
	int32_t GetValue(struct FString McpId, struct FString SaveSlot, struct FName ValueId);
	TArray<struct FManagedValue> GetValues(struct FString McpId, struct FString SaveSlot);
	void OnReadSaveSlotComplete(struct FString McpId, struct FString SaveSlot, unsigned long bWasSuccessful, struct FString Error);
	void ReadSaveSlot(struct FString McpId, struct FString SaveSlot);
	void OnCreateSaveSlotComplete(struct FString McpId, struct FString SaveSlot, unsigned long bWasSuccessful, struct FString Error);
	void CreateSaveSlot(struct FString McpId, struct FString SaveSlot);
	class UMcpManagedValueManagerBase* CreateInstance();
};

// Class IpDrv.McpManagedValueManager
// 0x0090 (0x00E8 - 0x0178)
class UMcpManagedValueManager : public UMcpManagedValueManagerBase
{
public:
	struct FString                                     CreateSaveSlotUrl;                             // 0x00E8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     ReadSaveSlotUrl;                               // 0x00F8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     UpdateValueUrl;                                // 0x0108 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     DeleteValueUrl;                                // 0x0118 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FManagedValueSaveSlot>               SaveSlots;                                     // 0x0128 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct UMcpManagedValueManager_FSaveSlotRequestState> CreateSaveSlotRequests;                        // 0x0138 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct UMcpManagedValueManager_FSaveSlotRequestState> ReadSaveSlotRequests;                          // 0x0148 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FValueRequestState>                  UpdateValueRequests;                           // 0x0158 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FValueRequestState>                  DeleteValueRequests;                           // 0x0168 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpManagedValueManager");
		}

		return uClassPointer;
	};

	void OnDeleteValueRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void DeleteValue(struct FString McpId, struct FString SaveSlot, struct FName ValueId);
	void OnUpdateValueRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void UpdateValue(struct FString McpId, struct FString SaveSlot, struct FName ValueId, int32_t Value);
	int32_t GetValue(struct FString McpId, struct FString SaveSlot, struct FName ValueId);
	TArray<struct FManagedValue> GetValues(struct FString McpId, struct FString SaveSlot);
	void OnReadSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void ReadSaveSlot(struct FString McpId, struct FString SaveSlot);
	void ParseValuesForSaveSlot(struct FString McpId, struct FString SaveSlot, struct FString JsonPayload);
	int32_t FindSaveSlotIndex(struct FString McpId, struct FString SaveSlot);
	void OnCreateSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void CreateSaveSlot(struct FString McpId, struct FString SaveSlot);
};

// Class IpDrv.McpServerTimeBase
// 0x0028 (0x0078 - 0x00A0)
class UMcpServerTimeBase : public UMcpServiceBase
{
public:
	struct FString                                     McpServerTimeClassName;                        // 0x0078 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryServerTimeComplete__Delegate;         // 0x0088 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpServerTimeBase");
		}

		return uClassPointer;
	};

	struct FString GetLastServerTime();
	void OnQueryServerTimeComplete(unsigned long bWasSuccessful, struct FString DateTimeStr, struct FString Error);
	void QueryServerTime();
	class UMcpServerTimeBase* CreateInstance();
};

// Class IpDrv.McpServerTimeManager
// 0x0028 (0x00A0 - 0x00C8)
class UMcpServerTimeManager : public UMcpServerTimeBase
{
public:
	struct FString                                     TimeStampUrl;                                  // 0x00A0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     LastTimeStamp;                                 // 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequestServerTime;                         // 0x00C0 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpServerTimeManager");
		}

		return uClassPointer;
	};

	struct FString GetLastServerTime();
	void OnQueryServerTimeHTTPRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void QueryServerTime();
};

// Class IpDrv.McpUserInventoryBase
// 0x0100 (0x0078 - 0x0178)
class UMcpUserInventoryBase : public UMcpServiceBase
{
public:
	struct FString                                     McpUserInventoryClassName;                     // 0x0078 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateSaveSlotComplete__Delegate;          // 0x0088 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteSaveSlotComplete__Delegate;          // 0x00A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQuerySaveSlotListComplete__Delegate;       // 0x00B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryInventoryItemsComplete__Delegate;     // 0x00D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPurchaseItemComplete__Delegate;            // 0x00E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnSellItemComplete__Delegate;                // 0x0100 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnEarnItemComplete__Delegate;                // 0x0118 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnConsumeItemComplete__Delegate;             // 0x0130 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteItemComplete__Delegate;              // 0x0148 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRecordIapComplete__Delegate;               // 0x0160 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpUserInventoryBase");
		}

		return uClassPointer;
	};

	void OnRecordIapComplete(struct FString McpId, struct FString SaveSlotId, TArray<struct FString> UpdatedItemIds, unsigned long bWasSuccessful, struct FString Error);
	void RecordIap(struct FString McpId, struct FString SaveSlotId, struct FString Receipt);
	void OnDeleteItemComplete(struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, unsigned long bWasSuccessful, struct FString Error);
	void DeleteItem(struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, int32_t StoreVersion);
	void OnConsumeItemComplete(struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, TArray<struct FString> UpdatedItemIds, unsigned long bWasSuccessful, struct FString Error);
	void ConsumeItem(struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, int32_t Quantity, int32_t StoreVersion);
	void OnEarnItemComplete(struct FString McpId, struct FString SaveSlotId, struct FString GlobalItemId, TArray<struct FString> UpdatedItemIds, unsigned long bWasSuccessful, struct FString Error);
	void EarnItem(struct FString McpId, struct FString SaveSlotId, struct FString GlobalItemId, int32_t Quantity, int32_t StoreVersion);
	void OnSellItemComplete(struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, TArray<struct FString> UpdatedItemIds, unsigned long bWasSuccessful, struct FString Error);
	void SellItem(struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, int32_t Quantity, int32_t StoreVersion, TArray<struct FMcpInventoryItemContainer>& ExpectedResultItems);
	void OnPurchaseItemComplete(struct FString McpId, struct FString SaveSlotId, struct FString GlobalItemId, TArray<struct FString> UpdatedItemIds, unsigned long bWasSuccessful, struct FString Error);
	void PurchaseItem(struct FString McpId, struct FString SaveSlotId, struct FString GlobalItemId, TArray<struct FString> PurchaseItemIds, int32_t Quantity, int32_t StoreVersion, float Scalar);
	bool GetInventoryItem(struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, struct FMcpInventoryItem& OutInventoryItem);
	void GetInventoryItems(struct FString McpId, struct FString SaveSlotId, TArray<struct FMcpInventoryItem>& OutInventoryItems);
	void OnQueryInventoryItemsComplete(struct FString McpId, struct FString SaveSlotId, unsigned long bWasSuccessful, struct FString Error);
	void QueryInventoryItems(struct FString McpId, struct FString SaveSlotId);
	void OnQuerySaveSlotListComplete(struct FString McpId, unsigned long bWasSuccessful, struct FString Error);
	TArray<struct FString> GetSaveSlotList(struct FString McpId);
	void QuerySaveSlotList(struct FString McpId);
	void OnDeleteSaveSlotComplete(struct FString McpId, struct FString SaveSlotId, unsigned long bWasSuccessful, struct FString Error);
	void DeleteSaveSlot(struct FString McpId, struct FString SaveSlotId);
	void OnCreateSaveSlotComplete(struct FString McpId, struct FString SaveSlotId, unsigned long bWasSuccessful, struct FString Error);
	void CreateSaveSlot(struct FString McpId, struct FString SaveSlotId, struct FString ParentSaveSlotId);
	class UMcpUserInventoryBase* CreateInstance();
};

// Class IpDrv.McpUserInventoryManager
// 0x00F0 (0x0178 - 0x0268)
class UMcpUserInventoryManager : public UMcpUserInventoryBase
{
public:
	struct FString                                     CreateSaveSlotUrl;                             // 0x0178 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     DeleteSaveSlotUrl;                             // 0x0188 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     ListSaveSlotUrl;                               // 0x0198 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     ListItemsUrl;                                  // 0x01A8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     PurchaseItemUrl;                               // 0x01B8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     SellItemUrl;                                   // 0x01C8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     EarnItemUrl;                                   // 0x01D8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     ConsumeItemUrl;                                // 0x01E8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     DeleteItemUrl;                                 // 0x01F8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     IapRecordUrl;                                  // 0x0208 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FMcpInventorySaveSlot>               SaveSlots;                                     // 0x0218 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState> SaveSlotRequests;                              // 0x0228 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState> ListSaveSlotRequests;                          // 0x0238 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState> ListItemsRequests;                             // 0x0248 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FInventoryItemRequestState>          ItemRequests;                                  // 0x0258 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpUserInventoryManager");
		}

		return uClassPointer;
	};

	void OnRecordIapRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void RecordIap(struct FString McpId, struct FString SaveSlotId, struct FString Receipt);
	void OnDeleteItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void DeleteItem(struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, int32_t StoreVersion);
	void OnConsumeItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void ConsumeItem(struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, int32_t Quantity, int32_t StoreVersion);
	void OnEarnItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void EarnItem(struct FString McpId, struct FString SaveSlotId, struct FString GlobalItemId, int32_t Quantity, int32_t StoreVersion);
	void OnSellItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void SellItem(struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, int32_t Quantity, int32_t StoreVersion, TArray<struct FMcpInventoryItemContainer>& ExpectedResultItems);
	void OnPurchaseItemRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void PurchaseItem(struct FString McpId, struct FString SaveSlotId, struct FString GlobalItemId, TArray<struct FString> PurchaseItemIds, int32_t Quantity, int32_t StoreVersion, float Scalar);
	int32_t FindItemRequest(struct FString McpId, struct FString SaveSlotId, struct FString ItemID, TArray<struct FInventoryItemRequestState>& InItemRequests);
	int32_t FindSaveSlotRequest(struct FString McpId, struct FString SaveSlotId, TArray<struct UMcpUserInventoryManager_FSaveSlotRequestState>& InSaveSlotRequests);
	int32_t FindSaveSlotIndex(struct FString McpId, struct FString SaveSlotId);
	void ParseSaveSlotList(struct FString McpId, struct FString JsonPayload);
	TArray<struct FString> ParseInventoryForSaveSlot(struct FString McpId, struct FString SaveSlotId, struct FString JsonPayload);
	bool GetInventoryItem(struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, struct FMcpInventoryItem& OutInventoryItem);
	void GetInventoryItems(struct FString McpId, struct FString SaveSlotId, TArray<struct FMcpInventoryItem>& OutInventoryItems);
	void OnQueryInventoryItemsRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void QueryInventoryItems(struct FString McpId, struct FString SaveSlotId);
	TArray<struct FString> GetSaveSlotList(struct FString McpId);
	void OnQuerySaveSlotListRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void QuerySaveSlotList(struct FString McpId);
	void OnDeleteSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void DeleteSaveSlot(struct FString McpId, struct FString SaveSlotId);
	void OnCreateSaveSlotRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void CreateSaveSlot(struct FString McpId, struct FString SaveSlotId, struct FString ParentSaveSlotId);
};

// Class IpDrv.McpUserManagerBase
// 0x0070 (0x0078 - 0x00E8)
class UMcpUserManagerBase : public UMcpServiceBase
{
public:
	struct FString                                     McpUserManagerClassName;                       // 0x0078 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterUserComplete__Delegate;            // 0x0088 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnAuthenticateUserComplete__Delegate;        // 0x00A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnQueryUsersComplete__Delegate;              // 0x00B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnDeleteUserComplete__Delegate;              // 0x00D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpUserManagerBase");
		}

		return uClassPointer;
	};

	void OnDeleteUserComplete(unsigned long bWasSuccessful, struct FString Error);
	void DeleteUser(struct FString McpId);
	bool GetUser(struct FString McpId, struct FMcpUserStatus& User);
	void GetUsers(TArray<struct FMcpUserStatus>& Users);
	void OnQueryUsersComplete(unsigned long bWasSuccessful, struct FString Error);
	void QueryUsers(TArray<struct FString>& McpIds);
	void QueryUser(struct FString McpId, unsigned long bShouldUpdateLastActive);
	void OnAuthenticateUserComplete(struct FString McpId, struct FString Token, unsigned long bWasSuccessful, struct FString Error);
	void AuthenticateUserMcp(struct FString McpId, struct FString ClientSecret, struct FString UDID);
	void AuthenticateUserFacebook(struct FString FacebookId, struct FString FacebookToken, struct FString UDID);
	void OnRegisterUserComplete(struct FString McpId, unsigned long bWasSuccessful, struct FString Error);
	void RegisterUserFacebook(struct FString FacebookId, struct FString FacebookAuthToken);
	void RegisterUserGenerated();
	class UMcpUserManagerBase* CreateInstance();
};

// Class IpDrv.McpUserManager
// 0x00C0 (0x00E8 - 0x01A8)
class UMcpUserManager : public UMcpUserManagerBase
{
public:
	TArray<struct FMcpUserStatus>                      UserStatuses;                                  // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     RegisterUserMcpUrl;                            // 0x00F8 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     RegisterUserFacebookUrl;                       // 0x0108 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     QueryUserUrl;                                  // 0x0118 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     QueryUsersUrl;                                 // 0x0128 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     DeleteUserUrl;                                 // 0x0138 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     FacebookAuthUrl;                               // 0x0148 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     McpAuthUrl;                                    // 0x0158 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<class UHttpRequestInterface*>               RegisterUserRequests;                          // 0x0168 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UHttpRequestInterface*>               QueryUsersRequests;                            // 0x0178 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FUserRequest>                        DeleteUserRequests;                            // 0x0188 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UHttpRequestInterface*>               AuthUserRequests;                              // 0x0198 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.McpUserManager");
		}

		return uClassPointer;
	};

	void OnDeleteUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void DeleteUser(struct FString McpId);
	bool GetUser(struct FString McpId, struct FMcpUserStatus& User);
	void GetUsers(TArray<struct FMcpUserStatus>& Users);
	void OnQueryUsersRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void ParseUsers(struct FString JsonPayload);
	void QueryUsers(TArray<struct FString>& McpIds);
	void OnQueryUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void QueryUser(struct FString McpId, unsigned long bShouldUpdateLastActive);
	void OnAuthenticateUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	void AuthenticateUserMcp(struct FString McpId, struct FString ClientSecret, struct FString UDID);
	void AuthenticateUserFacebook(struct FString FacebookId, struct FString FacebookToken, struct FString UDID);
	void OnRegisterUserRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful);
	int32_t ParseUser(struct FString JsonPayload);
	void RegisterUserFacebook(struct FString FacebookId, struct FString FacebookAuthToken);
	void RegisterUserGenerated();
};

// Class IpDrv.WebConnection
// 0x0044 (0x02D8 - 0x031C)
class AWebConnection : public ATcpLink
{
public:
	class AWebServer*                                  WebServer;                                     // 0x02D8 (0x0008) [0x0000000000000000]               
	struct FString                                     ReceivedData;                                  // 0x02E0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UWebRequest*                                 Request;                                       // 0x02F0 (0x0008) [0x0000000000000000]               
	class UWebResponse*                                Response;                                      // 0x02F8 (0x0008) [0x0000000000000000]               
	class UWebApplication*                             Application;                                   // 0x0300 (0x0008) [0x0000000000000000]               
	unsigned long                                      bDelayCleanup : 1;                             // 0x0308 (0x0004) [0x0000000000000000] [0x00000001] 
	int32_t                                            RawBytesExpecting;                             // 0x030C (0x0004) [0x0000000000000000]               
	int32_t                                            MaxValueLength;                                // 0x0310 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxLineLength;                                 // 0x0314 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            ConnID;                                        // 0x0318 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class IpDrv.WebConnection");
		}

		return uClassPointer;
	};

	bool IsHanging();
	void Cleanup();
	void CheckRawBytes();
	void EndOfHeaders();
	void CreateResponseObject();
	void ProcessPost(struct FString S);
	void ProcessGet(struct FString S);
	void ProcessHead(struct FString S);
	void ReceivedLine(struct FString S);
	void eventReceivedText(struct FString Text);
	void eventTimer();
	void eventClosed();
	void eventAccepted();
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
