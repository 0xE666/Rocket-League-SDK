/*
#############################################################################################
# Rocket League (220128.59469.363257) SDK
# Generated with the UE3SDKGenerator v2.0.8
# ========================================================================================= #
# File: ProjectX_classes.hpp
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

#define CONST_ReservationType_Reconnect                          'Reconnect'
#define CONST_ReservationType_FriendJoin                         'FriendJoin'
#define CONST_ReservationType_JoinPrivateMatch                   'JoinPrivate'
#define CONST_MaxPrivateMatchPasswordLength                      16
#define CONST_MaxPrivateMatchNameLength                          16
#define CONST_LocalPlayersBroadcastDelay                         0.1f
#define CONST_QueueMax                                           100
#define CONST_InMatchmakingID                                    -2
#define CONST_HttpContentType                                    "plain/text"
#define CONST_NumFriendsPerRequest                               100
#define CONST_XpTitleID                                          'XP'
#define CONST_MaxPing                                            1.0f
#define CONST_ClosedReason_DuplicateLogin                        "DuplicateLogin"

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum ProjectX._Types_X.ESeverityType
enum class ESeverityType : uint8_t
{
	SeverityType_None                                  = 0,
	SeverityType_Low                                   = 1,
	SeverityType_Medium                                = 2,
	SeverityType_High                                  = 3,
	SeverityType_END                                   = 4
};

// Enum ProjectX._Types_X.EBanType
enum class EBanType : uint8_t
{
	BanType_None                                       = 0,
	BanType_Auth                                       = 1,
	BanType_Chat                                       = 2,
	BanType_Voice                                      = 3,
	BanType_Club                                       = 4,
	BanType_Trade                                      = 5,
	BanType_QuitPenalty                                = 6,
	BanType_END                                        = 7
};

// Enum ProjectX._Types_X.EConsoleQualityMode
enum class EConsoleQualityMode : uint8_t
{
	ConsoleQualityMode_Performance                     = 0,
	ConsoleQualityMode_Quality                         = 1,
	ConsoleQualityMode_END                             = 2
};

// Enum ProjectX._Types_X.EReservationStatus
enum class EReservationStatus : uint8_t
{
	ReservationStatus_None                             = 0,
	ReservationStatus_Reserved                         = 1,
	ReservationStatus_Joining                          = 2,
	ReservationStatus_InGame                           = 3,
	ReservationStatus_END                              = 4
};

// Enum ProjectX._Types_X.EJoinMatchType
enum class EJoinMatchType : uint8_t
{
	JMT_Public                                         = 0,
	JMT_Private                                        = 1,
	JMT_LanHost                                        = 2,
	JMT_LanGuest                                       = 3,
	JMT_END                                            = 4
};

// Enum ProjectX._Types_X.EDatabaseEnvironment
enum class EDatabaseEnvironment : uint8_t
{
	DBE_DevLocal                                       = 0,
	DBE_Dev                                            = 1,
	DBE_Test                                           = 2,
	DBE_Production                                     = 3,
	DBE_END                                            = 4
};

// Enum ProjectX._Types_X.EAxisSign
enum class EAxisSign : uint8_t
{
	AxisSign_None                                      = 0,
	AxisSign_Positive                                  = 1,
	AxisSign_Negative                                  = 2,
	AxisSign_END                                       = 3
};

// Enum ProjectX._Types_X.EButtonPressType
enum class EButtonPressType : uint8_t
{
	BPT_Normal                                         = 0,
	BPT_Tap                                            = 1,
	BPT_Hold                                           = 2,
	BPT_DoubleTap                                      = 3,
	BPT_Toggle                                         = 4,
	BPT_END                                            = 5
};

// Enum ProjectX._Types_X.ERemappable
enum class ERemappable : uint8_t
{
	Remappable_All                                     = 0,
	Remappable_Key                                     = 1,
	Remappable_Axis                                    = 2,
	Remappable_KeyTriggerAxis                          = 3,
	Remappable_None                                    = 4,
	Remappable_END                                     = 5
};

// Enum ProjectX._Types_X.EChatPermissionLevel
enum class EChatPermissionLevel : uint8_t
{
	CPL_Everybody                                      = 0,
	CPL_FriendsAndTeam                                 = 1,
	CPL_Friends                                        = 2,
	CPL_Nobody                                         = 3,
	CPL_END                                            = 4
};

// Enum ProjectX._Types_X.EPartyMatchmakingRestriction
enum class EPartyMatchmakingRestriction : uint8_t
{
	PMR_NotOriginalAppOwner                            = 0,
	PMR_PendingLicenseAgreement                        = 1,
	PMR_InMainMenu                                     = 2,
	PMR_NotLoggedInPsyNet                              = 3,
	PMR_END                                            = 4
};

// Enum ProjectX._Types_X.EOnlinePlayerPermission
enum class EOnlinePlayerPermission : uint8_t
{
	OPP_PrivateMatchAdmin                              = 0,
	OPP_SuperPrivateMatchAdmin                         = 1,
	OPP_END                                            = 2
};

// Enum ProjectX._Types_X.EOnlinePlayerRole
enum class EOnlinePlayerRole : uint8_t
{
	OPR_PrivateMatchAdmin                              = 0,
	OPR_SuperPrivateMatchAdmin                         = 1,
	OPR_END                                            = 2
};

// Enum ProjectX.EpicLogin_X.ELoginMethod
enum class ELoginMethod : uint8_t
{
	LoginMethod_RefreshToken                           = 0,
	LoginMethod_PlatformAuthTicket                     = 1,
	LoginMethod_END                                    = 2
};

// Enum ProjectX.OnlineGameParty_X.PartyProcessingStatus
enum class EPartyProcessingStatus : uint8_t
{
	PPS_None                                           = 0,
	PPS_Create                                         = 1,
	PPS_Join                                           = 2,
	PPS_END                                            = 3
};

// Enum ProjectX.EncodeObject_X.EObjectEncoding
enum class EObjectEncoding : uint8_t
{
	OPSE_UObject                                       = 0,
	OPSE_Json                                          = 1,
	OPSE_END                                           = 2
};

// Enum ProjectX.RPC_X.ERPCPriority
enum class ERPCPriority : uint8_t
{
	RPC_Low                                            = 0,
	RPC_Medium                                         = 1,
	RPC_High                                           = 2,
	RPC_END                                            = 3
};

// Enum ProjectX.AnimNodeSeries_X.EAnimNodeSeriesChild
enum class EAnimNodeSeriesChild : uint8_t
{
	AnimNodeSeries_Idle                                = 0,
	AnimNodeSeries_Intro                               = 1,
	AnimNodeSeries_Loop                                = 2,
	AnimNodeSeries_Outro                               = 3,
	AnimNodeSeries_END                                 = 4
};

// Enum ProjectX.BlogTile_X.ELinkType
enum class ELinkType : uint8_t
{
	LinkType_None                                      = 0,
	LinkType_RocketPass                                = 1,
	LinkType_Event                                     = 2,
	LinkType_END                                       = 3
};

// Enum ProjectX.BugReport_X.EFileTruncateType
enum class EFileTruncateType : uint8_t
{
	FileTruncate_None                                  = 0,
	FileTruncate_KeepStart                             = 1,
	FileTruncate_KeepEnd                               = 2,
	FileTruncate_END                                   = 3
};

// Enum ProjectX.ClanforgeReservation_X.EReserveState
enum class EReserveState : uint8_t
{
	ReserveState_Unitialized                           = 0,
	ReserveState_Unreserved                            = 1,
	ReserveState_Reserved                              = 2,
	ReserveState_END                                   = 3
};

// Enum ProjectX.ClubUtil_X.EClubColorChange
enum class EClubColorChange : uint8_t
{
	ClubColorChange_None                               = 0,
	ClubColorChange_SwapTeams                          = 1,
	ClubColorChange_SwapPrimaryAccent0                 = 2,
	ClubColorChange_SwapPrimaryAccent1                 = 3,
	ClubColorChange_SwapPrimaryAccent                  = 4,
	ClubColorChange_WhiteVsBlack                       = 5,
	ClubColorChange_Gray1                              = 6,
	ClubColorChange_END                                = 7
};

// Enum ProjectX.DynamicValue_X.EDynamicValueModType
enum class EDynamicValueModType : uint8_t
{
	ModType_Add                                        = 0,
	ModType_Multiply                                   = 1,
	ModType_MultiplyAdd                                = 2,
	ModType_Set                                        = 3,
	ModType_END                                        = 4
};

// Enum ProjectX.EOSGameClipsInterface_X.EOSGameClipsAvailability
enum class EOSGameClipsAvailability : uint8_t
{
	EOS_GCA_Pending                                    = 0,
	EOS_GCA_Available                                  = 1,
	EOS_GCA_NotSupported                               = 2,
	EOS_GCA_NotConfigured                              = 3,
	EOS_GCA_NotAvailable                               = 4,
	EOS_GCA_DisabledByUser                             = 5,
	EOS_GCA_END                                        = 6
};

// Enum ProjectX.EOSGameClipsInterface_X.EOSGameClipsRecording
enum class EOSGameClipsRecording : uint8_t
{
	EOS_GCR_NotRecording                               = 0,
	EOS_GCR_Recording                                  = 1,
	EOS_GCR_Paused                                     = 2,
	EOS_GCR_END                                        = 3
};

// Enum ProjectX.FakeData_X.FakeDataEnum
enum class EFakeDataEnum : uint8_t
{
	FakeData                                           = 0,
	FakeData01                                         = 1,
	FakeData02                                         = 2,
	FakeData_Count                                     = 3,
	FakeData_END                                       = 4
};

// Enum ProjectX.FXActor_X.EFXComponentState
enum class EFXComponentState : uint8_t
{
	FXComponentState_Detached                          = 0,
	FXComponentState_Attached                          = 1,
	FXComponentState_PendingDetach                     = 2,
	FXComponentState_END                               = 3
};

// Enum ProjectX.FXActor_X.EFXComponentTarget
enum class EFXComponentTarget : uint8_t
{
	FXComponentTarget_All                              = 0,
	FXComponentTarget_Local                            = 1,
	FXComponentTarget_NonLocal                         = 2,
	FXComponentTarget_END                              = 3
};

// Enum ProjectX.FXActor_X.EAttachActorLocationUnlockFlags
enum class EAttachActorLocationUnlockFlags : uint8_t
{
	EAALUF_None                                        = 0,
	EAALUF_X                                           = 1,
	EAALUF_Y                                           = 2,
	EAALUF_Z                                           = 3,
	EAALUF_END                                         = 4
};

// Enum ProjectX.FXActor_X.EFXLocality
enum class EFXLocality : uint8_t
{
	FXLocality_Controller                              = 0,
	FXLocality_AlwaysLocal                             = 1,
	FXLocality_NeverLocal                              = 2,
	FXLocality_END                                     = 3
};

// Enum ProjectX.GFxDataCallback_X.EDataCallbackType
enum class EDataCallbackType : uint8_t
{
	DataCallbackType_All                               = 0,
	DataCallbackType_Table                             = 1,
	DataCallbackType_Row                               = 2,
	DataCallbackType_Value                             = 3,
	DataCallbackType_END                               = 4
};

// Enum ProjectX.MaterialEffect_X.EMaterialEffectStage
enum class EMaterialEffectStage : uint8_t
{
	EFFECT_INACTIVE                                    = 0,
	EFFECT_FADE_IN                                     = 1,
	EFFECT_ACTIVE                                      = 2,
	EFFECT_FADE_OUT                                    = 3,
	EFFECT_END                                         = 4
};

// Enum ProjectX.OnlineGameDLC_X.DLCOwnershipState
enum class EDLCOwnershipState : uint8_t
{
	DLCOwnershipState_Unknown                          = 0,
	DLCOwnershipState_Owned                            = 1,
	DLCOwnershipState_NotOwned                         = 2,
	DLCOwnershipState_Error                            = 3,
	DLCOwnershipState_END                              = 4
};

// Enum ProjectX.WordFilterTypes_X.EWordFilterUsage
enum class EWordFilterUsage : uint8_t
{
	WordFilterUsage_PlayerName                         = 0,
	WordFilterUsage_TrainingName                       = 1,
	WordFilterUsage_LanServerName                      = 2,
	WordFilterUsage_CustomTeamName                     = 3,
	WordFilterUsage_TourName                           = 4,
	WordFilterUsage_TourTeamName                       = 5,
	WordFilterUsage_ClubName                           = 6,
	WordFilterUsage_ClubTag                            = 7,
	WordFilterUsage_ClubMotD                           = 8,
	WordFilterUsage_ClubTagPlayerName                  = 9,
	WordFilterUsage_MatchChat                          = 10,
	WordFilterUsage_PartyChat                          = 11,
	WordFilterUsage_END                                = 12
};

// Enum ProjectX.OnlinePlayerRegionRestrictions_X.ERegionRestriction
enum class ERegionRestriction : uint8_t
{
	RegionRestriction_Unknown                          = 0,
	RegionRestriction_KeyCrate                         = 1,
	RegionRestriction_Trade                            = 2,
	RegionRestriction_KeyRocketPassTier                = 3,
	RegionRestriction_END                              = 4
};

// Enum ProjectX.PerCon_X.EPerConStatus
enum class EPerConStatus : uint8_t
{
	PerConStatus_Disabled                              = 0,
	PerConStatus_Enabled                               = 1,
	PerConStatus_END                                   = 2
};

// Enum ProjectX.RegionPing_X.RegionPingResult
enum class ERegionPingResult : uint8_t
{
	PingResult_NotUsable                               = 0,
	PingResult_UsingCache                              = 1,
	PingResult_UsingSuccessfulPing                     = 2,
	PingResult_END                                     = 3
};

// Enum ProjectX.ReservationsPasswordMessage_X.EPasswordFailureReason
enum class EPasswordFailureReason : uint8_t
{
	PFR_Empty                                          = 0,
	PFR_Mismatch                                       = 1,
	PFR_END                                            = 2
};

// Enum ProjectX.ShakeComponent_X.EShakeReceiver
enum class EShakeReceiver : uint8_t
{
	ShakeReceiver_All                                  = 0,
	ShakeReceiver_Local                                = 1,
	ShakeReceiver_NonLocal                             = 2,
	ShakeReceiver_END                                  = 3
};

// Enum ProjectX.TcpConnection.EWebSocketState
enum class EWebSocketState : uint8_t
{
	WebSocketState_NotRequired                         = 0,
	WebSocketState_NeedsHandshake                      = 1,
	WebSocketState_Connected                           = 2,
	WebSocketState_END                                 = 3
};

// Enum ProjectX.TcpConnection.ETcpConnectionState
enum class ETcpConnectionState : uint8_t
{
	TcpConnectionState_Invalid                         = 0,
	TcpConnectionState_Connecting                      = 1,
	TcpConnectionState_Connected                       = 2,
	TcpConnectionState_Disconnected                    = 3,
	TcpConnectionState_END                             = 4
};

// Enum ProjectX.WebRequest_X.EWebRequestState
enum class EWebRequestState : uint8_t
{
	WebRequestState_PendingSend                        = 0,
	WebRequestState_PendingResponse                    = 1,
	WebRequestState_Success                            = 2,
	WebRequestState_Error                              = 3,
	WebRequestState_END                                = 4
};


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class ProjectX._SharedHelpers
// 0x0000 (0x0060 - 0x0060)
class U_SharedHelpers : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX._SharedHelpers");
		}

		return uClassPointer;
	};

	int32_t ScoreDeltaFromDefault(class UObject* Object);
	void DrawShadowedText(class UCanvas* Canvas, struct FString Text, int32_t ShadowOffsetX, int32_t ShadowOffsetY, int32_t ShadowAlpha);
	bool IsInTransientPackage(class UObject* Obj);
	class APlayerController* GetAPlayerController(class UClass* PlayerControllerClass);
	class UObject* GetDefaultObject(class UClass* ObjClass);
	void DumpUnreferencedAnims();
	struct FString GetLanguageExtension();
};

// Class ProjectX._Types_X
// 0x0048 (0x0060 - 0x00A8)
class U_Types_X : public UObject
{
public:
	struct FScriptDelegate                             __OnPriviledgeChecked__Delegate;               // 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ServiceExecutionDelegate__Delegate;          // 0x0078 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnTimer__Delegate;                           // 0x0090 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX._Types_X");
		}

		return uClassPointer;
	};

	void JoinCredentialsFromString(struct FString Credentials, struct FString& JoinName, struct FString& JoinPassword);
	struct FString JoinCredentialsToString(struct FString JoinName, struct FString JoinPassword);
	struct FString GenerateRandomPrivateMatchPassword();
	struct FString GenerateRandomPrivateMatchName();
	struct FString GenerateRandomName(int32_t Length);
	void OnTimer();
	struct FServerReservationData GetServerReservationData(struct FCheckReservationResponse& Response);
	void ServiceExecutionDelegate(class UPsyNetClientService_X* Service);
	void OnPriviledgeChecked(class UPrivilegeCheck_X* PrivilegeCheck);
};

// Class ProjectX.ActorComponent_X
// 0x0007 (0x009D - 0x00A4)
class UActorComponent_X : public UActorComponent
{
public:
	unsigned long                                      bTick : 1;                                     // 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIgnoreScriptAttach : 1;                       // 0x00A0 (0x0004) [0x0000000000002002] [0x00000002] (CPF_Const | CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ActorComponent_X");
		}

		return uClassPointer;
	};

	void Reattach();
	void eventTick(float DeltaTime);
	void eventDetached();
	void eventAttached();
	void eventBeginPlay();
};

// Class ProjectX.ExplosionComponent_X
// 0x003C (0x00A4 - 0x00E0)
class UExplosionComponent_X : public UActorComponent_X
{
public:
	float                                              RBVelocityChange;                              // 0x00A8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              StartRadius;                                   // 0x00AC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EndRadius;                                     // 0x00B0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Speed;                                         // 0x00B4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Falloff;                                       // 0x00B8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bPassThroughWorldGeometry : 1;                 // 0x00BC (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bIgnoreInstigator : 1;                         // 0x00BC (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      bDebug : 1;                                    // 0x00BC (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	struct FVector                                     MomentumOffset;                                // 0x00C0 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              LifeTime;                                      // 0x00CC (0x0004) [0x0000000000002000] (CPF_Transient)
	TArray<class AActor*>                              DamagedActors;                                 // 0x00D0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ExplosionComponent_X");
		}

		return uClassPointer;
	};

	void eventProcessHit(class AActor* Victim, struct FVector HitLocation, struct FTraceHitInfo ExtraHitInfo, float DamageScale);
	void eventDetached();
};

// Class ProjectX.ExplosionHitHandler_X
// 0x0050 (0x00A4 - 0x00F4)
class UExplosionHitHandler_X : public UActorComponent_X
{
public:
	float                                              StartTime;                                     // 0x00A8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EndTime;                                       // 0x00AC (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UExplosionCollisionShapes_X*                 CollisionInformation;                          // 0x00B0 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	unsigned long                                      bIgnoreInstigator : 1;                         // 0x00B8 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bPassThroughWorldGeometry : 1;                 // 0x00B8 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      bOnlyApplyImpulseOnce : 1;                     // 0x00B8 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	unsigned long                                      bDebug : 1;                                    // 0x00B8 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	unsigned long                                      bPullTowardHitLocation : 1;                    // 0x00B8 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	float                                              Falloff;                                       // 0x00BC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              RBVelocityChange;                              // 0x00C0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Speed;                                         // 0x00C4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     MomentumOffset;                                // 0x00C8 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FBox                                        GoalWorldBox;                                  // 0x00D4 (0x001C) [0x0000000000002000] (CPF_Transient)
	float                                              LifeTime;                                      // 0x00F0 (0x0004) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ExplosionHitHandler_X");
		}

		return uClassPointer;
	};

	void Destroy();
	void Init(class UActorComponent_X* ExplosionGoal);
	void eventProcessHit(class AActor* Victim, struct FVector HitLocation, float DamageScale, struct FContactInformation& ContactInfo);
};

// Class ProjectX.MICParamDispenserComponent_X
// 0x0024 (0x00A4 - 0x00C8)
class UMICParamDispenserComponent_X : public UActorComponent_X
{
public:
	struct FPointer                                    VfTable_IISetParameter;                        // 0x00A8 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	int32_t                                            MaterialIndex;                                 // 0x00B0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       AttachedComponentName;                         // 0x00B4 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UMeshComponent*                              MeshComp;                                      // 0x00C0 (0x0008) [0x0000004004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.MICParamDispenserComponent_X");
		}

		return uClassPointer;
	};

	bool __MICParamDispenserComponent_X__Attached_542E0D2C4E0E21DC8761FABED242168A(struct FFXAttachment A);
	void eventAttached();
	void SetActorParameter(struct FName Key, class AActor* Value);
	void SetLinearColorParameter(struct FName Key, struct FLinearColor Value);
	void SetVectorParameter(struct FName Key, struct FVector Value);
	void SetFloatParameter(struct FName Key, float Value);
	void SetNameParameter(struct FName Key, struct FName Value);
};

// Class ProjectX.ShakeComponent_X
// 0x0114 (0x00A4 - 0x01B8)
class UShakeComponent_X : public UActorComponent_X
{
public:
	float                                              InnerRadius;                                   // 0x00A8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              OuterRadius;                                   // 0x00AC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Falloff;                                       // 0x00B0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bAutoPlay : 1;                                 // 0x00B4 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bAutoDetach : 1;                               // 0x00B4 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      bOnlyAffectPlayersWithPawns : 1;               // 0x00B4 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	unsigned long                                      bAttenuate : 1;                                // 0x00B4 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	unsigned long                                      bPlaying : 1;                                  // 0x00B4 (0x0004) [0x0000004000002000] [0x00000010] (CPF_Transient)
	unsigned long                                      bStopping : 1;                                 // 0x00B4 (0x0004) [0x0000004000002000] [0x00000020] (CPF_Transient)
	uint8_t                                            Receiver;                                      // 0x00B8 (0x0001) [0x0000000000000001] (CPF_Edit)    
	float                                              RadiusScale;                                   // 0x00BC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendInTime;                                   // 0x00C0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              BlendOutTime;                                  // 0x00C4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UCameraShake*                                ShakeParams;                                   // 0x00C8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FRawDistributionFloat                       AmplitudeScale;                                // 0x00D0 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       FrequencyScale;                                // 0x00F8 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       DurationScale;                                 // 0x0120 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	float                                              CurrentAmplitudeScale;                         // 0x0148 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              CurrentFrequencyScale;                         // 0x014C (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class UForceFeedbackWaveform*                      ForceFeedbackWaveform;                         // 0x0150 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              ForceFeedbackScale;                            // 0x0158 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ForceFeedbackBalance;                          // 0x015C (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FParticleSysParam>                   InstanceParameters;                            // 0x0160 (0x0010) [0x0000000004400001] (CPF_Edit | CPF_NeedCtorLink | CPF_EditInline)
	float                                              PlayTime;                                      // 0x0170 (0x0004) [0x0000004000002000] (CPF_Transient)
	float                                              StopTime;                                      // 0x0174 (0x0004) [0x0000004000002000] (CPF_Transient)
	struct FVector                                     ShakeLocTimeOffset;                            // 0x0178 (0x000C) [0x0000004000002000] (CPF_Transient)
	struct FVector                                     ShakeRotTimeOffset;                            // 0x0184 (0x000C) [0x0000004000002000] (CPF_Transient)
	float                                              ShakeFOVTimeOffset;                            // 0x0190 (0x0004) [0x0000004000002000] (CPF_Transient)
	float                                              CameraShakeDuration;                           // 0x0194 (0x0004) [0x0000004000002000] (CPF_Transient)
	float                                              ForceFeedbackDuration;                         // 0x0198 (0x0004) [0x0000004000002000] (CPF_Transient)
	float                                              ForceFeedbackSamplesTime;                      // 0x019C (0x0004) [0x0000004000002000] (CPF_Transient)
	class AActor*                                      PrevOwner;                                     // 0x01A0 (0x0008) [0x0000004000002000] (CPF_Transient)
	TArray<struct FShakeReceiver>                      Receivers;                                     // 0x01A8 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ShakeComponent_X");
		}

		return uClassPointer;
	};

	bool GetColorParameter(struct FName InName, struct FColor& OutColor);
	bool GetVectorParameter(struct FName InName, struct FVector& OutVector);
	bool GetFloatParameter(struct FName InName, float& OutFloat);
	void SetColorParameter(struct FName ParameterName, struct FColor Param);
	void SetVectorRandParameter(struct FName ParameterName, struct FVector& Param, struct FVector& ParamLow);
	void SetVectorParameter(struct FName ParameterName, struct FVector Param);
	void SetFloatRandParameter(struct FName ParameterName, float Param, float ParamLow);
	void SetFloatParameter(struct FName ParameterName, float Param);
	bool IsPlaying();
	void eventStopShake(float InBlendOutTime);
	void InitParams();
	void eventPlayShake();
	void eventDetached();
	void eventAttached();
};

// Class ProjectX.AdHocBeacon_X
// 0x0010 (0x0060 - 0x0070)
class UAdHocBeacon_X : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    pAdHoc;                                        // 0x0068 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.AdHocBeacon_X");
		}

		return uClassPointer;
	};

	int32_t GetNodeCountMax();
	void AdHocJoinMatch();
	void AdHocCreateMatch();
	bool AdHocIsActive();
	void AdHocDisconnectFromAccessPoint();
	void AdHocConnectToAccessPoint(int32_t ScanResultIndex);
	void AdHocScanForAccessPoints();
	void AdHocBecomeStation();
	void AdHocRejectStation(int32_t NetworkNodeIndex);
	void AdHocBecomeAccessPoint();
	void AdHocSetAdvertiseData(struct FString AdvertiseData);
	void AdHocDestroy();
	void AdHocCreate();
	void AdHocCreateWithUsername(struct FString Username);
	void eventConstruct();
};

// Class ProjectX.FXActor_X
// 0x00C0 (0x0268 - 0x0328)
class AFXActor_X : public AActor
{
public:
	class UFXActorEvent_X*                             SpawnState;                                    // 0x0268 (0x0008) [0x0000000000000000]               
	class UFXActorEvent_X*                             ActivationState;                               // 0x0270 (0x0008) [0x0000000000000000]               
	TArray<struct FFXAttachment>                       Attachments;                                   // 0x0278 (0x0010) [0x0002000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	uint8_t                                            Locality;                                      // 0x0288 (0x0001) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       SocketOrBoneName;                              // 0x028C (0x0008) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bDeactivateWhenOwnerDestroyed : 1;             // 0x0294 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bAllowShadowCasting : 1;                       // 0x0294 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      bAutoActivate : 1;                             // 0x0294 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	unsigned long                                      bRenderInactive : 1;                           // 0x0294 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	unsigned long                                      bActive : 1;                                   // 0x0294 (0x0004) [0x0000004000002000] [0x00000010] (CPF_Transient)
	unsigned long                                      bHadOwner : 1;                                 // 0x0294 (0x0004) [0x0000004000002002] [0x00000020] (CPF_Const | CPF_Transient)
	class AFXActor_X*                                  Parent;                                        // 0x0298 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class AActor*                                      AttachmentActor;                               // 0x02A0 (0x0008) [0x0000004000002000] (CPF_Transient)
	TArray<class UFXActorEvent_X*>                     FXStates;                                      // 0x02A8 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FFXActorEventCheck>                  FXEvents;                                      // 0x02B8 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	float                                              DestroyWaitTime;                               // 0x02C8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DestroyTime;                                   // 0x02CC (0x0004) [0x0000004000000000]               
	class UParameterDispenser_X*                       Parameters;                                    // 0x02D0 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            EditID;                                        // 0x02D8 (0x0004) [0x0000000800020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	TArray<struct FFXEventSubscription>                EventSubscriptions;                            // 0x02E0 (0x0010) [0x0000004000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	class UFXActorEvent_X*                             AnimationEndState;                             // 0x02F0 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __EventFXStatePushed__Delegate;                // 0x02F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventFXStatePopped__Delegate;                // 0x0310 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.FXActor_X");
		}

		return uClassPointer;
	};

	void eventDumpDebugInfo();
	class UFXAttachmentTraitBase_X* GetTrait(class UClass* TraitClass, int32_t AttachmentIdx);
	void eventOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime);
	void eventOnAnimPlay(class UAnimNodeSequence* SeqNode);
	void eventDestroyed();
	void SubscribeState(class UFXActorEvent_X* FXEvent, struct FScriptDelegate OnPushed, struct FScriptDelegate OnPopped);
	void SetStateEnabled(class UFXActorEvent_X* State, unsigned long bEnable);
	void OnToggle(class USeqAct_Toggle* Action);
	void OnTriggerFXActor_X(class USeqAct_TriggerFXActor_X* SeqAct);
	void Inherit(class AFXActor_X* Other);
	void ResetParticles();
	void StopAllEffects();
	void eventDeactivateAndDestroy();
	void eventOnDetached(class UActorComponent* AC);
	void eventDeactivateFXComponent(class UActorComponent* AC);
	void eventActivateFXComponent(class UActorComponent* AC);
	void eventOnAttached(class UActorComponent* AC);
	int32_t GetComponentsAttachmentIndex(class UActorComponent* ComponentToFind);
	void UpdateFXStates();
	bool IsLocallyControlled();
	class AController* GetControllerOwner();
	void ToggleState(class UFXActorEvent_X* NewState);
	bool RemoveStateForceUpdate(class UFXActorEvent_X* OldState);
	bool RemoveEvent(class UFXActorEvent_X* OldEvent);
	bool RemoveState(class UFXActorEvent_X* OldState);
	void AddEvent(class UFXActorEvent_X* NewEvent);
	void AddState(class UFXActorEvent_X* NewState);
	bool CanRemoveEvent(struct FFXActorEventCheck& InEvent);
	bool IsStateActive(class UFXActorEvent_X* InState);
	void Deactivate();
	void Activate();
	void HandleParentStatePopped(class AFXActor_X* P, class UFXActorEvent_X* Event);
	void HandleParentStatePushed(class AFXActor_X* P, class UFXActorEvent_X* Event);
	void BindTo(class AFXActor_X* ParentFXActor);
	void SetAttachmentActor(class AActor* AttachToActor);
	void PostBeginPlay();
	void AllAttachments(class UClass* ComponentClass, class UActorComponent*& OutComponent, int32_t& OutAttachmentIdx);
	class UActorComponent* GetComponentByName(class UClass* ComponentClass, struct FName ComponentName);
	void EventFXStatePopped(class AFXActor_X* FXActor, class UFXActorEvent_X* Event);
	void EventFXStatePushed(class AFXActor_X* FXActor, class UFXActorEvent_X* Event);
};

// Class ProjectX.AnimateParametersComponent_X
// 0x003F (0x009D - 0x00DC)
class UAnimateParametersComponent_X : public UActorComponent
{
public:
	TArray<struct FAnimatedFloatParam>                 FloatParameters;                               // 0x00A0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FAnimatedVectorParam>                VectorParameters;                              // 0x00B0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FAnimatedLinearColorParam>           ColorParameters;                               // 0x00C0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	unsigned long                                      bResetMaterialsOnComplete : 1;                 // 0x00D0 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	float                                              AnimTime;                                      // 0x00D4 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              EndTime;                                       // 0x00D8 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.AnimateParametersComponent_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.ArchetypePrefab_X
// 0x0020 (0x0268 - 0x0288)
class AArchetypePrefab_X : public AActor
{
public:
	TArray<class AActor*>                              PrefabArchetypes;                              // 0x0268 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<class AActor*>                              ArchetypeInstances;                            // 0x0278 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ArchetypePrefab_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.ArchetypeSpawnPoint_X
// 0x0070 (0x0268 - 0x02D8)
class AArchetypeSpawnPoint_X : public AActor
{
public:
	struct FPointer                                    VfTable_IInterface_NavMeshPathObject;          // 0x0268 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FString                                     ArchetypePath;                                 // 0x0270 (0x0010) [0x0000080000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	unsigned long                                      bSeedNavMesh : 1;                              // 0x0280 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bSpawnOnLevelStart : 1;                        // 0x0280 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      bOnlyAllowOneInstance : 1;                     // 0x0280 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	class AActor*                                      ActorArchetype;                                // 0x0288 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class USpriteComponent*                            PlacementSprite;                               // 0x0290 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class USkeletalMeshComponent*                      ArchetypeSkeletalMesh;                         // 0x0298 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UStaticMeshComponent*                        ArchetypeStaticMesh;                           // 0x02A0 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	TArray<class AActor*>                              SpawnedActors;                                 // 0x02A8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class AActor*                                      SpawnedActor;                                  // 0x02B8 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FScriptDelegate                             __EventSpawned__Delegate;                      // 0x02C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ArchetypeSpawnPoint_X");
		}

		return uClassPointer;
	};

	void OnSpawned(class AActor* Spawned);
	class AActor* DoSpawn();
	void OnToggle(class USeqAct_Toggle* Action);
	void OnDestroy(class USeqAct_Destroy* Action);
	void eventPostBeginPlay();
	void EventSpawned(class AArchetypeSpawnPoint_X* SpawnPoint, class AActor* Spawned);
};

// Class ProjectX.Aws4Signature_X
// 0x0000 (0x0060 - 0x0060)
class UAws4Signature_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.Aws4Signature_X");
		}

		return uClassPointer;
	};

	void SignRequest(class UHttpRequestInterface* HTTPRequest);
};

// Class ProjectX.ReservationBeacon_X
// 0x0068 (0x0070 - 0x00D8)
class UReservationBeacon_X : public UComponent
{
public:
	TArray<struct FBeaconMessageHandler>               MessageHandlers;                               // 0x0070 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class UTcpMessageBeacon*                           TcpBeacon;                                     // 0x0080 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPsyNetBeacon_X*                             PsyNetBeacon;                                  // 0x0088 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FScriptDelegate                             __MessageReceivedDelegate__Delegate;           // 0x0090 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventConnected__Delegate;                    // 0x00A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDisconnected__Delegate;                 // 0x00C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ReservationBeacon_X");
		}

		return uClassPointer;
	};

	void __ReservationBeacon_X__Construct_C3AD9E3340CCAB3350800F8B73B34671();
	void __ReservationBeacon_X__Construct_2020784A428D50111F58298DE7B6F651(class UPsyNetBeaconConnection_X* Connection, class UObject* Message);
	void __ReservationBeacon_X__Construct_A25D926F49F804E2C3D0778CDDB00966(class UPsyNetBeacon_X* _, class UPsyNetBeaconConnection_X* Connection);
	void __ReservationBeacon_X__Construct_5899160042CEA39DA11FB88F5BA63AD8(class UPsyNetBeacon_X* _, class UPsyNetBeaconConnection_X* Connection);
	void __ReservationBeacon_X__Construct_ABCDA6D246A8F85F3125C293D6266926(class UTcpConnection* Connection, class UObject* Message);
	void __ReservationBeacon_X__Construct_FB1E76134F5F2C0302639D87CE9DCE8E(class UTcpBeacon* _, class UTcpConnection* Connection);
	void __ReservationBeacon_X__Construct_6F2F8DD6490ED55BD0F44EA5A27489B4(class UTcpBeacon* _, class UTcpConnection* Connection);
	class UIReservationConnection_X* ServerReserveConnection(struct FString ReservationID, struct FUniqueNetId PlayerID, float ConnectionTimeoutSeconds);
	class UIReservationConnection_X* BeginPsyNetConnect(struct FString ReservationID, struct FString DSRToken);
	class UIReservationConnection_X* BeginTcpConnect(struct FString BeaconURL);
	class UIReservationConnection_X* BeginConnect(struct FServerReservationData Reservation);
	void Close();
	void CloseConnection(class UIReservationConnection_X* Connection);
	void eventBroadcastMessage(class UObject* Message);
	void SendReservationMessage(class UObject* Message, struct FServerReservationData& Reservation);
	void eventSendMessage(class UIReservationConnection_X* Connection, class UObject* Message);
	class UBeaconMessage_X* CreateMessage(class UClass* MessageClass);
	void ReceiveMessage(class UIReservationConnection_X* Connection, class UObject* Message);
	void RemoveMessageHandler(struct FScriptDelegate Callback);
	void AddMessageHandler(class UClass* MessageClass, struct FScriptDelegate Callback);
	void BeginListen();
	void eventConstruct();
	void EventDisconnected(class UReservationBeacon_X* Beacon, class UIReservationConnection_X* Connection);
	void EventConnected(class UReservationBeacon_X* Beacon, class UIReservationConnection_X* Connection);
	void MessageReceivedDelegate(class UIReservationConnection_X* Connection, class UObject* Message);
};

// Class ProjectX.BeaconMessage_X
// 0x0000 (0x0060 - 0x0060)
class UBeaconMessage_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.BeaconMessage_X");
		}

		return uClassPointer;
	};

	class UBeaconMessage_X* Broadcast();
	class UBeaconMessage_X* Send(class UIReservationConnection_X* Connection);
};

// Class ProjectX.BugReport_X
// 0x0154 (0x0060 - 0x01B4)
class UBugReport_X : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FString                                     BugReportClassName;                            // 0x0068 (0x0010) [0x0000000000444000] (CPF_Config | CPF_GlobalConfig | CPF_NeedCtorLink)
	struct FString                                     URL;                                           // 0x0078 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            MaxFileSizeMegabytes;                          // 0x0088 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FString                                     BugID;                                         // 0x0090 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FBugReportSubmitterData                     SubmitterData;                                 // 0x00A0 (0x0030) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FBugReportSystemData                        SystemData;                                    // 0x00D0 (0x0038) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FBugReportPathData                          PathData;                                      // 0x0108 (0x0040) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FBugReportDescriptionData                   DescriptionData;                               // 0x0148 (0x0050) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FPointer                                    LogFile;                                       // 0x0198 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	TArray<struct FFileUploadData>                     FileUploads;                                   // 0x01A0 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      bUploadNextFile : 1;                           // 0x01B0 (0x0004) [0x0000000000002002] [0x00000001] (CPF_Const | CPF_Transient)
	unsigned long                                      bSubmitted : 1;                                // 0x01B0 (0x0004) [0x0000000000002002] [0x00000002] (CPF_Const | CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.BugReport_X");
		}

		return uClassPointer;
	};

	void HandleHttpRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* InHttpResponse, unsigned long bDidSucceed);
	void LogText(struct FString Str);
	void eventPDIReport();
	void CancelBugReport();
	void SubmitBugReport(struct FString Title, struct FString Description, struct FString Email);
	void StartBugReport();
	void StaticSubmitBugReport(struct FString Title);
	class UBugReport_X* CreateBugReport();
};

// Class ProjectX.CachedWebData_X
// 0x005C (0x0060 - 0x00BC)
class UCachedWebData_X : public UObject
{
public:
	TArray<uint8_t>                                    Data;                                          // 0x0060 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	int32_t                                            DataCRC;                                       // 0x0070 (0x0004) [0x0000000000000002] (CPF_Const)   
	struct FString                                     ETag;                                          // 0x0078 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FString                                     ContentType;                                   // 0x0088 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FString                                     Signature;                                     // 0x0098 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	class UError*                                      LoadError;                                     // 0x00A8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UError*                                      DownloadError;                                 // 0x00B0 (0x0008) [0x0000000000002000] (CPF_Transient)
	unsigned long                                      bNewData : 1;                                  // 0x00B8 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.CachedWebData_X");
		}

		return uClassPointer;
	};

	struct FString GetText();
	void SetData(TArray<uint8_t> NewData, struct FString NewETag, struct FString NewContentType, struct FString NewSignature);
};

// Class ProjectX.Camera_X
// 0x0110 (0x05B8 - 0x06C8)
class ACamera_X : public ACamera
{
public:
	TArray<class UCameraState_X*>                      States;                                        // 0x05B8 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FRotator                                    PCDeltaRotation;                               // 0x05C8 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FRotator                                    OldControllerRotation;                         // 0x05D4 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     PCDeltaLocation;                               // 0x05E0 (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     OldControllerLocation;                         // 0x05EC (0x000C) [0x0000000000002000] (CPF_Transient)
	struct FCameraOrientation                          PreProcessPOV;                                 // 0x05F8 (0x002C) [0x0000000000002000] (CPF_Transient)
	struct FCameraOrientation                          PostProcessPOV;                                // 0x0624 (0x002C) [0x0000000000002000] (CPF_Transient)
	class UCameraStateBlender_X*                       Blender;                                       // 0x0650 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FVector                                     ShakeLocationOffset;                           // 0x0658 (0x000C) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FRotator                                    ShakeRotationOffset;                           // 0x0664 (0x000C) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              ShakeFOVOffset;                                // 0x0670 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FColor                                      StartFadeColor;                                // 0x0674 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FColor                                      EndFadeColor;                                  // 0x0678 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FVector                                     ClipOffset;                                    // 0x067C (0x000C) [0x0000000000002000] (CPF_Transient)
	TArray<struct FLocationCameraKnock>                LocationKnocks;                                // 0x0688 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FRotationCameraKnock>                RotationKnocks;                                // 0x0698 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      bDisableCameraShake : 1;                       // 0x06A8 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      bSnapNextTransition : 1;                       // 0x06A8 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	struct FScriptDelegate                             __EventCameraStateChanged__Delegate;           // 0x06B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.Camera_X");
		}

		return uClassPointer;
	};

	void __Camera_X__Destroyed_C544D46044148FBCB98940B82FF71EE6(class UCameraState_X* S);
	void Destroyed();
	void eventOnViewTargetChanged();
	void SetViewTarget(class AActor* NewViewTarget, struct FViewTargetTransitionParams TransitionParams);
	bool IsTransitioning();
	void HandleBlenderStateChanged(class UCameraStateBlender_X* CameraBlender);
	void SnapTransition();
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void ApplyCameraModifiers(float DeltaTime, struct FTPOV& OutPOV);
	bool CameraTrace(struct FVector End, struct FVector Start, struct FVector Extent, struct FVector& HitLoc, class AActor*& HitActor);
	class UCameraState_X* InstanceCameraState(class UCameraState_X* Archetype);
	void eventModifyPostProcessSettings(struct FPostProcessSettings& PP);
	void ProcessViewRotation(float DeltaTime, struct FRotator& OutViewRotation, struct FRotator& OutDeltaRot);
	void PostProcessCameraState(float DeltaTime, struct FCameraOrientation& OutPOV);
	void ProcessCameraState(float DeltaTime, struct FCameraOrientation& OutPOV);
	void CheckViewTarget(struct FTViewTarget& VT);
	void CopyFade(class ACamera_X* Other);
	void SetCameraFade(unsigned long bNewEnableFading, struct FColor NewFadeColor, struct FVector2D NewFadeAlpha, float NewFadeTime, unsigned long bNewFadeAudio);
	void UpdateFade(float DeltaTime);
	void eventUpdateCamera(float DeltaTime);
	void ClampPOV(struct FCameraOrientation& OutPOV);
	struct FRotator RemoveRoll(struct FRotator InRot);
	class UCameraState_X* GetCameraState();
	class UCameraState_X* SelectCameraState();
	void UpdateCameraState();
	void UpdateCameraKnocks(float DeltaTime, struct FCameraOrientation& OutPOV);
	void AddRotationKnock(struct FRotationCameraKnock Knock, float Scale);
	void AddLocationKnock(struct FLocationCameraKnock Knock, float Scale, struct FRotator Transform);
	void InstanceCameraStates();
	void InitializeFor(class APlayerController* PC);
	void ModifyCameraShakeScale(class UCameraShake* Shake, float NewScale);
	void OnLoadingMovieClosesd();
	void eventPostBeginPlay();
	struct FVector InterpVector(struct FVector OldValue, struct FVector NewValue, struct FVectorInterpRate Rate, struct FRotator Orientation, float DeltaTime);
	void FinalizeOrientation(struct FCameraOrientation& OutPOV);
	struct FCameraOrientation BlendCameraOrientations(float Alpha, struct FCameraOrientation& A, struct FCameraOrientation& B);
	void EventCameraStateChanged(class ACamera_X* Camera, class UCameraState_X* CameraState);
};

// Class ProjectX.CameraAttachmentComponent_X
// 0x0017 (0x009D - 0x00B4)
class UCameraAttachmentComponent_X : public UActorComponent
{
public:
	TArray<class UActorComponent*>                     Attachments;                                   // 0x00A0 (0x0010) [0x0000000004480009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline)
	unsigned long                                      bDirtyTransform : 1;                           // 0x00B0 (0x0004) [0x0000000000002002] [0x00000001] (CPF_Const | CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.CameraAttachmentComponent_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.CanvasTexture_X
// 0x0018 (0x0190 - 0x01A8)
class UCanvasTexture_X : public UTextureRenderTarget2D
{
public:
	struct FScriptDelegate                             __Draw__Delegate;                              // 0x0190 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.CanvasTexture_X");
		}

		return uClassPointer;
	};

	void Draw(class UCanvas* C);
};

// Class ProjectX.CanvasTextureComponent_X
// 0x0023 (0x009D - 0x00C0)
class UCanvasTextureComponent_X : public UActorComponent
{
public:
	class UMeshComponent*                              Mesh;                                          // 0x00A0 (0x0008) [0x000000000408000B] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            MaterialIndex;                                 // 0x00A8 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       MaterialParamName;                             // 0x00AC (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UCanvasTexture_X*                            Texture;                                       // 0x00B8 (0x0008) [0x000000000440000B] (CPF_Edit | CPF_Const | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.CanvasTextureComponent_X");
		}

		return uClassPointer;
	};

	void OnDraw(class UCanvas* C);
};

// Class ProjectX.PlayerController_X
// 0x00A8 (0x07B8 - 0x0860)
class APlayerController_X : public APlayerController
{
public:
	class ACamera*                                     CameraArchetype;                               // 0x07B8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class AHUD*                                        HUDArchetype;                                  // 0x07C0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class APawn*                                       OldPawnReference;                              // 0x07C8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class AActor*                                      LockedDebugActor;                              // 0x07D0 (0x0008) [0x0000000000002000] (CPF_Transient)
	unsigned long                                      bPausedForExternalUI : 1;                      // 0x07D8 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	class UNetConnection*                              NetConnection;                                 // 0x07E0 (0x0008) [0x0000004000002000] (CPF_Transient)
	struct FScriptDelegate                             __EventReceivedPRI__Delegate;                  // 0x07E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPawnChange__Delegate;                   // 0x0800 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventReceivedPlayer__Delegate;               // 0x0818 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDestroyed__Delegate;                    // 0x0830 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerCameraChange__Delegate;           // 0x0848 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PlayerController_X");
		}

		return uClassPointer;
	};

	void ToggleDebugCamera();
	void DebugCrosshair();
	void DebugKill();
	void DebugKillAllExcept();
	bool GetAutoAimTarget(class AActor*& HitActor, struct FVector& HitLoc);
	void __PlayerController_X__ReceivedPlayer_4186571345991FEC91D5818F174140DD(class UObject* _);
	void ClientSetSeasonReward(struct FPlayerSeasonRewardProgress Reward);
	void ServerUpdateCustomMatchSettings(struct FCustomMatchSettings Settings);
	void ServerSetParty(struct FUniqueNetId MemberId, struct FUniqueNetId NewPartyID);
	void DisconnectSplitScreenPlayer(class UPlayer* P);
	void ServerDestroy();
	void KickPlayerForReason(struct FString Reason, struct FString Title);
	void ClientNetLag(float PktLag, float PktVariance, float PktLoss, float PktDup, float PktSpike);
	void ServerNetLag(float PktLag, float PktVariance, float PktLoss, float PktDup, float PktSpike);
	void Pause();
	float GetConnectionTimeSinceLastReceived();
	void RemoveOptionFromLastURL(struct FString OptName);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void eventClearOnlineDelegates();
	void RegisterOnlineDelegates();
	void eventClientPlayForceFeedbackWaveform(class UForceFeedbackWaveform* FFWaveform, class AActor* FFWaveformInstigator);
	void ClientCommand(struct FString Command);
	void ServerCommand(struct FString Command);
	void eventUnPossess();
	void eventPossess(class APawn* aPawn);
	void OnPawnChange(class APawn* OldPawn, class APawn* NewPawn);
	void PawnReferenceUpdated();
	void ClientRestart(class APawn* NewPawn);
	void GivePawn(class APawn* NewPawn);
	void eventInitInputSystem();
	class ACamera* GetCameraArchetype();
	void eventSpawnPlayerCamera();
	void SetPlayerCamera(class ACamera* NewCamera);
	void AddCheats(unsigned long bForce);
	class UOnlineGameAccount_X* GetOnlineAccount();
	class UOnlinePlayer_X* GetOnlinePlayer();
	void OnReceivedPlayerAndPRI();
	void InitPlayerReplicationInfo();
	void eventDestroyed();
	void OnExternalUIChanged(unsigned long bIsOpening);
	void SetPaused(unsigned long bPaused);
	void eventReceivedPlayer();
	class UOnlineGame_X* GetOnlineGame();
	class UIOnlineGameHost_X* GetOnlineGameHost();
	class UOnlineGameLanServer_X* GetOnlineGameLanServer();
	class UOnlineGameDedicatedServer_X* GetOnlineGameDedicatedServer();
	void SpawnDefaultHUD();
	void SetPRI(class APlayerReplicationInfo* PRI);
	void eventReplicatedEvent(struct FName VarName);
	void EventPlayerCameraChange(class APlayerController_X* PC);
	void EventDestroyed(class APlayerController_X* PC);
	void EventReceivedPlayer(class APlayerController_X* PC);
	void EventPawnChange(class APlayerController_X* PC, class APawn* OldPawn, class APawn* NewPawn);
	void EventReceivedPRI(class APlayerController_X* PC);
};

// Class ProjectX.CheatManager_X
// 0x0018 (0x0080 - 0x0098)
class UCheatManager_X : public UCheatManager
{
public:
	struct FScriptDelegate                             __EventDelegateTest__Delegate;                 // 0x0080 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.CheatManager_X");
		}

		return uClassPointer;
	};

	void HandleImageDownloaded(struct FOnlineImageDownload Image);
	void DownloadImage(struct FString URL);
	void RandomSleep(float MinDelay, float MaxDelay, float MinSleep, float MaxSleep);
	void Sleep(float Seconds);
	void LoadKismetLevel(struct FName LeveFileName);
	void DrawBulletContacts(float LifeTime);
	void PrintReproPhysics(struct FString Command, class AActor* A);
	void ReproPhysics(class AActor* A, float LX, float LY, float LZ, float RX, float RY, float RZ, float RW, float VX, float VY, float VZ, float AX, float AY, float AZ);
	void DisableCCD();
	void SetNetServerMaxTickRate(float Rate);
	void ScreenShotDir(struct FString Directory);
	void ListVisiblePrimitives();
	void HideVisiblePrimitives(struct FString NameMatch, struct FString NameIgnore);
	void ToggleReplicateVoiceToSelf();
	void ToggleReplicateVoiceToSender();
	void ShutdownCheatManager();
	void InitCheatManager();
	void EventDelegateTest();
};

// Class ProjectX.CheatObject_X
// 0x0000 (0x0060 - 0x0060)
class UCheatObject_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.CheatObject_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.ColorPalette_X
// 0x0020 (0x0060 - 0x0080)
class UColorPalette_X : public UObject
{
public:
	int32_t                                            DefaultId;                                     // 0x0060 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            HueCount;                                      // 0x0064 (0x0004) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	int32_t                                            ValueCount;                                    // 0x0068 (0x0004) [0x0000000000020003] (CPF_Edit | CPF_Const | CPF_EditConst)
	TArray<struct FLinearColor>                        Colors;                                        // 0x0070 (0x0010) [0x0000000000420003] (CPF_Edit | CPF_Const | CPF_EditConst | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ColorPalette_X");
		}

		return uClassPointer;
	};

	int32_t IntColorToID(int32_t ColorInt);
	int32_t IdToColorInt(int32_t ColorID);
	struct FColorPosition GetColorPosition(int32_t ColorID);
	struct FLinearColor GetValidColor(struct FLinearColor InColor);
	int32_t GetClosestID(struct FLinearColor InColor);
	struct FLinearColor GetColor(int32_t ColorID);
};

// Class ProjectX.Compression_X
// 0x0000 (0x0060 - 0x0060)
class UCompression_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.Compression_X");
		}

		return uClassPointer;
	};

	bool Uncompress(TArray<uint8_t>& Compressed, TArray<uint8_t>& Uncompressed);
	bool Compress(TArray<uint8_t>& Uncompressed, TArray<uint8_t>& Compressed);
};

// Class ProjectX.ControlPreset_X
// 0x0048 (0x0060 - 0x00A8)
class UControlPreset_X : public UObject
{
public:
	TArray<struct FPlayerBinding>                      PCBindings;                                    // 0x0060 (0x0010) [0x0000004000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FPlayerBinding>                      GamepadBindings;                               // 0x0070 (0x0010) [0x0000004000404000] (CPF_Config | CPF_NeedCtorLink)
	unsigned long                                      bRemovedPCOverrides : 1;                       // 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRemovedGamepadOverrides : 1;                  // 0x0080 (0x0004) [0x0000000000000000] [0x00000002] 
	TArray<struct FPlayerBinding>                      SteamInputBindings;                            // 0x0088 (0x0010) [0x0000004000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FName                                       CustomPresetName;                              // 0x0098 (0x0008) [0x0000000000000002] (CPF_Const)   
	struct FName                                       DefaultPresetName;                             // 0x00A0 (0x0008) [0x0000000000000002] (CPF_Const)   
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ControlPreset_X");
		}

		return uClassPointer;
	};

	TArray<struct FPlayerBinding> GetGamepadBindings();
	TArray<struct FPlayerBinding> GetPCBindings();
};

// Class ProjectX.CrashReport_X
// 0x0000 (0x0060 - 0x0060)
class UCrashReport_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.CrashReport_X");
		}

		return uClassPointer;
	};

	void eventHandleHttpRequestComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bSuccess);
};

// Class ProjectX.CRC_X
// 0x0000 (0x0060 - 0x0060)
class UCRC_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.CRC_X");
		}

		return uClassPointer;
	};

	int32_t CrcBytes(TArray<uint8_t>& Bytes);
	int32_t CrcString(struct FString Text);
};

// Class ProjectX.CycleLog_X
// 0x001C (0x0070 - 0x008C)
class UCycleLog_X : public UComponent
{
public:
	int32_t                                            MaxLogs;                                       // 0x0070 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FString>                             Logs;                                          // 0x0078 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            LogIndex;                                      // 0x0088 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.CycleLog_X");
		}

		return uClassPointer;
	};

	void AllLogs(struct FString& S);
};

// Class ProjectX.DistributionFloatShakeParameter_X
// 0x0007 (0x00A1 - 0x00A8)
class UDistributionFloatShakeParameter_X : public UDistributionFloatParameterBase
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.DistributionFloatShakeParameter_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.EffectsMap_X
// 0x0010 (0x0060 - 0x0070)
class UEffectsMap_X : public UObject
{
public:
	TArray<struct FEffectsMapping>                     Effects;                                       // 0x0060 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.EffectsMap_X");
		}

		return uClassPointer;
	};

	struct FEffectsMapping GetEffects(class UPhysicalMaterial* PhysMat);
};

// Class ProjectX.EngineShare_X
// 0x0120 (0x0060 - 0x0180)
class UEngineShare_X : public UEngineShare
{
public:
	class UOnlineGame_Base_X*                          OnlineGame;                                    // 0x0060 (0x0008) [0x0000004000002000] (CPF_Transient)
	class ULocalCache_X*                               LocalCache;                                    // 0x0068 (0x0008) [0x0000004000002000] (CPF_Transient)
	struct FString                                     ArchetypeString_OnlineGame;                    // 0x0070 (0x0010) [0x0000080000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	struct FString                                     ArchetypeString_OnlineGameDedicatedServer;     // 0x0080 (0x0010) [0x0000080000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	struct FString                                     ArchetypeString_OnlineGameLanServer;           // 0x0090 (0x0010) [0x0000080000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	unsigned long                                      bDisableSaving : 1;                            // 0x00A0 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      bIsShowingLoadmapMovie : 1;                    // 0x00A0 (0x0004) [0x0000000000002002] [0x00000002] (CPF_Const | CPF_Transient)
	unsigned long                                      bUndocked : 1;                                 // 0x00A0 (0x0004) [0x0000000000000002] [0x00000004] (CPF_Const)
	struct FScriptDelegate                             __EventPreExit__Delegate;                      // 0x00A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLoadingMovieClosed__Delegate;           // 0x00C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPreScriptsReloaded__Delegate;           // 0x00D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPostScriptsReloaded__Delegate;          // 0x00F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventOnlineGameInitialized__Delegate;        // 0x0108 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPreLoadMap__Delegate;                   // 0x0120 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPostLoadMap__Delegate;                  // 0x0138 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventCrashed__Delegate;                      // 0x0150 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventUndockedChanged__Delegate;              // 0x0168 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.EngineShare_X");
		}

		return uClassPointer;
	};

	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void eventPreExit();
	bool IsRequestingExit();
	struct FString GetUserAgentHeader();
	struct FString GetRegionString();
	struct FString GetPlatformString();
	bool ConfigGetString(struct FString SectionName, struct FString KeyName, struct FString& OutValue);
	bool ParseCommandlineString(struct FString Param, unsigned long bShouldStopOnComma, struct FString& OutValue);
	bool ParseCommandlineQWORD(struct FString Param, uint64_t& OutValue);
	bool ParseCommandlineFloat(struct FString Param, float& OutValue);
	bool ParseCommandlineInt(struct FString Param, int32_t& OutValue);
	bool ParseCommandlineParam(struct FString Param);
	void InitOnlineGame(class UOnlineSubsystem* NewOnlineSubsystem);
	bool IsUsingNullRHI();
	bool IsAuthoritative();
	bool IsNetServer();
	bool IsNetClient();
	bool IsHeadlessGameClient();
	bool IsGameClient();
	bool IsLanServer();
	bool IsDedicatedServer();
	void EventUndockedChanged();
	void EventCrashed();
	void EventPostLoadMap();
	void EventPreLoadMap(struct FString MapName);
	void EventOnlineGameInitialized();
	void EventPostScriptsReloaded();
	void EventPreScriptsReloaded();
	void EventLoadingMovieClosed();
	void EventPreExit();
};

// Class ProjectX.EOS_ErrorResponse
// 0x0038 (0x0060 - 0x0098)
class UEOS_ErrorResponse : public UObject
{
public:
	struct FString                                     ErrorMessage;                                  // 0x0060 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	int32_t                                            NumericErrorCode;                              // 0x0070 (0x0004) [0x0001000000000000]               
	struct FString                                     ErrorCode;                                     // 0x0078 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	TArray<struct FString>                             MessageVars;                                   // 0x0088 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.EOS_ErrorResponse");
		}

		return uClassPointer;
	};

};

// Class ProjectX.EOS_GetAccountsResponse
// 0x0010 (0x0060 - 0x0070)
class UEOS_GetAccountsResponse : public UObject
{
public:
	TArray<struct FEOSAccountInfo>                     Accounts;                                      // 0x0060 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.EOS_GetAccountsResponse");
		}

		return uClassPointer;
	};

};

// Class ProjectX.EOS_AccountSummaryResponse
// 0x0050 (0x0070 - 0x00C0)
class UEOS_AccountSummaryResponse : public UEOS_GetAccountsResponse
{
public:
	TArray<struct FEOSAccountInfo>                     Friends;                                       // 0x0070 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	TArray<struct FEOSAccountInfo>                     Incoming;                                      // 0x0080 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	TArray<struct FEOSAccountInfo>                     Outgoing;                                      // 0x0090 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	TArray<struct FEOSAccountInfo>                     BlockList;                                     // 0x00A0 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	struct FAccountSettings                            Settings;                                      // 0x00B0 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.EOS_AccountSummaryResponse");
		}

		return uClassPointer;
	};

};

// Class ProjectX.EOS_ManageBlockListResponse
// 0x0020 (0x0060 - 0x0080)
class UEOS_ManageBlockListResponse : public UObject
{
public:
	struct FString                                     AccountId;                                     // 0x0060 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	struct FString                                     Created;                                       // 0x0070 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.EOS_ManageBlockListResponse");
		}

		return uClassPointer;
	};

};

// Class ProjectX.EOS_ManageFriendsListResponse
// 0x0010 (0x0060 - 0x0070)
class UEOS_ManageFriendsListResponse : public UObject
{
public:
	struct FString                                     Status;                                        // 0x0060 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.EOS_ManageFriendsListResponse");
		}

		return uClassPointer;
	};

};

// Class ProjectX.EOSMetricEvent_X
// 0x0008 (0x0060 - 0x0068)
class UEOSMetricEvent_X : public UObject
{
public:
	struct FName                                       EventName;                                     // 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.EOSMetricEvent_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.EOSMetrics_X
// 0x0058 (0x0060 - 0x00B8)
class UEOSMetrics_X : public UObject
{
public:
	class UPsyNet_X*                                   PsyNet;                                        // 0x0060 (0x0008) [0x0001800000000000]               
	class UEOSMetricsConfig_X*                         EOSMetricsConfig;                              // 0x0068 (0x0008) [0x0001000000000001] (CPF_Edit)    
	class ULocalPlayer_X*                              LocalPlayer;                                   // 0x0070 (0x0008) [0x0001004000000000]               
	unsigned long                                      bCrashing : 1;                                 // 0x0078 (0x0004) [0x0001004000000000] [0x00000001] 
	struct FString                                     EMGuid;                                        // 0x0080 (0x0010) [0x0001004000400000] (CPF_NeedCtorLink)
	struct FString                                     QueryParamsTemplate;                           // 0x0090 (0x0010) [0x0001004000400000] (CPF_NeedCtorLink)
	struct FMetricEventJsonStruct                      CurrentEvents;                                 // 0x00A0 (0x0010) [0x0001004000400000] (CPF_NeedCtorLink)
	class UEOSMetricEvent_X*                           LatestPresenceEvent;                           // 0x00B0 (0x0008) [0x0001004000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.EOSMetrics_X");
		}

		return uClassPointer;
	};

	void __EOSMetrics_X__Init_61034D0342805A20CB66F39DFC9A2C35(class UEOSMetricsConfig_X* EpicMetric);
	struct FString GetUserIdNative(struct FUniqueNetId LocalId, struct FString EpicId);
	void AddPresenceEvent(class UEOSMetricEvent_X* InEvent);
	void AddEvent(class UEOSMetricEvent_X* InEvent);
	void HandleCrash();
	struct FString GetUploadType();
	struct FString GetUserId();
	struct FString GetURL();
	void SendPing();
	void Init(class ULocalPlayer_X* InLocalPlayer);
};

// Class ProjectX.LocalPlayer_X
// 0x0008 (0x04D0 - 0x04D8)
class ULocalPlayer_X : public ULocalPlayer
{
public:
	class UOnlinePlayer_X*                             OnlinePlayer;                                  // 0x04D0 (0x0008) [0x0000008000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.LocalPlayer_X");
		}

		return uClassPointer;
	};

	bool SpawnPlayActor(struct FString URL, struct FString& OutError);
	void eventNotifyServerConnectionOpen();
	void NotifyOnValidPlayerController(struct FScriptDelegate Callback, class UClass* PCClass);
	void OnRemoved();
	void OnCreated();
};

// Class ProjectX.StateObject_X
// 0x0004 (0x0060 - 0x0064)
class UStateObject_X : public UObject
{
public:
	unsigned long                                      bDebug : 1;                                    // 0x0060 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.StateObject_X");
		}

		return uClassPointer;
	};

	void InitExecution();
	void eventDestroyed();
	void Destroy();
};

// Class ProjectX.Online_X
// 0x0034 (0x0064 - 0x0098)
class UOnline_X : public UStateObject_X
{
public:
	class UOnlineSubsystem*                            OnlineSub;                                     // 0x0068 (0x0008) [0x0000004000002000] (CPF_Transient)
	class UPsyNet_X*                                   PsyNet;                                        // 0x0070 (0x0008) [0x0000004000002000] (CPF_Transient)
	class UOnlineSubsystem*                            EOS;                                           // 0x0078 (0x0008) [0x0001004000002000] (CPF_Transient)
	struct FScriptDelegate                             __EventEOSInitialized__Delegate;               // 0x0080 (0x0018) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.Online_X");
		}

		return uClassPointer;
	};

	void __Online_X__InitializeEOS_6585A00846564ABE1D79F78387F5CC27(class UEpicConfig_X* EpicConfig);
	class UOnlineSubsystem* GetOrCreateEOS(struct FString& SandboxId, struct FString& DeploymentId);
	void NotifyWhenEOSInitialized(struct FScriptDelegate Callback);
	void HandleLinkStatusChangedEOSInit(unsigned long bHasInternetConnection);
	void InitializeEOS();
	struct FString BuildAddress(struct FString Host, int32_t Port, struct FString IP);
	bool IsInOnlineGame();
	bool IsInMainMenu();
	class AGRI_X* GetGRI();
	class AWorldInfo* GetWorldInfo();
	struct FUniqueNetId CreateUniqueNetID(uint8_t Platform, struct FString PlatformName, uint64_t PlatformUID);
	bool UniqueLobbyIDIsSet(struct FUniqueLobbyId InID);
	struct FUniqueLobbyId StringToUniqueLobbyId(struct FString InID);
	struct FString UniqueLobbyIdToString(struct FUniqueLobbyId InID);
	struct FUniqueNetId GetUniqueNetIDWithoutSplitscreenID(struct FUniqueNetId Id);
	struct FUniqueNetId GetPrimaryIDForGuest(struct FUniqueNetId InGuestID);
	bool UniqueNetIDIsGuest(struct FUniqueNetId InID);
	bool UniqueNetIDHasValue(struct FUniqueNetId InID);
	bool UniqueNetIDIsValid(struct FUniqueNetId InID);
	struct FUniqueNetId StringToUniqueNetId(struct FString InID);
	struct FString PlatformIdToString(struct FUniqueNetId& InID);
	struct FString UniqueNetIdToString(struct FUniqueNetId InID);
	struct FUniqueNetId CleanUniqueNetID(struct FUniqueNetId InID);
	int32_t FindUniqueNetID(TArray<struct FUniqueNetId>& List, struct FUniqueNetId& Search);
	class UError* GetConnectionStatusError(int32_t ErrorCode, class UError* FallbackError);
	void OnExit();
	void OnNewGame();
	void OnMainMenuOpened();
	void HandleGRISpawned(class AGRI_X* GRI);
	void OnInit();
	void Init(class UOnlineSubsystem* NewOnlineSubsystem);
	void EventEOSInitialized();
};

// Class ProjectX.OnlinePlayer_X
// 0x01C0 (0x0098 - 0x0258)
class UOnlinePlayer_X : public UOnline_X
{
public:
	class UOnlinePlayerFriends_X*                      Friends;                                       // 0x0098 (0x0008) [0x0000008000000001] (CPF_Edit)    
	class UOnlinePlayerAuthentication_X*               Authentication;                                // 0x00A0 (0x0008) [0x0000004000000001] (CPF_Edit)    
	class UPsyNetConnection_X*                         PsyNetConnection;                              // 0x00A8 (0x0008) [0x0000004000000001] (CPF_Edit)    
	class UOnlinePlayerStorage_X*                      Storage;                                       // 0x00B0 (0x0008) [0x0001004000000001] (CPF_Edit)    
	class UOnlinePlayerRegionRestrictions_X*           RegionRestrictions;                            // 0x00B8 (0x0008) [0x0001004000000001] (CPF_Edit)    
	struct FString                                     PlayerName;                                    // 0x00C0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                      // 0x00D0 (0x0048) [0x0000008000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FUniqueNetId                                CleanPlayerID;                                 // 0x0118 (0x0048) [0x0000008000402000] (CPF_Transient | CPF_NeedCtorLink)
	uint8_t                                            LoginStatus;                                   // 0x0160 (0x0001) [0x0000008000002000] (CPF_Transient)
	int32_t                                            LocalPlayerNum;                                // 0x0164 (0x0004) [0x0000000000002000] (CPF_Transient)
	unsigned long                                      bLoggingIn : 1;                                // 0x0168 (0x0004) [0x0000004000000000] [0x00000001] 
	unsigned long                                      bLoggingOut : 1;                               // 0x0168 (0x0004) [0x0000004000000000] [0x00000002] 
	class UError*                                      LoginError;                                    // 0x0170 (0x0008) [0x0000004000002000] (CPF_Transient)
	struct FString                                     CachedEpicID;                                  // 0x0178 (0x0010) [0x0001004000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UError*                                      LoginStatusError;                              // 0x0188 (0x0008) [0x0000000000000000]               
	class UError*                                      BannedError;                                   // 0x0190 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __EventLoginComplete__Delegate;                // 0x0198 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLogoutComplete__Delegate;               // 0x01B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLoginStatusChanged__Delegate;           // 0x01C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventCountryUpdated__Delegate;               // 0x01E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventCanPlayOnlineChanged__Delegate;         // 0x01F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventShowKeyboardComplete__Delegate;         // 0x0210 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventOnlineNameChanged__Delegate;            // 0x0228 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventRemoved__Delegate;                      // 0x0240 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlinePlayer_X");
		}

		return uClassPointer;
	};

	void __OnlinePlayer_X__OnInit_ED8CAF4D4C26555D4316D18775E96841(class UOnlinePlayerAuthentication_X* _);
	void __OnlinePlayer_X__UpdatePsyNetEnabled_59A49EAC4E033D7562B6CAA6C59B40BF(class UBanMessage_X* _);
	void GetPlayersLikesDislikes(class UGameSettingPlaylist_X* Playlist, TArray<struct FName>& PlayerLikes, TArray<struct FName>& PlayerDislikes);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool IsGuestAccount();
	void SetPlayerName(struct FString InName);
	void UpdateSplitscreenId();
	bool IsUpdateRequired();
	struct FString GetOnlineName();
	struct FString GetLocalName();
	struct FString GetRemoteName(int32_t LocalPlayerIndex);
	void HandleCanPlayOnlineChanged(uint8_t LocalUserNum);
	uint8_t CanPlayOnline();
	void HandlePlayerCountryReceived(struct FUniqueNetId InPlayerId, struct FString Country);
	void GetPlayerCountry(struct FScriptDelegate Handler);
	uint8_t CanCommunicateVoice(unsigned long bTryToResolve);
	uint8_t CanCommunicateText(unsigned long bTryToResolve);
	void OpenErrorDialog(uint8_t ErrorCode);
	void OpenPS4DisplayMode(uint8_t DisplayMode, TArray<struct FString> Targets, int32_t ServiceLabel);
	void ResetControllerColor(int32_t InControllerID);
	void SetControllerColor(int32_t InControllerID, struct FColor NewColor);
	void PostActivityFeedMessage(struct FString Id, TArray<struct FString> StringReplaceList);
	TArray<bool> GetSyncedAchievements(uint8_t LocalUserNum);
	void UnlockAchievement(uint8_t LocalUserNum, int32_t AchievementId, float PercentComplete);
	void UpdateStat(struct FName StatName, int32_t Points);
	void HandleShowKeyboardComplete(unsigned long bWasSuccessful);
	void HideKeyboard();
	bool ShowKeyboard(struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, struct FString DefaultText, int32_t MaxLength, struct FScriptDelegate OnCompleteDelegate, int32_t LocalPlayerNumOverride);
	void OnNewGame();
	void HandleControllerChange(int32_t InControllerID, unsigned long bIsConnected);
	void HandleUserLoginStatusChange(uint8_t NewStatus, struct FUniqueNetId NewId);
	bool IsLoggedIn(unsigned long bRequireOnlineLogin);
	void HandleLogoutComplete(unsigned long bWasSuccessful);
	void HandleLoginChanged(uint8_t PlayerNum);
	struct FString GetEpicAccountId();
	struct FString GetSanitizedPlayerName();
	void HandleLoginFailed(uint8_t PlayerNum, uint8_t ErrorCode);
	void Logout(struct FScriptDelegate Callback);
	void Login(struct FString LoginName, struct FString LoginPassword, struct FScriptDelegate Callback);
	void OnRemoved();
	void InitPlayer();
	bool eventIsPrimaryPlayer();
	void HandlePsyNetDisconnect(class UPsyNetConnection_X* Connection);
	void UpdatePsyNetEnabled();
	void HandleBanned(class UOnlinePlayerAuthentication_X* Auth);
	void HandleAuthLoginChange(class UOnlinePlayerAuthentication_X* Auth);
	void OnInit();
	void eventConstruct();
	class UOnlineGame_X* GetOnlineGame();
	void EventRemoved(class UOnlinePlayer_X* Player);
	void EventOnlineNameChanged(class UOnlinePlayer_X* Player);
	void EventShowKeyboardComplete(struct FString NewText, unsigned long bCanceled);
	void EventCanPlayOnlineChanged(class UOnlinePlayer_X* Player);
	void EventCountryUpdated(struct FString Country);
	void EventLoginStatusChanged(class UOnlinePlayer_X* Player);
	void EventLogoutComplete(class UOnlinePlayer_X* Player);
	void EventLoginComplete(class UOnlinePlayer_X* Player, class UError* Error);
};

// Class ProjectX.EpicFriendsPlugin_X
// 0x00D8 (0x0060 - 0x0138)
class UEpicFriendsPlugin_X : public UObject
{
public:
	struct FString                                     ServerURL;                                     // 0x0060 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	struct FString                                     ProductionServerURL;                           // 0x0070 (0x0010) [0x0001000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     AddFriendURL;                                  // 0x0080 (0x0010) [0x0001000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     RemoveFriendURL;                               // 0x0090 (0x0010) [0x0001000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     OutgoingFriendRequestsURL;                     // 0x00A0 (0x0010) [0x0001000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     IncomingFriendRequestsURL;                     // 0x00B0 (0x0010) [0x0001000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     BlockPlayerURL;                                // 0x00C0 (0x0010) [0x0001000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     BlockListURL;                                  // 0x00D0 (0x0010) [0x0001000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     AccountSummaryURL;                             // 0x00E0 (0x0010) [0x0001000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __HTTPRequestCallback__Delegate;               // 0x00F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __AddFriendCallback__Delegate;                 // 0x0108 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __GetOutgoingFriendsCallback__Delegate;        // 0x0120 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.EpicFriendsPlugin_X");
		}

		return uClassPointer;
	};

	class UError* ConvertError(class UEOS_ErrorResponse* ErrorResponse);
	bool SendHTTPRequest(struct FString Verb, struct FString URL, unsigned long AddContentTypeHeader, class UClass* ResponseClass, struct FScriptDelegate Callback);
	bool GetAccountSummary();
	bool GetOutgoingFriendRequestsWithCustomCallback(struct FScriptDelegate Callback);
	bool GetOutgoingFriendRequests();
	bool GetIncomingFriendRequests();
	bool GetBlockList();
	bool Unblock(struct FUniqueNetId UserId);
	bool bLock(struct FUniqueNetId UserId);
	bool RejectFriendRequest(struct FUniqueNetId FriendId);
	bool AcceptFriendRequest(struct FUniqueNetId FriendId);
	bool RemoveFriend(struct FUniqueNetId FriendId);
	bool AddFriendWithCustomCallback(struct FUniqueNetId FriendId, struct FScriptDelegate Callback);
	bool AddFriend(struct FUniqueNetId FriendId);
	void eventConstruct();
	void GetOutgoingFriendsCallback(class UEOS_GetAccountsResponse* Response, class UError* Error);
	void AddFriendCallback(class UEOS_ManageFriendsListResponse* Response, class UError* Error, struct FString& FriendId);
	void HandleAccountSummaryResponse(class UEOS_AccountSummaryResponse* Response, class UError* Error);
	void HandleGetOutgoingInvitesResponse(class UEOS_GetAccountsResponse* Response, class UError* Error);
	void HandleGetIncomingInvitesResponse(class UEOS_GetAccountsResponse* Response, class UError* Error);
	void HandleGetBlockListResponse(class UEOS_GetAccountsResponse* Response, class UError* Error);
	void HandleUnblockPlayerResponse(class UEOS_ManageBlockListResponse* Response, class UError* Error);
	void HandleBlockPlayerResponse(class UEOS_ManageBlockListResponse* Response, class UError* Error);
	void HandleRejectFriendRequestResponse(class UEOS_ManageFriendsListResponse* Response, class UError* Error, struct FString& FriendId);
	void HandleAcceptFriendRequestResponse(class UEOS_ManageFriendsListResponse* Response, class UError* Error, struct FString& FriendId);
	void HandleRemoveFriendResponse(class UEOS_ManageFriendsListResponse* Response, class UError* Error, struct FString& FriendId);
	void HandleAddFriendResponse(class UEOS_ManageFriendsListResponse* Response, class UError* Error, struct FString& FriendId);
	void HTTPRequestCallback(class UObject* Response, class UError* Error);
};

// Class ProjectX.OnlinePlayerAuthentication_X
// 0x0140 (0x0098 - 0x01D8)
class UOnlinePlayerAuthentication_X : public UOnline_X
{
public:
	class URPC_LoginAuthPlayer_X*                      LoginRPC;                                      // 0x0098 (0x0008) [0x0000000000002000] (CPF_Transient)
	class URPC_LoginAuthPlayer_X*                      LoginSuccessRPC;                               // 0x00A0 (0x0008) [0x0000004000002000] (CPF_Transient)
	struct FUniqueNetId                                LoggedInPlayerId;                              // 0x00A8 (0x0048) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     LoggedInPlayerName;                            // 0x00F0 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     PlayerUID;                                     // 0x0100 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     Platform;                                      // 0x0110 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      bLoggedIn : 1;                                 // 0x0120 (0x0004) [0x0000004000000000] [0x00000001] 
	unsigned long                                      bPlatformTokenAuthenticationFailed : 1;        // 0x0120 (0x0004) [0x0000004000002000] [0x00000002] (CPF_Transient)
	unsigned long                                      bSkipAuth : 1;                                 // 0x0120 (0x0004) [0x0001004000000000] [0x00000004] 
	unsigned long                                      bLastChanceAuthBan : 1;                        // 0x0120 (0x0004) [0x0000004000002000] [0x00000008] (CPF_Transient)
	class UError*                                      AuthLoginError;                                // 0x0128 (0x0008) [0x0000004000000000]               
	class UBanMessage_X*                               BanMessage;                                    // 0x0130 (0x0008) [0x0000004000002000] (CPF_Transient)
	class UPsyTagComponent_X*                          PsyTagInfo;                                    // 0x0138 (0x0008) [0x0001000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FString                                     EncryptedAuthTicket;                           // 0x0140 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     EpicAuthTicket;                                // 0x0150 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            AuthRequestFailureMax;                         // 0x0160 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            AuthRequestRetryTime;                          // 0x0164 (0x0004) [0x0000000000000002] (CPF_Const)   
	int32_t                                            AuthRequestFailureCount;                       // 0x0168 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FString                                     AuthenticatedName;                             // 0x0170 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UEpicLogin_X*                                EpicLogin;                                     // 0x0180 (0x0008) [0x0001008000000000]               
	class UError*                                      PrimaryAccountNotSetError;                     // 0x0188 (0x0008) [0x0001000000000000]               
	struct FScriptDelegate                             __EventLoginChanged__Delegate;                 // 0x0190 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventBanned__Delegate;                       // 0x01A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLoginResult__Delegate;                  // 0x01C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlinePlayerAuthentication_X");
		}

		return uClassPointer;
	};

	void OnEpicLoginInitialized();
	void OnEpicLoginInitializedTimeout();
	void RequestEpicAuthTicket();
	void HandleEpicAuthTicket(struct FString AuthTicket, struct FString EpicAccountId, class UError* Error);
	void __OnlinePlayerAuthentication_X__OnInit_68FCDCFC4F641F221BFA3CB978FA3AEA();
	struct FString GetDebugName();
	void GotoAuthState(struct FName AuthStateName);
	bool IsLoginAttemptActive();
	struct FName GetFeatureSet();
	struct FString GetBuildRegion();
	void HandleAuthTicket(unsigned long bSuccess, struct FString AuthTicket);
	void RequestAuthTicket();
	bool RequiresEpicAuthTicket();
	bool RequiresAuthTicket();
	void ReLogin();
	void Logout();
	void SetAuthLoginError(class UError* E);
	void UpdateLoginState();
	class UError* GetAuthLoginError();
	void UpdateAuthLoginError();
	void HandlePsyNetLoginChanged(class UOnlinePlayerAuthentication_X* Auth);
	void HandleLinkStatusChanged(unsigned long B);
	void HandleConnectionChanged(class UPsyNetConnection_X* C);
	void HandleLoginStatusChanged(class UOnlinePlayer_X* Player);
	void OnLoginFail(class UError* Error);
	void OnLoginFailRPC(class URPC_LoginAuthPlayer_X* RPC);
	void OnLoginSuccessRPC(class URPC_LoginAuthPlayer_X* RPC);
	void SendLoginRPC();
	void PsyNetLogin(struct FScriptDelegate Callback);
	void OnRemoved();
	void OnInit();
	void EventLoginResult(class UOnlinePlayerAuthentication_X* Auth);
	void EventBanned(class UOnlinePlayerAuthentication_X* Auth);
	void EventLoginChanged(class UOnlinePlayerAuthentication_X* Auth);
};

// Class ProjectX.EpicLogin_X
// 0x0118 (0x0060 - 0x0178)
class UEpicLogin_X : public UObject
{
public:
	struct FString                                     PinGrantCode;                                  // 0x0060 (0x0010) [0x0001000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     PinGrantURL;                                   // 0x0070 (0x0010) [0x0001000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	uint64_t                                           PinGrantExpiration;                            // 0x0080 (0x0008) [0x0001000040000000] (CPF_EditInlineNotify)
	unsigned long                                      bLoggedIn : 1;                                 // 0x0088 (0x0004) [0x0001000040000000] [0x00000001] (CPF_EditInlineNotify)
	unsigned long                                      bSetAsPrimaryAccount : 1;                      // 0x0088 (0x0004) [0x0001000000000000] [0x00000002] 
	unsigned long                                      bPollDuringAccountLinking : 1;                 // 0x0088 (0x0004) [0x0001004040000000] [0x00000004] (CPF_EditInlineNotify)
	unsigned long                                      bPinGrantRequestInProgress : 1;                // 0x0088 (0x0004) [0x0001000000000000] [0x00000008] 
	unsigned long                                      bLoginInProgress : 1;                          // 0x0088 (0x0004) [0x0001000000000000] [0x00000010] 
	unsigned long                                      bAccountCreationInProgress : 1;                // 0x0088 (0x0004) [0x0001000000000000] [0x00000020] 
	struct FString                                     ParentalConsentURL;                            // 0x0090 (0x0010) [0x0001000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	int32_t                                            LoginFailureCount;                             // 0x00A0 (0x0004) [0x0001000000000000]               
	class UError*                                      LoginError;                                    // 0x00A8 (0x0008) [0x0001000000000000]               
	uint64_t                                           LoginErrorTimestamp;                           // 0x00B0 (0x0008) [0x0001004000000000]               
	class UEpicConfig_X*                               EpicConfig;                                    // 0x00B8 (0x0008) [0x0001804000000000]               
	struct FString                                     CreateAccountURL;                              // 0x00C0 (0x0010) [0x0001000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLoginSucceeded__Delegate;               // 0x00D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLoginFailed__Delegate;                  // 0x00E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventReceivedPinGrantCode__Delegate;         // 0x0100 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLoginError__Delegate;                   // 0x0118 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventReceivedEpicAuthTicket__Delegate;       // 0x0130 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventInitialized__Delegate;                  // 0x0148 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventCreatedEpicGamesAccount__Delegate;      // 0x0160 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.EpicLogin_X");
		}

		return uClassPointer;
	};

	void __EpicLogin_X__HandleLoginChanged_03692EAF45ADFA87BA3B65871A7F8154(struct FString Ticket, struct FString Id, class UError* Err);
	void __EpicLogin_X__HandleLoginFailed_B5ADFA384E0A103084D399B3B9D5FE28(struct FString Ticket, struct FString Id, class UError* Err);
	void __EpicLogin_X__UpdateTwoFactorAuthenticationStatus_862F02EC429B10B0D176D8AE01A37F93(struct FString Ticket, struct FString Id, class UError* Err);
	void __EpicLogin_X__CreateEpicGamesAccount_377434B447CB1357E0D1A8AC885B83A8(class UWebRequest_X* Response);
	void __EpicLogin_X__CreateEpicGamesAccount_503ECEA94AD2B8D57FDEC79E2F70653A(struct FString _, struct FString __, class UError* Error);
	void __EpicLogin_X__RequestNintendoAccountAuthorization_323F874F4FC8C62EDA388B84C5CDF943(class UError* _);
	void HandleRequestPinGrantTimeout();
	void HandleLoginTimeout();
	void ClearRequestPinGrantCallbacks();
	void ClearLoginCallbacks();
	void HandleReceivedPinGrantCode(uint8_t Result, uint8_t InLocalPlayerNum, struct FString Code, struct FString URL, int32_t SecondsUntilExpiration);
	void HandleCompletedPinGrant();
	void RequestPinGrantCode();
	void RequestNintendoAccountAuthorization(struct FScriptDelegate Callback);
	bool Login(struct FString PlatformAuthTicket);
	void CreateEpicGamesAccount();
	void UpdateTwoFactorAuthenticationStatus(struct FScriptDelegate Callback);
	void RetryAuth();
	void HandleInternetConnectionChanged(unsigned long bConnected);
	void HandleKickedByEpic();
	void HandleAuthTicketExpired();
	void HandleUnderageUserDetected(uint8_t InLocalPlayerNum, struct FString InParentalConsentURL);
	void HandleLoginResult(class UOnlinePlayerAuthentication_X* Auth);
	void HandleLoginFailed(uint8_t InLocalPlayerNum, uint8_t Error);
	void HandleLoginChanged(uint8_t InLocalPlayerNum);
	void ClearLoginError();
	void SetLoginError(class UErrorType* Error);
	void TriggerAuthTicketDelegate(struct FScriptDelegate Callback);
	void ClearReceivedAuthTicketDelegate(struct FScriptDelegate Callback);
	bool RequestEpicAuthTicket(struct FScriptDelegate Callback);
	bool RequiresEpicAuthTicket();
	bool IsLoggedIn();
	void NotifyWhenInitialized(struct FScriptDelegate Callback);
	void OnRemoved();
	void HandleEOSInitialized();
	void HandleEpicConfigSet();
	bool DevAssert(unsigned long bTrueStatement, struct FString ErrorMessage);
	void EventCreatedEpicGamesAccount();
	void EventInitialized();
	void EventReceivedEpicAuthTicket(struct FString AuthTicket, struct FString AccountId, class UError* Error);
	void EventLoginError(class UEpicLogin_X* EpicLogin, class UErrorType* Error);
	void EventReceivedPinGrantCode();
	void EventLoginFailed();
	void EventLoginSucceeded();
};

// Class ProjectX.EpochTimers_X
// 0x0000 (0x0060 - 0x0060)
class UEpochTimers_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.EpochTimers_X");
		}

		return uClassPointer;
	};

	bool IsActive(struct FScriptDelegate Callback);
	void ClearAll(class UObject* Obj);
	void Clear(struct FScriptDelegate Callback, struct FScriptDelegate Callback2);
	void SetWindow(struct FScriptDelegate StartCallback, uint64_t EpochStartTime, struct FScriptDelegate EndCallback, uint64_t EpochEndTime);
	void SetTime(struct FScriptDelegate Callback, uint64_t EpochTime);
	void Set(struct FScriptDelegate Callback, uint64_t DelaySeconds);
};

// Class ProjectX.EpochTimerTick_X
// 0x0018 (0x0060 - 0x0078)
class UEpochTimerTick_X : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	TArray<struct FEpochTimer>                         Timers;                                        // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.EpochTimerTick_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.Errors_X
// 0x0300 (0x0080 - 0x0380)
class UErrors_X : public UErrorList
{
public:
	class UErrorType*                                  UnknownError;                                  // 0x0080 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UPsyNetErrorType_X*                          RequestError;                                  // 0x0088 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  HTTPError;                                     // 0x0090 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  SessionNotActive;                              // 0x0098 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  OSCS_NotConnected;                             // 0x00A0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  OSCS_Connected;                                // 0x00A8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  OSCS_ConnectionDropped;                        // 0x00B0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  OSCS_NoNetworkConnection;                      // 0x00B8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  OSCS_ServiceUnavailable;                       // 0x00C0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  OSCS_UpdateRequired;                           // 0x00C8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  OSCS_ServersTooBusy;                           // 0x00D0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  OSCS_DuplicateLoginDetected;                   // 0x00D8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  OSCS_InvalidUser;                              // 0x00E0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  OSCS_InvalidResponse;                          // 0x00E8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  OSCS_EpicAccountRequired;                      // 0x00F0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  OSCS_EpicAccountLinkingFailed;                 // 0x00F8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  ConnectionStatusErrors[0xD];                   // 0x0100 (0x0068) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  VersionMismatch;                               // 0x0168 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  NoServers;                                     // 0x0170 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  FileDoesNotExist;                              // 0x0178 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  FileLoadFail;                                  // 0x0180 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  FileLoadCorrupt;                               // 0x0188 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  FileMountCorrupt;                              // 0x0190 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  FileSaveFail;                                  // 0x0198 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  FileSaveNoSpace;                               // 0x01A0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  FileSaveCorrupt;                               // 0x01A8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  UserAuthBanned;                                // 0x01B0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  NotLoggedInToPsynet;                           // 0x01B8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  FriendsList;                                   // 0x01C0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  InviteLimitReached;                            // 0x01C8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  OutOfRetries;                                  // 0x01D0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  AuthenticationFailed;                          // 0x01D8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  NoExportCountry;                               // 0x01E0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  UnauthorizedAccess;                            // 0x01E8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  ServiceNotFound;                               // 0x01F0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  FeatureDisabled;                               // 0x01F8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  OtherPlayerFeatureDisabled;                    // 0x0200 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  MatchmakingDisabled;                           // 0x0208 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  NoValidPlaylistsSelected;                      // 0x0210 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PlaylistNotAvailable;                          // 0x0218 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PlayerNameNotSet;                              // 0x0220 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PlayerNameAlreadyTaken;                        // 0x0228 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PlayerNameTooShort;                            // 0x0230 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PlayerNameTooLong;                             // 0x0238 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PlayerNameInappropriate;                       // 0x0240 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PlayerNameInvalidCharacter;                    // 0x0248 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PlayerNameFailed;                              // 0x0250 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  NotAuthorized;                                 // 0x0258 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  SessionAlreadyActive;                          // 0x0260 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  GameServerPending;                             // 0x0268 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  CacheError;                                    // 0x0270 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  WordFilterEvil;                                // 0x0278 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  WordFilterPlatformError;                       // 0x0280 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  WordFilterPlatformChatError;                   // 0x0288 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  InvalidSettings;                               // 0x0290 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  Maintenance;                                   // 0x0298 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PlatformAuthError;                             // 0x02A0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  MicrotransactionAuthExpired;                   // 0x02A8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  CannotFriendSelf;                              // 0x02B0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  InvalidPlayer;                                 // 0x02B8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  FriendRequestNotFound;                         // 0x02C0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  FriendRequestFailed;                           // 0x02C8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  AlreadyFriends;                                // 0x02D0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  FriendLimitReached;                            // 0x02D8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  LocalFriendLimitReached;                       // 0x02E0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  RemoteFriendLimitReached;                      // 0x02E8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  LocalHostConnectionError;                      // 0x02F0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  UGCRestricted;                                 // 0x02F8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  MicrotransactionServiceMaintenance;            // 0x0300 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  GenericStorageOutOfSync;                       // 0x0308 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  GenericStorageSync_RequestNotFound;            // 0x0310 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  SignatureMismatch;                             // 0x0318 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  JsonDeserialization;                           // 0x0320 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  InvalidPlatform;                               // 0x0328 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  InvalidPlatformForCodeRedemption;              // 0x0330 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  InvalidParameters;                             // 0x0338 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UPsyNetErrorType_X*                          NotMatchmaking;                                // 0x0340 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  AccessDenied;                                  // 0x0348 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UPsyNetErrorType_X*                          PerConDisconnected;                            // 0x0350 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  AccountNotFound;                               // 0x0358 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  ServerNotFound;                                // 0x0360 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UPsyNetErrorType_X*                          ExpiredDsConnectToken;                         // 0x0368 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  MatchmakingNoInternet;                         // 0x0370 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PartyRankDisparity;                            // 0x0378 (0x0008) [0x0000000000000002] (CPF_Const)   
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.Errors_X");
		}

		return uClassPointer;
	};

	bool DisplayPlatformError(class UErrorType* InErrorType);
};

// Class ProjectX.EventRecorder_X
// 0x0060 (0x0070 - 0x00D0)
class UEventRecorder_X : public UComponent
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0070 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	class UEventRecorderConfig_X*                      Config;                                        // 0x0078 (0x0008) [0x0000800000000000]               
	int32_t                                            MaxQueuedEvents;                               // 0x0080 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MaxQueuedMinutes;                              // 0x0084 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bPaused : 1;                                   // 0x0088 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray<struct FMetricsEvent>                       QueuedEvents;                                  // 0x0090 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FGuid                                       AppSessionID;                                  // 0x00A0 (0x0010) [0x0000004000002002] (CPF_Const | CPF_Transient)
	struct FGuid                                       LevelSessionID;                                // 0x00B0 (0x0010) [0x0000004000002002] (CPF_Const | CPF_Transient)
	float                                              NextSendTime;                                  // 0x00C0 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              FloodPreventionTimeSeconds;                    // 0x00C4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LastFullSendTime;                              // 0x00C8 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	int32_t                                            AppEventCount;                                 // 0x00CC (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.EventRecorder_X");
		}

		return uClassPointer;
	};

	void eventMetricsNotSent(int32_t Count);
	void eventMetricsFlood(struct FString LastEventName);
	void SetLevelSessionID(struct FGuid Id);
	bool Send();
	void RecordEvent(struct FString Category, struct FName Event, struct FUniqueNetId PlayerID, int32_t Version, struct FString& Data);
	void RecordFunction(struct FString Category, int32_t Version);
};

// Class ProjectX.MetricsSystem_X
// 0x0000 (0x00D0 - 0x00D0)
class UMetricsSystem_X : public UEventRecorder_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.MetricsSystem_X");
		}

		return uClassPointer;
	};

	void eventConstruct();
	void HandleUnpause(class UNetMode_Networked* NetMode, class UMetricsSystem_X* Metrics, class UPauseMetricsState_X* State);
	void HandlePause(class UNetMode_Networked* NetMode, class UMetricsSystem_X* Metrics, class UPauseMetricsState_X* State);
};

// Class ProjectX.EventRecorderGroup_X
// 0x0010 (0x0070 - 0x0080)
class UEventRecorderGroup_X : public UComponent
{
public:
	struct FString                                     Category;                                      // 0x0070 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.EventRecorderGroup_X");
		}

		return uClassPointer;
	};

	struct FString VectorToString(struct FVector V);
	void RecordFunction(int32_t Version);
	class UEventRecorder_X* GetEventRecorder();
};

// Class ProjectX.MetricsGroup_X
// 0x0000 (0x0080 - 0x0080)
class UMetricsGroup_X : public UEventRecorderGroup_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.MetricsGroup_X");
		}

		return uClassPointer;
	};

	class UEventRecorder_X* GetEventRecorder();
};

// Class ProjectX.NetMetrics_X
// 0x0018 (0x0080 - 0x0098)
class UNetMetrics_X : public UMetricsGroup_X
{
public:
	class UEventRecorderConfig_X*                      Config;                                        // 0x0080 (0x0008) [0x0000800000000000]               
	TArray<struct FString>                             UnstableConnectionsQueue;                      // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.NetMetrics_X");
		}

		return uClassPointer;
	};

	void UnstableConnections(TArray<struct FString>& Addresses);
	void RecordUnstableConnections();
	void AddUnstableConnection(struct FString& Address);
	void eventStaticUnstableConnection(struct FString& Address);
	void ReliablePacketsBlocked();
	void UseInputBuffer(struct FUniqueNetId PlayerID, struct FName Type);
	void LaunchURL(struct FString URL);
	void ServerReported(struct FUniqueNetId PlayerID);
	void RpcSignatureMismatch(int32_t ServiceID);
	void ConnectionChangedIP(struct FUniqueNetId PlayerID);
	void PlayerNetworkError(struct FUniqueNetId PlayerID, struct FString Reason);
	void PlayerTimeout(struct FUniqueNetId PlayerID);
	void NetStats(int32_t PeriodMS, int32_t PingMin, int32_t PingMax, int32_t PingAvg, int32_t PingMed, int32_t OutPackets, int32_t InPackets, int32_t OutLost, int32_t InLost, int32_t OutOfOrder, int32_t OutBytes, int32_t InBytes, int32_t NNState, int32_t DPingMin, int32_t DJitter, float DLossPct, int32_t NNPingMin, int32_t NNJitter, float NNLossPct, int32_t PsyPingMin, int32_t PsyPingMax, int32_t PsyPingAvg, int32_t PsyPingMed, int32_t PsyReceived, int32_t PsyLost);
	void PlayerNetwork(struct FUniqueNetId PlayerID, int32_t PingMin, int32_t PingMax, int32_t PingAvg, int32_t PktLossRateMin, int32_t PktLossRateMax, int32_t PktLossAvg, int32_t InBpsMax, int32_t InBpsAvg, int32_t InBytesTotal, int32_t OutBpsMax, int32_t OutBpsAvg, int32_t OutBytesTotal);
	void RecordPlayerNetwork(class APlayerController* PC);
};

// Class ProjectX.ExplosionCollisionShapes_X
// 0x0010 (0x0070 - 0x0080)
class UExplosionCollisionShapes_X : public UComponent
{
public:
	struct FVector                                     Location;                                      // 0x0070 (0x000C) [0x0000000000000000]               
	float                                              GrowthAmount;                                  // 0x007C (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ExplosionCollisionShapes_X");
		}

		return uClassPointer;
	};

	void Destroy();
	void Init();
};

// Class ProjectX.BoxCollisionShape_X
// 0x0018 (0x0080 - 0x0098)
class UBoxCollisionShape_X : public UExplosionCollisionShapes_X
{
public:
	struct FVector                                     StartSize;                                     // 0x0080 (0x000C) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     EndSize;                                       // 0x008C (0x000C) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.BoxCollisionShape_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.GoalCollisionShape_X
// 0x0000 (0x0080 - 0x0080)
class UGoalCollisionShape_X : public UExplosionCollisionShapes_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.GoalCollisionShape_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.SphereCollisionShape_X
// 0x0008 (0x0080 - 0x0088)
class USphereCollisionShape_X : public UExplosionCollisionShapes_X
{
public:
	float                                              StartRadius;                                   // 0x0080 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              EndRadius;                                     // 0x0084 (0x0004) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.SphereCollisionShape_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.FakeData_X
// 0x0320 (0x0060 - 0x0380)
class UFakeData_X : public UObject
{
public:
	int32_t                                            RandomSeed;                                    // 0x0060 (0x0004) [0x0000004000000000]               
	struct FFakeData1                                  Data1;                                         // 0x0068 (0x0038) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FFakeData2                                  Data2;                                         // 0x00A0 (0x0090) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FFakeData3                                  Data3;                                         // 0x0130 (0x0130) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FFakeData4                                  Data4;                                         // 0x0260 (0x0120) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.FakeData_X");
		}

		return uClassPointer;
	};

	int32_t RandomizeValues(class UObject* Target, int32_t InRandomSeed);
	class UFakeData_X* RandomizeFakeData(class UFakeData_X* FakeData, int32_t InRandomSeed);
	class UFakeData_X* GenerateFakeData(int32_t InRandomSeed);
};

// Class ProjectX.FXActorEvent_X
// 0x0000 (0x0060 - 0x0060)
class UFXActorEvent_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.FXActorEvent_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.FXAttachmentTraitBase_X
// 0x0000 (0x0060 - 0x0060)
class UFXAttachmentTraitBase_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.FXAttachmentTraitBase_X");
		}

		return uClassPointer;
	};

	class UActorComponent* GetComponent();
	void eventInit();
};

// Class ProjectX.GameEngine_X
// 0x0000 (0x0B48 - 0x0B48)
class UGameEngine_X : public UGameEngine
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.GameEngine_X");
		}

		return uClassPointer;
	};

	void __GameEngine_X__Construct_45613D8F4281646BABB1E5BAE17042CB(struct FString InURL);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void eventOnlineSubsystemInitialized();
	void eventConstruct();
};

// Class ProjectX.GameInfo_X
// 0x0058 (0x0470 - 0x04C8)
class AGameInfo_X : public AGameInfo
{
public:
	class AGameReplicationInfo*                        GameReplicationInfoArchetype;                  // 0x0470 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class APlayerController*                           PlayerControllerArchetype;                     // 0x0478 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class APawn*                                       PawnArchetype;                                 // 0x0480 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FPauserData>                         PCPausers;                                     // 0x0488 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSpawned__Delegate;                      // 0x0498 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventInit__Delegate;                         // 0x04B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.GameInfo_X");
		}

		return uClassPointer;
	};

	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void eventClientMapLoadFail(struct FUniqueNetId PlayerID, struct FString MapName);
	void RemovePauser(class APlayerController* PC, unsigned long bForceRemove);
	void AddPauser(class APlayerController* PC);
	void SetPaused(class APlayerController* PC, unsigned long bPause);
	void TogglePause(class APlayerController* PC);
	bool IsPaused(class APlayerController* PC);
	class UIOnlineGameHost_X* GetOnlineGameHost();
	class UOnlineGameLanServer_X* GetOnlineGameLanServer();
	class UOnlineGameDedicatedServer_X* GetOnlineGameDedicatedServer();
	class UOnlineGame_Base_X* GetOnlineGame();
	void EndOnlineGame();
	void Logout(class AController* Exiting);
	void GenericPlayerInitialization(class AController* C);
	void DisconnectExistingPlayer(struct FUniqueNetId& PlayerID);
	class APlayerController* eventLogin(struct FString Portal, struct FString Options, struct FUniqueNetId UniqueId, struct FString& ErrorMessage);
	void eventPreLoginSplitscreen(struct FUniqueNetId PrimaryPlayerUniqueId, struct FString Options, struct FString Address, struct FUniqueNetId UniqueId, unsigned long bSupportsAuth, struct FString& ErrorMessage);
	void eventPreLogin(struct FString Options, struct FString Address, struct FUniqueNetId UniqueId, unsigned long bSupportsAuth, struct FString& ErrorMessage);
	void UpdateGameSettingsCounts();
	void PostBeginPlay();
	bool ProcessServerLogin();
	void RegisterServer();
	class APawn* SpawnDefaultPawnFor(class AController* NewPlayer, class ANavigationPoint* StartSpot);
	void eventPreBeginPlay();
	class APlayerController* SpawnPlayerController(struct FVector SpawnLocation, struct FRotator SpawnRotation);
	class UClass* eventSetGameType(struct FString MapName, struct FString Options, struct FString Portal);
	struct FString eventGetDefaultGameClassPath(struct FString MapName, struct FString Options, struct FString Portal);
	void PDI(class UClass* ActorClass, unsigned long bOnlybDebug);
	void eventInitGame(struct FString Options, struct FString& ErrorMessage);
	void EventInit(class AGameInfo_X* G, struct FString Options);
	void EventSpawned(class AGameInfo_X* G);
};

// Class ProjectX.GameSetting_X
// 0x0004 (0x0060 - 0x0064)
class UGameSetting_X : public UObject
{
public:
	unsigned long                                      bHidden : 1;                                   // 0x0060 (0x0004) [0x0000008000000001] [0x00000001] (CPF_Edit)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.GameSetting_X");
		}

		return uClassPointer;
	};

	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool IsSetting(struct FName SettingName);
	void AddGameSettingToList(class UOnlineGameSettings_X* OnlineGameSettings, TArray<class UGameSetting_X*>& GameSettingsArray);
};

// Class ProjectX.GameSettingCategory_X
// 0x0028 (0x0060 - 0x0088)
class UGameSettingCategory_X : public UObject
{
public:
	TArray<struct FName>                               SelectedNames;                                 // 0x0060 (0x0010) [0x0000004000400001] (CPF_Edit | CPF_NeedCtorLink)
	unsigned long                                      bHidden : 1;                                   // 0x0070 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	unsigned long                                      bUseableWhileHidden : 1;                       // 0x0070 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	TArray<class UGameSetting_X*>                      GameSettings;                                  // 0x0078 (0x0010) [0x0000004000400001] (CPF_Edit | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.GameSettingCategory_X");
		}

		return uClassPointer;
	};

	bool __GameSettingCategory_X__GetGameSettingIndex_073FE47E413773056837AB8E118D6C34(class UGameSetting_X* GS);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	int32_t GetGameSettingIndex(struct FName SettingName, unsigned long bIgnoreHidden);
	bool eventHasSetting(struct FName SettingName);
	void GetSelectedGameSettings(TArray<class UGameSetting_X*>& SelectedGameSettings);
	class UGameSetting_X* GetFirstSelectedGameSetting();
	void ClearSelected();
	void AddSelectedSetting(struct FName NewSelectedName);
	void SetGameSettings(TArray<class UGameSetting_X*> NewGameSettings);
};

// Class ProjectX.GameViewportClient_X
// 0x0080 (0x0248 - 0x02C8)
class UGameViewportClient_X : public UGameViewportClient
{
public:
	unsigned long                                      bHandCursor : 1;                               // 0x0248 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      bMuteSoundOnFocusLost : 1;                     // 0x0248 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	int32_t                                            MaxSplitScreenPlayers;                         // 0x024C (0x0004) [0x0000000000004002] (CPF_Const | CPF_Config)
	struct FScriptDelegate                             __EventLocalPlayerJoin__Delegate;              // 0x0250 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLocalPlayerLeave__Delegate;             // 0x0268 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventNotifyConnectionError__Delegate;        // 0x0280 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPrimaryPlayerChange__Delegate;          // 0x0298 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventFocusChanged__Delegate;                 // 0x02B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.GameViewportClient_X");
		}

		return uClassPointer;
	};

	bool HasFocus();
	void OnPrimaryPlayerSwitch(class ULocalPlayer* OldPrimaryPlayer, class ULocalPlayer* NewPrimaryPlayer);
	bool ForceRemovePlayer(class ULocalPlayer* ExPlayer);
	bool eventRemovePlayer(class ULocalPlayer* ExPlayer);
	bool RemovePlayerByID(int32_t ControllerId);
	void eventSetHardwareMouseCursorVisibility(unsigned long bIsVisible);
	void NotifyConnectionError(uint8_t MessageType, struct FString Message, struct FString Title);
	void eventSetProgressMessage(uint8_t MessageType, struct FString Message, struct FString Title, unsigned long bIgnoreFutureNetworkMessages);
	class ULocalPlayer* eventCreatePlayer(int32_t ControllerId, unsigned long bSpawnActor, struct FString& OutError);
	void NotifyPlayerRemoved(int32_t PlayerIndex, class ULocalPlayer* RemovedPlayer);
	void NotifyPlayerAdded(int32_t PlayerIndex, class ULocalPlayer* AddedPlayer);
	bool ShouldMuteAudioWhenUnfocused();
	bool PlatformSupportsMuteOnFocusLostOption();
	bool IsGameRecordingEnabled();
	float GetDefaultSafeZone();
	void FlashWindow();
	void SaveCurrentWindowState();
	void SaveWindowState(int32_t ResX, int32_t ResY, unsigned long bFullScreen, unsigned long bBorderless, unsigned long bVsync);
	bool GetAvailableRefreshRates(TArray<int32_t>& RefreshRates);
	bool GetAvailableResolutions(TArray<struct FIntPoint>& Resolutions);
	bool GetAvailableResolutionsStr(TArray<struct FString>& Resolutions);
	bool IsBorderlessViewport();
	struct FIntPoint GetViewportSizePoint();
	struct FString GetViewportSizeStr();
	class UGameViewportClient_X* GetInstance();
	void EventFocusChanged(unsigned long bInHasFocus);
	void EventPrimaryPlayerChange(class ULocalPlayer* OldPrimaryPlayer, class ULocalPlayer* NewPrimaryPlayer);
	void EventNotifyConnectionError(uint8_t MessageType, struct FString Title, struct FString Message);
	void EventLocalPlayerLeave(class ULocalPlayer* OldPlayer);
	void EventLocalPlayerJoin(class ULocalPlayer* NewPlayer);
};

// Class ProjectX.GFxDataRow_X
// 0x0034 (0x0060 - 0x0094)
class UGFxDataRow_X : public UObject
{
public:
	struct FName                                       TableName;                                     // 0x0060 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       PrimaryKeyName;                                // 0x0068 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UClass*                                      ProxyClass;                                    // 0x0070 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	unsigned long                                      bLevelTransitionPersistent : 1;                // 0x0078 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class UObject*                                     ProxyObject;                                   // 0x0080 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class UGFxShell_X*                                 Shell;                                         // 0x0088 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	int32_t                                            RowIndex;                                      // 0x0090 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.GFxDataRow_X");
		}

		return uClassPointer;
	};

	class UGFxObject* FlashEventObject();
	struct FString FlashEventString();
	float FlashEventFloat();
	int32_t FlashEventInt();
	void FlashEventVoid();
	void SetProxy(class UObject* InProxyObject);
	void eventOnRemoved();
	void eventOnShellSet();
};

// Class ProjectX.GFxDataSingleton_X
// 0x0004 (0x0094 - 0x0098)
class UGFxDataSingleton_X : public UGFxDataRow_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.GFxDataSingleton_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.GFxShell_X
// 0x0098 (0x0098 - 0x0130)
class UGFxShell_X : public UGFxDataSingleton_X
{
public:
	class UGFxMoviePlayer_X*                           MoviePlayerArchetype;                          // 0x0098 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class ULocalPlayer_X*                              Player;                                        // 0x00A0 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	unsigned long                                      bGamePaused : 1;                               // 0x00A8 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
	unsigned long                                      bWasFullscreen : 1;                            // 0x00A8 (0x0004) [0x0000000000002002] [0x00000002] (CPF_Const | CPF_Transient)
	float                                              LeftX;                                         // 0x00AC (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	float                                              LeftY;                                         // 0x00B0 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	float                                              RightX;                                        // 0x00B4 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	float                                              RightY;                                        // 0x00B8 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	TArray<class UGFxMoviePlayer_X*>                   Movies;                                        // 0x00C0 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	class UGFxDataStore_X*                             DataStore;                                     // 0x00D0 (0x0008) [0x000000000408000A] (CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	uint8_t                                            InputType;                                     // 0x00D8 (0x0001) [0x0000000000002002] (CPF_Const | CPF_Transient)
	uint8_t                                            OnlinePlatformType;                            // 0x00D9 (0x0001) [0x0000000040000000] (CPF_EditInlineNotify)
	class UOnlineSubsystem*                            OnlineSub;                                     // 0x00E0 (0x0008) [0x0000800000000001] (CPF_Edit)    
	struct FScriptDelegate                             __EventInputCaptureChanged__Delegate;          // 0x00E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventInputTypeChanged__Delegate;             // 0x0100 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventReceivedInput__Delegate;                // 0x0118 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.GFxShell_X");
		}

		return uClassPointer;
	};

	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void SetMouseKeyPressed(struct FName Key, unsigned long bPressed);
	void HandleOnlineSubSet();
	void SetAllowAnyPlayerInput(unsigned long bAllow);
	void HandlePauseChanged();
	void OnShowKeyboardCanceled();
	void OnShowKeyboardComplete(struct FString NewText);
	void HandleShowKeyboardComplete(struct FString NewText, unsigned long bCanceled);
	struct FString PasteFromClipboard();
	void CopyToClipboard(struct FString ClipboardText);
	void HideKeyboard();
	bool ShowKeyboard(struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, struct FString DefaultText, int32_t MaxLength);
	void SetGamePaused(unsigned long bPaused);
	void ExitToMainMenu();
	void ExitGame();
	void HandleMovieInputCaptureChanged(class UGFxMoviePlayer_X* MoviePlayer);
	void TriggerDataCallbacks();
	void eventTick(float DeltaTime);
	void eventOnMovieClosed(class UGFxMoviePlayer_X* Movie);
	void eventOnMovieStarted(class UGFxMoviePlayer_X* Movie);
	void StopMovie(class UGFxMoviePlayer_X* Movie);
	void StartMovie(class UGFxMoviePlayer_X* Movie);
	void eventStop();
	void eventOnStart();
	void eventStart(class ULocalPlayer_X* InPlayer);
	void EventReceivedInput(class UGFxShell_X* InShell);
	void EventInputTypeChanged(class UGFxShell_X* InShell);
	void EventInputCaptureChanged(class UGFxShell_X* InShell);
};

// Class ProjectX.GFxDataStore_X
// 0x0074 (0x0070 - 0x00E4)
class UGFxDataStore_X : public UComponent
{
public:
	TArray<struct FGFxDataStoreTable>                  Tables;                                        // 0x0070 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FGFxDirtyTable>                      DirtyTables;                                   // 0x0080 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FMap_Mirror                                 ObjectNameToTable;                             // 0x0090 (0x0050) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	unsigned long                                      bDebugGetValue : 1;                            // 0x00E0 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.GFxDataStore_X");
		}

		return uClassPointer;
	};

	void ExportFakeData(struct FName InTableName);
	void PrintData(struct FName InTableName);
	int32_t GetObjectRowW(class UGFxDataRow_X* O);
	void AllObjectsOfType(class UClass* BaseClass, class UGFxDataRow_X*& OutObject);
	void AllObjects(class UClass* ObjClass, class UGFxDataRow_X*& OutObject, int32_t& Row);
	class UGFxDataRow_X* GetObjectByPrimaryKeyW(class UClass* ObjClass, struct FString Value);
	class UGFxDataRow_X* GetObjectW(class UClass* ObjClass, int32_t Row);
	void RemoveObject(class UGFxDataRow_X* O);
	void BindObject(class UGFxDataRow_X* Object, int32_t Row);
	class UGFxDataRow_X* CreateObject(class UClass* ObjClass, int32_t Row, int32_t& PlacedRow);
	void RemoveAllObjects(class UClass* ObjClass);
	void SetObjectCount(class UClass* ObjClass, int32_t Count);
	int32_t GetObjectCountW(class UClass* ObjClass);
	void EmptyTables();
	void EmptyTable(struct FName Table);
	void RemoveRow(struct FName Table, int32_t Row);
	void SetRowCount(struct FName Table, int32_t Count);
	int32_t GetRowCount(struct FName Table);
	struct FASValue GetValue(struct FName Table, int32_t Row, struct FName Column);
	int32_t GetObjectIndexW(class UGFxDataRow_X* TargetObject);
	void SetASValue(struct FName Table, int32_t Row, struct FName Column, struct FASValue& Value);
	void SetTextureValue(struct FName Table, int32_t Row, struct FName Column, class UTexture* Value);
	void SetStringValue(struct FName Table, int32_t Row, struct FName Column, struct FString Value);
	void SetQWordValue(struct FName Table, int32_t Row, struct FName Column, uint64_t Value);
	void SetFloatValue(struct FName Table, int32_t Row, struct FName Column, float Value);
	void SetIntValue(struct FName Table, int32_t Row, struct FName Column, int32_t Value);
	void SetBoolValue(struct FName Table, int32_t Row, struct FName Column, unsigned long Value);
	void SetDirty(struct FName InTableName, int32_t RowNum, struct FName Value);
};

// Class ProjectX.GFxEngine_X
// 0x0078 (0x0118 - 0x0190)
class UGFxEngine_X : public UGFxEngine
{
public:
	class UGFxShell_X*                                 ShellArchetype;                                // 0x0118 (0x0008) [0x0000004000000000]               
	TArray<class UGFxShell_X*>                         Shells;                                        // 0x0120 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FDirtyObject>                        DirtyObjects;                                  // 0x0130 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      bAnyShellHasInput : 1;                         // 0x0140 (0x0004) [0x0000004000002000] [0x00000001] (CPF_Transient)
	uint8_t                                            AvailableGamepadType;                          // 0x0144 (0x0001) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FScriptDelegate                             __EventShellCreated__Delegate;                 // 0x0148 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAvailableGamepadTypeChanged__Delegate;  // 0x0160 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventGameSessionEnded__Delegate;             // 0x0178 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.GFxEngine_X");
		}

		return uClassPointer;
	};

	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void eventOnGameSessionEnded();
	void GetFlashKey(struct FName UnrealKey, int32_t& KeyCode, int32_t& MouseButton);
	void UpdateHardwareMouseCursorVisibility();
	void HandleShellInputTypeChanged(class UGFxShell_X* InShell);
	void HandleGFxEnabledChanged(class UGameViewportClient* GVC);
	void HandleShellInputCaptureChanged(class UGFxShell_X* InShell);
	void FlushDirtyObjects();
	void eventTick(float DeltaTime);
	class UGFxShell_X* FindShell(class ULocalPlayer_X* ForPlayer);
	void OnShellDestroyed(class UGFxShell_X* Shell);
	void DestroyShell(class ULocalPlayer* ForPlayer);
	class UGFxShell_X* eventCreateShell();
	class UGFxShell_X* GetShell(class ULocalPlayer_X* ForPlayer);
	void SetShellArchetype(class UGFxShell_X* InShellArchetype);
	class UGFxEngine_X* GetInstance(class UClass* Type);
	void EventGameSessionEnded();
	void EventAvailableGamepadTypeChanged(class UGFxEngine_X* Engine);
	void EventShellCreated(class UGFxEngine_X* Engine, class UGFxShell_X* Shell);
};

// Class ProjectX.GFxMoviePlayer_X
// 0x0120 (0x0218 - 0x0338)
class UGFxMoviePlayer_X : public UGFxMoviePlayer
{
public:
	class UGFxShell_X*                                 Shell;                                         // 0x0218 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class UGFxDataStore_X*                             DataStore;                                     // 0x0220 (0x0008) [0x000000000408200A] (CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	TArray<class UGFxDataCallback_X*>                  DataCallbacks;                                 // 0x0228 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	TArray<class UGFxObjectReference_X*>               ActionScriptClasses;                           // 0x0238 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FMap_Mirror                                 ActionScriptClassMap;                          // 0x0248 (0x0050) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	TArray<struct FString>                             CursorScenes;                                  // 0x0298 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FString>                             InputScenes;                                   // 0x02A8 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FString>                             CaptureScenes;                                 // 0x02B8 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FName                                       DebugTableCallback;                            // 0x02C8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FName                                       DebugColumnCallback;                           // 0x02D0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UGFxObjectReference_X*                       ShellHooksClass;                               // 0x02D8 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	TArray<class UGFxSoundPack_X*>                     LoadedSoundPacks;                              // 0x02E0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventStarted__Delegate;                      // 0x02F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventClosed__Delegate;                       // 0x0308 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventInputCaptureChanged__Delegate;          // 0x0320 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.GFxMoviePlayer_X");
		}

		return uClassPointer;
	};

	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void SetAllowAnyPlayerInput(unsigned long bAllow);
	bool PopString(struct FString Value, TArray<struct FString>& Items);
	void SetGlobalRTCP(struct FName Key, float Value);
	void eventStopAllSounds(class UGFxSoundPack_X* SoundPack);
	void StopSound(struct FName EventName);
	void PlaySound(struct FName EventName);
	void eventPlaySoundFromTheme(struct FName EventName, struct FName SoundThemeName);
	class AActor* GetSoundSource();
	void UpdateCursorVisibility();
	void eventSetCaptureAllInput(unsigned long bNewCaptureInput, struct FString SceneName);
	void eventSetReceiveInput(unsigned long bNewReceiveInput, struct FString SceneName);
	void eventSetCursorVisible(unsigned long bVisible, struct FString SceneName);
	void InitShellHooks();
	void InitDataHooks();
	void eventOnClose();
	bool eventStart(unsigned long StartPaused);
	void EventInputCaptureChanged(class UGFxMoviePlayer_X* Player);
	void EventClosed(class UGFxMoviePlayer_X* Player);
	void EventStarted(class UGFxMoviePlayer_X* Player);
};

// Class ProjectX.GFxObjectReference_X
// 0x0030 (0x0060 - 0x0090)
class UGFxObjectReference_X : public UObject
{
public:
	int32_t                                            Value[0xC];                                    // 0x0060 (0x0030) [0x0000000000001002] (CPF_Const | CPF_Native)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.GFxObjectReference_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.GFxDataCallback_X
// 0x0015 (0x0090 - 0x00A5)
class UGFxDataCallback_X : public UGFxObjectReference_X
{
public:
	struct FName                                       Table;                                         // 0x0090 (0x0008) [0x0000000000002000] (CPF_Transient)
	int32_t                                            Row;                                           // 0x0098 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FName                                       Column;                                        // 0x009C (0x0008) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            Type;                                          // 0x00A4 (0x0001) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.GFxDataCallback_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.GFxSoundPack_X
// 0x0024 (0x0060 - 0x0084)
class UGFxSoundPack_X : public UObject
{
public:
	struct FString                                     ExportClassName;                               // 0x0060 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FSoundPackSoundRef>                  Sounds;                                        // 0x0070 (0x0010) [0x0000004000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	unsigned long                                      bHasSubtitles : 1;                             // 0x0080 (0x0004) [0x0001000000000001] [0x00000001] (CPF_Edit)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.GFxSoundPack_X");
		}

		return uClassPointer;
	};

	bool ToggleSound(int32_t Idx, class AActor* Target, unsigned long bPlay);
	void StopAll(class AActor* Target);
	bool StopSound(struct FName SoundName, class AActor* Target);
	bool PlaySound(struct FName SoundName, class AActor* Target);
};

// Class ProjectX.InterpComponent_X
// 0x00DB (0x009D - 0x0178)
class UInterpComponent_X : public UActorComponent
{
public:
	struct FMatrix                                     InterpStart;                                   // 0x00A0 (0x0040) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FMatrix                                     InterpEnd;                                     // 0x00E0 (0x0040) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FMatrix                                     InterpLocalToWorld;                            // 0x0120 (0x0040) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              InterpStartTime;                               // 0x0160 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              InterpEndTime;                                 // 0x0164 (0x0004) [0x0000000000002000] (CPF_Transient)
	TArray<struct FAttachment>                         Attachments;                                   // 0x0168 (0x0010) [0x0000000000680002] (CPF_Const | CPF_Component | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.InterpComponent_X");
		}

		return uClassPointer;
	};

	void DetachComponent(class UActorComponent* Component);
	void AttachComponent(class UActorComponent* Component, struct FVector RelativeLocation, struct FRotator RelativeRotation, struct FVector RelativeScale);
};

// Class ProjectX.IReservationConnection_X
// 0x0000 (0x0060 - 0x0060)
class UIReservationConnection_X : public UInterface
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.IReservationConnection_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.JsonTests_X
// 0x0000 (0x0060 - 0x0060)
class UJsonTests_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.JsonTests_X");
		}

		return uClassPointer;
	};

	bool ToJsonAndBack(class UObject* Target);
	void RunJsonTests(int32_t RandomSeed);
};

// Class ProjectX.LanBeacon_X
// 0x0034 (0x0070 - 0x00A4)
class ULanBeacon_X : public UComponent
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0070 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    LanBeacon;                                     // 0x0078 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	int32_t                                            LanAnnouncePort;                               // 0x0080 (0x0004) [0x0000000000004002] (CPF_Const | CPF_Config)
	uint64_t                                           QueryNonce;                                    // 0x0088 (0x0008) [0x0000000000000002] (CPF_Const)   
	uint8_t                                            BeaconState;                                   // 0x0090 (0x0001) [0x0000000000000002] (CPF_Const)   
	class UOnlineMessageComponent_X*                   MessageComponent;                              // 0x0098 (0x0008) [0x000000000408000A] (CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            MaxPacketSize;                                 // 0x00A0 (0x0004) [0x0000000000000002] (CPF_Const)   
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.LanBeacon_X");
		}

		return uClassPointer;
	};

	bool BroadcastMessage(class UObject* Message);
	bool BroadcastData(TArray<uint8_t>& Data);
	void Stop();
	bool Start(uint8_t InitialState);
};

// Class ProjectX.LensFlareComponent_X
// 0x0080 (0x02BC - 0x033C)
class ULensFlareComponent_X : public ULensFlareComponent
{
public:
	struct FPointer                                    VfTable_IISetParameter;                        // 0x02C0 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FRawDistributionFloat                       AlphaOverTime;                                 // 0x02C8 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionVector                      ColorOverTime;                                 // 0x02F0 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	TArray<struct FLensFlareFloatParamCurve>           MaterialFloatParamValuesOverTime;              // 0x0318 (0x0010) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FName                                       SourceColorParamName;                          // 0x0328 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FName                                       SourceColorAlphaParamName;                     // 0x0330 (0x0008) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              AttachTime;                                    // 0x0338 (0x0004) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.LensFlareComponent_X");
		}

		return uClassPointer;
	};

	void SetActorParameter(struct FName Key, class AActor* Value);
	void SetLinearColorParameter(struct FName Key, struct FLinearColor Value);
	void SetVectorParameter(struct FName Key, struct FVector Value);
	void SetFloatParameter(struct FName Key, float Value);
	void SetNameParameter(struct FName Key, struct FName Value);
};

// Class ProjectX.LinkedAccountMap_X
// 0x0050 (0x0070 - 0x00C0)
class ULinkedAccountMap_X : public UComponent
{
public:
	struct FMap_Mirror                                 PlayerMap;                                     // 0x0070 (0x0050) [0x0000000000001000] (CPF_Native)  
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.LinkedAccountMap_X");
		}

		return uClassPointer;
	};

	bool Contains(struct FUniqueNetId& Key);
	void Clear(int32_t ExpectedElements);
	void Remove(struct FUniqueNetId& Key);
	struct FUniqueNetId Get(struct FUniqueNetId& Key);
	void Set(struct FUniqueNetId& Key, struct FUniqueNetId& Value);
	int32_t Count();
	void AllValues(int32_t StartIndex, int32_t MaxValues, struct FUniqueNetId& OutFriend);
};

// Class ProjectX.LocalCache_X
// 0x0080 (0x0060 - 0x00E0)
class ULocalCache_X : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	TArray<struct FPointer>                            ImportTasks;                                   // 0x0068 (0x0010) [0x0000000000103000] (CPF_Native | CPF_Transient)
	TArray<struct FCacheImportCallbackData>            ImportCallbacks;                               // 0x0078 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FPointer>                            ExportTasks;                                   // 0x0088 (0x0010) [0x0000000000103000] (CPF_Native | CPF_Transient)
	TArray<struct FCacheExportCallbackData>            ExportCallbacks;                               // 0x0098 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      bDebug : 1;                                    // 0x00A8 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	struct FScriptDelegate                             __EventImportFinished__Delegate;               // 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventExportFinished__Delegate;               // 0x00C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.LocalCache_X");
		}

		return uClassPointer;
	};

	uint8_t Flush(float TimeoutSeconds);
	bool HasActiveTasks();
	void ExportObjectAsync(class UObject* CacheObject, struct FString Path, struct FScriptDelegate Callback);
	void ImportObjectAsync(class UObject* CacheObject, struct FString Path, struct FScriptDelegate Callback);
	class UError* ImportObject(class UObject* CacheObject, struct FString Path);
	void EventExportFinished(class ULocalCache_X* Cache, class UObject* CacheObject, class UError* Error);
	void EventImportFinished(class ULocalCache_X* Cache, class UObject* CacheObject, class UError* Error);
};

// Class ProjectX.MapFlythroughProfiler_X
// 0x0058 (0x0268 - 0x02C0)
class AMapFlythroughProfiler_X : public AActor
{
public:
	float                                              Accel;                                         // 0x0268 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              TurnRate;                                      // 0x026C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ProfileTime;                                   // 0x0270 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FinishTime;                                    // 0x0274 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              Speed;                                         // 0x0278 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FRenderProfile                              Profile;                                       // 0x027C (0x0028) [0x0000000000002000] (CPF_Transient)
	struct FScriptDelegate                             __EventFinished__Delegate;                     // 0x02A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.MapFlythroughProfiler_X");
		}

		return uClassPointer;
	};

	void SetupPlayers();
	void eventPostBeginPlay();
	void EventFinished(class AMapFlythroughProfiler_X* Profiler);
};

// Class ProjectX.NNXErrors_X
// 0x0008 (0x0080 - 0x0088)
class UNNXErrors_X : public UErrorList
{
public:
	class UErrorType*                                  SwitchServiceMaintenance;                      // 0x0080 (0x0008) [0x0000000000000002] (CPF_Const)   
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.NNXErrors_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.OnlineConfig_X
// 0x0018 (0x0060 - 0x0078)
class UOnlineConfig_X : public UObject
{
public:
	unsigned long                                      bAllowOnServer : 1;                            // 0x0060 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	TArray<struct FModifierSubscription>               AllSubscriptions;                              // 0x0068 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineConfig_X");
		}

		return uClassPointer;
	};

	void UnsubscribeModifiers();
	void ModifyObjects(class UClass* ObjClass, struct FScriptDelegate ApplyCallback, struct FScriptDelegate ResetCallback);
	void Undo();
	void Apply();
};

// Class ProjectX.BeaconConfig_X
// 0x0018 (0x0078 - 0x0090)
class UBeaconConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bUdpPingRegions : 1;                           // 0x0078 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	unsigned long                                      bUdpPingMetrics : 1;                           // 0x0078 (0x0004) [0x0000000000004000] [0x00000002] (CPF_Config)
	int32_t                                            MaxPingsPerAddress;                            // 0x007C (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            MaxPingsWindowSeconds;                         // 0x0080 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            StatsLogDelaySeconds;                          // 0x0084 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              WaitForPongSeconds;                            // 0x0088 (0x0004) [0x0000000000004000] (CPF_Config)  
	int32_t                                            PingsPerSecond;                                // 0x008C (0x0004) [0x0000000000004000] (CPF_Config)  
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.BeaconConfig_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.ClassPropertyConfig_X
// 0x0010 (0x0078 - 0x0088)
class UClassPropertyConfig_X : public UOnlineConfig_X
{
public:
	TArray<struct FPropertyOverride>                   Overrides;                                     // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ClassPropertyConfig_X");
		}

		return uClassPointer;
	};

	void Apply();
};

// Class ProjectX.ContentConfig_X
// 0x0010 (0x0078 - 0x0088)
class UContentConfig_X : public UOnlineConfig_X
{
public:
	TArray<struct FContentPair>                        ContentMap;                                    // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ContentConfig_X");
		}

		return uClassPointer;
	};

	void Undo();
	void Apply();
	bool IsEncryptionKeySetAtIndex(struct FEncryptedKeyIndex KeyIndex);
	bool EncryptedKeyIndexIsValid(struct FEncryptedKeyIndex KeyIndex);
	struct FEncryptedKeyIndex FindKeyIndex(struct FName ContentKeyName);
	void UndoNative();
	void ApplyNative();
};

// Class ProjectX.CrossplayConfig_X
// 0x0020 (0x0078 - 0x0098)
class UCrossplayConfig_X : public UOnlineConfig_X
{
public:
	TArray<struct FCrossplayGroup>                     Groups;                                        // 0x0078 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FCrossplayGroup>                     DisabledCrossplayGroups;                       // 0x0088 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.CrossplayConfig_X");
		}

		return uClassPointer;
	};

	bool CanInteractWithCrossplayDisabled(uint8_t Platform1, uint8_t Platform2);
	TArray<uint8_t> GetDisabledCrossplayGroup(uint8_t PlayerPlatform);
	bool PlatformsShareGroup(uint8_t Platform1, uint8_t Platform2);
};

// Class ProjectX.EventRecorderConfig_X
// 0x002C (0x0078 - 0x00A4)
class UEventRecorderConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bEnabled : 1;                                  // 0x0078 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bSeparatePlayerIDs : 1;                        // 0x0078 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      bExcludePlayerIDs : 1;                         // 0x0078 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	TArray<struct FName>                               DisabledEvents;                                // 0x0080 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UClass*                                      EventRecorderClass;                            // 0x0090 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              PlayerNetMetricsPeriod;                        // 0x0098 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MaxUnstableConnections;                        // 0x009C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            UnstableConnectionsTimePeriodSeconds;          // 0x00A0 (0x0004) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.EventRecorderConfig_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.LocalizationConfig_X
// 0x0010 (0x0078 - 0x0088)
class ULocalizationConfig_X : public UOnlineConfig_X
{
public:
	TArray<struct FLocOverride>                        Overrides;                                     // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.LocalizationConfig_X");
		}

		return uClassPointer;
	};

	void Apply();
};

// Class ProjectX.PsyNetConfig_X
// 0x0014 (0x0078 - 0x008C)
class UPsyNetConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bAllowPerCon : 1;                              // 0x0078 (0x0004) [0x0000000000004001] [0x00000001] (CPF_Edit | CPF_Config)
	unsigned long                                      bRequiresPerCon : 1;                           // 0x0078 (0x0004) [0x0000000000004000] [0x00000002] (CPF_Config)
	unsigned long                                      bAllowPsyNetParty : 1;                         // 0x0078 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	unsigned long                                      bSendPingMessage : 1;                          // 0x0078 (0x0004) [0x0000000000004001] [0x00000008] (CPF_Edit | CPF_Config)
	unsigned long                                      bUploadServerBugReports : 1;                   // 0x0078 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	unsigned long                                      bAllowServerBacktraceUploads : 1;              // 0x0078 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	unsigned long                                      bAllowServerBacktraceLogUploads : 1;           // 0x0078 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	unsigned long                                      bAllowClientBacktraceUploads : 1;              // 0x0078 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	unsigned long                                      bAllowClientBacktraceLogUploads : 1;           // 0x0078 (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
	unsigned long                                      bUseMatchmakingNotifications : 1;              // 0x0078 (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	unsigned long                                      bUsePsyNetBeacon : 1;                          // 0x0078 (0x0004) [0x0000000000000001] [0x00000400] (CPF_Edit)
	unsigned long                                      bUseReservationsV3 : 1;                        // 0x0078 (0x0004) [0x0000000000000001] [0x00000800] (CPF_Edit)
	unsigned long                                      bAllowPlayerCancelMatch : 1;                   // 0x0078 (0x0004) [0x0000000000000001] [0x00001000] (CPF_Edit)
	unsigned long                                      bEnablePrime30596 : 1;                         // 0x0078 (0x0004) [0x0000000000000001] [0x00002000] (CPF_Edit)
	float                                              PerConTimeout;                                 // 0x007C (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              PerConPingInterval;                            // 0x0080 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              FreshConnectionWindow;                         // 0x0084 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MatchmakingHeartbeatTimeSeconds;               // 0x0088 (0x0004) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetConfig_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetRetryConfig_X
// 0x0030 (0x0078 - 0x00A8)
class UPsyNetRetryConfig_X : public UOnlineConfig_X
{
public:
	TArray<class URetryDelay_X*>                       RetryDelays;                                   // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class URetryPolicy_X*>                      RetryPolicies;                                 // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class URetryPolicy_X*>                      ReAuthPolicies;                                // 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetRetryConfig_X");
		}

		return uClassPointer;
	};

	class URetryDelay_X* FindReAuthDelay(struct FString Service, struct FName Error);
	class URetryDelay_X* FindRetryDelay(struct FString Service, struct FName Error);
	class URetryPolicy_X* FindReAuthPolicy(struct FString Service, struct FName Error);
	class URetryPolicy_X* FindRetryPolicy(struct FString Service, struct FName Error);
};

// Class ProjectX.RPCConfig_X
// 0x0024 (0x0078 - 0x009C)
class URPCConfig_X : public UOnlineConfig_X
{
public:
	TArray<class UClass*>                              DisabledClasses;                               // 0x0078 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FString>                             DisabledServices;                              // 0x0088 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            MaxRPCsPerBatch;                               // 0x0098 (0x0004) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPCConfig_X");
		}

		return uClassPointer;
	};

	bool IsRPCDisabled(class URPC_X* RPC);
};

// Class ProjectX.ServerConfig_X
// 0x002C (0x0078 - 0x00A4)
class UServerConfig_X : public UOnlineConfig_X
{
public:
	float                                              HeartbeatSeconds;                              // 0x0078 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              HeartbeatRetrySeconds;                         // 0x007C (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	unsigned long                                      bUploadLogFiles : 1;                           // 0x0080 (0x0004) [0x0000000000004001] [0x00000001] (CPF_Edit | CPF_Config)
	unsigned long                                      bUploadReplays : 1;                            // 0x0080 (0x0004) [0x0000000000004001] [0x00000002] (CPF_Edit | CPF_Config)
	unsigned long                                      bFlatbufferRecordInput : 1;                    // 0x0080 (0x0004) [0x0000000000004001] [0x00000004] (CPF_Edit | CPF_Config)
	int32_t                                            MaxUploadLogFileSize;                          // 0x0084 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              NetServerMaxTickRate;                          // 0x0088 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              IdleNetServerMaxTickRate;                      // 0x008C (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              FlatbufferChance;                              // 0x0090 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	int32_t                                            FlatbufferMaxRecordSizeMB;                     // 0x0094 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	int32_t                                            FlatbufferPacketSendRate;                      // 0x0098 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              MinSecondsForUnstableConnection;               // 0x009C (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              MinSecondsUntilConnectionCheck;                // 0x00A0 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ServerConfig_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.OnlineFriendMap_X
// 0x0050 (0x0070 - 0x00C0)
class UOnlineFriendMap_X : public UComponent
{
public:
	struct FMap_Mirror                                 PlayerMap;                                     // 0x0070 (0x0050) [0x0000000000001000] (CPF_Native)  
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineFriendMap_X");
		}

		return uClassPointer;
	};

	void ValueArray(TArray<struct FOnlineFriend>& OutArray);
	void AppendArray(TArray<struct FOnlineFriend>& InArray);
	void CopyArray(TArray<struct FOnlineFriend>& InArray);
	bool Contains(struct FUniqueNetId& Key);
	void Clear(int32_t ExpectedElements);
	void Remove(struct FUniqueNetId& Key);
	bool TryGet(struct FUniqueNetId& Key, struct FOnlineFriend& OutValue);
	void Set(struct FUniqueNetId& Key, struct FOnlineFriend& Value);
	int32_t Count();
	void AllValues(int32_t StartIndex, int32_t MaxValues, struct FOnlineFriend& OutFriend);
};

// Class ProjectX.OnlineGameSearch_X
// 0x0044 (0x0154 - 0x0198)
class UOnlineGameSearch_X : public UOnlineGameSearch
{
public:
	TArray<struct FString>                             InclusiveGameTagsArray;                        // 0x0158 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FString>                             ExclusiveGameTagsArray;                        // 0x0168 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     MapName;                                       // 0x0178 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     GameTagsDelimiter;                             // 0x0188 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGameSearch_X");
		}

		return uClassPointer;
	};

	bool GetStringProperty(int32_t PropertyId, struct FString& Value);
	struct FString eventGetExclusiveGameTags();
	struct FString eventGetInclusiveGameTags();
	void SetMap(struct FString inMapName);
	void SetExclusiveGameTags(TArray<struct FString> inGameTagsArray);
	void SetInclusiveGameTags(TArray<struct FString> inGameTagsArray);
};

// Class ProjectX.OnlineGameSettings_X
// 0x0048 (0x00A0 - 0x00E8)
class UOnlineGameSettings_X : public USettings
{
public:
	int32_t                                            NumPublicConnections;                          // 0x00A0 (0x0004) [0x0000000000000000]               
	int32_t                                            NumOpenPublicConnections;                      // 0x00A4 (0x0004) [0x0000000000000000]               
	TArray<class UGameSettingCategory_X*>              GameSettingCategories;                         // 0x00A8 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	unsigned long                                      bOffline : 1;                                  // 0x00B8 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      bIgnoreHiddenMutatorsOverride : 1;             // 0x00B8 (0x0004) [0x0001000000000000] [0x00000002] 
	int32_t                                            MinimumPlayersRequired;                        // 0x00BC (0x0004) [0x0000004000000000]               
	int32_t                                            NumSecondsWaitingForPlayers;                   // 0x00C0 (0x0004) [0x0000000000000000]               
	int32_t                                            SearchScore;                                   // 0x00C4 (0x0004) [0x0000000000000000]               
	float                                              LogTime;                                       // 0x00C8 (0x0004) [0x0000004040002000] (CPF_Transient | CPF_EditInlineNotify)
	struct FScriptDelegate                             __EventNumPlayersUpdated__Delegate;            // 0x00D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGameSettings_X");
		}

		return uClassPointer;
	};

	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool Equals(class UOnlineGameSettings_X* OtherGameSettings);
	void CalculateMinAndMaxNumPlayers();
	void CopyFrom(class UOnlineGameSettings_X* OtherGameSettings);
	class UGameSettingPlaylist_X* GetPlaylist();
	bool IsValid();
	void RemoveMismatchedTags(class UOnlineGameSettings_X* OtherGameSettings);
	class UGameSettingCategory_X* GetGameSettingCategoryByName(struct FName CategoryName);
	void SetIntProperty(int32_t PropertyId, int32_t Value);
	void SetGameTag(struct FName NewGameTag);
	void UpdateFromURL(class AGameInfo* Game, struct FString& URL);
	bool HasSetting(struct FName SettingName);
	void GetActiveGameSettings(TArray<class UGameSetting_X*>& GameSettings);
	class UGameSetting_X* GetGameSetting(struct FString SettingName, class UGameSettingCategory_X*& Category);
	struct FString GetGameTags();
	bool GetStringProperty(int32_t PropertyId, struct FString& Value);
	void Init();
	void EventNumPlayersUpdated(class UOnlineGameSettings_X* GameSettings, int32_t NewMinimumPlayersRequired);
};

// Class ProjectX.OnlineLegalText_X
// 0x0040 (0x0070 - 0x00B0)
class UOnlineLegalText_X : public UComponent
{
public:
	struct FString                                     Folder;                                        // 0x0070 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UCachedWebData_X*                            CachedData;                                    // 0x0080 (0x0008) [0x0000004000002000] (CPF_Transient)
	struct FString                                     AppendedPath;                                  // 0x0088 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventNewText__Delegate;                      // 0x0098 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineLegalText_X");
		}

		return uClassPointer;
	};

	void __OnlineLegalText_X__Sync_87D33F8D4C984CC0D99F66AD4E4A56F6(class UUrlConfig_X* UrlConfig);
	void HandleWebText(class UCachedWebData_X* InCachedData);
	struct FString GetWebUrl(class UUrlConfig_X* UrlConfig);
	struct FString GetPlatformString();
	struct FString GetRelativeUrl(unsigned long bUseAppendedPath);
	struct FString eventGetFileSystemUrl();
	struct FString GetText();
	void Sync(struct FString InAppendPath);
	void EventNewText(class UOnlineLegalText_X* Text);
};

// Class ProjectX.OnlineMessage_X
// 0x0000 (0x0060 - 0x0060)
class UOnlineMessage_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineMessage_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.OnlineMessageComponent_X
// 0x0038 (0x0070 - 0x00A8)
class UOnlineMessageComponent_X : public UComponent
{
public:
	class USerializer_X*                               Serializer;                                    // 0x0070 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UCompression_X*                              Compressor;                                    // 0x0078 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FOnlineMessageHandler>               MessageHandlers;                               // 0x0080 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __MessageReceivedDelegate__Delegate;           // 0x0090 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineMessageComponent_X");
		}

		return uClassPointer;
	};

	class UOnlineMessageComponent_X* EnableCompression(unsigned long bEnabled);
	class UOnlineMessageComponent_X* SetSerializer(class USerializer_X* InSerializer);
	void InvokeHandlers(class UObject* Message);
	class UObject* DeserializeMessage(class UObject* MessageOuter, TArray<uint8_t>& Data);
	bool SerializeMessage(class UObject* Message, TArray<uint8_t>& OutData);
	class UOnlineMessage_X* CreateMessage(class UClass* MessageClass, class UObject* MessageOuter);
	void RemoveMessageHandler(struct FScriptDelegate Callback);
	void AddMessageHandler(class UClass* MessageClass, struct FScriptDelegate Callback);
	void MessageReceivedDelegate(class UOnlineMessageComponent_X* Component, class UObject* Message);
};

// Class ProjectX.ParameterDispenser_X
// 0x0068 (0x0070 - 0x00D8)
class UParameterDispenser_X : public UComponent
{
public:
	struct FPointer                                    VfTable_IISetParameter;                        // 0x0070 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	TArray<struct FNameParamPair>                      NameParams;                                    // 0x0078 (0x0010) [0x0000004000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FFloatParamPair>                     FloatParams;                                   // 0x0088 (0x0010) [0x0000004000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FVectorParamPair>                    VectorParams;                                  // 0x0098 (0x0010) [0x0000004000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FColorParamPair>                     ColorParams;                                   // 0x00A8 (0x0010) [0x0000004000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FActorParamPair>                     ActorParams;                                   // 0x00B8 (0x0010) [0x0000004000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<class UISetParameter*>                      AllComponents;                                 // 0x00C8 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ParameterDispenser_X");
		}

		return uClassPointer;
	};

	void Inherit(class UParameterDispenser_X* Other);
	void ResetMaterials();
	void ApplyAllParameters(class UISetParameter* ActorComp);
	class AActor* GetActorParameter(struct FName Key);
	void SetActorParameter(struct FName Key, class AActor* Value);
	void SetLinearColorParameter(struct FName Key, struct FLinearColor Value);
	void SetVectorParameter(struct FName Key, struct FVector Value);
	void SetFloatParameter(struct FName Key, float Value);
	void SetNameParameter(struct FName Key, struct FName Value);
	void RemoveComponent(class UISetParameter* ActorComp);
	void AddComponent(class UISetParameter* ActorComp);
};

// Class ProjectX.ParticleModuleBeamTarget_X
// 0x0004 (0x010C - 0x0110)
class UParticleModuleBeamTarget_X : public UParticleModuleBeamTarget
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ParticleModuleBeamTarget_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.ParticleModuleLocationBoneSocket_X
// 0x0004 (0x00AC - 0x00B0)
class UParticleModuleLocationBoneSocket_X : public UParticleModuleLocationBoneSocket
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ParticleModuleLocationBoneSocket_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.ParticleModuleLocationSkelVertSurface_X
// 0x0000 (0x00D0 - 0x00D0)
class UParticleModuleLocationSkelVertSurface_X : public UParticleModuleLocationSkelVertSurface
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ParticleModuleLocationSkelVertSurface_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.ParticleModuleVelocitySurfaceNormal_X
// 0x0034 (0x0074 - 0x00A8)
class UParticleModuleVelocitySurfaceNormal_X : public UParticleModuleVelocityBase
{
public:
	struct FName                                       MeshActorParamName;                            // 0x0078 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FRawDistributionFloat                       VelocityMultiplier;                            // 0x0080 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ParticleModuleVelocitySurfaceNormal_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.ParticleModuleVelocitySurfaceNormalStatic_X
// 0x0000 (0x00A8 - 0x00A8)
class UParticleModuleVelocitySurfaceNormalStatic_X : public UParticleModuleVelocitySurfaceNormal_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ParticleModuleVelocitySurfaceNormalStatic_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.ParticleModuleWind_X
// 0x0050 (0x0070 - 0x00C0)
class UParticleModuleWind_X : public UParticleModuleWorldForcesBase
{
public:
	struct FRawDistributionFloat                       StrengthScaleOverLife;                         // 0x0070 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
	struct FRawDistributionFloat                       AccelerationOverLife;                          // 0x0098 (0x0028) [0x0000000000480001] (CPF_Edit | CPF_Component | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ParticleModuleWind_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.Pawn_X
// 0x0044 (0x0514 - 0x0558)
class APawn_X : public APawn
{
public:
	float                                              GravityScale;                                  // 0x0518 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class AController*                                 PreviousController;                            // 0x0520 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FScriptDelegate                             __EventDestroyed__Delegate;                    // 0x0528 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAnimEnd__Delegate;                      // 0x0540 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.Pawn_X");
		}

		return uClassPointer;
	};

	bool eventIsSameTeam(class APawn* Other);
	void eventDestroyed();
	float GetGravityZ();
	void eventOnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime);
	void OnControllerChanged();
	void PossessedBy(class AController* C);
	void UpdateControllerRef();
	void eventReplicatedEvent(struct FName VarName);
	void EventAnimEnd(class APawn_X* ForPawn, class UAnimNodeSequence* SeqNode);
	void EventDestroyed(class APawn_X* Pawn);
};

// Class ProjectX.PerCon_X
// 0x0038 (0x0060 - 0x0098)
class UPerCon_X : public UObject
{
public:
	class UPsyNetConfig_X*                             Config;                                        // 0x0060 (0x0008) [0x0000800000000000]               
	struct FString                                     URL;                                           // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            Status;                                        // 0x0078 (0x0001) [0x0000004000000000]               
	struct FScriptDelegate                             __EventStatusChanged__Delegate;                // 0x0080 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PerCon_X");
		}

		return uClassPointer;
	};

	bool UseWebSocket(unsigned long bRpcWebSocket);
	void HandleConfigChanged();
	void SetStatus(uint8_t InStatus);
	void SetEnabled(unsigned long bEnable);
	void EventStatusChanged(class UPerCon_X* PerCon);
};

// Class ProjectX.PhysicalMaterialProperty_X
// 0x0008 (0x0060 - 0x0068)
class UPhysicalMaterialProperty_X : public UPhysicalMaterialPropertyBase
{
public:
	struct FName                                       SurfaceType;                                   // 0x0060 (0x0008) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PhysicalMaterialProperty_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PlayerInput_X
// 0x0180 (0x02F8 - 0x0478)
class UPlayerInput_X : public UPlayerInput
{
public:
	float                                              GamepadDeadzone;                               // 0x02F8 (0x0004) [0x0000000000004000] (CPF_Config)  
	TArray<struct FGamepadDeadzoneSettings>            GamepadDeadzones;                              // 0x0300 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	float                                              KeyboardAxisBlendTime;                         // 0x0310 (0x0004) [0x0000000000004000] (CPF_Config)  
	TArray<struct FKeyboardAxisBlendSettings>          KeyboardAxisBlendTimes;                        // 0x0318 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FName                                       CurrentKey;                                    // 0x0328 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FName                                       ActiveDPadButton;                              // 0x0330 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FName                                       LastDoubleTapKey;                              // 0x0338 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	TArray<struct FName>                               DisabledActions;                               // 0x0340 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FName>                               DisabledActionsUntilNextUse;                   // 0x0350 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FBindingAction>                      Actions;                                       // 0x0360 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UControlPreset_X*                            ControlPreset;                                 // 0x0370 (0x0008) [0x0000000000000000]               
	TArray<struct FPlayerBinding>                      PCBindings;                                    // 0x0378 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FPlayerBinding>                      GamepadBindings;                               // 0x0388 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	TArray<struct FPlayerBinding>                      SteamInputBindings;                            // 0x0398 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	float                                              TapTime;                                       // 0x03A8 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              DoubleTapTime;                                 // 0x03AC (0x0004) [0x0000000000004000] (CPF_Config)  
	TArray<struct FPointer>                            HeldBindings;                                  // 0x03B0 (0x0010) [0x0000000000003000] (CPF_Native | CPF_Transient)
	unsigned long                                      bDebugInput : 1;                               // 0x03C0 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      bAbsorbCurrentKeyPress : 1;                    // 0x03C0 (0x0004) [0x0000000000002002] [0x00000002] (CPF_Const | CPF_Transient)
	uint8_t                                            UnknownData00[0x50];                           // 0x03C8 (0x0050) UNKNOWN PROPERTY: MapProperty ProjectX.PlayerInput_X.RawAxisValues
	struct FScriptDelegate                             __EventActionToggled__Delegate;                // 0x0418 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventBindingsChanged__Delegate;              // 0x0430 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSetBindingsToUserBindings__Delegate;    // 0x0448 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventInitialized__Delegate;                  // 0x0460 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PlayerInput_X");
		}

		return uClassPointer;
	};

	void PrintDebugInfo(class UDebugDrawer* Drawer);
	struct FName GetKeyForActionArray(struct FName Action, TArray<struct FPlayerBinding>& PlayerBindings);
	void AbsorbCurrentKeyPress();
	void SetBindings(TArray<struct FPlayerBinding>& PC, TArray<struct FPlayerBinding>& Gamepad);
	void ClearDisableActionUntilNextUseList();
	void DisableActionUntilNextUse(struct FName ActionName);
	void ClearDisabledActions();
	void RemoveFromDisabledActions(struct FName ActionName);
	void AddToDisabledActions(struct FName ActionName);
	void ReleaseKey(struct FName Key, unsigned long bTriggerEvents);
	struct FString GetUIKey(struct FName KeyName);
	void ShutdownInputSystem();
	void InitInputSystem();
	void ResetInput();
	float GetRawSplitAxisValue(struct FName AxisNegative, struct FName AxisPositive);
	float GetRawAxisValue(struct FName AxisName);
	class UControlPreset_X* GetControlPreset(struct FName PresetName);
	void SetControlPreset(struct FName PresetName);
	void ResetActiveBindingsToProfileBindings();
	void ResetBindingsToDefault();
	void EventInitialized(class UPlayerInput_X* PlayerInput);
	void EventSetBindingsToUserBindings(class UPlayerInput_X* PlayerInput);
	void EventBindingsChanged(class UPlayerInput_X* PlayerInput);
	void EventActionToggled(class UPlayerInput_X* PlayerInput, struct FName ActionName, unsigned long bEnabled);
};

// Class ProjectX.PointLightComponent_X
// 0x0010 (0x0264 - 0x0274)
class UPointLightComponent_X : public UPointLightComponent
{
public:
	class UDistributionFloatConstantCurve*             BrightnessOverTime;                            // 0x0268 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              AttachTime;                                    // 0x0270 (0x0004) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PointLightComponent_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNet_X
// 0x00F0 (0x0060 - 0x0150)
class UPsyNet_X : public UObject
{
public:
	uint8_t                                            Environment;                                   // 0x0060 (0x0001) [0x0000004000002000] (CPF_Transient)
	struct FString                                     EnvironmentName;                               // 0x0068 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FPsyNetKeys                                 Keys;                                          // 0x0078 (0x0030) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	class UStringMap*                                  Headers;                                       // 0x00A8 (0x0008) [0x0000004004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPsyNetServiceSubscriptions_X*               Services;                                      // 0x00B0 (0x0008) [0x0000004004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPsyNetConnection_X*                         PrimaryEnabledConnection;                      // 0x00B8 (0x0008) [0x0000004000000000]               
	class UPsyNetConnection_X*                         PrimaryAuthedConnection;                       // 0x00C0 (0x0008) [0x0000004000000000]               
	class UPsyNetConnection_X*                         AnonymousConnection;                           // 0x00C8 (0x0008) [0x0000004000000000]               
	float                                              LastReportCheaterTime;                         // 0x00D0 (0x0004) [0x0000000000000000]               
	unsigned long                                      bUsePsynetEnvironment : 1;                     // 0x00D4 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	struct FScriptDelegate                             __EventPrimaryConnectionEnabled__Delegate;     // 0x00D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPrimaryConnectionDisabled__Delegate;    // 0x00F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPrimaryPlayerLoggedIn__Delegate;        // 0x0108 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPrimaryPlayerLoggedOut__Delegate;       // 0x0120 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventCheaterReported__Delegate;              // 0x0138 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNet_X");
		}

		return uClassPointer;
	};

	void ReportCheater(struct FUniqueNetId Id, struct FString Reason);
	struct FString AssignQWordToString(uint64_t Q);
	uint64_t AssignStringToQWord(struct FString S);
	float GetRetryDelay(int32_t Failures, TArray<float> Delays);
	void eventConnectionChangedIP(struct FUniqueNetId PlayerID);
	void eventNetworkError(struct FUniqueNetId PlayerID, struct FString Reason);
	void InitHeaders();
	void NotifyWhenLoggedIn(struct FScriptDelegate LoginCallback, struct FScriptDelegate LogoutCallback);
	void NotifyWhenPrimaryConnectionEnabled(struct FScriptDelegate EnabledCallback, struct FScriptDelegate DisabledCallback);
	void SetPrimaryAuthedConnection(class UPsyNetConnection_X* Connection);
	void SetPrimaryEnabledConnection(class UPsyNetConnection_X* Connection);
	void HandleConnectionChanged(class UPsyNetConnection_X* Connection);
	class UPsyNetConnection_X* GetPrimaryConnection();
	void HandleServiceExecuted(class UPsyNetServiceProvider_X* P, class UPsyNetClientService_X* Service);
	void eventInit();
	void Flush(float TimeoutSeconds);
	class URPC_X* QueueRPC(class URPC_X* RPC);
	class URPC_X* RPC(class UClass* RPCClass);
	class UPsyNet_X* GetInstance();
	void EventCheaterReported();
	void EventPrimaryPlayerLoggedOut();
	void EventPrimaryPlayerLoggedIn();
	void EventPrimaryConnectionDisabled();
	void EventPrimaryConnectionEnabled();
};

// Class ProjectX.PsyNetBeaconConnection_X
// 0x002C (0x0060 - 0x008C)
class UPsyNetBeaconConnection_X : public UObject
{
public:
	struct FPointer                                    VfTable_IIReservationConnection_X;             // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FString                                     ReservationID;                                 // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ConnectionID;                                  // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              TimeoutTime;                                   // 0x0088 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetBeaconConnection_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetClientService_X
// 0x0030 (0x0060 - 0x0090)
class UPsyNetClientService_X : public UObject
{
public:
	struct FString                                     Service;                                       // 0x0060 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	int32_t                                            Version;                                       // 0x0070 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UError*                                      Error;                                         // 0x0078 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UPsyNetConnection_X*                         Connection;                                    // 0x0080 (0x0008) [0x0000000000000000]               
	uint64_t                                           Expiration;                                    // 0x0088 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetClientService_X");
		}

		return uClassPointer;
	};

	void Execute();
	void SetError(class UError* InError);
};

// Class ProjectX.PsyNetClientServiceCollection_X
// 0x0010 (0x0060 - 0x0070)
class UPsyNetClientServiceCollection_X : public UObject
{
public:
	TArray<class UPsyNetClientService_X*>              ServiceArchetypes;                             // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetClientServiceCollection_X");
		}

		return uClassPointer;
	};

	class UPsyNetClientService_X* GetServiceArchetype(struct FString ServiceName, int32_t Version);
	void CollectServiceArchetypes();
	void eventConstruct();
};

// Class ProjectX.PsyNetConnection_X
// 0x0170 (0x0060 - 0x01D0)
class UPsyNetConnection_X : public UObject
{
public:
	class UPsyNet_X*                                   PsyNet;                                        // 0x0060 (0x0008) [0x0000800000000000]               
	class UOnlineSubsystem*                            OnlineSub;                                     // 0x0068 (0x0008) [0x0000800000000000]               
	class UPsyNetConfig_X*                             Config;                                        // 0x0070 (0x0008) [0x0000800000000000]               
	class UPsyNetRetryConfig_X*                        RetryConfig;                                   // 0x0078 (0x0008) [0x0000800000000000]               
	class UPsyNetUrl_X*                                URL;                                           // 0x0080 (0x0008) [0x0000800000000000]               
	class UStringMap*                                  Headers;                                       // 0x0088 (0x0008) [0x0000004004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPsyNetRequestQue_X*                         RequestQue;                                    // 0x0090 (0x0008) [0x0000004000000000]               
	class URPCQueue_X*                                 RPCQueue;                                      // 0x0098 (0x0008) [0x0000004004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPsyNetServiceProvider_X*                    ServiceProvider;                               // 0x00A0 (0x0008) [0x0000004000000000]               
	class UPsyNetMessengerHttp_X*                      HttpMessenger;                                 // 0x00A8 (0x0008) [0x0000004000000000]               
	class UPsyNetMessengerWebSocket_X*                 PerConMessenger;                               // 0x00B0 (0x0008) [0x0000004000000000]               
	class UPerCon_X*                                   PerCon;                                        // 0x00B8 (0x0008) [0x0000004000000000]               
	class UPerConMetrics_X*                            PerConMetrics;                                 // 0x00C0 (0x0008) [0x0000004004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	unsigned long                                      bAuthorized : 1;                               // 0x00C8 (0x0004) [0x0000004000000000] [0x00000001] 
	unsigned long                                      bConnected : 1;                                // 0x00C8 (0x0004) [0x0000004000000000] [0x00000002] 
	unsigned long                                      bFreshConnection : 1;                          // 0x00C8 (0x0004) [0x0000004000000000] [0x00000004] 
	unsigned long                                      bPerConConnected : 1;                          // 0x00C8 (0x0004) [0x0000004000000000] [0x00000008] 
	float                                              ConnectedChangeTime;                           // 0x00CC (0x0004) [0x0000004000000000]               
	class UError*                                      DisabledError;                                 // 0x00D0 (0x0008) [0x0000004000000000]               
	TArray<class UError*>                              DisabledErrorStack;                            // 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UError*                                      MaintenanceError;                              // 0x00E8 (0x0008) [0x0000000000000000]               
	class UError*                                      DuplicateLoginError;                           // 0x00F0 (0x0008) [0x0000000000000000]               
	class UError*                                      NoInternetError;                               // 0x00F8 (0x0008) [0x0000000000000000]               
	class UError*                                      NoUrlError;                                    // 0x0100 (0x0008) [0x0000000000000000]               
	class UError*                                      AuthDisabledError;                             // 0x0108 (0x0008) [0x0000000000000000]               
	TArray<float>                                      AuthRetryDelays;                               // 0x0110 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            ConsecutiveAuthFailures;                       // 0x0120 (0x0004) [0x0000000000000000]               
	struct FScriptDelegate                             __EventConnected__Delegate;                    // 0x0128 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDisconnected__Delegate;                 // 0x0140 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventConnectFailed__Delegate;                // 0x0158 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPerConConnected__Delegate;              // 0x0170 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPerConDisconnected__Delegate;           // 0x0188 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventEnabled__Delegate;                      // 0x01A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDisabled__Delegate;                     // 0x01B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetConnection_X");
		}

		return uClassPointer;
	};

	void eventSendPingMessage();
	void WatchPerConConnection(struct FScriptDelegate OnConnected, struct FScriptDelegate OnDisconnected);
	void StopWatchConnection(struct FScriptDelegate OnConnected, struct FScriptDelegate OnDisconnected);
	void WatchConnection(struct FScriptDelegate OnConnected, struct FScriptDelegate OnDisconnected);
	void WatchEnabled(struct FScriptDelegate OnEnabled, struct FScriptDelegate OnDisabled);
	void eventDispose();
	void UpdateLinkConnection(unsigned long bHasConnection);
	void ClearDuplicateLoginError();
	void OnDuplicateLogin();
	void HandleDuplicateLoginMessage(class UPsyNetClientService_X* Service);
	void HandleWebSocketDisconnect(class UPsyNetMessengerWebSocket_X* WS, int32_t Code, struct FString Reason);
	void HandleWebSocketConnect(class UPsyNetMessengerWebSocket_X* WS);
	void HandleWebSocketStartConnectFail(class UPsyNetMessengerWebSocket_X* WS);
	void UpdateConnectionState();
	void ClearAuthDisabledError();
	void SetAuthDisabledError(class UError* Error);
	void ConditionalSetAuthRetryDelay(struct FString Service, class UError* Error);
	void HandleErrorRPC(class URPCQueue_X* InQueue, class URPC_X* InRPC, class UError* Error);
	bool IsEnabled();
	void UpdateDisabledError(class UErrorType* Type, unsigned long bIsError, class UError*& Error);
	void eventAddDisabledError(class UError* Error);
	void RemoveDisabledError(class UError* Error);
	uint8_t Flush(float TimeoutSeconds);
	class URPC_X* QueueRPC(class URPC_X* RPC);
	class URPC_X* RPC(class UClass* RPCClass);
	bool ProcessServiceCall(class UPsyNetMessage_X* Message);
	void ProcessMessage(class UPsyNetMessage_X* Message);
	void UpdatePsyTime(class UPsyNetMessage_X* Message);
	void ReceiveMessage(class UPsyNetMessage_X* Message);
	class UTAsyncResult__PsyNetMessage_X* SendRequest(class UPsyNetMessage_X* Request);
	class UAsyncTask* SendMessage(class UPsyNetMessage_X* Message);
	void RemoveHeader(struct FString Key);
	void SetHeader(struct FString Key, struct FString Value);
	void SetAuthorized(unsigned long bAuth);
	class UStringMap* BuildHandshakeHeaders();
	class UPsyNetMessenger_X* eventGetMessenger();
	void CreatePerConMessenger();
	void CreateHttpMessenger(struct FString InURL);
	void KillPerConMessenger();
	void KillHttpMessenger();
	void KillMessengers();
	void CreateMessengers();
	void InitMessengers();
	void InitServiceProvider();
	void HandlePerConStatusChanged(class UPerCon_X* P);
	void InitPerCon();
	void InitRPCQueue();
	void InitRequestQue();
	void InitHeaders();
	void UpdateNoUrlError();
	void HandleUrlChanged();
	struct FString GetPsyNetURL();
	void eventConstruct();
	void EventDisabled(class UPsyNetConnection_X* Connection);
	void EventEnabled(class UPsyNetConnection_X* Connection);
	void EventPerConDisconnected(class UPsyNetConnection_X* Connection);
	void EventPerConConnected(class UPsyNetConnection_X* Connection);
	void EventConnectFailed(class UPsyNetConnection_X* Connection);
	void EventDisconnected(class UPsyNetConnection_X* Connection);
	void EventConnected(class UPsyNetConnection_X* Connection);
};

// Class ProjectX.PsyNetErrorType_X
// 0x0000 (0x0070 - 0x0070)
class UPsyNetErrorType_X : public UErrorType
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetErrorType_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetMessage_X
// 0x0018 (0x0060 - 0x0078)
class UPsyNetMessage_X : public UObject
{
public:
	class UStringMap*                                  Headers;                                       // 0x0060 (0x0008) [0x000000000408000A] (CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	TArray<uint8_t>                                    Body;                                          // 0x0068 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetMessage_X");
		}

		return uClassPointer;
	};

	struct FString GetBodyText();
	void SetBodyText(struct FString Value);
	void SetBody(TArray<uint8_t>& Value);
};

// Class ProjectX.PsyNetMessenger_X
// 0x0018 (0x0060 - 0x0078)
class UPsyNetMessenger_X : public UObject
{
public:
	struct FScriptDelegate                             __EventMessageReceived__Delegate;              // 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetMessenger_X");
		}

		return uClassPointer;
	};

	void eventDispose();
	void EventMessageReceived(class UPsyNetMessage_X* Message);
	class UAsyncTask* SendMessage(class UPsyNetMessage_X* Message);
	void Connect();
};

// Class ProjectX.PsyNetMessengerHttp_X
// 0x0010 (0x0078 - 0x0088)
class UPsyNetMessengerHttp_X : public UPsyNetMessenger_X
{
public:
	struct FString                                     URL;                                           // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetMessengerHttp_X");
		}

		return uClassPointer;
	};

	void CopyHeadersToMessage(class UWebRequest_X* From, class UPsyNetMessage_X* To);
	void CopyHeadersToRequest(class UPsyNetMessage_X* From, class UWebRequest_X* To);
	void HandleWebRequestComplete(struct FString PsyRequestID, class UWebRequest_X* Request, class UAsyncTask* Task);
	class UAsyncTask* SendMessage(class UPsyNetMessage_X* Message);
};

// Class ProjectX.PsyNetMessengerWebSocket_X
// 0x00B8 (0x0078 - 0x0130)
class UPsyNetMessengerWebSocket_X : public UPsyNetMessenger_X
{
public:
	float                                              MessageSendTimeout;                            // 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UStringMap*                                  HandshakeHeaders;                              // 0x0080 (0x0008) [0x0000004004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FString                                     URL;                                           // 0x0088 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	class UWebSocketConnection_X*                      Connection;                                    // 0x0098 (0x0008) [0x0000004000000000]               
	TArray<struct FQueuedPsyNetMessage>                QueuedMessages;                                // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UPsyNetConfig_X*                             PsyNetConfig;                                  // 0x00B0 (0x0008) [0x0000800000000000]               
	struct FScriptDelegate                             __EventStartConnect__Delegate;                 // 0x00B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventStartConnectFail__Delegate;             // 0x00D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventConnected__Delegate;                    // 0x00E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDisconnected__Delegate;                 // 0x0100 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventInvalidMessageReceived__Delegate;       // 0x0118 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetMessengerWebSocket_X");
		}

		return uClassPointer;
	};

	void __PsyNetMessengerWebSocket_X__SendQueuedMessages_DA5A5B39423A5B8178EBFD8A1BD9497A(struct FQueuedPsyNetMessage QueuedMessage);
	void eventDispose();
	void HandleReceivedBunch(class UTcpConnection* C);
	void SerializeMessage(class UPsyNetMessage_X* Message);
	void FailQueuedMessages(class UError* Error);
	void TimeoutQueuedMessages();
	void SendMessageWithTask(class UPsyNetMessage_X* Message, class UAsyncTask* Task);
	void SendQueuedMessages();
	void QueueMessage(class UPsyNetMessage_X* Message, class UAsyncTask* Task);
	void StripHandshakeHeaders(class UPsyNetMessage_X* Message);
	class UAsyncTask* SendMessage(class UPsyNetMessage_X* Message);
	void HandleDisconnected(class UWebSocketConnection_X* InConnection);
	void HandleConnected(class UWebSocketConnection_X* InConnection);
	void Disconnect();
	void Connect();
	bool IsConnected();
	void Init(struct FString InURL, class UStringMap* InHandshakeHeaders);
	void EventInvalidMessageReceived(class UPsyNetMessengerWebSocket_X* Messenger, struct FString MessageSubstring);
	void EventDisconnected(class UPsyNetMessengerWebSocket_X* Messenger, int32_t Code, struct FString Reason);
	void EventConnected(class UPsyNetMessengerWebSocket_X* Messenger);
	void EventStartConnectFail(class UPsyNetMessengerWebSocket_X* Messenger);
	void EventStartConnect(class UPsyNetMessengerWebSocket_X* Messenger);
};

// Class ProjectX.PsyNetServiceSerializer_X
// 0x0000 (0x0060 - 0x0060)
class UPsyNetServiceSerializer_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetServiceSerializer_X");
		}

		return uClassPointer;
	};

	struct FString SerializeResponse(class UPsyNetClientService_X* Service);
	void DeserializeRequest(struct FString JSON, class UPsyNetClientService_X* Service);
};

// Class ProjectX.PsyNetServiceSubscriptions_X
// 0x0010 (0x0070 - 0x0080)
class UPsyNetServiceSubscriptions_X : public UComponent
{
public:
	TArray<struct FServiceSubscription>                Subscriptions;                                 // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetServiceSubscriptions_X");
		}

		return uClassPointer;
	};

	void NotifyServiceExecuted(class UPsyNetClientService_X* Service);
	void UnsubscribeAll(class UObject* Listener);
	void Unsubscribe(struct FScriptDelegate Callback);
	void Subscribe(class UClass* ServiceClass, struct FScriptDelegate Callback);
};

// Class ProjectX.PsyNetStaticData_X
// 0x00C8 (0x0070 - 0x0138)
class UPsyNetStaticData_X : public UComponent
{
public:
	struct FString                                     PsyConfigTemplateURL;                          // 0x0070 (0x0010) [0x0000000000404001] (CPF_Edit | CPF_Config | CPF_NeedCtorLink)
	float                                              LocalCacheTimeoutSeconds;                      // 0x0080 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	float                                              SyncDataTimeoutSeconds;                        // 0x0084 (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
	class UPsyNet_X*                                   PsyNet;                                        // 0x0088 (0x0008) [0x0000800000000000]               
	class UOnlineSubsystem*                            OnlineSub;                                     // 0x0090 (0x0008) [0x0000800000000000]               
	class UWebConfig_X*                                WebConfig;                                     // 0x0098 (0x0008) [0x0000800000000000]               
	unsigned long                                      bDebug : 1;                                    // 0x00A0 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bLoaded : 1;                                   // 0x00A0 (0x0004) [0x0000004000002000] [0x00000002] (CPF_Transient)
	unsigned long                                      bBlockingSync : 1;                             // 0x00A0 (0x0004) [0x0000004000002000] [0x00000004] (CPF_Transient)
	class UCacheTimer_X*                               CacheTimer;                                    // 0x00A8 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UOnlineResource_X*                           WebData;                                       // 0x00B0 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	TArray<class UObject*>                             DefaultObjects;                                // 0x00B8 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<class UObject*>                             DownloadedObjects;                             // 0x00C8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<class UObject*>                             RegisteredObjects;                             // 0x00D8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UStopwatch*                                  SyncDataStopwatch;                             // 0x00E8 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FString                                     PsyConfigQueryParams;                          // 0x00F0 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     PsyConfigSecret;                               // 0x0100 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FString                                     PsyConfigAltEnv;                               // 0x0110 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLoaded__Delegate;                       // 0x0120 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetStaticData_X");
		}

		return uClassPointer;
	};

	void __PsyNetStaticData_X__Init_67ABF00A4F70BB97573C0BA24A347785(class UObject* _);
	void __PsyNetStaticData_X__Init_E0A94EBF45111623A670A5806E1D743C(class UObject* _);
	void __PsyNetStaticData_X__Init_B2A6CA3C414E6864E77BC58B0BB72920();
	void __PsyNetStaticData_X__HandleGetURL_F7BBDDEC4B228982C6BA5497FE5DA32A(class UOnlineResource_X* _);
	void DisableConnection(class UOnlinePlayer_X* Player, class UStaticDataError_X* InError);
	void HandleStaticDataError(class UOnlineResource_X* DataSync, class UError* InError);
	class UPsyNetStaticDataMetrics_X* GetMetrics();
	void UpdateRegisteredObjects();
	bool LoadFromUTF8(TArray<uint8_t>& SignedData);
	bool LoadFromSignedUTF8WithSignature(struct FString Signature, TArray<uint8_t>& SignedData);
	bool LoadFromSignedUTF8(TArray<uint8_t>& SignedData);
	void InstantiateObjects();
	void HandleDataChanged(class UOnlineResource_X* Resource);
	struct FString GetPlatform();
	struct FString GetPsyConfigUrl(struct FString Template);
	void HandleGetURL(struct FString URL);
	void Sync();
	void HandleCacheExpired(class UCacheTimer_X* Timer);
	void UpdateLinkConnection(unsigned long bHasConnection);
	void UpdateCacheTimerEnabled();
	bool ShouldEnableCacheTimer();
	void HandleWebConfigChanged();
	void AddQueryParam(struct FString Param);
	void SetSyncPaused(unsigned long bPause, class UPauseStaticDataSync_X* Instance);
	void eventInit();
	void EventLoaded(class UPsyNetStaticData_X* Data);
};

// Class ProjectX.PsyNetUrl_X
// 0x0028 (0x0060 - 0x0088)
class UPsyNetUrl_X : public UObject
{
public:
	unsigned long                                      bUseSubsystemURL : 1;                          // 0x0060 (0x0004) [0x0000000000004001] [0x00000001] (CPF_Edit | CPF_Config)
	struct FString                                     URL;                                           // 0x0068 (0x0010) [0x0000000000404001] (CPF_Edit | CPF_Config | CPF_NeedCtorLink)
	struct FString                                     URLv2;                                         // 0x0078 (0x0010) [0x0000000000404001] (CPF_Edit | CPF_Config | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetUrl_X");
		}

		return uClassPointer;
	};

	struct FString GetURL(uint8_t Environment);
};

// Class ProjectX.RadialBlurComponent_X
// 0x0008 (0x0110 - 0x0118)
class URadialBlurComponent_X : public URadialBlurComponent
{
public:
	float                                              FadeTime;                                      // 0x0110 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeFalloff;                                   // 0x0114 (0x0004) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RadialBlurComponent_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.RandomStream_X
// 0x0008 (0x0060 - 0x0068)
class URandomStream_X : public UObject
{
public:
	struct FRandomStream_Mirror                        Stream;                                        // 0x0060 (0x0004) [0x0000000000001000] (CPF_Native)  
	int32_t                                            CurrentSeed;                                   // 0x0064 (0x0004) [0x0000004000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RandomStream_X");
		}

		return uClassPointer;
	};

	void SetCurrentSeed(int32_t NewSeed);
	float GetNextValue();
};

// Class ProjectX.RenderProfiler_X
// 0x0040 (0x0268 - 0x02A8)
class ARenderProfiler_X : public AActor
{
public:
	float                                              TimePerPrimitive;                              // 0x0268 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FPrimitiveComponentProfile>          PrimitiveProfiles;                             // 0x0270 (0x0010) [0x0000000000482000] (CPF_Transient | CPF_Component | CPF_NeedCtorLink)
	int32_t                                            CurrentIndex;                                  // 0x0280 (0x0004) [0x0000000000002000] (CPF_Transient)
	unsigned long                                      bInclusive : 1;                                // 0x0284 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	float                                              PrimitiveTime;                                 // 0x0288 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FScriptDelegate                             __EventFinished__Delegate;                     // 0x0290 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RenderProfiler_X");
		}

		return uClassPointer;
	};

	void SetupPlayers();
	void eventPostBeginPlay();
	void EventFinished(class ARenderProfiler_X* Profiler);
};

// Class ProjectX.RetryDelay_X
// 0x0018 (0x0060 - 0x0078)
class URetryDelay_X : public UObject
{
public:
	struct FName                                       Id;                                            // 0x0060 (0x0008) [0x0000000000000000]               
	TArray<float>                                      DelaySeconds;                                  // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RetryDelay_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.RetryPolicy_X
// 0x0028 (0x0060 - 0x0088)
class URetryPolicy_X : public UObject
{
public:
	TArray<struct FName>                               Errors;                                        // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       RetryDelay;                                    // 0x0070 (0x0008) [0x0000000000000000]               
	TArray<struct FString>                             Services;                                      // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RetryPolicy_X");
		}

		return uClassPointer;
	};

	bool AppliesTo(struct FString Service, struct FName Error);
};

// Class ProjectX.RPC_X
// 0x0088 (0x0060 - 0x00E8)
class URPC_X : public UObject
{
public:
	struct FString                                     Service;                                       // 0x0060 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	int32_t                                            Version;                                       // 0x0070 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	float                                              ServiceFailRetryDelay;                         // 0x0074 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	unsigned long                                      bAllowBatching : 1;                            // 0x0078 (0x0004) [0x0000000000000003] [0x00000001] (CPF_Edit | CPF_Const)
	unsigned long                                      bRequiresAuth : 1;                             // 0x0078 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	unsigned long                                      bDisposed : 1;                                 // 0x0078 (0x0004) [0x0000004000002000] [0x00000004] (CPF_Transient)
	uint8_t                                            Priority;                                      // 0x007C (0x0001) [0x0000000000000003] (CPF_Edit | CPF_Const)
	TArray<struct FKeyValuePair>                       Headers;                                       // 0x0080 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class UError*                                      Error;                                         // 0x0090 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class UAsyncTask*                                  Task;                                          // 0x0098 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FScriptDelegate                             __EventSuccess__Delegate;                      // 0x00A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventFail__Delegate;                         // 0x00B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventComplete__Delegate;                     // 0x00D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_X");
		}

		return uClassPointer;
	};

	void NotifySuccess();
	void NotifyError(class UError* InError);
	bool eventShouldResendOnFail(class UError* InError);
	class UErrorType* eventOverrideErrorType(class UErrorType* ErrorType);
	void eventOnComplete();
	void eventOnFail();
	void eventOnSuccess();
	void eventDispose();
	class UAsyncTask* CreateTask(struct FScriptDelegate InCallback);
	class URPC_X* NotifyOnComplete(struct FScriptDelegate Callback);
	class URPC_X* NotifyOnFail(struct FScriptDelegate Callback);
	class URPC_X* NotifyOnSuccess(struct FScriptDelegate Callback);
	class UObject* eventGetResponseObject();
	void EventComplete(class URPC_X* RPC);
	void EventFail(class URPC_X* RPC);
	void EventSuccess(class URPC_X* RPC);
};

// Class ProjectX.RPC_CrashReport_X
// 0x0000 (0x00E8 - 0x00E8)
class URPC_CrashReport_X : public URPC_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_CrashReport_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_RecordMetrics_X
// 0x0038 (0x00E8 - 0x0120)
class URPC_RecordMetrics_X : public URPC_X
{
public:
	struct FGuid                                       AppSessionID;                                  // 0x00E8 (0x0010) [0x0000000000000000]               
	struct FGuid                                       LevelSessionID;                                // 0x00F8 (0x0010) [0x0000000000000000]               
	float                                              CurrentTimeSeconds;                            // 0x0108 (0x0004) [0x0000000000000000]               
	int32_t                                            FirstEventIndex;                               // 0x010C (0x0004) [0x0000000000000000]               
	TArray<struct FMetricsEvent>                       Events;                                        // 0x0110 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_RecordMetrics_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPCBatch_X
// 0x006C (0x0060 - 0x00CC)
class URPCBatch_X : public UObject
{
public:
	float                                              SendTime;                                      // 0x0060 (0x0004) [0x0000000000000000]               
	TArray<struct FPendingRPC>                         Requests;                                      // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FRPCResponse>                        Responses;                                     // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FRPCError                                   Error;                                         // 0x0088 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	class UObject*                                     Result;                                        // 0x00A8 (0x0008) [0x0000000000000000]               
	class UPsyNetMessage_X*                            RequestMessage;                                // 0x00B0 (0x0008) [0x0000000000000000]               
	class UPsyNetMessage_X*                            ResponseMessage;                               // 0x00B8 (0x0008) [0x0000000000000000]               
	class UError*                                      ResponseError;                                 // 0x00C0 (0x0008) [0x0000000000000000]               
	unsigned long                                      bUseRpcV2 : 1;                                 // 0x00C8 (0x0004) [0x0000000000000000] [0x00000001] 
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPCBatch_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPCQueue_X
// 0x0100 (0x0070 - 0x0170)
class URPCQueue_X : public UComponent
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0070 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	float                                              AuthTimeoutSeconds;                            // 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class URPCConfig_X*                                RPCConfig;                                     // 0x0080 (0x0008) [0x0000800000000001] (CPF_Edit)    
	class UPsyNetRetryConfig_X*                        RetryConfig;                                   // 0x0088 (0x0008) [0x0000800000000001] (CPF_Edit)    
	class UPsyNetUrl_X*                                PsyNetUrl;                                     // 0x0090 (0x0008) [0x0000800000000001] (CPF_Edit)    
	TArray<struct FPendingRPC>                         PendingRPCs;                                   // 0x0098 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	TArray<class URPCBatch_X*>                         PendingBatches;                                // 0x00A8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FMap_Mirror                                 ServiceFailureDelayTimes;                      // 0x00B8 (0x0050) [0x0000000000001002] (CPF_Const | CPF_Native)
	unsigned long                                      bAuthorized : 1;                               // 0x0108 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             __EventRPCSuccess__Delegate;                   // 0x0110 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventRPCError__Delegate;                     // 0x0128 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventBatchError__Delegate;                   // 0x0140 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __SendRequestDelegate__Delegate;               // 0x0158 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPCQueue_X");
		}

		return uClassPointer;
	};

	void eventOnError(class URPC_X* RPC, class UError* Error);
	class UPsyNetMetrics_X* GetPsyNetMetrics();
	void RecordBatchMetrics(class URPCBatch_X* Batch);
	void HandleBatchComplete(class URPCBatch_X* Batch, class UPsyNetMessage_X* Response, class UError* Error);
	void eventCreateBatchSingleRPC(class UPsyNetMessage_X* Message, struct FPendingRPC& RPC);
	void eventCreateBatch(class UPsyNetMessage_X* Message, TArray<struct FPendingRPC>& BatchRPCs);
	void eventSignatureMismatch(int32_t ServiceID);
	void FailAllPending(class UError* Error);
	void FailPending(class URPC_X* RPC, class UError* Error);
	void TickReceive();
	void TickSend();
	void QueueRPC(class URPC_X* RPC);
	class UTAsyncResult__PsyNetMessage_X* SendRequestDelegate(class UPsyNetMessage_X* Message);
	void EventBatchError(class URPCQueue_X* RPCQueue, class UError* Error);
	void EventRPCError(class URPCQueue_X* RPCQueue, class URPC_X* RPC, class UError* Error);
	void EventRPCSuccess(class URPCQueue_X* RPCQueue, class URPC_X* RPC);
};

// Class ProjectX.RuntimeParameterBase_X
// 0x0008 (0x0060 - 0x0068)
class URuntimeParameterBase_X : public UObject
{
public:
	struct FName                                       ParameterName;                                 // 0x0060 (0x0008) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RuntimeParameterBase_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.RuntimeParameter_Speed_X
// 0x0000 (0x0068 - 0x0068)
class URuntimeParameter_Speed_X : public URuntimeParameterBase_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RuntimeParameter_Speed_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.RuntimeParameters_X
// 0x0000 (0x0060 - 0x0060)
class URuntimeParameters_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RuntimeParameters_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.SeqAct_NonNativeUpdate_X
// 0x0000 (0x0160 - 0x0160)
class USeqAct_NonNativeUpdate_X : public USequenceAction
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.SeqAct_NonNativeUpdate_X");
		}

		return uClassPointer;
	};

	bool eventUpdate(float dt);
};

// Class ProjectX.SequenceCondition_X
// 0x0000 (0x0140 - 0x0140)
class USequenceCondition_X : public USequenceCondition
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.SequenceCondition_X");
		}

		return uClassPointer;
	};

	void eventActivated();
};

// Class ProjectX.Serializer_X
// 0x0000 (0x0060 - 0x0060)
class USerializer_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.Serializer_X");
		}

		return uClassPointer;
	};

	void DeserializeObject(class UObject* Target, TArray<uint8_t>& InData);
	void SerializeObject(class UObject* Target, TArray<uint8_t>& OutData);
};

// Class ProjectX.JSONSerializer_X
// 0x0004 (0x0060 - 0x0064)
class UJSONSerializer_X : public USerializer_X
{
public:
	unsigned long                                      bDebug : 1;                                    // 0x0060 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.JSONSerializer_X");
		}

		return uClassPointer;
	};

	bool Validate(struct FString Stream);
	struct FString func();
	void DecodeObject(class UObject* Target, struct FString& Stream);
	void EncodeObject(class UObject* Target, struct FString& Stream);
	void DeserializeObject(class UObject* Target, TArray<uint8_t>& InData);
	void SerializeObject(class UObject* Target, TArray<uint8_t>& OutData);
};

// Class ProjectX.ObjectSerializer_X
// 0x0004 (0x0060 - 0x0064)
class UObjectSerializer_X : public USerializer_X
{
public:
	unsigned long                                      bPersistent : 1;                               // 0x0060 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bDebug : 1;                                    // 0x0060 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ObjectSerializer_X");
		}

		return uClassPointer;
	};

	void DeserializeObject(class UObject* Target, TArray<uint8_t>& InData);
	void SerializeObject(class UObject* Target, TArray<uint8_t>& OutData);
};

// Class ProjectX.EOSGameClipsInterface_X
// 0x0070 (0x0098 - 0x0108)
class UEOSGameClipsInterface_X : public UOnline_X
{
public:
	struct FPointer                                    GameClipsHandle;                               // 0x0098 (0x0008) [0x0001000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	uint64_t                                           StatusChangedCallbackId;                       // 0x00A0 (0x0008) [0x0001000000000000]               
	uint8_t                                            GameClipsAvailability;                         // 0x00A8 (0x0001) [0x0001000000000000]               
	uint64_t                                           BackgroundRecordingEnabledSeconds;             // 0x00B0 (0x0008) [0x0001004000000000]               
	int32_t                                            AvailableTargets;                              // 0x00B8 (0x0004) [0x0001000000000000]               
	unsigned long                                      bRecording : 1;                                // 0x00BC (0x0004) [0x0001000000000000] [0x00000001] 
	unsigned long                                      bCanClip : 1;                                  // 0x00BC (0x0004) [0x0001000000002000] [0x00000002] (CPF_Transient)
	struct FScriptDelegate                             __EventGameClipsAvailabilityChanged__Delegate; // 0x00C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAvailableTargetsChanged__Delegate;      // 0x00D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventGameClipSaved__Delegate;                // 0x00F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.EOSGameClipsInterface_X");
		}

		return uClassPointer;
	};

	void HandleEOSInitialized();
	void eventDestroyed();
	void OnInit();
	void UpdateAvailableTargets(int32_t NewAvailableTargetCount);
	void UpdateEOSGameClipsAvailability(uint8_t NewAvailability);
	bool CaptureGameClip();
	void DisableBackgroundRecording();
	void EnableBackgroundRecording(uint64_t ClipDuration);
	void StopListeningToClipStatusChangedEvents();
	void StartListeningToClipStatusChangedEvents();
	bool InitGameClipsHandle();
	void EventGameClipSaved(unsigned long bSuccess);
	void EventAvailableTargetsChanged(int32_t NewAvailableTargetCount);
	void EventGameClipsAvailabilityChanged(uint8_t NewAvailability);
};

// Class ProjectX.OnlineGame_Base_X
// 0x00E0 (0x0098 - 0x0178)
class UOnlineGame_Base_X : public UOnline_X
{
public:
	struct FString                                     OnlineSubPlayerInterfaceName;                  // 0x0098 (0x0010) [0x0000000000404001] (CPF_Edit | CPF_Config | CPF_NeedCtorLink)
	struct FString                                     OnlineSubGameInterfaceName;                    // 0x00A8 (0x0010) [0x0000000000404001] (CPF_Edit | CPF_Config | CPF_NeedCtorLink)
	class UOnlineGameSettings_X*                       DefaultGameSettingsArchetype;                  // 0x00B8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlineGameSettings_X*                       DefaultGameSettings;                           // 0x00C0 (0x0008) [0x0000000000000000]               
	class UOnlineGameSettings_X*                       GameSettings;                                  // 0x00C8 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UOnlineGamePlaylists_X*                      Playlists;                                     // 0x00D0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlineImageDownloaderWeb*                   ImageDownloader;                               // 0x00D8 (0x0008) [0x0000000000000000]               
	class UOnlineGameDLC_X*                            DLC;                                           // 0x00E0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlineGameSkill_X*                          Skill;                                         // 0x00E8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FString                                     StartServerCommand;                            // 0x00F0 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class UWebCache_X*                                 WebCache;                                      // 0x0100 (0x0008) [0x0000000000000000]               
	class UWebImageCache_X*                            WebImageCache;                                 // 0x0108 (0x0008) [0x0000000000000000]               
	class UPsyNetStaticData_X*                         PsyNetStaticData;                              // 0x0110 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	unsigned long                                      bLockGameSettings : 1;                         // 0x0118 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      bUseEnvironmentZone : 1;                       // 0x0118 (0x0004) [0x0000000000004000] [0x00000002] (CPF_Config)
	uint8_t                                            CurrentConnectionStatus;                       // 0x011C (0x0001) [0x0000004000002000] (CPF_Transient)
	struct FString                                     ServerName;                                    // 0x0120 (0x0010) [0x0000008000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     CachedOptions;                                 // 0x0130 (0x0010) [0x0000008000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UOnlineConfigDispatcher_X*                   OnlineConfigDispatcher;                        // 0x0140 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UOnlineGameWordFilter_X*                     WordFilter;                                    // 0x0148 (0x0008) [0x0000004000002000] (CPF_Transient)
	TArray<class UOnline_X*>                           OnlineComponents;                              // 0x0150 (0x0010) [0x0000008000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventInternetConnectionChanged__Delegate;    // 0x0160 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGame_Base_X");
		}

		return uClassPointer;
	};

	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool HasInternetConnection();
	int32_t GetBeaconPort();
	struct FString GetBeaconExternalHostAddress(unsigned long bWithPort);
	struct FString GetBeaconLocalHostAddress(unsigned long bWithPort);
	int32_t GetUdpPort();
	struct FString GetUdpExternalHostAddress(unsigned long bWithPort);
	struct FString GetUdpLocalHostAddress(unsigned long bWithPort);
	void HandleInternetConnectionChanged(unsigned long bConnected);
	void HandleConnectionStatusChanged(uint8_t ConnectionStatus);
	void SetDefaultSearchType(class UClass* OnlineSearchClass);
	void KickAllPlayers(struct FString Reason);
	void DelayedShutdownServer();
	void OnExit();
	int32_t GetPlaylistPlayerCount(class UGameSettingPlaylist_X* Playlist);
	void OnNewSettingsChosen(int32_t PlaylistId);
	void UpdateGameSettingsPlayerCount(int32_t NumPlayers);
	void UpdateGameSettings(class UOnlineGameSettings_X* InGameSettings, struct FString Options);
	class UOnlineGameSettings_X* CreateOnlineGameSettings(struct FString Options);
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	void InitOnlineSubsystemInterfaces();
	void OnInit();
	void eventConstruct();
	void EventInternetConnectionChanged(unsigned long bConnected);
};

// Class ProjectX.OnlineGame_X
// 0x0120 (0x0178 - 0x0298)
class UOnlineGame_X : public UOnlineGame_Base_X
{
public:
	class UOnlineGameAccount_X*                        Account;                                       // 0x0178 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlineGameMatchmaking_X*                    Matchmaking;                                   // 0x0180 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlineGamePrivateMatch_X*                   PrivateMatch;                                  // 0x0188 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlineGameServerBrowser_X*                  ServerBrowser;                                 // 0x0190 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlineGameLanBrowser_X*                     LanBrowser;                                    // 0x0198 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlineGameLeaderboards_X*                   Leaderboards;                                  // 0x01A0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlineGamePopulation_X*                     Population;                                    // 0x01A8 (0x0008) [0x0000004000002000] (CPF_Transient)
	class UOnlineGameVoice_X*                          Voice;                                         // 0x01B0 (0x0008) [0x0000004000002000] (CPF_Transient)
	class UOnlineGameParty_X*                          Party;                                         // 0x01B8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlineGameInvite_X*                         GameInvite;                                    // 0x01C0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlineGameJoinGame_X*                       JoinGame;                                      // 0x01C8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlineGameRegions_X*                        Regions;                                       // 0x01D0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlineGamePrivileges_X*                     Privileges;                                    // 0x01D8 (0x0008) [0x0000000000000000]               
	class UOnlineGameWordFilterProcessor_X*            WordFilterProcessor;                           // 0x01E0 (0x0008) [0x0000004000002000] (CPF_Transient)
	class UOnlineGameVersion_X*                        GameVersion;                                   // 0x01E8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UEOSGameClipsInterface_X*                    EOSGameClipsInterface;                         // 0x01F0 (0x0008) [0x0001000000000001] (CPF_Edit)    
	class UOnlinePlayer_X*                             PlayerArchetype;                               // 0x01F8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<class UOnlinePlayer_X*>                     OnlinePlayers;                                 // 0x0200 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UOnlineLegalText_X*                          Eula;                                          // 0x0210 (0x0008) [0x0000004004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UOnlineLegalText_X*                          PrivacyPolicy;                                 // 0x0218 (0x0008) [0x0000004004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UOnlineLegalText_X*                          ToS;                                           // 0x0220 (0x0008) [0x0000004004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UOnlineLegalText_X*                          SCT;                                           // 0x0228 (0x0008) [0x0000004004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UOnlineLegalText_X*                          PaymentServices;                               // 0x0230 (0x0008) [0x0000004004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	unsigned long                                      bRequestPublicIP : 1;                          // 0x0238 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	struct FString                                     PublicIP;                                      // 0x0240 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventConnectionError__Delegate;              // 0x0250 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerPsyNetLogin__Delegate;            // 0x0268 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerPsyNetLogout__Delegate;           // 0x0280 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGame_X");
		}

		return uClassPointer;
	};

	void PrintDebugInfo(class UDebugDrawer* Drawer);
	class UOnlinePlayer_X* GetOnlinePlayerFromEpicId(struct FString EpicAccountId);
	void HandlePublicIPComplete(class URPC_GetPublicIP_X* RPC);
	void HandlePsyNetLogin(class UPsyNetConnection_X* Connection);
	void NotifyPlayerPsyNetLogout(struct FScriptDelegate Callback);
	void NotifyPlayerPsyNetLogin(struct FScriptDelegate Callback);
	bool IsSignedIn(int32_t ControllerId);
	bool CheckUpToDate(class UError*& Error);
	bool CheckNotTooYoung(class UError*& Error);
	class UError* GetPsyNetLoginError(class UOnlinePlayer_X* OnlinePlayer);
	void HandleLoginCompleted(class UOnlinePlayerAuthentication_X* Auth, class UAsyncTask* Task);
	class UAsyncTask* CheckPsyNetConnection();
	bool RequiresSystemNetworkErrorHandling();
	bool ValidateUserOnlineAccount();
	bool CheckInternetConnection(class UError*& Error);
	bool IsOnlinePlayerID(struct FUniqueNetId PlayerID);
	class UOnlinePlayer_X* eventGetOnlinePlayerByID(struct FUniqueNetId PlayerID);
	void OnNewSettingsChosen(int32_t PlaylistId);
	struct FUniqueNetId eventGetPrimaryPlayerID();
	class UOnlinePlayer_X* eventGetPrimaryPlayer();
	void RemoveOnlinePlayer(class ULocalPlayer_X* LocalPlayer);
	void AddOnlinePlayer(class UOnlinePlayer_X* OnlinePlayer);
	class UOnlinePlayer_X* CreateOnlinePlayer(class ULocalPlayer_X* LocalPlayer);
	void SetPlayedWith(struct FUniqueNetId PlayerID);
	void GetPlayerAvatars(TArray<struct FUniqueNetId> PlayerIDs, struct FScriptDelegate ReadOnlineAvatarCompleteDelegate, uint8_t Size);
	void ClearPendingAvatarDownloads();
	void SetVoiceVolume(float NewValue);
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	void OnMainMenuOpened();
	void HandlePlayerLogin(class UOnlinePlayer_X* OnlinePlayer, class UError* Error);
	void HandlePsyNetLoginChanged(class UOnlinePlayerAuthentication_X* Auth);
	void SyncLegal(struct FString InAppendedPath);
	bool IsLoggedInToPsyNet(class UOnlinePlayer_X* OnlinePlayer);
	void OnInit();
	void EventPlayerPsyNetLogout(class UOnlinePlayer_X* Player);
	void EventPlayerPsyNetLogin(class UOnlinePlayer_X* Player);
	void EventConnectionError(class UError* Error, class UOnlinePlayer_X* Player);
};

// Class ProjectX.OnlineGameServer_X
// 0x0008 (0x0178 - 0x0180)
class UOnlineGameServer_X : public UOnlineGame_Base_X
{
public:
	class UPsyNetConnection_X*                         PsyNetConnection;                              // 0x0178 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGameServer_X");
		}

		return uClassPointer;
	};

	void OnInit();
};

// Class ProjectX.OnlineGameDedicatedServer_X
// 0x0230 (0x0180 - 0x03B0)
class UOnlineGameDedicatedServer_X : public UOnlineGameServer_X
{
public:
	uint64_t                                           GameServerID;                                  // 0x0180 (0x0008) [0x0000008000002000] (CPF_Transient)
	struct FString                                     GameServerHost;                                // 0x0188 (0x0010) [0x0000008000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            EnvironmentZone;                               // 0x0198 (0x0004) [0x0000008000002000] (CPF_Transient)
	class UOnlineGameStats_X*                          GameStats;                                     // 0x01A0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UOnlineGameDedicatedServerRegistration_X*    Registration;                                  // 0x01A8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UOnlineGameReservations_X*                   Reservations;                                  // 0x01B0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UClanforgeReservation_X*                     Clanforge;                                     // 0x01B8 (0x0008) [0x0001004000002000] (CPF_Transient)
	struct FString                                     Region;                                        // 0x01C0 (0x0010) [0x0000008000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            CurrentPlaylistId;                             // 0x01D0 (0x0004) [0x0000008000000000]               
	int32_t                                            MutatorIndex;                                  // 0x01D4 (0x0004) [0x0000008000000000]               
	float                                              AverageMMR;                                    // 0x01D8 (0x0004) [0x0000008000002000] (CPF_Transient)
	float                                              AverageConservativeMMR;                        // 0x01DC (0x0004) [0x0000008000002000] (CPF_Transient)
	int32_t                                            MachineId;                                     // 0x01E0 (0x0004) [0x0000004000002000] (CPF_Transient)
	struct FCustomMatchSettings                        CustomMatch;                                   // 0x01E8 (0x0090) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FUniqueNetId                                CustomMatchOwner;                              // 0x0278 (0x0048) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	uint64_t                                           CustomMatchClubID;                             // 0x02C0 (0x0008) [0x0001004000000000]               
	unsigned long                                      bQueuedShutdown : 1;                           // 0x02C8 (0x0004) [0x0000004000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      bFindingReplacementServer : 1;                 // 0x02C8 (0x0004) [0x0000004000002000] [0x00000002] (CPF_Transient)
	unsigned long                                      bHasValidMigrationServer : 1;                  // 0x02C8 (0x0004) [0x0000008000000000] [0x00000004] 
	unsigned long                                      bDisableMatchmakingBan : 1;                    // 0x02C8 (0x0004) [0x0000004000002000] [0x00000008] (CPF_Transient)
	unsigned long                                      bBotTest : 1;                                  // 0x02C8 (0x0004) [0x0000004000002000] [0x00000010] (CPF_Transient)
	unsigned long                                      bUseNetworkNextDriver : 1;                     // 0x02C8 (0x0004) [0x0001000000000000] [0x00000020] 
	uint64_t                                           ReplacementServerID;                           // 0x02D0 (0x0008) [0x0000004000002000] (CPF_Transient)
	class UServerPlayerTracker_X*                      PlayerTracker;                                 // 0x02D8 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UClass*                                      MatchRecorderClass;                            // 0x02E0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UMatchRecorder_X*                            MatchRecorder;                                 // 0x02E8 (0x0008) [0x0000000000000000]               
	class UMatchLog_X*                                 MatchLog;                                      // 0x02F0 (0x0008) [0x0000000000000000]               
	class UServerConfig_X*                             Config;                                        // 0x02F8 (0x0008) [0x0000800000000001] (CPF_Edit)    
	class UPsyNetConfig_X*                             PsyNetConfig;                                  // 0x0300 (0x0008) [0x0000800000000000]               
	struct FScriptDelegate                             __EventFoundNewDedicatedServerForPlayers__Delegate;// 0x0308 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAverageMMRChanged__Delegate;            // 0x0320 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlaylistSet__Delegate;                  // 0x0338 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPrivateMatchSettingsChanged__Delegate;  // 0x0350 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventInactive__Delegate;                     // 0x0368 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventActive__Delegate;                       // 0x0380 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventMatchGUIDChanged__Delegate;             // 0x0398 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGameDedicatedServer_X");
		}

		return uClassPointer;
	};

	void HandlePsyNetDataLoaded(class UPsyNetStaticData_X* D);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	class URPC_RecordMatch_X* SendRecordMatchRPC();
	void ReportMatch();
	void HandleTrackerPlayerRemoved(class UServerPlayerTracker_X* Tracker, struct FUniqueNetId PlayerID);
	void CreateMatchRecorder();
	void HandleTrackerPlayerAdded(class UServerPlayerTracker_X* Tracker, struct FUniqueNetId PlayerID);
	struct FString MatchGUID();
	struct FName GetCurrentMapName();
	void ClearMatchmakingBan(struct FUniqueNetId PlayerID);
	void IssueMatchmakingBan(struct FUniqueNetId PlayerID, struct FString Reason);
	uint8_t GetTeamNum(struct FUniqueNetId PlayerID);
	bool KickPlayersOnGameEventDestroyed();
	bool IsBotMatch();
	bool CanIssueMatchmakingBan();
	bool IsRankedMatch();
	class UGameSettingPlaylist_X* GetPlaylist();
	void OnExit();
	void OnMigrationStarted();
	bool DidRematchVotePass();
	void HandleNewServerIPRPC(class URPC_CheckReplacementDedicatedServer_X* RPC);
	void CheckNewServerIP();
	void CheckNewServerTimeout();
	void CheckStartShutdown(int32_t GameTimeRemaining);
	bool AllowServerMigration();
	void UpdateGameTime(int32_t TimeSeconds);
	void FindNewDedicatedServerForPlayers(struct FScriptDelegate InDelegate);
	bool IsInactive();
	int32_t GetTeamScore(int32_t TeamIdx);
	bool IsInPostGameLobby();
	void UpdateOnlineGame();
	bool AllowSplitscreenJoinRankedMatch();
	bool AllowSplitscreenJoin(struct FUniqueNetId PrimaryPlayerId, struct FUniqueNetId PlayerID, struct FString PlayerName, struct FString& Error);
	void PlayerLoggedOut(class APlayerReplicationInfo* PRI);
	void PlayerLoggedIn(class APlayerReplicationInfo* PRI);
	void AllowPlayerLogin(struct FString Options, struct FUniqueNetId PlayerID, struct FString& ErrorMessage);
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	bool AllPlayersHaveNetworkIssues();
	void TravelToMap(struct FString ServerCommand);
	void GotoPrivateMatchMap(struct FName MapName, int32_t GameMode, struct FString GameTags);
	void GotoNextPrivateMatchMap();
	void OnPrivateEventDestroyed();
	struct FString GetStartServerCommand();
	struct FName GetNextRandomMapName(int32_t GameMode, unsigned long bStandardOnly);
	struct FName GetNextMapName(int32_t GameMode, unsigned long bStandardOnly);
	struct FCustomMatchSettings GetCustomMatchSettings();
	struct FUniqueNetId GetCustomMatchOwner();
	void UpdateCustomMatchOwner(struct FUniqueNetId NewOwner);
	void SetCustomSettings(struct FCustomMatchSettings Settings);
	void SetupPrivateMatch(struct FCustomMatchSettings Settings, struct FUniqueNetId Creator);
	void GoToNextMap();
	struct FName GetNextMutatorMapName();
	void GoToMap(struct FString MapName);
	struct FString GetPlaylistTags();
	void UpdateAverageMMR();
	void SetCustomMatchClubID(uint64_t InClubID);
	void ClearSettings();
	void SetPlaylist(int32_t PlaylistId);
	void HandleReservationsUpdated();
	void InitClanforge();
	void OnInit();
	void EventMatchGUIDChanged(class UOnlineGameDedicatedServer_X* Server);
	void EventActive(class UOnlineGameDedicatedServer_X* Server);
	void EventInactive(class UOnlineGameDedicatedServer_X* Server);
	void EventPrivateMatchSettingsChanged(class UOnlineGameDedicatedServer_X* Server, struct FCustomMatchSettings NewSettings);
	void EventPlaylistSet(class UOnlineGameDedicatedServer_X* Server);
	void EventAverageMMRChanged(class UOnlineGameDedicatedServer_X* Server);
	void EventFoundNewDedicatedServerForPlayers(class UConnectionInfoMessage_X* Message);
};

// Class ProjectX.OnlineGameDLC_X
// 0x0040 (0x0098 - 0x00D8)
class UOnlineGameDLC_X : public UOnline_X
{
public:
	int32_t                                            SyncInterval;                                  // 0x0098 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              PlayerOwnershipSyncInterval;                   // 0x009C (0x0004) [0x0000000000000000]               
	TArray<struct FPlayerDLCInfo>                      PlayerDLCInfos;                                // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FSteamWebRequestData>                SteamWebRequests;                              // 0x00B0 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventValidationReady__Delegate;              // 0x00C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGameDLC_X");
		}

		return uClassPointer;
	};

	bool DoesPlayerOwnDLC(struct FUniqueNetId& PlayerID, struct FName& DLCName);
	void HandleGetPublisherAppOwnership(class UWebRequest_X* Request);
	bool PlatformRequiresDLCVerification(uint8_t Platform);
	void OnMatchFinished();
	void SyncPlayerDLC(struct FUniqueNetId PlayerID, struct FScriptDelegate Callback);
	void UpdatePlayerDLCInfo(int32_t PlayerInfoIndex);
	int32_t CreatePlayerDLCInfo(struct FUniqueNetId& PlayerID);
	bool IsPlayerReadyForValidation(struct FUniqueNetId& PlayerID);
	void EventValidationReady();
};

// Class ProjectX.OnlineGameLeaderboards_X
// 0x0090 (0x0098 - 0x0128)
class UOnlineGameLeaderboards_X : public UOnline_X
{
public:
	int32_t                                            NumResults;                                    // 0x0098 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FCachedLeaderboardData>              CachedLeaderboards;                            // 0x00A0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            NumFriendsLeaderboardRequests;                 // 0x00B0 (0x0004) [0x0000000000002000] (CPF_Transient)
	struct FName                                       CurrentLeaderboardID;                          // 0x00B4 (0x0008) [0x0000000000002000] (CPF_Transient)
	int32_t                                            CurrentFriendIndex;                            // 0x00BC (0x0004) [0x0000000000002000] (CPF_Transient)
	unsigned long                                      bGlobalLeaderboards : 1;                       // 0x00C0 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	class URPC_X*                                      GetLoaderboardPlayerValueRPC;                  // 0x00C8 (0x0008) [0x0000000000002000] (CPF_Transient)
	TArray<class URPC_X*>                              LeaderboardRequests;                           // 0x00D0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnGetLeaderboardPlayerValue__Delegate;       // 0x00E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventNewLeaderboard__Delegate;               // 0x00F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventGetLeaderboardFailed__Delegate;         // 0x0110 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGameLeaderboards_X");
		}

		return uClassPointer;
	};

	void __OnlineGameLeaderboards_X__ClearPreviousTasks_A02B9C914DD677E0B44082848FCAA5E8(class URPC_X* RPC);
	void ClearPreviousTasks();
	bool IsSkillLeaderboard(struct FString NewLeaderboardID, int32_t& Playlist);
	TArray<struct FLeaderboardData> SortLeaderboardDataMMR(TArray<struct FLeaderboardData> Leaderboard);
	TArray<struct FLeaderboardData> SortLeaderboardData(TArray<struct FLeaderboardData> Leaderboard);
	void HandleGetLeaderboardFriendsRPC(class URPC_GetLeaderboardRankForUsersBase_X* RPC);
	void DispatchLeaderboardFriendsRequest();
	void GetLeaderboardsForAllFriends(struct FName LeaderboardId);
	void GetLeaderboardFriends(class UOnlinePlayer_X* OnlinePlayer, struct FName NewLeaderboardID, struct FScriptDelegate NewDelegate, struct FScriptDelegate FailedDelegate);
	void RequestClearPendingAvatarDownloads();
	void HandleGetLeaderboardRPC(class URPC_GetLeaderboardBase_X* RPC);
	void GetLeaderboard(struct FName NewLeaderboardID, unsigned long bGlobal, struct FScriptDelegate NewDelegate, struct FScriptDelegate FailedDelegate);
	bool GetCachedLeaderboardData(struct FName LeaderboardId, TArray<struct FLeaderboardData>& LeaderboardDataList);
	int32_t CalcDivision(float TopValue, float Value);
	void GetRankForPrimaryPlayer(struct FName LeaderboardId, int32_t Value, int32_t& Rank, int32_t& Division);
	void HandleGetLeaderboardPlayerValueRPC(class URPC_GetLeaderboardValueForUserBase_X* RPC);
	void GetLeaderboardPlayerValue(struct FName NewLeaderboardID, struct FScriptDelegate NewDelegate);
	void EventGetLeaderboardFailed(class UError* Error);
	void EventNewLeaderboard(struct FName NewLeaderboardID, TArray<struct FLeaderboardData>& NewLeaderboardData);
	void OnGetLeaderboardPlayerValue(class UOnlineGameLeaderboards_X* LeaderboardsRef, struct FName LeaderboardId, class UError* Error, struct FLeaderboardData& PlayerLeaderboardData);
};

// Class ProjectX.OnlineGameReservations_X
// 0x0118 (0x0098 - 0x01B0)
class UOnlineGameReservations_X : public UOnline_X
{
public:
	float                                              ExtraMapLoadTime;                              // 0x0098 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              WaitForReservationsTimeout;                    // 0x009C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              InitialReservationTimeoutSeconds;              // 0x00A0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              InitialMigrationTimeoutSeconds;                // 0x00A4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bAllowPrivateMatchCrossPlayDisable : 1;        // 0x00A8 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bSkipReservationCheck : 1;                     // 0x00A8 (0x0004) [0x0000004000002000] [0x00000002] (CPF_Transient)
	unsigned long                                      bSinglePlayerMatchmaking : 1;                  // 0x00A8 (0x0004) [0x0000004000002000] [0x00000004] (CPF_Transient)
	unsigned long                                      bServerTraveling : 1;                          // 0x00A8 (0x0004) [0x0000004000002000] [0x00000008] (CPF_Transient)
	unsigned long                                      bScrambleTeams : 1;                            // 0x00A8 (0x0004) [0x0000000000002000] [0x00000010] (CPF_Transient)
	unsigned long                                      bMatchStarted : 1;                             // 0x00A8 (0x0004) [0x0008000000002000] [0x00000020] (CPF_Transient)
	unsigned long                                      bLockTeams : 1;                                // 0x00A8 (0x0004) [0x0000000000002000] [0x00000040] (CPF_Transient)
	unsigned long                                      bIsBotMatch : 1;                               // 0x00A8 (0x0004) [0x0000004000002000] [0x00000080] (CPF_Transient)
	unsigned long                                      bMigrationInProgress : 1;                      // 0x00A8 (0x0004) [0x0000008000002000] [0x00000100] (CPF_Transient)
	class UReservationBeacon_X*                        Beacon;                                        // 0x00B0 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UUdpPingBeaconServer_X*                      PingBeacon;                                    // 0x00B8 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	TArray<struct FReservationData>                    Players;                                       // 0x00C0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FTeamPairHistory>                    TeamPairHistories;                             // 0x00D0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FString>                             BotNames;                                      // 0x00E0 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UCrossplayConfig_X*                          Crossplay;                                     // 0x00F0 (0x0008) [0x0000800000000001] (CPF_Edit)    
	class UMapPrefsConfig_X*                           MapPrefsConfig;                                // 0x00F8 (0x0008) [0x0000800000000001] (CPF_Edit)    
	class UBeaconConfig_X*                             BeaconConfig;                                  // 0x0100 (0x0008) [0x0000800000000001] (CPF_Edit)    
	TArray<struct FPendingReservation>                 PendingReservations;                           // 0x0108 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UTAsyncResult__ClubDetails_X*                GetClubTask;                                   // 0x0118 (0x0008) [0x0001000000000000]               
	struct FString                                     RankedMatchReservationID;                      // 0x0120 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FUniqueNetId>                        RankedMatchPushedPlayerIDs;                    // 0x0130 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UOnlineClubProvider_X*                       Clubs;                                         // 0x0140 (0x0008) [0x0001800000000000]               
	struct FString                                     JoinName;                                      // 0x0148 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	struct FString                                     JoinPassword;                                  // 0x0158 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventReservationsUpdated__Delegate;          // 0x0168 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventMigrationJoinOccurred__Delegate;        // 0x0180 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __bMatchStarted__ChangeNotify;                 // 0x0198 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGameReservations_X");
		}

		return uClassPointer;
	};

	void __OnlineGameReservations_X__OnInit_EEC062E04A3D9B71E7072EAB4013C255(class UIReservationConnection_X* Connection, class UObject* Message);
	void __OnlineGameReservations_X__OnInit_69C80E9F4E9C88EE4A5A009D1FDAF867(class UIReservationConnection_X* Connection, class UObject* Message);
	void __OnlineGameReservations_X__OnInit_699F0BE944E393D59C439D99A2FEBEC2(class UIReservationConnection_X* Connection, class UObject* Message);
	bool __OnlineGameReservations_X__SetPlayersWithMigrationData_BD6941764472F8954FC3069A4D5EF153(struct FMigrationReservationData P);
	struct FUniqueNetId __OnlineGameReservations_X__HandlePsyNetBeaconReservation_42E41CEF47F6B69B223CB19313C6317C(struct FPsyNetBeaconPlayerReservation P);
	void __OnlineGameReservations_X__HandlePublicReservation_697D97A14AD5A9E1E44CD08E3AB2FB1E(struct FReservationData P);
	void __OnlineGameReservations_X__HandlePublicReservation_84DF24DA43A5C5B652395B88C3156151(struct FReservationData P);
	bool __OnlineGameReservations_X__HasTimeoutPlayers_24097B864CC6AC8E0C1CCAAE381AE558(struct FReservationData P);
	bool __OnlineGameReservations_X__HasMultipleReservedTeams_89DF99794D5A11BA50E7B881C803BAC0(int32_t TeamID);
	int32_t __OnlineGameReservations_X__HasMultipleReservedTeams_4BCF4AE947C3AB3C6F9B29AB0F0CF33E(struct FReservationData P);
	bool __OnlineGameReservations_X__AllPlayersReserved_BDEA2301402D0659BCCD868D28280D16(struct FReservationData P);
	bool __OnlineGameReservations_X__AllPlayersInGame_FB1FBCFD4E299551D0845BB3804120C4(struct FReservationData P);
	void __OnlineGameReservations_X__SetServerTraveling_DDD2517643C2AC484DE3B4B1129034C3(struct FPendingReservation P);
	struct FUniqueNetId __OnlineGameReservations_X__GetPlayerIDs_6F2A376F404D2723A02B79B9D517A81F(struct FReservationData Player);
	void __bMatchStarted__ChangeNotifyFunc();
	TArray<struct FUniqueNetId> GetPlayerIDs();
	float GetMapLoadTimeout(uint8_t Platform);
	void GetAccumulatedPrefs(TArray<struct FName>& Likes, TArray<struct FName>& Dislikes);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	class UReservationsMetrics_X* GetMetrics();
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	bool HasSplitscreenPlayers();
	void SetParty(struct FUniqueNetId MemberId, struct FUniqueNetId PartyID);
	struct FUniqueNetId GetPartyID(struct FUniqueNetId PlayerID);
	uint8_t GetTeamNum(struct FUniqueNetId PlayerID);
	struct FString GetPlayersPlatformsString();
	struct FString GetPlatformsString(TArray<uint8_t>& Platforms);
	TArray<uint8_t> GetPlayerPlatforms();
	bool CanPlayTogether(uint8_t Platform1, uint8_t Platform2);
	bool CanAcceptReservationsForPlatform(class UAddReservationMessagePublic_X* Message);
	bool ShouldCheckPlatformRestrictions(class UAddReservationMessagePublic_X* Message);
	uint8_t GetExclusivePlatform();
	bool CanAcceptReservations(class UAddReservationMessagePublic_X* Message);
	void GetPlayerCounts(int32_t& Team0Reserved, int32_t& Team0Joined, int32_t& Team1Reserved, int32_t& Team1Joined);
	void NotifyReservationsUpdated();
	void OnReservationsUpdated();
	void CheckMapLoadTimeout();
	void StartMapLoadTimeout();
	void SyncSkills();
	void HackForceNotServerTravelling();
	void SwapTeams();
	void SetServerTraveling(unsigned long bTraveling);
	void CloseConnection(int32_t Index);
	void RemoveReservationIndex(int32_t Index);
	int32_t AddSpecialReservation(struct FUniqueNetId PlayerID, struct FString PlayerName, struct FUniqueNetId PartyID);
	void HandleTeamChanged(class APRI_X* PRI);
	void RemoveReservation(struct FUniqueNetId PlayerID);
	void PlayerLoggedOut(class APlayerReplicationInfo* PRI);
	void PlayerLoggedIn(class APlayerReplicationInfo* PRI);
	void AllowPlayerLogin(struct FString Options, struct FUniqueNetId PlayerID, struct FString& ErrorMessage);
	bool AllPlayersInGame();
	bool AllPlayersReserved();
	bool HasGameEnded();
	bool HasGameStarted();
	bool CanStartMatch();
	bool HasMultipleReservedTeams();
	bool HasTimeoutPlayers();
	bool HasJoiningPlayers();
	bool CanGoInactive();
	bool IsEmpty();
	bool IsNearlyFull();
	bool IsFull();
	int32_t GetNumReservedPlayers();
	bool IsCustomMatch();
	void HandleReservationDisconnected(class UReservationBeacon_X* _, class UIReservationConnection_X* Connection);
	void ClearTeamHistory();
	void ClearReservations();
	void Reset();
	void RecordTeamHistory(TArray<struct FReservationData>& TestPlayers, TArray<struct FTeamPairHistory>& History);
	void ScrambleTeams();
	void UpdateTeams();
	void AssignTeamsByPartySize();
	bool AssignScrambledTeams(int32_t TeamSize, TArray<struct FTeamPairHistory>& History, TArray<struct FReservationData>& TestPlayers);
	bool AssignTeams(int32_t TeamSize, unsigned long bKeepTeams, TArray<struct FReservationData>& TestPlayers);
	void HandleSkillSynced(class UOnlineGameSkill_X* SkillSystem, struct FUniqueNetId PlayerID, class UError* Error);
	bool AllowSplitscreenJoin(struct FUniqueNetId PrimaryPlayerId, struct FUniqueNetId PlayerID, struct FString PlayerName, struct FString& Error);
	bool IsCheatingSplitscreenReservation(class UAddReservationMessage_X* Message);
	bool IsCheatingSplitscreen(struct FUniqueNetId PrimaryPlayerId, struct FUniqueNetId SplitscreenPlayerId);
	struct FReservationData CreateReservationData(struct FUniqueNetId PlayerID, struct FString PlayerName, struct FUniqueNetId PartyID, uint8_t Status);
	void HandlePlayerCancel(class UIReservationConnection_X* Connection, class UObject* Message);
	struct FUniqueNetId GetConnectionPlayerID(class UIReservationConnection_X* Connection);
	void InitialReservationTimeout();
	void NotAllPlayersJoined();
	void DisconnectExistingPlayers(class UAddReservationMessage_X* ReservationMessage);
	void SetPlayers(TArray<struct FReservationData>& TempPlayers);
	void HandleClubSyncComplete(class UOnlineClubProvider_X* _);
	TArray<struct FReservationData> AddPlayersFromReservationMessage(class UAddReservationMessage_X* ReservationMessage, class UIReservationConnection_X* Connection);
	bool IsUnique(TArray<struct FName>& Prefs);
	void ForcePrivateMatch(struct FCustomMatchSettings InSettings);
	void SetClubServer(class UClubDetails_X* Details);
	void StartPrivateMatch(struct FCustomMatchSettings MatchSettings, struct FUniqueNetId Creator);
	bool HandlePrivateReservation(class UIReservationConnection_X* Connection, class UAddReservationMessagePrivate_X* Message);
	void ProcessReservationMessage(class UIReservationConnection_X* Connection, class UAddReservationMessage_X* Message);
	void StartMatch();
	class UReservationsReadyMessage_X* CreateReadyMessage();
	void SendReadyMessage(struct FUniqueNetId PlayerID, class UReservationsReadyMessage_X* Message, class UIReservationConnection_X* Connection);
	void NotifyReady(struct FUniqueNetId PlayerID, class UIReservationConnection_X* Connection);
	void BroadcastReady();
	bool ShouldSyncSkills();
	bool IsSoloPlaylist(int32_t PlaylistId);
	bool ShouldCheckRankedMatchReservationID();
	bool CheckRankedMatchReservation(struct FUniqueNetId PlayerID, struct FString& InReservationID);
	bool HandlePublicReservation(class UIReservationConnection_X* Connection, class UAddReservationMessagePublic_X* Message);
	void HandleBeaconReservationMessage(class UIReservationConnection_X* Connection, class UAddReservationMessage_X* Message);
	bool IsCheatingReservationMessage(class UIReservationConnection_X* Connection, class UAddReservationMessage_X* Message);
	void RecordReservation(class UAddReservationMessage_X* Message);
	void HandleRegionPingMessage(class UIReservationConnection_X* Connection, class URegionPingMessage_X* Message);
	void HandlePingMessage(class UIReservationConnection_X* Connection, class UPingMessage_X* Message);
	void HandleMatchStartedChanged();
	class UObject* CreateClientReservationMessage(struct FServerReservationData& Reservation, struct FUniqueNetId& PlayerID);
	void HandlePsyNetBeaconReservation(struct FPsyNetBeaconReservation Reservation, float ConnectionTimeoutSeconds);
	void NotifyMigrationStarted();
	void SetPlayersWithMigrationData(TArray<struct FMigrationReservationData> MigratedPlayers);
	TArray<struct FMigrationReservationData> GetMigrationReservationData();
	class UServerToServerMessage_X* GetMatchInfoMessage();
	void NotifyNewReplacementServer();
	void HandleNewServerConnectionInfo(class UConnectionInfoMessage_X* Message);
	void HandleMigrationStartedMessage(class UMigrationStartedMessage_X* Message);
	void SendMigratedServerConnectionInfo(uint64_t ServerId);
	void SetJoinNameAndPassword(struct FString InJoinName, struct FString InJoinPassword);
	void HandleServerMigrationMessage(class UMatchInfoMessage_X* Message);
	void HandleReconnectReservation(class UPsyNetService_Reconnect_X* Notification);
	void HandleFriendJoinReservation(class UPsyNetService_FriendJoin_X* Notification);
	void HandleJoinPrivateReservation(class UPsyNetService_JoinPrivate_X* Notification);
	void HandleCreatePrivateReservation(class UPsyNetService_CreatePrivate_X* Notification);
	void HandleBackfillReservation(class UPsyNetService_Backfill_X* Notification);
	void HandleNewGameReservation(class UPsyNetService_NewGame_X* Notification);
	void HandlePsyNetReservation(class UPsyNetService_DSReservation_X* Notification);
	void InitUdpBeacon();
	void StartBeacons();
	void OnInit();
	void EventMigrationJoinOccurred();
	void EventReservationsUpdated();
};

// Class ProjectX.OnlineGameStats_X
// 0x0014 (0x0098 - 0x00AC)
class UOnlineGameStats_X : public UOnline_X
{
public:
	struct FString                                     MatchGUID;                                     // 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            PlaylistId;                                    // 0x00A8 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGameStats_X");
		}

		return uClassPointer;
	};

	void UploadStats(struct FString StatType, TArray<struct FUploadStatDataSet>& DataSet);
	void SetPlaylistID(int32_t InID);
	void SetMatchGUID(struct FString InGuid);
};

// Class ProjectX.TickableStateObject_X
// 0x0028 (0x0064 - 0x008C)
class UTickableStateObject_X : public UStateObject_X
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0068 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	unsigned long                                      bTickWhenGamePaused : 1;                       // 0x0070 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bAutoTick : 1;                                 // 0x0070 (0x0004) [0x0000000000000003] [0x00000002] (CPF_Edit | CPF_Const)
	TArray<struct FTimerData>                          Timers;                                        // 0x0078 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	float                                              LatentFloat;                                   // 0x0088 (0x0004) [0x0000000000000002] (CPF_Const)   
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.TickableStateObject_X");
		}

		return uClassPointer;
	};

	void Sleep(float Seconds);
	void eventTick(float DeltaTime);
	void ProcessState(float DeltaSeconds);
	void UpdateTimers(float DeltaSeconds);
	void NativeTick(float DeltaTime);
	void Destroy();
	void SetTickable(unsigned long bTick);
	bool IsTimerActive(struct FName inTimerFunc, class UObject* inObj);
	void PauseTimer(unsigned long bPause, struct FName inTimerFunc, class UObject* inObj);
	void ClearAllTimers(class UObject* inObj);
	void ClearTimer(struct FName inTimerFunc, class UObject* inObj);
	void SetStateTimer(float InRate, unsigned long inbLoop, struct FName inTimerFunc);
	void SetTimer(float InRate, unsigned long inbLoop, struct FName inTimerFunc, class UObject* inObj);
};

// Class ProjectX.SystemInfo_X
// 0x0000 (0x0060 - 0x0060)
class USystemInfo_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.SystemInfo_X");
		}

		return uClassPointer;
	};

	struct FString GetComputerName();
	void GetNetworkInfo(TArray<struct FString>& Types);
	void GetOSInfo(struct FString& Type, struct FString& Bit);
	void GetVideoCardInfo(struct FString& CardName, int32_t& RAM);
	void GetMemoryInfo(float& Physical, float& PageFile, float& Virtual, int32_t& Used, int32_t& Allocated);
	void GetCPUInfo(struct FString& Type, struct FString& Description, struct FString& Cores, struct FString& Threads);
	bool IsSupported();
};

// Class ProjectX.TickActorComponent_X
// 0x0033 (0x009D - 0x00D0)
class UTickActorComponent_X : public UActorComponent
{
public:
	TArray<struct FTimerData>                          Timers;                                        // 0x00A0 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	unsigned long                                      bTick : 1;                                     // 0x00B0 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
	struct FScriptDelegate                             __EventTick__Delegate;                         // 0x00B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.TickActorComponent_X");
		}

		return uClassPointer;
	};

	void SetTickable(unsigned long bWantsTick);
	void ClearAllTimers(class UObject* inObj);
	void ClearTimer(struct FName inTimerFunc, class UObject* inObj);
	void SetTimer(float InRate, unsigned long inbLoop, struct FName inTimerFunc, class UObject* inObj);
	void EventTick(float DeltaTime);
};

// Class ProjectX.Timers_X
// 0x0020 (0x0060 - 0x0080)
class UTimers_X : public UObject
{
public:
	class UTickComponent_X*                            TickComponent;                                 // 0x0060 (0x0008) [0x0000000004082008] (CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline)
	struct FScriptDelegate                             __TickDelegate__Delegate;                      // 0x0068 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.Timers_X");
		}

		return uClassPointer;
	};

	void ClearTick(struct FScriptDelegate Callback);
	void SetTick(struct FScriptDelegate Callback);
	bool IsActive(struct FScriptDelegate Callback);
	float GetElapsedTime(struct FScriptDelegate Callback);
	float GetRemainingTime(struct FScriptDelegate Callback);
	float GetRate(struct FScriptDelegate Callback);
	void ClearAll(class UObject* Obj);
	void Clear(struct FScriptDelegate Callback);
	void SetStateTimer(struct FScriptDelegate Callback, float Rate, unsigned long bLoop);
	void Set(struct FScriptDelegate Callback, float Rate, unsigned long bLoop);
	void TickDelegate(float DeltaTime);
};

// Class ProjectX.TimersComponent_X
// 0x0010 (0x0070 - 0x0080)
class UTimersComponent_X : public UComponent
{
public:
	TArray<struct FTimerData>                          Timers;                                        // 0x0070 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.TimersComponent_X");
		}

		return uClassPointer;
	};

	void UpdateTimers(float DeltaSeconds);
	bool IsActive(struct FScriptDelegate Callback);
	float GetElapsedTime(struct FScriptDelegate Callback);
	float GetRemainingTime(struct FScriptDelegate Callback);
	float GetRate(struct FScriptDelegate Callback);
	void ClearAll(class UObject* Obj);
	void Clear(struct FScriptDelegate Callback);
	void SetStateTimer(struct FScriptDelegate Callback, float Rate, unsigned long bLoop);
	void Set(struct FScriptDelegate Callback, float Rate, unsigned long bLoop);
};

// Class ProjectX.TickComponent_X
// 0x0028 (0x0080 - 0x00A8)
class UTickComponent_X : public UTimersComponent_X
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0080 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	unsigned long                                      bTickWhenGamePaused : 1;                       // 0x0088 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bTick : 1;                                     // 0x0088 (0x0004) [0x0000000000000002] [0x00000002] (CPF_Const)
	struct FScriptDelegate                             __TickDelegate__Delegate;                      // 0x0090 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.TickComponent_X");
		}

		return uClassPointer;
	};

	void SetTickable(unsigned long bWantsTick);
	void TickDelegate(float DeltaTime);
};

// Class ProjectX.UIStrings_X
// 0x0000 (0x0060 - 0x0060)
class UUIStrings_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.UIStrings_X");
		}

		return uClassPointer;
	};

	struct FString FormatAsNumber(int32_t Number, struct FString Delimiter);
};

// Class ProjectX.WebRequest_X
// 0x0078 (0x0060 - 0x00D8)
class UWebRequest_X : public UObject
{
public:
	unsigned long                                      bZipRequest : 1;                               // 0x0060 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bZipResponse : 1;                              // 0x0060 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      bLogRequest : 1;                               // 0x0060 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	unsigned long                                      bLogResponse : 1;                              // 0x0060 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	unsigned long                                      bConnectionReset : 1;                          // 0x0060 (0x0004) [0x0000000000002002] [0x00000010] (CPF_Const | CPF_Transient)
	uint8_t                                            RequestState;                                  // 0x0064 (0x0001) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FString                                     URL;                                           // 0x0068 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequest;                                   // 0x0078 (0x0008) [0x0000004000002000] (CPF_Transient)
	class UHttpResponseInterface*                      HttpResponse;                                  // 0x0080 (0x0008) [0x0000004000002002] (CPF_Const | CPF_Transient)
	TArray<uint8_t>                                    Content;                                       // 0x0088 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     StringContent;                                 // 0x0098 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	TArray<uint8_t>                                    ResponseData;                                  // 0x00A8 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	class UError*                                      Error;                                         // 0x00B8 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	struct FScriptDelegate                             __EventCompleted__Delegate;                    // 0x00C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.WebRequest_X");
		}

		return uClassPointer;
	};

	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void SetError(class UError* InError);
	bool eventHasInternetConnection();
	void HandleHttpRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, unsigned long bDidSucceed);
	void eventConstructHttpRequest();
	struct FString GetResponseHeader(struct FString Key);
	struct FString GetResponseString();
	bool HasNewData();
	bool IsSuccess();
	bool IsError();
	bool IsComplete();
	bool IsSent();
	class UHttpRequestInterface* GetHttpRequest();
	class UWebRequest_X* Send(struct FString InURL, struct FScriptDelegate OnCompleteCallback);
	void PrepareRequest(struct FString InURL);
	void SetContentFromString(struct FString ContentString);
	void SetContent(TArray<uint8_t>& ContentBytes);
	struct FString GetETag();
	void SetETag(struct FString ETag);
	class UWebRequest_X* SetVerb(struct FString InVerb);
	class UWebRequest_X* SetHeader(struct FString Key, struct FString Value);
	class UWebRequest_X* AddPlayerIDParam(struct FUniqueNetId PlayerID);
	class UWebRequest_X* AddStringParam(struct FString Key, struct FString Value);
	class UWebRequest_X* AddFloatParam(struct FString Key, float Value);
	class UWebRequest_X* AddQwordParam(struct FString Key, uint64_t Value);
	class UWebRequest_X* AddIntParam(struct FString Key, int32_t Value);
	uint8_t FlushWebRequests(float TimeoutSeconds);
	class UWebRequest_X* Create();
	void EventCompleted(class UWebRequest_X* Request);
};

// Class ProjectX.WordFilterTypes_X
// 0x0030 (0x0060 - 0x0090)
class UWordFilterTypes_X : public UObject
{
public:
	struct FScriptDelegate                             __CommentSanitizedDelegate__Delegate;          // 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __CommentErrorDelegate__Delegate;              // 0x0078 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.WordFilterTypes_X");
		}

		return uClassPointer;
	};

	void SortRequestTimeAscending(TArray<struct FWordFilterPair>& Filtered);
	void SortPendingFront(TArray<struct FWordFilterPair>& Filtered);
	void CommentErrorDelegate(struct FString OriginalPhrase, class UError* Error);
	void CommentSanitizedDelegate(struct FString Original, struct FString Sanitized);
};

// Class ProjectX.AnimNodeBlendBase_X
// 0x0020 (0x016C - 0x018C)
class UAnimNodeBlendBase_X : public UAnimNodeBlendList
{
public:
	float                                              BlendTime;                                     // 0x0170 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<float>                                      ChildBlendTimes;                               // 0x0178 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	unsigned long                                      bRebuildChildren : 1;                          // 0x0188 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bChildrenUpdated : 1;                          // 0x0188 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.AnimNodeBlendBase_X");
		}

		return uClassPointer;
	};

	void SetActiveChildNamed(struct FName ChildName, unsigned long bForce);
	float GetAnimDuration(int32_t ChildIndex);
	float GetBlendTime(int32_t ChildIndex, unsigned long bGetDefault);
};

// Class ProjectX.AnimNodeSeries_X
// 0x001C (0x018C - 0x01A8)
class UAnimNodeSeries_X : public UAnimNodeBlendBase_X
{
public:
	unsigned long                                      bActive : 1;                                   // 0x0190 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      bInitialized : 1;                              // 0x0190 (0x0004) [0x0000000000002002] [0x00000002] (CPF_Const | CPF_Transient)
	class UAnimNodeSequence*                           IntroAnim;                                     // 0x0198 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
	class UAnimNodeSequence*                           OutroAnim;                                     // 0x01A0 (0x0008) [0x0000000000002002] (CPF_Const | CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.AnimNodeSeries_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.AnimNodeSequence_X
// 0x0018 (0x01A8 - 0x01C0)
class UAnimNodeSequence_X : public UAnimNodeSequence
{
public:
	float                                              AnimSetBlendTime;                              // 0x01A8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bResetOnRelevant : 1;                          // 0x01AC (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class UAnimSequence*                               PrevAnimSeq;                                   // 0x01B0 (0x0008) [0x0000000000002000] (CPF_Transient)
	int32_t                                            PrevAnimLinkupIndex;                           // 0x01B8 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              BlendTimeLeft;                                 // 0x01BC (0x0004) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.AnimNodeSequence_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.AnimNodePose_X
// 0x0000 (0x01C0 - 0x01C0)
class UAnimNodePose_X : public UAnimNodeSequence_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.AnimNodePose_X");
		}

		return uClassPointer;
	};

	void PlayAnim(unsigned long bLoop, float InRate, float StartTime);
};

// Class ProjectX.AnimNotify_PlayParticleEffect_X
// 0x0010 (0x0098 - 0x00A8)
class UAnimNotify_PlayParticleEffect_X : public UAnimNotify_PlayParticleEffect
{
public:
	class UParticleSystemComponent*                    PSC;                                           // 0x0098 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UAnimNodeSequence*                           CachedAnimSequence;                            // 0x00A0 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.AnimNotify_PlayParticleEffect_X");
		}

		return uClassPointer;
	};

	void OnParticleSystemFinished(class UParticleSystemComponent* Component);
	void eventNotifyEnd(class AActor* Owner, class UAnimNodeSequence* AnimSeqInstigator);
	void eventNotify(class AActor* Owner, class UAnimNodeSequence* AnimSeqInstigator);
};

// Class ProjectX.PsyNetBeacon_X
// 0x0080 (0x0070 - 0x00F0)
class UPsyNetBeacon_X : public UComponent
{
public:
	float                                              ConnectionTimeoutSeconds;                      // 0x0070 (0x0004) [0x0000000000004000] (CPF_Config)  
	class UPsyNetConnection_X*                         PsyNetConnection;                              // 0x0078 (0x0008) [0x0000000000000000]               
	TArray<class UPsyNetBeaconConnection_X*>           Connections;                                   // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UDSPendingMessage_X*>                 PendingMessages;                               // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UPsyNetConfig_X*                             PsyNetConfig;                                  // 0x00A0 (0x0008) [0x0000800000000000]               
	struct FScriptDelegate                             __EventConnected__Delegate;                    // 0x00A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDisconnected__Delegate;                 // 0x00C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventMessageReceived__Delegate;              // 0x00D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetBeacon_X");
		}

		return uClassPointer;
	};

	void SerializeMessage(class UObject* Message, struct FString& OutMessageType, struct FString& OutMessagePayload);
	class UObject* DeserializeMessage(struct FString MessageType, struct FString MessagePayload);
	void TimeoutPendingMessages();
	void TimeoutConnections();
	void Tick();
	bool IsGameClient();
	void IssuePendingMessages(class UPsyNetBeaconConnection_X* Connection);
	void AddPendingMessage(class UDSR_DSMessage_X* Message);
	void OnMessageReceived(class UPsyNetBeaconConnection_X* Connection, class UObject* Message);
	void ClientHandleMessage(class UDSR_ClientMessage_X* Message);
	void ServerProcessMessage(class UPsyNetBeaconConnection_X* Connection, class UDSR_DSMessage_X* Message);
	void ServerHandleServerMessage(class UDSR_DSToDSMessage_X* Message);
	void ServerHandleMessage(class UDSR_DSMessage_X* Message);
	void HandleClientRpcFail(class UError* Error, class UPsyNetBeaconConnection_X* Connection);
	void ServerSendMessageToServer(uint64_t ServerId, class UObject* Message);
	void SendMessageToServer(class UPsyNetBeaconConnection_X* Connection, class UObject* Message);
	void SendMessageToClients(TArray<class UPsyNetBeaconConnection_X*> ToConnections, class UObject* Message);
	class UPsyNetBeaconConnection_X* FindConnection(struct FString ReservationID, struct FString ConnectionID);
	void ServerHandleReservation(class UPsyNetService_DSReservation_X* Notification);
	void Close();
	void CloseConnection(class UPsyNetBeaconConnection_X* Connection);
	void eventBroadcastMessage(class UObject* Message);
	void SendReservationMessage(class UObject* Message, struct FServerReservationData& Reservation);
	void eventSendMessage(class UPsyNetBeaconConnection_X* Connection, class UObject* Message);
	class UPsyNetBeaconConnection_X* ReserveConnection(struct FString ReservationID, struct FString ConnectionID, float OverrideConnectionTimeoutSeconds);
	void SetPsyNetConnection(class UPsyNetConnection_X* InPsyNetConnection);
	void EventMessageReceived(class UPsyNetBeaconConnection_X* Connection, class UObject* Message);
	void EventDisconnected(class UPsyNetBeacon_X* Beacon, class UPsyNetBeaconConnection_X* Connection);
	void EventConnected(class UPsyNetBeacon_X* Beacon, class UPsyNetBeaconConnection_X* Connection);
};

// Class ProjectX.TcpBeacon
// 0x0070 (0x0070 - 0x00E0)
class UTcpBeacon : public UComponent
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0070 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	int32_t                                            MaxConnections;                                // 0x0078 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FString                                     ConnectionClassName;                           // 0x0080 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	class UClass*                                      ConnectionClass;                               // 0x0090 (0x0008) [0x0000000000000000]               
	struct FPointer                                    ListenSocket;                                  // 0x0098 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	TArray<class UTcpConnection*>                      Connections;                                   // 0x00A0 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventConnected__Delegate;                    // 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDisconnected__Delegate;                 // 0x00C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.TcpBeacon");
		}

		return uClassPointer;
	};

	void ReceivedBunch(class UTcpConnection* Connection);
	void OnDisconnected(class UTcpConnection* Connection);
	void OnConnected(class UTcpConnection* Connection);
	void eventOnConnectionRemoved(class UTcpConnection* Connection);
	void eventOnConnectionAdded(class UTcpConnection* Connection);
	class UTcpConnection* GetConnection(struct FString Address);
	void Close();
	bool BeginListen();
	class UTcpConnection* BeginConnect(struct FString Address);
	void EventDisconnected(class UTcpBeacon* Beacon, class UTcpConnection* Connection);
	void EventConnected(class UTcpBeacon* Beacon, class UTcpConnection* Connection);
};

// Class ProjectX.TcpMessageBeacon
// 0x0020 (0x00E0 - 0x0100)
class UTcpMessageBeacon : public UTcpBeacon
{
public:
	class UOnlineMessageComponent_X*                   MessageComponent;                              // 0x00E0 (0x0008) [0x000000000408000A] (CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FScriptDelegate                             __EventMessageReceived__Delegate;              // 0x00E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.TcpMessageBeacon");
		}

		return uClassPointer;
	};

	void BroadcastMessage(class UObject* Message);
	void SendMessage(class UTcpConnection* Connection, class UObject* Message);
	void EventMessageReceived(class UTcpConnection* Connection, class UObject* Message);
};

// Class ProjectX.TcpConnection
// 0x00E0 (0x0060 - 0x0140)
class UTcpConnection : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                       // 0x0060 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	struct FPointer                                    VfTable_IIReservationConnection_X;             // 0x0068 (0x0008) [0x0000000000801002] (CPF_Const | CPF_Native | CPF_NoExport)
	float                                              InitialConnectionTimeout;                      // 0x0070 (0x0004) [0x0000000000004000] (CPF_Config)  
	float                                              ConnectionTimeout;                             // 0x0074 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FPointer                                    Socket;                                        // 0x0078 (0x0008) [0x0000000000003002] (CPF_Const | CPF_Native | CPF_Transient)
	uint8_t                                            ConnectionState;                               // 0x0080 (0x0001) [0x0000000000002002] (CPF_Const | CPF_Transient)
	uint8_t                                            WebSocketState;                                // 0x0081 (0x0001) [0x0000000000002002] (CPF_Const | CPF_Transient)
	float                                              LastReceiveTime;                               // 0x0084 (0x0004) [0x0000000000002002] (CPF_Const | CPF_Transient)
	TArray<uint8_t>                                    InBytes;                                       // 0x0088 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	TArray<uint8_t>                                    OutBytes;                                      // 0x0098 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	TArray<int32_t>                                    OutMessageLengths;                             // 0x00A8 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	TArray<uint8_t>                                    QueuedWebSocketBytes;                          // 0x00B8 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	TArray<int32_t>                                    QueuedWebSocketMessageLengths;                 // 0x00C8 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	TArray<uint8_t>                                    InBytesDecoded;                                // 0x00D8 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	TArray<uint8_t>                                    BunchBytes;                                    // 0x00E8 (0x0010) [0x0000000000402002] (CPF_Const | CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventConnected__Delegate;                    // 0x00F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDisconnected__Delegate;                 // 0x0110 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventReceivedBunch__Delegate;                // 0x0128 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.TcpConnection");
		}

		return uClassPointer;
	};

	void eventOnDisconnected();
	void eventOnConnected();
	void Close();
	struct FString GetRemoteAddress();
	struct FString GetAddress();
	void EventReceivedBunch(class UTcpConnection* Connection);
	void EventDisconnected(class UTcpConnection* Connection);
	void EventConnected(class UTcpConnection* Connection);
};

// Class ProjectX.WebSocketConnection_X
// 0x001C (0x0140 - 0x015C)
class UWebSocketConnection_X : public UTcpConnection
{
public:
	float                                              PingInterval;                                  // 0x0140 (0x0004) [0x0000000000004000] (CPF_Config)  
	struct FString                                     ClosedReason;                                  // 0x0148 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	int32_t                                            ClosedCode;                                    // 0x0158 (0x0004) [0x0000000000000002] (CPF_Const)   
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.WebSocketConnection_X");
		}

		return uClassPointer;
	};

	void PretendClose(int32_t Code, struct FString Reason);
	void Close();
	bool BeginWebSocketConnect(struct FString Address, class UStringMap* HandshakeHeaders);
	bool BeginConnect(struct FString Address);
};

// Class ProjectX.UdpPingBeaconBase_X
// 0x0028 (0x0070 - 0x0098)
class UUdpPingBeaconBase_X : public UComponent
{
public:
	struct FPointer                                    Beacon;                                        // 0x0070 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    Thread;                                        // 0x0078 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	struct FPointer                                    Runnable;                                      // 0x0080 (0x0008) [0x0000000000001002] (CPF_Const | CPF_Native)
	int32_t                                            SocketErrorLogDelaySeconds;                    // 0x0088 (0x0004) [0x0000000000004000] (CPF_Config)  
	unsigned long                                      bThreaded : 1;                                 // 0x008C (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	class UBeaconConfig_X*                             Config;                                        // 0x0090 (0x0008) [0x0000800000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.UdpPingBeaconBase_X");
		}

		return uClassPointer;
	};

	void TickSocket(float DeltaTime);
	void eventSetTickSocket(unsigned long bTick);
	void Close();
};

// Class ProjectX.UdpPingBeaconClient_X
// 0x0030 (0x0098 - 0x00C8)
class UUdpPingBeaconClient_X : public UUdpPingBeaconBase_X
{
public:
	struct FScriptDelegate                             __EventPong__Delegate;                         // 0x0098 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLost__Delegate;                         // 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.UdpPingBeaconClient_X");
		}

		return uClassPointer;
	};

	void TickPongs(float DeltaTime);
	void eventSetTickPongs(unsigned long bTick);
	void Close();
	void SendPing(struct FName Address);
	bool InitClient();
	class UUdpPingBeaconClient_X* GetInstance();
	void EventLost(class UUdpPingBeaconClient_X* TheBeacon, struct FName Address);
	void EventPong(class UUdpPingBeaconClient_X* TheBeacon, struct FName Address, float DeltaSeconds);
};

// Class ProjectX.UdpPingBeaconServer_X
// 0x0000 (0x0098 - 0x0098)
class UUdpPingBeaconServer_X : public UUdpPingBeaconBase_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.UdpPingBeaconServer_X");
		}

		return uClassPointer;
	};

	bool InitServer(int32_t Port);
};

// Class ProjectX.PrivilegeCheck_X
// 0x0088 (0x0060 - 0x00E8)
class UPrivilegeCheck_X : public UObject
{
public:
	TArray<int32_t>                                    ControllerIDs;                                 // 0x0060 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      bHasRestriction : 1;                           // 0x0070 (0x0004) [0x0000004000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      bFinished : 1;                                 // 0x0070 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	class UError*                                      FailReason;                                    // 0x0078 (0x0008) [0x0000004000002000] (CPF_Transient)
	TArray<uint8_t>                                    PendingPrivileges;                             // 0x0080 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            FailedControllerID;                            // 0x0090 (0x0004) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            FailedPrivilege;                               // 0x0094 (0x0001) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            FailedPrivilegeLevel;                          // 0x0095 (0x0001) [0x0000004000002000] (CPF_Transient)
	TArray<int32_t>                                    PendingControllerIDs;                          // 0x0098 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     CheckDelegates;                                // 0x00A8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             EventFinished;                                 // 0x00B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __CheckDelegate__Delegate;                     // 0x00D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PrivilegeCheck_X");
		}

		return uClassPointer;
	};

	bool HasFeatureRestriction(int32_t& OutControllerID, uint8_t& OutFailedPrivilege);
	void OnFinished();
	void Fail(struct FString Reason);
	void HandlePrivilege(uint8_t LocalUserNum, uint8_t Privilege, uint8_t Level, class UError* InFailReason);
	void CheckPrivilege();
	void CheckPsyNetComplete(class UError* ConnectionError);
	void CheckPsyNet();
	void ValidateUserOnlineAccount();
	void CheckInternet();
	class UPrivilegeCheck_X* RequirePrivilege(uint8_t Privilege);
	class UPrivilegeCheck_X* RequirePsyNet();
	class UPrivilegeCheck_X* RequireUserOnlineAccount();
	class UPrivilegeCheck_X* RequireInternet();
	void StartNextCheck();
	void Start();
	void Init(int32_t ControllerId);
	void CheckDelegate();
};

// Class ProjectX.AddReservationMessage_X
// 0x006C (0x0060 - 0x00CC)
class UAddReservationMessage_X : public UBeaconMessage_X
{
public:
	TArray<struct FReservationPlayerData>              Players;                                       // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                PartyLeaderID;                                 // 0x0070 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ReservationID;                                 // 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bDisableCrossPlay : 1;                         // 0x00C8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bMarkSplitscreenAsRemote : 1;                  // 0x00C8 (0x0004) [0x0001000000006000] [0x00000002] (CPF_Transient | CPF_Config)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.AddReservationMessage_X");
		}

		return uClassPointer;
	};

	struct FUniqueNetId __AddReservationMessage_X__GetPlayerIDs_D7BE81CD4241729CF2FB7CA81A3417EE(struct FReservationPlayerData P);
	TArray<struct FUniqueNetId> GetPlayerIDs();
	void GetPlayerMapPrefs(struct FUniqueNetId PlayerID, TArray<struct FName>& Likes, TArray<struct FName>& Dislikes);
	class UAddReservationMessage_X* SetDisableCrossPlay(unsigned long bValue);
	class UAddReservationMessage_X* AddPlayer(struct FUniqueNetId PlayerID, struct FString PlayerName, unsigned long bRemotePlayer);
	class UAddReservationMessage_X* AddOnlinePlayer(class UOnlinePlayer_X* Player, unsigned long bFriendJoin);
	class UAddReservationMessage_X* AddPlayers();
	void SendReservation(struct FServerReservationData& Reservation);
	class UAddReservationMessage_X* SetReservationID(struct FString Id);
};

// Class ProjectX.____OnlineGameParty_X__UpdatePartyInfo_D6627EC54DD3217E83D54EAB9B383228____OnlineGameParty_X__UpdatePartyInfo_D6627EC54DD3217E83D54EAB9B383228_AAD0FE1E4C53A49E06A9B9B5478A97F0
// 0x0178 (0x0060 - 0x01D8)
class U____OnlineGameParty_X__UpdatePartyInfo_D6627EC54DD3217E83D54EAB9B383228____OnlineGameParty_X__UpdatePartyInfo_D6627EC54DD3217E83D54EAB9B383228_AAD0FE1E4C53A49E06A9B9B5478A97F0 : public UObject
{
public:
	struct FPartyMember                                PM;                                            // 0x0060 (0x0178) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.____OnlineGameParty_X__UpdatePartyInfo_D6627EC54DD3217E83D54EAB9B383228____OnlineGameParty_X__UpdatePartyInfo_D6627EC54DD3217E83D54EAB9B383228_AAD0FE1E4C53A49E06A9B9B5478A97F0");
		}

		return uClassPointer;
	};

	bool ____OnlineGameParty_X__UpdatePartyInfo_D6627EC54DD3217E83D54EAB9B383228____OnlineGameParty_X__UpdatePartyInfo_D6627EC54DD3217E83D54EAB9B383228_AAD0FE1E4C53A49E06A9B9B5478A97F0(struct FLobbyMember LM);
};

// Class ProjectX.__OnlineGameParty_X__UpdatePartyInfo_D6627EC54DD3217E83D54EAB9B383228
// 0x0030 (0x0060 - 0x0090)
class U__OnlineGameParty_X__UpdatePartyInfo_D6627EC54DD3217E83D54EAB9B383228 : public UObject
{
public:
	struct FActiveLobbyInfo                            Lobby;                                         // 0x0060 (0x0030) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlineGameParty_X__UpdatePartyInfo_D6627EC54DD3217E83D54EAB9B383228");
		}

		return uClassPointer;
	};

	bool __OnlineGameParty_X__UpdatePartyInfo_D6627EC54DD3217E83D54EAB9B383228(struct FPartyMember PM);
};

// Class ProjectX.SetPlayerStorageResult_X
// 0x0010 (0x0060 - 0x0070)
class USetPlayerStorageResult_X : public UObject
{
public:
	TArray<struct FSetPlayerStorageResultItem>         Items;                                         // 0x0060 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.SetPlayerStorageResult_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.____OnlinePlayerStorageQueue_X__HandleStorageSuccess_789E4CAA48EC9036FBC187A9452FA3A1____OnlinePlayerStorageQueue_X__HandleStorageSuccess_0E9C6A3745751ACF071615979E1B2474_3769F3DC450DFAB786DC1E92233E3B65
// 0x0010 (0x0060 - 0x0070)
class U____OnlinePlayerStorageQueue_X__HandleStorageSuccess_789E4CAA48EC9036FBC187A9452FA3A1____OnlinePlayerStorageQueue_X__HandleStorageSuccess_0E9C6A3745751ACF071615979E1B2474_3769F3DC450DFAB786DC1E92233E3B65 : public UObject
{
public:
	struct FSetPlayerStorageResultItem                 R;                                             // 0x0060 (0x0010) [0x0001000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.____OnlinePlayerStorageQueue_X__HandleStorageSuccess_789E4CAA48EC9036FBC187A9452FA3A1____OnlinePlayerStorageQueue_X__HandleStorageSuccess_0E9C6A3745751ACF071615979E1B2474_3769F3DC450DFAB786DC1E92233E3B65");
		}

		return uClassPointer;
	};

	bool ____OnlinePlayerStorageQueue_X__HandleStorageSuccess_789E4CAA48EC9036FBC187A9452FA3A1____OnlinePlayerStorageQueue_X__HandleStorageSuccess_0E9C6A3745751ACF071615979E1B2474_3769F3DC450DFAB786DC1E92233E3B65(struct FPendingStorage P);
};

// Class ProjectX.OnlinePlayerStorageQueue_X
// 0x0088 (0x0060 - 0x00E8)
class UOnlinePlayerStorageQueue_X : public UObject
{
public:
	class UOnlinePlayerStorageConfig_X*                Config;                                        // 0x0060 (0x0008) [0x0001800000000001] (CPF_Edit)    
	TArray<struct FPendingStorage>                     QueuedObjects;                                 // 0x0068 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	TArray<struct FPendingStorage>                     PendingObjects;                                // 0x0078 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	float                                              DefaultStorageMaxSizeBytes;                    // 0x0088 (0x0004) [0x0001000000000003] (CPF_Edit | CPF_Const)
	TArray<struct FStorageMaxSize>                     StorageMaxSizes;                               // 0x0090 (0x0010) [0x0001000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventStorageSuccess__Delegate;               // 0x00A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventOutOfSync__Delegate;                    // 0x00B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventStorageError__Delegate;                 // 0x00D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlinePlayerStorageQueue_X");
		}

		return uClassPointer;
	};

	void __OnlinePlayerStorageQueue_X__Construct_A0DC3FA246A3C9B44687D3AE1EC24186(struct FString _);
	void __OnlinePlayerStorageQueue_X__SendBatch_Internal_9807979A4FEE5AF0E2309D897D719070(class URPC_X* RPC);
	bool __OnlinePlayerStorageQueue_X__HandleStorageSuccess_6E88624D460FCCF384EAD0BA04C57883(struct FPendingStorage P);
	void __OnlinePlayerStorageQueue_X__HandleStorageSuccess_1099CA084D014B36F671ED80C26C1D01(struct FSetPlayerStorageRequestItem R);
	bool __OnlinePlayerStorageQueue_X__HandleStorageSuccess_338DE93343BA49D853242982DDA7D2C9(struct FSetPlayerStorageResultItem Item);
	void __OnlinePlayerStorageQueue_X__HandleStorageError_99B10C884774EB8B57B4B4A44BF533BA(struct FPendingStorage P);
	bool __OnlinePlayerStorageQueue_X__HandleStorageError_A6A91780435526506428408B2EEC700D(struct FPendingStorage P);
	int32_t GetStorageMaxSizeBytes(struct FName Category);
	void HandleStorageError(class UError* Error);
	struct FPendingStorage MapResultItem(struct FSetPlayerStorageResultItem Item);
	void HandleStorageSuccess(class URPC_PlayerStorageSet_X* RPC);
	void PartitionStorageRequests(TArray<struct FPendingStorage>& OutQueue, TArray<struct FSetPlayerStorageRequestItem>& OutOfDate);
	void SendBatch_Internal(TArray<struct FPendingStorage>& OutQueue);
	void SendBatch();
	void QueueBatch();
	void SendImmediate(class UObject* DataObj, int32_t ClientTick);
	void UpdateQueuedObject(class UObject* DataObj, int32_t ClientTick);
	void QueueObject(class UObject* DataObj, int32_t ClientTick);
	void eventConstruct();
	void EventStorageError(class UError* Error);
	void EventOutOfSync(TArray<struct FPendingStorage>& FailedObjects);
	void EventStorageSuccess(class UObject* Data, int32_t ServerTick, uint8_t Encoding);
};

// Class ProjectX.__OnlinePlayerStorageQueue_X__HandleStorageSuccess_789E4CAA48EC9036FBC187A9452FA3A1
// 0x0018 (0x0060 - 0x0078)
class U__OnlinePlayerStorageQueue_X__HandleStorageSuccess_789E4CAA48EC9036FBC187A9452FA3A1 : public UObject
{
public:
	TArray<struct FSetPlayerStorageResultItem>         OutOfSync;                                     // 0x0060 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	class URPC_PlayerStorageSet_X*                     RPC;                                           // 0x0070 (0x0008) [0x0001000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlinePlayerStorageQueue_X__HandleStorageSuccess_789E4CAA48EC9036FBC187A9452FA3A1");
		}

		return uClassPointer;
	};

	void __OnlinePlayerStorageQueue_X__HandleStorageSuccess_0E9C6A3745751ACF071615979E1B2474(struct FSetPlayerStorageResultItem R);
	bool __OnlinePlayerStorageQueue_X__HandleStorageSuccess_789E4CAA48EC9036FBC187A9452FA3A1(struct FSetPlayerStorageRequestItem R);
};

// Class ProjectX.__AdHocBrowser_X__CreateErrorDelegate_DEFF89BC438032B164BAD096AA3BF508
// 0x0020 (0x0060 - 0x0080)
class U__AdHocBrowser_X__CreateErrorDelegate_DEFF89BC438032B164BAD096AA3BF508 : public UObject
{
public:
	class UAsyncTask*                                  Task;                                          // 0x0060 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             ErrorDelegate;                                 // 0x0068 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__AdHocBrowser_X__CreateErrorDelegate_DEFF89BC438032B164BAD096AA3BF508");
		}

		return uClassPointer;
	};

	void __AdHocBrowser_X__CreateErrorDelegate_96BB618D4678652324024F8D4FE5123D();
	void __AdHocBrowser_X__CreateErrorDelegate_DEFF89BC438032B164BAD096AA3BF508(class UError* Error);
};

// Class ProjectX.LanBrowser_X
// 0x0000 (0x0060 - 0x0060)
class ULanBrowser_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.LanBrowser_X");
		}

		return uClassPointer;
	};

	class UAsyncTask* JoinServer(struct FString ServerId, struct FString Options);
	class UTAsyncResult__array_LanServerRecord_X* GetServerList();
	void DestroyServer();
	class UAsyncTask* SetServerMetaData(struct FString MetaData);
	class UAsyncTask* CreateServer(struct FString MetaData);
	void HandleGameInfoSpawned(class AGameInfo_X* G);
	void eventConstruct();
};

// Class ProjectX.AdHocBrowser_X
// 0x0048 (0x0060 - 0x00A8)
class UAdHocBrowser_X : public ULanBrowser_X
{
public:
	class UAdHocBeacon_X*                              AdHocBeacon;                                   // 0x0060 (0x0008) [0x0000800000000000]               
	TArray<struct FAdHocAccessPointInfo>               AdHocNodesOnNetwork;                           // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              SearchTimeout;                                 // 0x0078 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class UTAsyncResult__array_LanServerRecord_X*      SearchTask;                                    // 0x0080 (0x0008) [0x0000000000000000]               
	TArray<class ULanServerRecord_X*>                  SearchResults;                                 // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FAdHocAccessPointInfo>               AdHocAccessPointsAvailable;                    // 0x0098 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.AdHocBrowser_X");
		}

		return uClassPointer;
	};

	void __AdHocBrowser_X__GetServerList_02E77E5247D3F0BD7495A48455ABAB10();
	void HandleSearchTimeout();
	void AdHocHandleOnNetworkChanged(TArray<struct FAdHocAccessPointInfo> Ahapis);
	int32_t FindIndexFromServerID(struct FString InServerID);
	class UAsyncTask* JoinServer(struct FString ServerId, struct FString Options);
	void CreateErrorDelegate(class UAsyncTask* Task);
	class UTAsyncResult__array_LanServerRecord_X* GetServerList();
	class UAsyncTask* SetServerMetaData(struct FString MetaData);
	class UAsyncTask* CreateServer(struct FString MetaData);
};

// Class ProjectX.__AdHocBrowser_X__CreateServer_CDBB8AA64BCACBEB20D3A9972542E60D
// 0x0030 (0x0060 - 0x0090)
class U__AdHocBrowser_X__CreateServer_CDBB8AA64BCACBEB20D3A9972542E60D : public UObject
{
public:
	struct FString                                     MetaData;                                      // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UAsyncTask*                                  Task;                                          // 0x0070 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             ApcDelegate;                                   // 0x0078 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__AdHocBrowser_X__CreateServer_CDBB8AA64BCACBEB20D3A9972542E60D");
		}

		return uClassPointer;
	};

	void __AdHocBrowser_X__CreateServer_D443192B4D89D6327BD3FA82166D02AD();
	void __AdHocBrowser_X__CreateServer_CDBB8AA64BCACBEB20D3A9972542E60D();
};

// Class ProjectX.__AdHocBrowser_X__JoinServer_6DD54E8E4B88E25883E3B1BD9FC12046
// 0x0028 (0x0060 - 0x0088)
class U__AdHocBrowser_X__JoinServer_6DD54E8E4B88E25883E3B1BD9FC12046 : public UObject
{
public:
	class UAsyncTask*                                  Task;                                          // 0x0060 (0x0008) [0x0000000000000000]               
	struct FString                                     ServerId;                                      // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Options;                                       // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__AdHocBrowser_X__JoinServer_6DD54E8E4B88E25883E3B1BD9FC12046");
		}

		return uClassPointer;
	};

	void __AdHocBrowser_X__JoinServer_6DD54E8E4B88E25883E3B1BD9FC12046();
};

// Class ProjectX.__AdHocInterface_X__DisableAdHoc_BC2FEB4247D78DEF9995028E3734FAB2
// 0x0020 (0x0060 - 0x0080)
class U__AdHocInterface_X__DisableAdHoc_BC2FEB4247D78DEF9995028E3734FAB2 : public UObject
{
public:
	class UAsyncTask*                                  Task;                                          // 0x0060 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             DestroyedDelegate;                             // 0x0068 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__AdHocInterface_X__DisableAdHoc_BC2FEB4247D78DEF9995028E3734FAB2");
		}

		return uClassPointer;
	};

	void __AdHocInterface_X__DisableAdHoc_8D34B3FB440E7AB2A419D9A05EF14329();
	void __AdHocInterface_X__DisableAdHoc_BC2FEB4247D78DEF9995028E3734FAB2();
};

// Class ProjectX.AdHocInterface_X
// 0x0020 (0x0060 - 0x0080)
class UAdHocInterface_X : public UObject
{
public:
	class ULanBrowser_X*                               OldLanBrowser;                                 // 0x0060 (0x0008) [0x0000000000000000]               
	class UAdHocBeacon_X*                              AdHocBeacon;                                   // 0x0068 (0x0008) [0x0000000000000000]               
	class UOnlineGameParty_X*                          OnlineGameParty;                               // 0x0070 (0x0008) [0x0000800000000000]               
	class UOnlineGameMatchmaking_X*                    Matchmaking;                                   // 0x0078 (0x0008) [0x0000800000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.AdHocInterface_X");
		}

		return uClassPointer;
	};

	void CreateErrorDelegate(class UAsyncTask* Task);
	class UAsyncTask* DisableAdHoc();
	void HandleGameInfoSpawned(class AGameInfo_X* InGameInfo);
	class UAsyncTask* EnableAdHoc();
};

// Class ProjectX.__AdHocInterface_X__EnableAdHoc_E0DBE66741E7603E74D772B058483508
// 0x0020 (0x0060 - 0x0080)
class U__AdHocInterface_X__EnableAdHoc_E0DBE66741E7603E74D772B058483508 : public UObject
{
public:
	class UAsyncTask*                                  Task;                                          // 0x0060 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             InitDelegate;                                  // 0x0068 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__AdHocInterface_X__EnableAdHoc_E0DBE66741E7603E74D772B058483508");
		}

		return uClassPointer;
	};

	void __AdHocInterface_X__EnableAdHoc_1E9BEC8C47338534D0587A8AF14F1D78();
	void __AdHocInterface_X__EnableAdHoc_E0DBE66741E7603E74D772B058483508();
};

// Class ProjectX.__CheatManager_X__RandomSleep_0B23BEDD4A0EB03C99724EA6163DB12E
// 0x0010 (0x0060 - 0x0070)
class U__CheatManager_X__RandomSleep_0B23BEDD4A0EB03C99724EA6163DB12E : public UObject
{
public:
	float                                              MinDelay;                                      // 0x0060 (0x0004) [0x0000000000000000]               
	float                                              MaxDelay;                                      // 0x0064 (0x0004) [0x0000000000000000]               
	float                                              MinSleep;                                      // 0x0068 (0x0004) [0x0000000000000000]               
	float                                              MaxSleep;                                      // 0x006C (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__CheatManager_X__RandomSleep_0B23BEDD4A0EB03C99724EA6163DB12E");
		}

		return uClassPointer;
	};

	void __CheatManager_X__RandomSleep_0B23BEDD4A0EB03C99724EA6163DB12E();
};

// Class ProjectX.__ClubUtil_X__IsClubTeam_7B9008944E22E50E3209A49EF9D95386
// 0x0010 (0x0060 - 0x0070)
class U__ClubUtil_X__IsClubTeam_7B9008944E22E50E3209A49EF9D95386 : public UObject
{
public:
	TArray<uint64_t>                                   TeamClubs;                                     // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__ClubUtil_X__IsClubTeam_7B9008944E22E50E3209A49EF9D95386");
		}

		return uClassPointer;
	};

	bool __ClubUtil_X__IsClubTeam_7B9008944E22E50E3209A49EF9D95386(uint64_t Id);
};

// Class ProjectX.ClubUtil_X
// 0x0000 (0x0060 - 0x0060)
class UClubUtil_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ClubUtil_X");
		}

		return uClassPointer;
	};

	int32_t Wrap(int32_t Column, int32_t Count);
	struct FClubColorSet SwapPrimaryAccentColors(struct FClubColorSet Colors, class UColorPalette_X* TeamPalette, class UColorPalette_X* AccentPalette);
	bool AreColorsDifferent(class UColorPalette_X* Palette, int32_t Color0, int32_t Color1);
	uint8_t EnsureDifferentColors(class UColorPalette_X* TeamPalette, class UColorPalette_X* AccentPalette, int32_t DefaultColorID0, int32_t DefaultColorID1, struct FClubColorSet& Set0, struct FClubColorSet& Set1);
	bool IsClubTeam(int32_t TeamSize, TArray<uint64_t>& TeamClubs);
	bool IsClubMatch(int32_t TeamSize, TArray<uint64_t>& Team0Clubs, TArray<uint64_t>& Team1Clubs);
};

// Class ProjectX.__CrossplayConfig_X__GetDisabledCrossplayGroup_1DDE1DB348809C39BA158E87C952BE67
// 0x0001 (0x0060 - 0x0061)
class U__CrossplayConfig_X__GetDisabledCrossplayGroup_1DDE1DB348809C39BA158E87C952BE67 : public UObject
{
public:
	uint8_t                                            PlayerPlatform;                                // 0x0060 (0x0001) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__CrossplayConfig_X__GetDisabledCrossplayGroup_1DDE1DB348809C39BA158E87C952BE67");
		}

		return uClassPointer;
	};

	bool __CrossplayConfig_X__GetDisabledCrossplayGroup_1DDE1DB348809C39BA158E87C952BE67(struct FCrossplayGroup P);
};

// Class ProjectX.__EpicFriendsPlugin_X__AcceptFriendRequest_0A0DE821450F065F82C85089FF36CD43
// 0x0048 (0x0060 - 0x00A8)
class U__EpicFriendsPlugin_X__AcceptFriendRequest_0A0DE821450F065F82C85089FF36CD43 : public UObject
{
public:
	struct FUniqueNetId                                FriendId;                                      // 0x0060 (0x0048) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__EpicFriendsPlugin_X__AcceptFriendRequest_0A0DE821450F065F82C85089FF36CD43");
		}

		return uClassPointer;
	};

	void __EpicFriendsPlugin_X__AcceptFriendRequest_0A0DE821450F065F82C85089FF36CD43(class UEOS_ManageFriendsListResponse* R, class UError* E);
};

// Class ProjectX.__EpicFriendsPlugin_X__AddFriendWithCustomCallback_017D6D944B938B462A5A488B80B5705E
// 0x0060 (0x0060 - 0x00C0)
class U__EpicFriendsPlugin_X__AddFriendWithCustomCallback_017D6D944B938B462A5A488B80B5705E : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                      // 0x0060 (0x0018) [0x0001000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                FriendId;                                      // 0x0078 (0x0048) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__EpicFriendsPlugin_X__AddFriendWithCustomCallback_017D6D944B938B462A5A488B80B5705E");
		}

		return uClassPointer;
	};

	void __EpicFriendsPlugin_X__AddFriendWithCustomCallback_017D6D944B938B462A5A488B80B5705E(class UEOS_ManageFriendsListResponse* R, class UError* E);
};

// Class ProjectX.__EpicFriendsPlugin_X__GetOutgoingFriendRequestsWithCustomCallback_9699E7B14AD03BE94B0E2AA8AEDA0AE6
// 0x0018 (0x0060 - 0x0078)
class U__EpicFriendsPlugin_X__GetOutgoingFriendRequestsWithCustomCallback_9699E7B14AD03BE94B0E2AA8AEDA0AE6 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                      // 0x0060 (0x0018) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__EpicFriendsPlugin_X__GetOutgoingFriendRequestsWithCustomCallback_9699E7B14AD03BE94B0E2AA8AEDA0AE6");
		}

		return uClassPointer;
	};

	void __EpicFriendsPlugin_X__GetOutgoingFriendRequestsWithCustomCallback_9699E7B14AD03BE94B0E2AA8AEDA0AE6(class UEOS_GetAccountsResponse* R, class UError* E);
};

// Class ProjectX.__EpicFriendsPlugin_X__RejectFriendRequest_14A6C3A742DB3BF2B9A91B8F1947EA5D
// 0x0048 (0x0060 - 0x00A8)
class U__EpicFriendsPlugin_X__RejectFriendRequest_14A6C3A742DB3BF2B9A91B8F1947EA5D : public UObject
{
public:
	struct FUniqueNetId                                FriendId;                                      // 0x0060 (0x0048) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__EpicFriendsPlugin_X__RejectFriendRequest_14A6C3A742DB3BF2B9A91B8F1947EA5D");
		}

		return uClassPointer;
	};

	void __EpicFriendsPlugin_X__RejectFriendRequest_14A6C3A742DB3BF2B9A91B8F1947EA5D(class UEOS_ManageFriendsListResponse* R, class UError* E);
};

// Class ProjectX.__EpicFriendsPlugin_X__RemoveFriend_5C9EAF934D4F2A4519091396BB8A6C6C
// 0x0048 (0x0060 - 0x00A8)
class U__EpicFriendsPlugin_X__RemoveFriend_5C9EAF934D4F2A4519091396BB8A6C6C : public UObject
{
public:
	struct FUniqueNetId                                FriendId;                                      // 0x0060 (0x0048) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__EpicFriendsPlugin_X__RemoveFriend_5C9EAF934D4F2A4519091396BB8A6C6C");
		}

		return uClassPointer;
	};

	void __EpicFriendsPlugin_X__RemoveFriend_5C9EAF934D4F2A4519091396BB8A6C6C(class UEOS_ManageFriendsListResponse* R, class UError* E);
};

// Class ProjectX.__EpicFriendsPlugin_X__SendHTTPRequest_681A40A141163DAC4CB1D0AF3D98B5FE
// 0x0048 (0x0060 - 0x00A8)
class U__EpicFriendsPlugin_X__SendHTTPRequest_681A40A141163DAC4CB1D0AF3D98B5FE : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                      // 0x0060 (0x0018) [0x0001000000400000] (CPF_NeedCtorLink)
	class UClass*                                      ResponseClass;                                 // 0x0078 (0x0008) [0x0001000000000000]               
	struct FString                                     Verb;                                          // 0x0080 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	unsigned long                                      AddContentTypeHeader : 1;                      // 0x0090 (0x0004) [0x0001000000000000] [0x00000001] 
	struct FString                                     URL;                                           // 0x0098 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__EpicFriendsPlugin_X__SendHTTPRequest_681A40A141163DAC4CB1D0AF3D98B5FE");
		}

		return uClassPointer;
	};

	void ____EpicFriendsPlugin_X__SendHTTPRequest_681A40A141163DAC4CB1D0AF3D98B5FE____EpicFriendsPlugin_X__SendHTTPRequest_CB8A464047B4D74F47FB79A1218ED4E7_CC7DE1AB4321180F3D31F1833A16C17F(class UWebRequest_X* Response);
	void __EpicFriendsPlugin_X__SendHTTPRequest_CB8A464047B4D74F47FB79A1218ED4E7(unsigned long bSuccess, struct FString EpicAuthTicket);
	void __EpicFriendsPlugin_X__SendHTTPRequest_681A40A141163DAC4CB1D0AF3D98B5FE(class UWebRequest_X* Response);
};

// Class ProjectX.EpicErrors_X
// 0x0098 (0x0080 - 0x0118)
class UEpicErrors_X : public UErrorList
{
public:
	class UErrorType*                                  EpicAccountNotFound;                           // 0x0080 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  EpicAccountLinkingFailed;                      // 0x0088 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  EOSFailedToConnect;                            // 0x0090 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  EOSFailedToConnectSplitscreen;                 // 0x0098 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  NotLoggedInToEOS;                              // 0x00A0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  EOSUpdateRequired;                             // 0x00A8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PinGrantCodeExpired;                           // 0x00B0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PrimaryAccountNotSet;                          // 0x00B8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  EpicInvalidPlayer;                             // 0x00C0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  EpicRemoteFriendLimitReached;                  // 0x00C8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  EpicMaxOutgoingInvitesReached;                 // 0x00D0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  EpicLocalFriendLimitReached;                   // 0x00D8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  EpicAccountLookupFailed;                       // 0x00E0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  EpicAccountCreationFailed;                     // 0x00E8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  EpicAccountRestricted;                         // 0x00F0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  EpicPartyInviteFailed;                         // 0x00F8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  IncorrectSaveLoaded;                           // 0x0100 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  EpicSocialBanned;                              // 0x0108 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  MaxPendingFriendInvitesReached;                // 0x0110 (0x0008) [0x0000000000000002] (CPF_Const)   
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.EpicErrors_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.__EpicLogin_X__HandleLoginChanged_48A750CA41E02F7CF3963682EF03F41D
// 0x0001 (0x0060 - 0x0061)
class U__EpicLogin_X__HandleLoginChanged_48A750CA41E02F7CF3963682EF03F41D : public UObject
{
public:
	uint8_t                                            InLocalPlayerNum;                              // 0x0060 (0x0001) [0x0001000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__EpicLogin_X__HandleLoginChanged_48A750CA41E02F7CF3963682EF03F41D");
		}

		return uClassPointer;
	};

	void __EpicLogin_X__HandleLoginChanged_48A750CA41E02F7CF3963682EF03F41D();
};

// Class ProjectX.EpicConfig_X
// 0x0090 (0x0078 - 0x0108)
class UEpicConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bPollDuringAccountLinking : 1;                 // 0x0078 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	int32_t                                            SecondsBetweenPolling;                         // 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            SecondsBeforeRequestsTimeout;                  // 0x0080 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            SecondsToWaitBeforeRetryingAuth;               // 0x0084 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            SecondsToWaitBeforeUpdatingFriendsList;        // 0x0088 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<class ULocalizedAccountLinkURL*>            AccountLinkURLOverrides;                       // 0x0090 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     DefaultAccountLinkURL;                         // 0x00A0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     ProductionPermissionServerURL;                 // 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     AccountPermissionsURL;                         // 0x00C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FPermissionPair>                     ChatPermissionPairs;                           // 0x00D0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            DefaultPermissionLevel;                        // 0x00E0 (0x0001) [0x0000000000000000]               
	struct FPlayerPermissions                          DefaultPermissions;                            // 0x00E4 (0x0004) [0x0000000000000000]               
	struct FString                                     SandboxId;                                     // 0x00E8 (0x0010) [0x0000000000404001] (CPF_Edit | CPF_Config | CPF_NeedCtorLink)
	struct FString                                     DeploymentId;                                  // 0x00F8 (0x0010) [0x0000000000404001] (CPF_Edit | CPF_Config | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.EpicConfig_X");
		}

		return uClassPointer;
	};

	uint8_t GetChatPermissionLevel(struct FString PermissionLabel);
	void Apply();
};

// Class ProjectX.__EpicLogin_X__RequestNintendoAccountAuthorization_1A19853F479913A8D53F8499C3531864
// 0x0018 (0x0060 - 0x0078)
class U__EpicLogin_X__RequestNintendoAccountAuthorization_1A19853F479913A8D53F8499C3531864 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                      // 0x0060 (0x0018) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__EpicLogin_X__RequestNintendoAccountAuthorization_1A19853F479913A8D53F8499C3531864");
		}

		return uClassPointer;
	};

	void __EpicLogin_X__RequestNintendoAccountAuthorization_1A19853F479913A8D53F8499C3531864(struct FString NintendoAccountToken);
};

// Class ProjectX.__EpicLogin_X__TriggerAuthTicketDelegate_396E6F9F4E16D08363EEC3965EC4E7CA
// 0x0060 (0x0060 - 0x00C0)
class U__EpicLogin_X__TriggerAuthTicketDelegate_396E6F9F4E16D08363EEC3965EC4E7CA : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                      // 0x0060 (0x0018) [0x0001000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                NetId;                                         // 0x0078 (0x0048) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__EpicLogin_X__TriggerAuthTicketDelegate_396E6F9F4E16D08363EEC3965EC4E7CA");
		}

		return uClassPointer;
	};

	void __EpicLogin_X__TriggerAuthTicketDelegate_396E6F9F4E16D08363EEC3965EC4E7CA(unsigned long bSuccess, struct FString AuthTicket);
};

// Class ProjectX.__EpicLogin_X__UpdateTwoFactorAuthenticationStatus_00CC63D5445F306B2B858CA2327D08B4
// 0x0018 (0x0060 - 0x0078)
class U__EpicLogin_X__UpdateTwoFactorAuthenticationStatus_00CC63D5445F306B2B858CA2327D08B4 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                      // 0x0060 (0x0018) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__EpicLogin_X__UpdateTwoFactorAuthenticationStatus_00CC63D5445F306B2B858CA2327D08B4");
		}

		return uClassPointer;
	};

	void ____EpicLogin_X__UpdateTwoFactorAuthenticationStatus_00CC63D5445F306B2B858CA2327D08B4____EpicLogin_X__UpdateTwoFactorAuthenticationStatus_00CC63D5445F306B2B858CA2327D08B4_7D5B5DCB431003ACB2A3BDBADFAEDD45(struct FString Ticket, struct FString Id, class UError* Err);
	void __EpicLogin_X__UpdateTwoFactorAuthenticationStatus_00CC63D5445F306B2B858CA2327D08B4(unsigned long bSuccess, struct FString AuthTicket);
};

// Class ProjectX.__LocalClubData_X__GetClubByID_063DC906494A348591A31B857AF33B64
// 0x0008 (0x0060 - 0x0068)
class U__LocalClubData_X__GetClubByID_063DC906494A348591A31B857AF33B64 : public UObject
{
public:
	uint64_t                                           Id;                                            // 0x0060 (0x0008) [0x0001000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__LocalClubData_X__GetClubByID_063DC906494A348591A31B857AF33B64");
		}

		return uClassPointer;
	};

	bool __LocalClubData_X__GetClubByID_063DC906494A348591A31B857AF33B64(class UClubDetails_X* C);
};

// Class ProjectX.ClubSettings_X
// 0x0028 (0x0060 - 0x0088)
class UClubSettings_X : public UObject
{
public:
	struct FString                                     ClubName;                                      // 0x0060 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	struct FString                                     ClubTag;                                       // 0x0070 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	int32_t                                            PrimaryColor;                                  // 0x0080 (0x0004) [0x0001000000000000]               
	int32_t                                            AccentColor;                                   // 0x0084 (0x0004) [0x0001000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ClubSettings_X");
		}

		return uClassPointer;
	};

	bool IsAccentColorSet();
	bool IsPrimaryColorSet();
	class UClubSettings_X* Create(struct FString InName, struct FString InTag, int32_t InPrimaryColor, int32_t InSecondaryColor);
};

// Class ProjectX.ClubDetails_X
// 0x0080 (0x0088 - 0x0108)
class UClubDetails_X : public UClubSettings_X
{
public:
	uint64_t                                           ClubID;                                        // 0x0088 (0x0008) [0x0001000000000000]               
	struct FUniqueNetId                                OwnerPlayerID;                                 // 0x0090 (0x0048) [0x0001000000400000] (CPF_NeedCtorLink)
	struct FString                                     MotD;                                          // 0x00D8 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bVerified : 1;                                 // 0x00E8 (0x0004) [0x0001000000000000] [0x00000001] 
	uint64_t                                           LastUpdatedTime;                               // 0x00F0 (0x0008) [0x0001000000000000]               
	TArray<struct FClubMember>                         Members;                                       // 0x00F8 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ClubDetails_X");
		}

		return uClassPointer;
	};

	struct FString GetMemberDebugString(struct FClubMember Member);
	struct FString GetMembersDebugString();
	struct FString GetDebugString();
	bool IsMember(struct FUniqueNetId PlayerID);
	bool IsDestroyed();
	void Destroy();
};

// Class ProjectX.LocalClubData_X
// 0x0024 (0x0060 - 0x0084)
class ULocalClubData_X : public UObject
{
public:
	TArray<class UClubDetails_X*>                      Clubs;                                         // 0x0060 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	TArray<struct FPlayerClubPair>                     Invites;                                       // 0x0070 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	int32_t                                            NextClubID;                                    // 0x0080 (0x0004) [0x0001000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.LocalClubData_X");
		}

		return uClassPointer;
	};

	class UClubDetails_X* GetClubForPlayer(struct FUniqueNetId PlayerID);
	class UClubDetails_X* GetClubByID(uint64_t Id);
	void Save();
	void Load();
};

// Class ProjectX.__LocalClubData_X__GetClubForPlayer_7B50A44A4AB3E1C48A0E6B972AF72116
// 0x0048 (0x0060 - 0x00A8)
class U__LocalClubData_X__GetClubForPlayer_7B50A44A4AB3E1C48A0E6B972AF72116 : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x0060 (0x0048) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__LocalClubData_X__GetClubForPlayer_7B50A44A4AB3E1C48A0E6B972AF72116");
		}

		return uClassPointer;
	};

	bool __LocalClubData_X__GetClubForPlayer_7B50A44A4AB3E1C48A0E6B972AF72116(class UClubDetails_X* C);
};

// Class ProjectX.__MatchRecorder_X__GetPlayerData_FB77FEF54EDF7EEDE42BEE946CDEDA67
// 0x0048 (0x0060 - 0x00A8)
class U__MatchRecorder_X__GetPlayerData_FB77FEF54EDF7EEDE42BEE946CDEDA67 : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x0060 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__MatchRecorder_X__GetPlayerData_FB77FEF54EDF7EEDE42BEE946CDEDA67");
		}

		return uClassPointer;
	};

	bool __MatchRecorder_X__GetPlayerData_FB77FEF54EDF7EEDE42BEE946CDEDA67(class UMatchPlayerData_X* P);
};

// Class ProjectX.MatchPlayerData_X
// 0x010C (0x0060 - 0x016C)
class UMatchPlayerData_X : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x0060 (0x0048) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     PlayerName;                                    // 0x00A8 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	uint64_t                                           ConnectTimestamp;                              // 0x00B8 (0x0008) [0x0000000000000000]               
	uint64_t                                           JoinTimestamp;                                 // 0x00C0 (0x0008) [0x0000000000000000]               
	uint64_t                                           LeaveTimestamp;                                // 0x00C8 (0x0008) [0x0000000000000000]               
	struct FUniqueNetId                                PartyLeaderID;                                 // 0x00D0 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bAbandoned : 1;                                // 0x0118 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bMvp : 1;                                      // 0x0118 (0x0004) [0x0000000040000000] [0x00000002] (CPF_EditInlineNotify)
	int32_t                                            LastTeam;                                      // 0x011C (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	float                                              SecondsPlayed;                                 // 0x0120 (0x0004) [0x0000000000000000]               
	int32_t                                            Goals;                                         // 0x0124 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int32_t                                            Assists;                                       // 0x0128 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int32_t                                            Saves;                                         // 0x012C (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int32_t                                            Shots;                                         // 0x0130 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int32_t                                            Demolishes;                                    // 0x0134 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int32_t                                            Score;                                         // 0x0138 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int32_t                                            OwnGoals;                                      // 0x013C (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int32_t                                            ClubID;                                        // 0x0140 (0x0004) [0x0000000000000000]               
	struct FMatchSkillUpdate                           Skills;                                        // 0x0144 (0x0024) [0x0000000000000000]               
	int32_t                                            ActorID;                                       // 0x0168 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.MatchPlayerData_X");
		}

		return uClassPointer;
	};

	void SetSkills(struct FUpdatedPlayerSkillRating Update);
};

// Class ProjectX.MatchRecorder_X
// 0x0018 (0x0060 - 0x0078)
class UMatchRecorder_X : public UObject
{
public:
	class UClass*                                      MatchDataClass;                                // 0x0060 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UClass*                                      PlayerDataClass;                               // 0x0068 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class UMatchData_X*                                Match;                                         // 0x0070 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.MatchRecorder_X");
		}

		return uClassPointer;
	};

	bool __MatchRecorder_X__GetAbandonedPlayers_65D9E431460A39AE6F45BE9718C01254(class UMatchPlayerData_X* P);
	struct FUniqueNetId __MatchRecorder_X__GetAbandonedPlayerIDs_B36CC5D14A10C5E78AF3B2B3A6F3D075(class UMatchPlayerData_X* P);
	void Finished();
	void UpdateServer(class UOnlineGameDedicatedServer_X* Server);
	class UMatchPlayerData_X* CreatePlayer(struct FUniqueNetId PlayerID, struct FString PlayerName);
	TArray<struct FUniqueNetId> GetAbandonedPlayerIDs();
	TArray<class UMatchPlayerData_X*> GetAbandonedPlayers();
	class UMatchPlayerData_X* GetPlayerData(struct FUniqueNetId PlayerID);
	void RemovePlayer(struct FUniqueNetId PlayerID);
	void ReservePlayer(struct FUniqueNetId PlayerID, struct FUniqueNetId PartyID);
	void AddPlayer(struct FUniqueNetId PlayerID, struct FString PlayerName);
	struct FString MatchGUID();
	void eventConstruct();
};

// Class ProjectX.__OnlineClubCache_X__GetClubDetails_18D0D38648B568D1BFDE2780DEA1794D
// 0x0008 (0x0060 - 0x0068)
class U__OnlineClubCache_X__GetClubDetails_18D0D38648B568D1BFDE2780DEA1794D : public UObject
{
public:
	uint64_t                                           ClubID;                                        // 0x0060 (0x0008) [0x0001000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlineClubCache_X__GetClubDetails_18D0D38648B568D1BFDE2780DEA1794D");
		}

		return uClassPointer;
	};

	bool __OnlineClubCache_X__GetClubDetails_18D0D38648B568D1BFDE2780DEA1794D(class UClubDetails_X* C);
};

// Class ProjectX.OnlineClubCache_X
// 0x0028 (0x0070 - 0x0098)
class UOnlineClubCache_X : public UComponent
{
public:
	TArray<class UClubDetails_X*>                      ClubDetailsCache;                              // 0x0070 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventClubUpdated__Delegate;                  // 0x0080 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineClubCache_X");
		}

		return uClassPointer;
	};

	uint64_t __OnlineClubCache_X__ClearAllExcept_0322F19C40EB5A8D2827EF817F457B05(class UClubDetails_X* C);
	void ClearAllExcept(TArray<uint64_t>& KeepClubs);
	void Clear();
	void Destroy(uint64_t ClubID);
	void Add(class UClubDetails_X* ClubDetails);
	uint64_t GetPlayerClubID(struct FUniqueNetId PlayerID);
	class UClubDetails_X* GetPlayerClubDetails(struct FUniqueNetId PlayerID);
	class UClubDetails_X* GetClubDetails(uint64_t ClubID);
	void NotifyWhenClubUpdated(struct FScriptDelegate Callback);
	void EventClubUpdated(class UOnlineClubCache_X* Cache, class UClubDetails_X* ClubDetails);
};

// Class ProjectX.__OnlineClubCache_X__GetPlayerClubDetails_48FA05B0427DAA1E61B525AF8CBE48A5
// 0x0048 (0x0060 - 0x00A8)
class U__OnlineClubCache_X__GetPlayerClubDetails_48FA05B0427DAA1E61B525AF8CBE48A5 : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x0060 (0x0048) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlineClubCache_X__GetPlayerClubDetails_48FA05B0427DAA1E61B525AF8CBE48A5");
		}

		return uClassPointer;
	};

	bool __OnlineClubCache_X__GetPlayerClubDetails_48FA05B0427DAA1E61B525AF8CBE48A5(class UClubDetails_X* C);
};

// Class ProjectX.__OnlineClubManager_X__LeaveClub_0A0555F4487C5EC4E28BC68E4CF80201
// 0x0008 (0x0060 - 0x0068)
class U__OnlineClubManager_X__LeaveClub_0A0555F4487C5EC4E28BC68E4CF80201 : public UObject
{
public:
	uint64_t                                           ClubID;                                        // 0x0060 (0x0008) [0x0001000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlineClubManager_X__LeaveClub_0A0555F4487C5EC4E28BC68E4CF80201");
		}

		return uClassPointer;
	};

	void __OnlineClubManager_X__LeaveClub_0A0555F4487C5EC4E28BC68E4CF80201();
};

// Class ProjectX.OnlineClubManager_X
// 0x0020 (0x0060 - 0x0080)
class UOnlineClubManager_X : public UObject
{
public:
	class UPsyNetConnection_X*                         Connection;                                    // 0x0060 (0x0008) [0x0001000000000000]               
	struct FScriptDelegate                             __EventClubChanged__Delegate;                  // 0x0068 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineClubManager_X");
		}

		return uClassPointer;
	};

	void OnLeaveClub(uint64_t ClubID);
	void OnClubChanged(class UClubDetails_X* Club);
	class UAsyncTask* LeaveClub(uint64_t ClubID);
	class UAsyncTask* RejectClubInvite(uint64_t ClubID);
	class UTAsyncResult__ClubDetails_X* AcceptClubInvite(uint64_t ClubID);
	class UTAsyncResult__array_ClubInvite_X* SyncClubInvites();
	class UTAsyncResult__ClubDetails_X* SetClubOwner(struct FUniqueNetId NewOwner);
	class UTAsyncResult__ClubDetails_X* RemoveFromClub(struct FUniqueNetId PlayerID);
	class UAsyncTask* InviteToClub(struct FUniqueNetId PlayerID);
	class UTAsyncResult__ClubDetails_X* UpdateClubMotD(struct FString Text);
	class UTAsyncResult__ClubDetails_X* UpdateClubColors(int32_t Primary, int32_t Accent);
	class UTAsyncResult__ClubDetails_X* UpdateClubName(struct FString ClubName, struct FString ClubTag);
	void OnClubCreated(class UClubDetails_X* Club, class UError* ActionError);
	class UTAsyncResult__ClubDetails_X* CreateClub(class UClubSettings_X* Settings);
	void EventClubChanged(class UOnlineClubManager_X* Manager, uint64_t ClubID);
};

// Class ProjectX.__OnlineClubProvider_X__HandleClubSynced_B966984D4F9B78D06886DFBE06907A62
// 0x0008 (0x0060 - 0x0068)
class U__OnlineClubProvider_X__HandleClubSynced_B966984D4F9B78D06886DFBE06907A62 : public UObject
{
public:
	class URPC_GetClubDetails_X*                       RPC;                                           // 0x0060 (0x0008) [0x0001000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlineClubProvider_X__HandleClubSynced_B966984D4F9B78D06886DFBE06907A62");
		}

		return uClassPointer;
	};

	void __OnlineClubProvider_X__HandleClubSynced_B966984D4F9B78D06886DFBE06907A62(struct FClubMember Member);
};

// Class ProjectX.RPC_ClubDetailsBase_X
// 0x0010 (0x00E8 - 0x00F8)
class URPC_ClubDetailsBase_X : public URPC_X
{
public:
	class UClubDetails_X*                              ClubDetails;                                   // 0x00E8 (0x0008) [0x0001000000002000] (CPF_Transient)
	class UTAsyncResult__ClubDetails_X*                ClubDetailsTask;                               // 0x00F0 (0x0008) [0x0001000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_ClubDetailsBase_X");
		}

		return uClassPointer;
	};

	class UClubDetails_X* __RPC_ClubDetailsBase_X__CreateClubDetailsTask_EEA8910B4A2E99996FC37E85092ED35A();
	class UTAsyncResult__ClubDetails_X* CreateClubDetailsTask();
};

// Class ProjectX.RPC_GetClubDetails_X
// 0x0004 (0x00F8 - 0x00FC)
class URPC_GetClubDetails_X : public URPC_ClubDetailsBase_X
{
public:
	int32_t                                            ClubID;                                        // 0x00F8 (0x0004) [0x0001000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_GetClubDetails_X");
		}

		return uClassPointer;
	};

	class URPC_GetClubDetails_X* SetClubID(uint64_t InClubID);
};

// Class ProjectX.OnlineClubProvider_X
// 0x0068 (0x0060 - 0x00C8)
class UOnlineClubProvider_X : public UObject
{
public:
	class UOnlineClubCache_X*                          Cache;                                         // 0x0060 (0x0008) [0x0001800004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	TArray<class URPC_GetClubDetails_X*>               SyncingClubs;                                  // 0x0068 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	TArray<class URPC_GetPlayerClubDetails_X*>         SyncingPlayers;                                // 0x0078 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	TArray<struct FPlayerClubSyncResult>               PlayerClubSyncResults;                         // 0x0088 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSyncComplete__Delegate;                 // 0x0098 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerSynced__Delegate;                 // 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineClubProvider_X");
		}

		return uClassPointer;
	};

	void ClubSynced(class UClubDetails_X* Club);
	bool IsSyncing();
	void NotifyWhenSyncComplete(struct FScriptDelegate Callback);
	struct FPlayerClubSyncResult GetPlayerClubSyncResult(struct FUniqueNetId PlayerID);
	void SetPlayerClubSyncResult(struct FUniqueNetId PlayerID, class UError* Error);
	void HandlePlayerSynced(class URPC_GetPlayerClubDetails_X* RPC);
	class UTAsyncResult__ClubDetails_X* SyncPlayerClubDetails(struct FUniqueNetId PlayerID);
	class UTAsyncResult__ClubDetails_X* GetPlayerClubDetails(struct FUniqueNetId PlayerID);
	void HandleClubSynced(class URPC_GetClubDetails_X* RPC);
	class UTAsyncResult__ClubDetails_X* SyncClubDetails(uint64_t ClubID);
	class UTAsyncResult__ClubDetails_X* GetClubDetails(uint64_t ClubID);
	void EventPlayerSynced(class UOnlineClubProvider_X* Provider, struct FUniqueNetId PlayerID);
	void EventSyncComplete(class UOnlineClubProvider_X* Provider);
};

// Class ProjectX.__OnlineClubProvider_X__SyncClubDetails_F1EFD8394B886EE18262ECABB50403A2
// 0x0010 (0x0060 - 0x0070)
class U__OnlineClubProvider_X__SyncClubDetails_F1EFD8394B886EE18262ECABB50403A2 : public UObject
{
public:
	uint64_t                                           ClubID;                                        // 0x0060 (0x0008) [0x0001000000000000]               
	class URPC_GetClubDetails_X*                       RPC;                                           // 0x0068 (0x0008) [0x0001000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlineClubProvider_X__SyncClubDetails_F1EFD8394B886EE18262ECABB50403A2");
		}

		return uClassPointer;
	};

	void __OnlineClubProvider_X__SyncClubDetails_48CE25024FA966DCDCF049B9CE5E9186(class URPC_X* _);
	bool __OnlineClubProvider_X__SyncClubDetails_F1EFD8394B886EE18262ECABB50403A2(class URPC_GetClubDetails_X* R);
};

// Class ProjectX.__OnlineClubProvider_X__SyncPlayerClubDetails_D1A2872248ABE8B8DC57AE9C0B406FD1
// 0x0050 (0x0060 - 0x00B0)
class U__OnlineClubProvider_X__SyncPlayerClubDetails_D1A2872248ABE8B8DC57AE9C0B406FD1 : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x0060 (0x0048) [0x0001000000400000] (CPF_NeedCtorLink)
	class URPC_GetPlayerClubDetails_X*                 RPC;                                           // 0x00A8 (0x0008) [0x0001000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlineClubProvider_X__SyncPlayerClubDetails_D1A2872248ABE8B8DC57AE9C0B406FD1");
		}

		return uClassPointer;
	};

	void __OnlineClubProvider_X__SyncPlayerClubDetails_866582F84489FFAC383C1B8914D9A02C(class URPC_X* _);
	bool __OnlineClubProvider_X__SyncPlayerClubDetails_D1A2872248ABE8B8DC57AE9C0B406FD1(class URPC_GetPlayerClubDetails_X* R);
};

// Class ProjectX.RPC_GetPlayerClubDetails_X
// 0x0048 (0x00F8 - 0x0140)
class URPC_GetPlayerClubDetails_X : public URPC_ClubDetailsBase_X
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x00F8 (0x0048) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_GetPlayerClubDetails_X");
		}

		return uClassPointer;
	};

	class URPC_GetPlayerClubDetails_X* SetPlayerID(struct FUniqueNetId InPlayerId);
};

// Class ProjectX.__OnlineGame_X__CheckPsyNetConnection_1FEDDD4146B9CFD4267F70AA249CF39E
// 0x0008 (0x0060 - 0x0068)
class U__OnlineGame_X__CheckPsyNetConnection_1FEDDD4146B9CFD4267F70AA249CF39E : public UObject
{
public:
	class UAsyncTask*                                  Task;                                          // 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlineGame_X__CheckPsyNetConnection_1FEDDD4146B9CFD4267F70AA249CF39E");
		}

		return uClassPointer;
	};

	void __OnlineGame_X__CheckPsyNetConnection_1FEDDD4146B9CFD4267F70AA249CF39E(class UOnlinePlayerAuthentication_X* Auth);
};

// Class ProjectX.__OnlineGame_X__GetOnlinePlayerFromEpicId_57E9FD254A2A73C8257F13BD4FCE1FB7
// 0x0010 (0x0060 - 0x0070)
class U__OnlineGame_X__GetOnlinePlayerFromEpicId_57E9FD254A2A73C8257F13BD4FCE1FB7 : public UObject
{
public:
	struct FString                                     EpicAccountId;                                 // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlineGame_X__GetOnlinePlayerFromEpicId_57E9FD254A2A73C8257F13BD4FCE1FB7");
		}

		return uClassPointer;
	};

	bool __OnlineGame_X__GetOnlinePlayerFromEpicId_57E9FD254A2A73C8257F13BD4FCE1FB7(class UOnlinePlayer_X* P);
};

// Class ProjectX.__OnlineGameMatchmaking_X__AddRecommendedServers_44C5D4C548B9A3F5DD58B5BFD9B3BB5E
// 0x0004 (0x0060 - 0x0064)
class U__OnlineGameMatchmaking_X__AddRecommendedServers_44C5D4C548B9A3F5DD58B5BFD9B3BB5E : public UObject
{
public:
	float                                              AccPingThreshold;                              // 0x0060 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlineGameMatchmaking_X__AddRecommendedServers_44C5D4C548B9A3F5DD58B5BFD9B3BB5E");
		}

		return uClassPointer;
	};

	bool __OnlineGameMatchmaking_X__AddRecommendedServers_44C5D4C548B9A3F5DD58B5BFD9B3BB5E(class URegionPing_X* R);
};

// Class ProjectX.RegionPing_X
// 0x0039 (0x0060 - 0x0099)
class URegionPing_X : public UObject
{
public:
	class URegion_X*                                   Region;                                        // 0x0060 (0x0008) [0x0000000000000000]               
	struct FString                                     RegionID;                                      // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FName                                       Address;                                       // 0x0078 (0x0008) [0x0000000000000000]               
	class UTcpConnection*                              Connection;                                    // 0x0080 (0x0008) [0x0000000000000000]               
	float                                              PingSendTime;                                  // 0x0088 (0x0004) [0x0000000000000000]               
	float                                              Ping;                                          // 0x008C (0x0004) [0x0000000000000000]               
	float                                              AvgPing;                                       // 0x0090 (0x0004) [0x0000000000000000]               
	int32_t                                            PingCount;                                     // 0x0094 (0x0004) [0x0000000000000000]               
	uint8_t                                            PingResult;                                    // 0x0098 (0x0001) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RegionPing_X");
		}

		return uClassPointer;
	};

	void Reset();
};

// Class ProjectX.OnlineGameMatchmakingBase_X
// 0x0080 (0x0098 - 0x0118)
class UOnlineGameMatchmakingBase_X : public UOnline_X
{
public:
	class UCheckReservation_X*                         CheckReservation;                              // 0x0098 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UAsyncTask*                                  StartMatchmakingTask;                          // 0x00A0 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FString                                     PingingRegionsString;                          // 0x00A8 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventFindGameComplete__Delegate;             // 0x00B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventFindGameStatus__Delegate;               // 0x00D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventFindGameError__Delegate;                // 0x00E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventFindGameStateChanged__Delegate;         // 0x0100 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGameMatchmakingBase_X");
		}

		return uClassPointer;
	};

	void HandleRegionsPinged(class UOnlineGameRegions_X* InRegions);
	void HandleGameStarted(class AGRI_X* GRI);
	void HandleStatusUpdate(struct FString NewStatus);
	void HandleJoinGameComplete(unsigned long bSuccess, struct FString FailReason);
	struct FName GetMatchmakingStateName();
	class UMatchmakingMetrics_X* GetMetrics();
	class UCheckReservation_X* CreateCheckReservation();
	void GotoMatchmakingState(struct FName StateName);
	void ClearStartMatchmakingRPC();
	void ClearCheckReservation();
	void OnSearchComplete(unsigned long bCanceled);
	void Cancel();
	bool IsSearching();
	class UOnlineGameMatchmakingBase_X* AddFindGameStateChangedDelegate(struct FScriptDelegate NewDelegate);
	class UOnlineGameMatchmakingBase_X* AddFindGameCompleteDelegate(struct FScriptDelegate HandleFindGameComplete);
	class UOnlineGameMatchmakingBase_X* AddFindGameErrorDelegate(struct FScriptDelegate HandleFindGameError);
	class UOnlineGameMatchmakingBase_X* AddFindGameStatusChangedDelegate(struct FScriptDelegate HandleFindGameStatusChanged);
	void EventFindGameStateChanged(struct FName NewState);
	void EventFindGameError(struct FString NewStatus);
	void EventFindGameStatus(struct FString NewStatus);
	void EventFindGameComplete(unsigned long bCancelled);
};

// Class ProjectX.OnlineGameMatchmaking_X
// 0x00F0 (0x0118 - 0x0208)
class UOnlineGameMatchmaking_X : public UOnlineGameMatchmakingBase_X
{
public:
	TArray<int32_t>                                    PreferredPlaylists;                            // 0x0118 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FString>                             PreferredRegions;                              // 0x0128 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     SearchingString;                               // 0x0138 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     StartSearchFailString;                         // 0x0148 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     FoundServerString;                             // 0x0158 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     PlaylistsHaveChangedString;                    // 0x0168 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     RegionsHaveChangedString;                      // 0x0178 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     MatchmakingAttemptString;                      // 0x0188 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	float                                              MatchmakingStartTime;                          // 0x0198 (0x0004) [0x0000004000002000] (CPF_Transient)
	int32_t                                            MatchmakingBanTime;                            // 0x019C (0x0004) [0x0000004000000000]               
	unsigned long                                      bIgnoreSkill : 1;                              // 0x01A0 (0x0004) [0x0000004000002000] [0x00000001] (CPF_Transient)
	float                                              MatchmakingDisabledDuration;                   // 0x01A4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MatchmakingDisabledUntilTime;                  // 0x01A8 (0x0004) [0x0000004000002000] (CPF_Transient)
	struct FString                                     LastReservationID;                             // 0x01B0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventStartSearch__Delegate;                  // 0x01C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventMatchmakingError__Delegate;             // 0x01D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventMatchmakingCanceledOnPartySizeChanged__Delegate;// 0x01F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGameMatchmaking_X");
		}

		return uClassPointer;
	};

	bool AddRecommendedServers(float PingThreshold, float PingIncrement, float MaxPing);
	void RecordStart(unsigned long bUseRecommendedRegions);
	void StartMatchmaking();
	void UpdateMatchmaking();
	void SendMatchmakingState();
	void HandleError(class UError* Error);
	void HandleMatchmakingStartSuccessRPC(class URPC_StartMatchmaking_X* RPC);
	void HandleStartSearch(class UAsyncTask* Task);
	void OnReceiveGameServer(struct FServerReservationData Reservation);
	void SetupForTimeConstraints();
	void OnPlaylistTimeEnded();
	struct FString __OnlineGameMatchmaking_X__StartSearch_442208284012B4833AC8229A7E57AC3B(class URegionPing_X* R);
	struct FString __OnlineGameMatchmaking_X__GetLocalizedPlaylistsString_41C2A26D4FB752FB2299F893D2CBC237(int32_t Playlist);
	struct FString __OnlineGameMatchmaking_X__GetLocalizedRegionsString_913249794952BDEB4ED40483C7BE4416(class USuperRegion_X* SuperRegion);
	class USuperRegion_X* __OnlineGameMatchmaking_X__GetLocalizedRegionsString_CF3665A14784337BB73197AEA31957A0(class URegion_X* R);
	struct FString __OnlineGameMatchmaking_X__GetDebugSuperRegionString_BF34836F4EE57D38C62CF9B7506BC1CD(class URegionPing_X* R);
	struct FString __OnlineGameMatchmaking_X__AddRecommendedServers_CA07BC2B464735AA5D5A3089B5B4FB4E(class URegionPing_X* R);
	struct FString __OnlineGameMatchmaking_X__AddRecommendedServers_6866A01E4D1825C98262AEA3DEE0E461(class URegionPing_X* R);
	bool __OnlineGameMatchmaking_X__RecordStart_4965E9CF4B54E6950DFF4A9F15AD0260(class URegionPing_X* R);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool IsMatchmakingDisabled();
	void SetSkillIgnored(unsigned long bIgnore);
	void ToggleSkill();
	void ClearMatchmakingBanTime();
	void SetMatchmakingBanTime(int32_t Duration);
	void HandlePartyLeaderChanged(class UOnlineGameParty_X* PartyObject, struct FUniqueNetId NewLeader);
	void HandlePartySizeChanged(class UOnlineGameParty_X* PartyObject, int32_t NewSize, int32_t OldSize);
	void HandlePartyDestroyed(class UOnlineGameParty_X* PartyObject);
	void OnFindGameWarning(struct FString FailReason);
	uint64_t GetGameServerID();
	int32_t SortPlaylists(int32_t A, int32_t B);
	struct FString GetPartyMembersString();
	TArray<class URegionPing_X*> GetSubRegionPings(struct FString SuperRegionID);
	struct FString GetDebugSuperRegionString(class USuperRegion_X* SuperRegion);
	struct FString GetLocalizedRegionsString();
	struct FString GetRegionsString();
	struct FString GetLocalizedPlaylistsString();
	struct FString GetPlaylistsString();
	void OnExit();
	void OnSearchComplete(unsigned long bCanceled);
	void HandleInternetConnectionChanged(unsigned long bConnected);
	class UError* StartSearch(TArray<int32_t> InPreferredPlaylists, TArray<struct FString> InPreferredSuperRegions);
	bool VerifyPlaylist(int32_t InPlaylistID);
	void OnInit();
	void EventMatchmakingCanceledOnPartySizeChanged(class UOnlineGameMatchmaking_X* InMatchMaking);
	void EventMatchmakingError(class UOnlineGameMatchmaking_X* InMatchMaking, class UError* Error);
	void EventStartSearch(class UOnlineGameMatchmakingBase_X* InMatchMaking);
};

// Class ProjectX.__OnlineGameMatchmaking_X__GetSubRegionPings_A3C1917A41F85BA24B66D58FF598B753
// 0x0010 (0x0060 - 0x0070)
class U__OnlineGameMatchmaking_X__GetSubRegionPings_A3C1917A41F85BA24B66D58FF598B753 : public UObject
{
public:
	struct FString                                     SuperRegionID;                                 // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlineGameMatchmaking_X__GetSubRegionPings_A3C1917A41F85BA24B66D58FF598B753");
		}

		return uClassPointer;
	};

	bool __OnlineGameMatchmaking_X__GetSubRegionPings_A3C1917A41F85BA24B66D58FF598B753(class URegionPing_X* R);
};

// Class ProjectX.Region_X
// 0x0040 (0x0060 - 0x00A0)
class URegion_X : public UObject
{
public:
	struct FString                                     SuperRegionID;                                 // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Id;                                            // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Label;                                         // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Secret;                                        // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.Region_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.__OnlineGameMatchmaking_X__OnReceiveGameServer_E64CCCCD4A6239AFEE93EC9BF137F00E
// 0x0080 (0x0060 - 0x00E0)
class U__OnlineGameMatchmaking_X__OnReceiveGameServer_E64CCCCD4A6239AFEE93EC9BF137F00E : public UObject
{
public:
	struct FServerReservationData                      Reservation;                                   // 0x0060 (0x0080) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlineGameMatchmaking_X__OnReceiveGameServer_E64CCCCD4A6239AFEE93EC9BF137F00E");
		}

		return uClassPointer;
	};

	bool __OnlineGameMatchmaking_X__OnReceiveGameServer_E64CCCCD4A6239AFEE93EC9BF137F00E(struct FString R);
};

// Class ProjectX.__OnlineGameParty_X__BroadcastAllLocalPlayers_B11AC37A4BEA1F7F598332AFF1396850
// 0x0178 (0x0060 - 0x01D8)
class U__OnlineGameParty_X__BroadcastAllLocalPlayers_B11AC37A4BEA1F7F598332AFF1396850 : public UObject
{
public:
	struct FPartyMember                                Primary;                                       // 0x0060 (0x0178) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlineGameParty_X__BroadcastAllLocalPlayers_B11AC37A4BEA1F7F598332AFF1396850");
		}

		return uClassPointer;
	};

	bool __OnlineGameParty_X__BroadcastAllLocalPlayers_B11AC37A4BEA1F7F598332AFF1396850(struct FPartyMember PM);
};

// Class ProjectX.OnlineGameParty_X
// 0x04D8 (0x0098 - 0x0570)
class UOnlineGameParty_X : public UOnline_X
{
public:
	TArray<struct FPartyMember>                        PartyMembers;                                  // 0x0098 (0x0010) [0x0000008000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FUniqueLobbyId                              PartyID;                                       // 0x00A8 (0x0010) [0x0000004000002000] (CPF_Transient)
	struct FUniqueNetId                                PartyLeader;                                   // 0x00B8 (0x0048) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            MaxPartySize;                                  // 0x0100 (0x0004) [0x0000000000000002] (CPF_Const)   
	class UOnlineMessageComponent_X*                   MessageComponent;                              // 0x0108 (0x0008) [0x000000000408000A] (CPF_Const | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPartyMessage_SearchStatus_X*                PendingSearchStatus;                           // 0x0110 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UPartyMessage_SearchStatus_X*                NullSearchStatus;                              // 0x0118 (0x0008) [0x0000000000000000]               
	int32_t                                            PartyTimeout;                                  // 0x0120 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	int32_t                                            CurrentPartySize;                              // 0x0124 (0x0004) [0x0000004000002000] (CPF_Transient)
	unsigned long                                      LastbSearchingStatus : 1;                      // 0x0128 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      LastLockStatus : 1;                            // 0x0128 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	unsigned long                                      bPendingIncomingTradeInvite : 1;               // 0x0128 (0x0004) [0x0000004000002000] [0x00000004] (CPF_Transient)
	unsigned long                                      bTradeLocked : 1;                              // 0x0128 (0x0004) [0x0008004000000000] [0x00000008] 
	struct FName                                       LastSearchState;                               // 0x012C (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FPartyJoinMatchSettings                     MatchSettings;                                 // 0x0138 (0x0068) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FUniqueNetId                                PendingTradeInvite;                            // 0x01A0 (0x0048) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	uint8_t                                            ProcessingStatus;                              // 0x01E8 (0x0001) [0x0000004000002000] (CPF_Transient)
	struct FString                                     NotInSameOnlineGameError;                      // 0x01F0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     MissingLicenseAgreementError;                  // 0x0200 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	class UPartySequence_InvitedToPlatformParty_X*     SequenceInvitedToPlatformParty;                // 0x0210 (0x0008) [0x0000004000000000]               
	class UPartySequence_PsyNetPartyUpgrade_X*         SequencePsyNetPartyUpgrade;                    // 0x0218 (0x0008) [0x0001004000000000]               
	class UPartySequence_InvitedToPsyNetParty_X*       SequenceInvitedToPsyNetParty;                  // 0x0220 (0x0008) [0x0001004000000000]               
	class UPartyConfig_X*                              PartyConfig;                                   // 0x0228 (0x0008) [0x0000800000000001] (CPF_Edit)    
	class UPsyNetConfig_X*                             Config;                                        // 0x0230 (0x0008) [0x0000800000000001] (CPF_Edit)    
	class UOnlineLobbyInterface*                       PlatformLobbyInterface;                        // 0x0238 (0x0010) [0x0000004000000000]               
	uint8_t                                            PlatformLobbyInterface_UnknownData00[0x8];     // 0x0240 (0x0008) FIX WRONG SIZE OF PREVIOUS PROPERTY [Original: 0x0010, Missing: 0x0008]
	class UParties_X*                                  PsyNetLobbyInterface;                          // 0x0248 (0x0008) [0x0001004000000000]               
	int32_t                                            CreatePartyLocalPlayerNum;                     // 0x0250 (0x0004) [0x0000004000000000]               
	class UCrossplayConfig_X*                          CrossplayConfig;                               // 0x0258 (0x0008) [0x0000800000000000]               
	class UFindServerTask_X*                           FindServerTask;                                // 0x0260 (0x0008) [0x0000000000000000]               
	struct FString                                     JoinLobbyError;                                // 0x0268 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	TArray<int32_t>                                    LeaderPreferredPlaylists;                      // 0x0278 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPartyCreated__Delegate;                 // 0x0288 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnPartyInviteAccepted__Delegate;             // 0x02A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerInvited__Delegate;                // 0x02B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerInvitedSilent__Delegate;          // 0x02D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPartyChanged__Delegate;                 // 0x02E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPartySizeChanged__Delegate;             // 0x0300 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPartyLeaderChanged__Delegate;           // 0x0318 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSearchStatusChanged__Delegate;          // 0x0330 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPartyError__Delegate;                   // 0x0348 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPartyJoinGameError__Delegate;           // 0x0360 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPartyJoinGameSuccess__Delegate;         // 0x0378 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPartyDestroyed__Delegate;               // 0x0390 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventConfirmJoinGameMessage__Delegate;       // 0x03A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLeaderLeftOnlineGame__Delegate;         // 0x03C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventProcessingStatusChanged__Delegate;      // 0x03D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDisableCrossPlayChanged__Delegate;      // 0x03F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventTradingStatusChanged__Delegate;         // 0x0408 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventInviteToTrade__Delegate;                // 0x0420 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAcceptedInviteToTrade__Delegate;        // 0x0438 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventCloseInviteToTrade__Delegate;           // 0x0450 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventRemotePlayerReadyToLock__Delegate;      // 0x0468 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventRemotePlayerNotReadyToLock__Delegate;   // 0x0480 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventRemotePlayerReadyToConfirm__Delegate;   // 0x0498 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventTradeConfirmed__Delegate;               // 0x04B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAnotherInviteToTrade__Delegate;         // 0x04C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerInMatchChanged__Delegate;         // 0x04E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerIsCurrentlyTrading__Delegate;     // 0x04F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventStartedJoinFriend__Delegate;            // 0x0510 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAddPartyMember__Delegate;               // 0x0528 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventRemovePartyMember__Delegate;            // 0x0540 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __bTradeLocked__ChangeNotify;                  // 0x0558 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGameParty_X");
		}

		return uClassPointer;
	};

	void __OnlineGameParty_X__HandleJoinLobby_A6C1A7DB45F0F4016193DDB91C04417C();
	void __OnlineGameParty_X__UpdatePartyInfo_518E83B5440168F46830CEBABF0AB951(struct FPartyMember PM);
	bool __OnlineGameParty_X__UpdatePartyInfo_62D37E604C74DFE76B130A9033548459(struct FLobbyMember LM);
	bool __OnlineGameParty_X__BroadcastAllLocalPlayers_E1DB02414BD23A795D89F78A0A8BBC72(struct FPartyMember PM);
	struct FUniqueNetId __OnlineGameParty_X__GetPlayersWithPrimaryMemberID_D442EA4B468ADFD256EB2A97B04DF8F2(struct FPartyMember Member);
	void __bTradeLocked__ChangeNotifyFunc();
	void HandlePlatformPartyIdChanged(class UPartyPlatformSession_X* Session);
	void HandleSetPlatformPartyMessage(class UOnlineMessageComponent_X* Component, class UPartyMessage_SetPlatformParty_X* Message);
	void RequestRejoinPartyInfo();
	class UError* CheckForPlayerInviteError(struct FUniqueNetId PlayerID);
	void SendPartyInvite(struct FUniqueNetId PlayerID);
	void HandlePartyConfigChanged();
	void HandleMessageForMetrics(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void HandlePlayerTradeComplete(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void SendPlayerTradeComplete();
	void SendPlayerTradeCompleteAndClear(unsigned long bWasCanceled);
	void ConfirmTrade();
	void HandleReadyToConfirmTrade(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void ReadyToConfirmTrade();
	void LockTrade();
	void UnlockTrade();
	void HandleReadyToLockTrade(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void ReadyToLockTrade(unsigned long bReady);
	void SetPartyMemberLockedTrade(int32_t PartyMemberIndex, unsigned long bLocked);
	void SetPartyMessageHandlerTradeProductUpdate(unsigned long bAddHandler);
	void ClearLocalTradingPlayer(unsigned long bWasCanceled);
	bool ClearTradingPartyMember(struct FPartyMember& TradingMember);
	bool ClearTradingPlayer(struct FUniqueNetId PartyMemberID);
	void ClearAllTradingPlayers();
	void HandleAcceptInviteToTrade(class UOnlineMessageComponent_X* Component, class UObject* Message);
	bool CanAcceptTrade();
	void NotifyPlayerTradeAcceptanceFailed(struct FUniqueNetId& TradingMemberId);
	void AcceptInviteToTrade(struct FUniqueNetId Inviter, unsigned long bAccepted);
	struct FUniqueNetId GetTradingPartner();
	struct FGuid ResolveGuids(struct FGuid& A, struct FGuid& B);
	void ClearPendingTrade();
	void SetPendingTrade(struct FUniqueNetId& PendingTarget);
	struct FGuid GetTradingPlayerTradeID();
	struct FUniqueNetId GetTradingPlayerID();
	struct FString GetTradingPlayerName();
	void HandleInviteToTradeMessage(class UOnlineMessageComponent_X* Component, class UPartyMessage_InviteToTrade_X* Message);
	void InvitePlayerToTrade(struct FUniqueNetId InMemberId);
	bool IsPlayerTrading(struct FUniqueNetId InMemberId);
	struct FUniqueNetId GetPlayerTradingTarget(struct FUniqueNetId InMemberId);
	void SetPlayersTrading(struct FUniqueNetId InMemberId1, struct FUniqueNetId InMemberId2, unsigned long bTrading);
	void ClearPartyMemberTradingInfo(int32_t MemberIndex);
	struct FString GetMemberName(struct FUniqueNetId InMemberId);
	TArray<struct FUniqueNetId> GetPlayersWithPrimaryMemberID(struct FUniqueNetId InPrimaryID);
	TArray<struct FUniqueNetId> GetLocalMemberIDs();
	TArray<struct FUniqueNetId> GetOrderedPartyMemberIDs();
	TArray<struct FUniqueNetId> GetPartyMemberIDs();
	void HandleSessionCreated();
	bool IsProcessing();
	void SetProcessingStatus(uint8_t Status);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	struct FString GetPlayerRatingString(struct FUniqueNetId PlayerID, int32_t Playlist);
	void OnPartyError(class UError* Error);
	void HandlePartyError(struct FString Error);
	void OnPartyChanged(uint8_t NewProcessingStatus);
	bool TryGetValueInt(struct FString Key, TArray<struct FLobbyMetaData>& MetaData, int32_t& Value);
	bool PartyHasDisableCrossPlay();
	void KickForCrossplayDisabled(struct FUniqueNetId MemberId);
	bool HasMultiplePlatforms();
	void KickCrossplayDisabledMembers();
	void SetCrossPlayTextChatForMember(struct FUniqueNetId PartyMemberID, uint8_t CrossChatState);
	void BroadcastCrossTextChatState();
	void HandleCrossPlatformTextChatMessage(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void SetDisableCrossPlayForMember(struct FUniqueNetId PartyMemberID, unsigned long bDisableCrossPlay);
	void HandleDisableCrossPlayMessage(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void BroadcastDisableCrossPlay();
	struct FString GetAnyLoggedInRestrictionPlayerName();
	struct FString GetAnyAppOwnerRestrictionPlayerName();
	struct FString GetMatchmakingRestrictionPlayerName(uint8_t Restriction);
	struct FString GetMatchmakingRestrictionError();
	bool IsPlayerInMainMenu(struct FUniqueNetId MemberId);
	bool IsPlayerInMatch(struct FUniqueNetId MemberId);
	void SetAvailableForMatchmakingForMember(struct FUniqueNetId PartyMemberID, int32_t MatchmakeRestrictions);
	void HandleMatchmakingAvailability(class UOnlineMessageComponent_X* Component, class UObject* Message);
	int32_t BuildMatchmakingRestrictions();
	void BroadcastMatchmakingAvailabilityDelayed();
	void BroadcastMatchmakingAvailability();
	void BroadcastAllLocalPlayers();
	void BroadcastLocalPlayersDelayed();
	void BroadcastLocalPlayers();
	bool ShouldLeavePartyOnDisconnect();
	void HandlePsyNetLoginChanged(class UOnlinePlayerAuthentication_X* Auth);
	void HandleLocalPlayerLoginStatusChanged(class UOnlinePlayer_X* Player);
	void HandleLocalPlayerLeave(class ULocalPlayer* Player);
	void UpdatePartyMember(class ULocalPlayer_X* Player);
	void HandleOnlinePlayerNameChanged(class UOnlinePlayer_X* Player);
	void HandleLocalPlayerJoin(class ULocalPlayer* Player);
	void ProcessLocalPlayersMessage(class UPartyMessage_LocalPlayers_X* Message);
	void HandleLocalPlayers(class UOnlineMessageComponent_X* Component, class UObject* ObjMessage);
	bool AllowSplitScreenPlayer(int32_t ControllerId, class UError*& OutError);
	bool HasPartyMembers();
	int32_t GetPartySize();
	void HandleClientReservationMessage_ConnectionValid(struct FServerReservationData Reservation, struct FJoinMatchSettings Settings);
	void HandleClientReservationMessage(class UIReservationConnection_X* Connection, class UClientReservationMessage_X* Message);
	void HandleSearchStatus(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void BroadcastSearchStatus();
	class UPartyMessage_SearchStatus_X* GetSearchStatusMessage();
	bool TogglePartyLock();
	int32_t GetMaxPartySize();
	bool AllowPartySize(int32_t InSize);
	bool IsPartyOverFull();
	bool AllowNewMember();
	void UpdatePartyLock();
	void HandleFindGameStateChanged(struct FName NewState);
	void ClearLastServerAddress();
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	void OnNewSettingsChosen(int32_t PlaylistId);
	void OnNewGame();
	void SetMatchmakingSearching(unsigned long bState);
	void SetSearchState(struct FName SearchState);
	int32_t GetLocalMemberIndex();
	struct FUniqueNetId GetLocalMemberId();
	bool IsMemberLocal(struct FUniqueNetId MemberId);
	bool HasRemoteMember();
	void OnPartyLeaderChanged();
	class UError* GetKickedFromPartyError(uint8_t Reason);
	void KickedFromParty(uint8_t Reason);
	void HandleKickMessage(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void HandleLobbySettingsUpdateMessage(class UOnlineMessageComponent_X* Component, class UPartyMessage_LobbySettings_X* LobbySettingsMessage);
	void HandleLobbyDestroyed(uint8_t Reason, struct FUniqueLobbyId& LobbyId);
	void HandleLobbyReceiveBinaryData(int32_t MemberIndex, struct FActiveLobbyInfo& LobbyInfo, TArray<uint8_t>& Data);
	void RemoveAllPartyMembers();
	void RemovePartyMemberByLocalPlayer(class ULocalPlayer* Player);
	void RemovePartyMemberByIDWithNotify(struct FUniqueNetId MemberId);
	void RemovePartyMemberByID(struct FUniqueNetId MemberId);
	int32_t AddPartyMember(struct FUniqueNetId PrimaryMemberId, struct FUniqueNetId MemberId, struct FString MemberName, int32_t ControllerId);
	void OnEditExistingPartyMember(int32_t PartyMemberIdx);
	void OnAddNewPartyMember(int32_t PartyMemberIdx);
	void UpdatePartyInfo(struct FActiveLobbyInfo& Lobby);
	void UpdatePartyLeader(struct FActiveLobbyInfo& Lobby);
	void HandleLobbySettingsUpdated(struct FActiveLobbyInfo& Lobby);
	void OnNewLobby();
	void BroadcastPartyInfo();
	void HandleJoinLobby_ConnectionValid();
	void HandleJoinLobby(unsigned long bWasSuccessful, struct FString Error, struct FActiveLobbyInfo& LobbyInfo, struct FUniqueLobbyId& LobbyUID);
	class UError* GetJoinPartyError(struct FActiveLobbyInfo& LobbyInfo);
	class UError* CheckForJoinPartyError(struct FActiveLobbyInfo& LobbyInfo);
	void BroadcastStateDelayed();
	void BroadcastState();
	void CheckForJoiningPlayerKick(struct FUniqueNetId PlayerID);
	void HandleLobbyMemberStatusUpdate(int32_t MemberIndex, int32_t InstigatorIndex, struct FString Status, struct FActiveLobbyInfo& LobbyInfo);
	void CancelJoinGameFromPartyDestroyed(class UOnlineGameParty_X* PartyObject);
	void HandlePartyJoinGameComplete(unsigned long bSuccess, struct FString FailReason);
	void HandleFindServerError(class UError* Error);
	void HandleFindServer(struct FServerReservationData Reservation, struct FJoinMatchSettings Settings);
	void HandleConfirmJoinGame_ConnectionValid(struct FPartyJoinMatchSettings InSettings);
	void HandleConfirmJoinGame(struct FPartyJoinMatchSettings InSettings);
	bool JoinFriend(struct FUniqueNetId PartyMemberID);
	bool WantsToFollowTheLeaderOutOfGame();
	bool IsInSameMatch(struct FUniqueNetId PartyMemberA, struct FUniqueNetId PartymemberB);
	void HandlePartyJoinGame(class UOnlineMessageComponent_X* Component, class UPartyMessage_JoinGame_X* Message);
	bool CanBroadcastMatchmakingMessages();
	void BroadcastCancelJoinMessage();
	void BroadcastPartyServer();
	void HandleServerReserved();
	void HandleJoinGameComplete(unsigned long bSuccess, struct FString FailReason);
	struct FPartyMemberServer GetPartyMemberServer();
	void HandlePartyMemberJoinGame(class UOnlineMessageComponent_X* Component, class UPartyMessage_PartyMemberJoinGame_X* MessageObject);
	bool ClearServersForPostGameRankedMatch();
	bool SetPartyMemberJoinGame(struct FUniqueNetId& PlayerID, struct FPartyMemberServer& Server);
	void BroadcastPartyMemberServer(struct FPartyMemberServer Server);
	void BroadcastLobbySettings(struct FActiveLobbyInfo LobbyInfo);
	bool SetLeader(struct FUniqueNetId NewLeader);
	bool IsPrimaryPlayerIndex(int32_t MemberIdx);
	bool IsPrimaryPlayer(struct FUniqueNetId& PlayerID);
	bool IsPlayerInParty(struct FUniqueNetId& PlayerID);
	bool KickPlayer(struct FUniqueNetId PlayerID, uint8_t Reason);
	bool ShowPlatformInviteUI(uint8_t LocalUserNum);
	struct FString GetShowPlatformInviteUIError();
	bool CanShowPlatformInviteUI();
	bool ShowInviteUI(uint8_t LocalUserNum);
	bool LeaveParty(struct FString Reason);
	bool IsInCurrentGame(struct FUniqueNetId MemberId);
	bool IsPartyLeader();
	bool IsInPartyID(struct FUniqueLobbyId InPartyId);
	bool IsInParty();
	void JoinParty(int32_t LocalPlayerNum, struct FUniqueLobbyId& InPartyId);
	void CheckPartyTimeout();
	void StartPartyTimeout();
	void OnPartyCreated(unsigned long bWasSuccessful, struct FString Error, struct FUniqueLobbyId& InPartyId);
	void CreatePartyInternal_ConnectionChecked(class UError* ConnectionError, class UOnlineLobbyInterface* LobbyInterface, int32_t LocalPlayerNum, struct FScriptDelegate Handler);
	void CreatePartyInternal(class UOnlineLobbyInterface* LobbyInterface, int32_t LocalPlayerNum, struct FScriptDelegate Handler);
	void CreatePlatformParty(int32_t LocalPlayerNum, struct FScriptDelegate Handler);
	void CreateParty(int32_t LocalPlayerNum, struct FScriptDelegate Handler);
	class UOnlineLobbyInterface* GetCreatePartyLobbyInterface();
	bool ShouldCreatePsyNetParty();
	void SetLobbyInterfacePsyNet();
	void SetLobbyInterfacePlatform();
	void ShortCircuitPartyInvitedPrompt(struct FUniqueLobbyId& InLobbyId, struct FUniqueNetId& InviterId);
	void HandlePartySizeTracker(class UOnlineGameParty_X* PartyObject);
	void HandlePrimaryPlayerIdChanged(class UOnlineGameAccount_X* InAccount, struct FUniqueNetId PlayerID);
	class UPartyMetrics_X* GetMetrics();
	void SetLobbyInterface(class UOnlineLobbyInterface* Lobby);
	bool IsUsingPsyNetParty();
	void InitLobbyInterfaces();
	void OnExit();
	void OnInit();
	void EventRemovePartyMember(class UOnlineGameParty_X* PartyObject, struct FUniqueNetId InMemberId);
	void EventAddPartyMember(class UOnlineGameParty_X* PartyObject, struct FUniqueNetId InMemberId);
	void EventStartedJoinFriend();
	void EventPlayerIsCurrentlyTrading(class UOnlineGameParty_X* PartyObject, struct FUniqueNetId InMemberId);
	void EventPlayerInMatchChanged(class UOnlineGameParty_X* PartyObject, struct FUniqueNetId InMemberId);
	void EventAnotherInviteToTrade(class UOnlineGameParty_X* PartyObject, struct FUniqueNetId InMemberId);
	void EventTradeConfirmed(class UOnlineGameParty_X* PartyObject);
	void EventRemotePlayerReadyToConfirm(class UOnlineGameParty_X* PartyObject);
	void EventRemotePlayerNotReadyToLock(class UOnlineGameParty_X* PartyObject);
	void EventRemotePlayerReadyToLock(class UOnlineGameParty_X* PartyObject);
	void EventCloseInviteToTrade(class UOnlineGameParty_X* PartyObject, unsigned long bWasCanceled);
	void EventAcceptedInviteToTrade(class UOnlineGameParty_X* PartyObject);
	void EventInviteToTrade(class UOnlineGameParty_X* PartyObject, struct FUniqueNetId Sender, struct FUniqueNetId Recipient);
	void EventTradingStatusChanged(class UOnlineGameParty_X* PartyObject, struct FUniqueNetId InMemberId1, struct FUniqueNetId InMemberId2, unsigned long bIsPlayerTrading);
	void EventDisableCrossPlayChanged(class UOnlineGameParty_X* PartyObject);
	void EventProcessingStatusChanged(class UOnlineGameParty_X* PartyObject);
	void EventLeaderLeftOnlineGame(class UOnlineGameParty_X* PartyObject);
	void EventConfirmJoinGameMessage(class UOnlineGameParty_X* PartyObject);
	void EventPartyDestroyed(class UOnlineGameParty_X* PartyObject);
	void EventPartyJoinGameSuccess(class UOnlineGameParty_X* PartyObject);
	void EventPartyJoinGameError(class UOnlineGameParty_X* PartyObject, struct FString LocalizedErrorString);
	void EventPartyError(class UOnlineGameParty_X* PartyObject, class UError* Error);
	void EventSearchStatusChanged(class UOnlineGameParty_X* PartyObject, class UPartyMessage_SearchStatus_X* StatusMessage);
	void EventPartyLeaderChanged(class UOnlineGameParty_X* PartyObject, struct FUniqueNetId NewLeader);
	void EventPartySizeChanged(class UOnlineGameParty_X* PartyObject, int32_t NewSize, int32_t OldSize);
	void EventPartyChanged(class UOnlineGameParty_X* PartyObject);
	void EventPlayerInvitedSilent(class UOnlineGameParty_X* PartyObject, struct FScriptDelegate Callback, struct FUniqueLobbyId& InPartyId, struct FUniqueNetId& InviterId);
	void EventPlayerInvited(class UOnlineGameParty_X* PartyObject, struct FScriptDelegate Callback, struct FUniqueLobbyId& InPartyId, struct FUniqueNetId& FriendId);
	void OnPartyInviteAccepted(int32_t LocalPlayerNum, struct FUniqueLobbyId& InPartyId);
	void EventPartyCreated(class UOnlineGameParty_X* PartyObject, unsigned long bWasSuccessful);
};

// Class ProjectX.GRI_X
// 0x03B8 (0x02D8 - 0x0690)
class AGRI_X : public AGameReplicationInfo
{
public:
	int32_t                                            ReplicatedGamePlaylist;                        // 0x02D8 (0x0004) [0x0000004100002020] (CPF_Net | CPF_Transient)
	int32_t                                            ReplicatedGameMutatorIndex;                    // 0x02DC (0x0004) [0x0000004100002020] (CPF_Net | CPF_Transient)
	struct FReplicatedReservationData                  Reservations[0x8];                             // 0x02E0 (0x0300) [0x0000004100402020] (CPF_Net | CPF_Transient | CPF_NeedCtorLink)
	uint64_t                                           GameServerID;                                  // 0x05E0 (0x0008) [0x0000004000002020] (CPF_Net | CPF_Transient)
	unsigned long                                      bGameStarted : 1;                              // 0x05E8 (0x0004) [0x0000004100002020] [0x00000001] (CPF_Net | CPF_Transient)
	unsigned long                                      bGameEnded : 1;                                // 0x05E8 (0x0004) [0x0000000000002000] [0x00000002] (CPF_Transient)
	struct FString                                     MatchGUID;                                     // 0x05F0 (0x0010) [0x0000004100400020] (CPF_Net | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSpawned__Delegate;                      // 0x0600 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventGameDataSelected__Delegate;             // 0x0618 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventReservationsUpdated__Delegate;          // 0x0630 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventServerNameChanged__Delegate;            // 0x0648 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventGameStarted__Delegate;                  // 0x0660 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventMatchGUIDChanged__Delegate;             // 0x0678 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.GRI_X");
		}

		return uClassPointer;
	};

	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void SetMatchGUID(struct FString Id);
	void HandleMatchGUIDChanged(class UOnlineGameDedicatedServer_X* OnlineGameDS);
	bool IsPlaylistRanked();
	class UGameSettingPlaylist_X* GetPlaylist();
	bool PlayerIsInCurrentGame(struct FUniqueNetId MemberId);
	struct FString GetReservationDebugString(struct FReplicatedReservationData Data);
	class UOnlineGameDedicatedServer_X* GetOnlineGameDedicated();
	class UOnlineGame_Base_X* GetOnlineGameBase();
	class UOnlineGame_X* GetOnlineGame();
	bool HasSelectedGameData();
	void SetGameStarted();
	void SetOfflineGameData(struct FName PlaylistName);
	void NotifyOnGameDataSelected(struct FScriptDelegate Callback);
	void SetGameData(int32_t NewPlaylistID, int32_t MutatorIndex);
	void HandleGamePlaylistSet(class UOnlineGameDedicatedServer_X* DedicatedServer);
	void OnReservationsUpdated();
	void SetReservations(TArray<struct FReplicatedReservationData> InReservations);
	struct FReplicatedReservationData ConvertReservation(struct FReservationData Data);
	void UpdateReservations();
	void eventReplicatedEvent(struct FName VarName);
	void eventPostBeginPlay();
	void EventMatchGUIDChanged(class AGRI_X* GRI);
	void EventGameStarted(class AGRI_X* GRI);
	void EventServerNameChanged(class AGRI_X* GRI);
	void EventReservationsUpdated(class AGRI_X* GRI);
	void EventGameDataSelected(int32_t PlaylistId, int32_t MutatorIndex);
	void EventSpawned(class AGRI_X* GRI);
};

// Class ProjectX.PartyMessage_X
// 0x0048 (0x0060 - 0x00A8)
class UPartyMessage_X : public UOnlineMessage_X
{
public:
	struct FUniqueNetId                                Sender;                                        // 0x0060 (0x0048) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartyMessage_X");
		}

		return uClassPointer;
	};

	bool BroadcastOn(class UOnlineLobbyInterface* LobbyInterface, struct FUniqueLobbyId LobbyId);
	bool Broadcast();
};

// Class ProjectX.PartyMessage_SearchStatus_X
// 0x0020 (0x00A8 - 0x00C8)
class UPartyMessage_SearchStatus_X : public UPartyMessage_X
{
public:
	struct FName                                       SearchState;                                   // 0x00A8 (0x0008) [0x0000000000000000]               
	unsigned long                                      bIsSearching : 1;                              // 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray<int32_t>                                    PreferredPlaylists;                            // 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartyMessage_SearchStatus_X");
		}

		return uClassPointer;
	};

	class UPartyMessage_SearchStatus_X* SetPreferredPlaylists(TArray<int32_t>& InPlaylists);
	class UPartyMessage_SearchStatus_X* SetIsSearching(unsigned long bValue);
	class UPartyMessage_SearchStatus_X* SetSearchState(struct FName InSearchState);
};

// Class ProjectX.PartyMessage_LobbySettings_X
// 0x0004 (0x00A8 - 0x00AC)
class UPartyMessage_LobbySettings_X : public UPartyMessage_X
{
public:
	int32_t                                            BuildID;                                       // 0x00A8 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartyMessage_LobbySettings_X");
		}

		return uClassPointer;
	};

	class UPartyMessage_LobbySettings_X* SetBuildID(int32_t InBuildID);
};

// Class ProjectX.PartyMessage_Kick_X
// 0x0049 (0x00A8 - 0x00F1)
class UPartyMessage_Kick_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                KickPlayer;                                    // 0x00A8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            KickReason;                                    // 0x00F0 (0x0001) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartyMessage_Kick_X");
		}

		return uClassPointer;
	};

	class UPartyMessage_Kick_X* SetReason(uint8_t InKickReason);
	class UPartyMessage_Kick_X* SetKicked(struct FUniqueNetId InPlayer);
};

// Class ProjectX.PartyMessage_LocalPlayers_X
// 0x0058 (0x00A8 - 0x0100)
class UPartyMessage_LocalPlayers_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                PrimaryMemberId;                               // 0x00A8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FSimplePartyMember>                  Members;                                       // 0x00F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartyMessage_LocalPlayers_X");
		}

		return uClassPointer;
	};

	void AddMember(struct FPartyMember Member);
	class UPartyMessage_LocalPlayers_X* AddPlayer(struct FUniqueNetId PlayerID, struct FString PlayerName);
	class UPartyMessage_LocalPlayers_X* AddOnlinePlayer(class UOnlinePlayer_X* Player);
	class UPartyMessage_LocalPlayers_X* SetPrimaryMemberId(struct FUniqueNetId InPrimaryMemberId);
	class UPartyMessage_LocalPlayers_X* AddOnlinePlayers();
};

// Class ProjectX.PartyMessage_MatchmakingAvailability_X
// 0x0004 (0x00A8 - 0x00AC)
class UPartyMessage_MatchmakingAvailability_X : public UPartyMessage_X
{
public:
	int32_t                                            MatchmakeRestrictions;                         // 0x00A8 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartyMessage_MatchmakingAvailability_X");
		}

		return uClassPointer;
	};

	class UPartyMessage_MatchmakingAvailability_X* SetMatchmakeRestrictions(int32_t InRestrictions);
};

// Class ProjectX.PartyMessage_JoinGame_X
// 0x0068 (0x00A8 - 0x0110)
class UPartyMessage_JoinGame_X : public UPartyMessage_X
{
public:
	struct FPartyJoinMatchSettings                     Settings;                                      // 0x00A8 (0x0068) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartyMessage_JoinGame_X");
		}

		return uClassPointer;
	};

	class UPartyMessage_JoinGame_X* SetSettings(struct FPartyJoinMatchSettings& InSettings);
};

// Class ProjectX.PartyMessage_PartyMemberJoinGame_X
// 0x0058 (0x00A8 - 0x0100)
class UPartyMessage_PartyMemberJoinGame_X : public UPartyMessage_X
{
public:
	struct FPartyMemberServer                          Server;                                        // 0x00A8 (0x0058) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartyMessage_PartyMemberJoinGame_X");
		}

		return uClassPointer;
	};

	class UPartyMessage_PartyMemberJoinGame_X* SetPartyMemberServer(struct FPartyMemberServer& InServer);
};

// Class ProjectX.PartyMessage_DisableCrossPlay_X
// 0x0004 (0x00A8 - 0x00AC)
class UPartyMessage_DisableCrossPlay_X : public UPartyMessage_X
{
public:
	unsigned long                                      bDisableCrossPlay : 1;                         // 0x00A8 (0x0004) [0x0000000000000000] [0x00000001] 
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartyMessage_DisableCrossPlay_X");
		}

		return uClassPointer;
	};

	class UPartyMessage_DisableCrossPlay_X* SetDisableCrossPlay(unsigned long InDisableCrossplay);
};

// Class ProjectX.PartyMessage_CrossPlayTextChat_X
// 0x0001 (0x00A8 - 0x00A9)
class UPartyMessage_CrossPlayTextChat_X : public UPartyMessage_X
{
public:
	uint8_t                                            CrossChatState;                                // 0x00A8 (0x0001) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartyMessage_CrossPlayTextChat_X");
		}

		return uClassPointer;
	};

	class UPartyMessage_CrossPlayTextChat_X* SetCrossPlayTextChatState(uint8_t InCrossChatState);
};

// Class ProjectX.PartyMessage_InviteToTrade_X
// 0x0048 (0x00A8 - 0x00F0)
class UPartyMessage_InviteToTrade_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                InviteMemberId;                                // 0x00A8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartyMessage_InviteToTrade_X");
		}

		return uClassPointer;
	};

	class UPartyMessage_InviteToTrade_X* SetInviteMemberId(struct FUniqueNetId InMemberId);
};

// Class ProjectX.PartyMessage_AcceptInviteToTrade_X
// 0x005C (0x00A8 - 0x0104)
class UPartyMessage_AcceptInviteToTrade_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                InviteMemberId;                                // 0x00A8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bInviteAccepted : 1;                           // 0x00F0 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FGuid                                       TradeId;                                       // 0x00F4 (0x0010) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartyMessage_AcceptInviteToTrade_X");
		}

		return uClassPointer;
	};

	class UPartyMessage_AcceptInviteToTrade_X* SetTradeId(struct FGuid InTradeId);
	class UPartyMessage_AcceptInviteToTrade_X* SetInviteAccepted(unsigned long bInInviteAccepted);
	class UPartyMessage_AcceptInviteToTrade_X* SetInviteMemberId(struct FUniqueNetId InMemberId);
};

// Class ProjectX.PartyMessage_PlayerTradeComplete_X
// 0x0048 (0x00A8 - 0x00F0)
class UPartyMessage_PlayerTradeComplete_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                TradingMemberId;                               // 0x00A8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartyMessage_PlayerTradeComplete_X");
		}

		return uClassPointer;
	};

	class UPartyMessage_PlayerTradeComplete_X* SetTradingMemberId(struct FUniqueNetId InMemberId);
};

// Class ProjectX.PartyMessage_SetPlatformParty_X
// 0x0010 (0x00A8 - 0x00B8)
class UPartyMessage_SetPlatformParty_X : public UPartyMessage_X
{
public:
	struct FUniqueLobbyId                              PlatformPartyID;                               // 0x00A8 (0x0010) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartyMessage_SetPlatformParty_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.OnlineGameJoinGame_X
// 0x03D8 (0x0098 - 0x0470)
class UOnlineGameJoinGame_X : public UOnline_X
{
public:
	int32_t                                            JoinCountdownTime;                             // 0x0098 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FString                                     FailCommand;                                   // 0x00A0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     LoadingScreenCommand;                          // 0x00B0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UShakeComponent_X*                           JoinGameShake;                                 // 0x00C0 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UReservationBeacon_X*                        ReservationBeacon;                             // 0x00C8 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FString                                     WaitingForPlayersString;                       // 0x00D0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     ReservationNotRespondingString;                // 0x00E0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     ReservationFullString;                         // 0x00F0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     PartyTeamReservationFullString;                // 0x0100 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     NoFriendJoinPrivateMatchString;                // 0x0110 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     BeaconTimedOutString;                          // 0x0120 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     NotAllPlayersJoinedString;                     // 0x0130 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     CanceledString;                                // 0x0140 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     SecurityKeyAcquisitionFailed;                  // 0x0150 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     SecurityKeyVerificationFailed;                 // 0x0160 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     SendingReservationMessage;                     // 0x0170 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     JoiningPartyLeadersGame;                       // 0x0180 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     InvalidPassword;                               // 0x0190 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     WrongPlaylistString;                           // 0x01A0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     WrongRankedMatchString;                        // 0x01B0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     MatchEndedString;                              // 0x01C0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     CrossplayDisabled;                             // 0x01D0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     AnotherPlayerCanceled;                         // 0x01E0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FActiveServerData                           ActiveServer;                                  // 0x01F0 (0x00C0) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      bUseNetworkNextDriver : 1;                     // 0x02B0 (0x0004) [0x0001000000000000] [0x00000001] 
	struct FJoinMatchSettings                          Settings;                                      // 0x02B8 (0x0020) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     PendingFailMessage;                            // 0x02D8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<class UPlayer*>                             JoinedPlayers;                                 // 0x02E8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FCustomMatchSettings                        CustomMatch;                                   // 0x02F8 (0x0090) [0x0000004000400000] (CPF_NeedCtorLink)
	TArray<class URPC_GenerateKeys_X*>                 GenerateKeysRPCs;                              // 0x0388 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventJoinGameComplete__Delegate;             // 0x0398 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventStatusUpdate__Delegate;                 // 0x03B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventCountdownStarted__Delegate;             // 0x03C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventCountdownEnded__Delegate;               // 0x03E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventActiveServerChanged__Delegate;          // 0x03F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventServerReserved__Delegate;               // 0x0410 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPasswordRequired__Delegate;             // 0x0428 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventJoiningGame__Delegate;                  // 0x0440 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventMaxPlayersChanged__Delegate;            // 0x0458 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGameJoinGame_X");
		}

		return uClassPointer;
	};

	void HandleCanPlayOnline(class UPrivilegeCheck_X* PrivilegeCheck);
	void RemoveKeysRPC(class URPC_X* RPC);
	void SendGenerateKeysRPCs();
	void HandleGenerateKeys(class URPC_GenerateKeys_X* RPC);
	void SetNetworkKeys(class URPC_GenerateKeys_X* RPC);
	void GoToNextState();
	void HandleCancelJoin(class UIReservationConnection_X* Connection, class UObject* Message);
	void SendReservation();
	void SendReservationMessage();
	class UMatchmakingMetrics_X* GetMetrics();
	void HandleConnection(class UReservationBeacon_X* Beacon, class UIReservationConnection_X* Connection);
	void HandleDisconnection(class UReservationBeacon_X* Beacon, class UIReservationConnection_X* Connection);
	void JoinServer(class UReservationsReadyMessage_X* Message);
	void TravelToServer();
	class UAddReservationMessage_X* CreateReservationMessage();
	void SendServerReservedEvent();
	void StartConnectToServer();
	void CheckAllLocalPlayersHaveJoined(class UPlayer* JoinedPlayer);
	void HandleInternetConnectionChanged(unsigned long bConnected);
	void OnAllPlayersJoined();
	void MigrateToNewServer(struct FServerConnectionInfo ConnectionInfo);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	bool IsInTransition();
	void SendPing();
	void GotoJoinGameState(struct FName NewStateName);
	void HandleConnectionResponse(class UIReservationConnection_X* Connection, class UObject* Message);
	void HandleReservationResponse(class UIReservationConnection_X* Connection, class UObject* Message);
	void HandleConnectionFailed(uint8_t MessageType, struct FString Title, struct FString Message);
	void OnJoinGameComplete(unsigned long bSuccess, struct FString FailReason);
	void SetActiveServerData(struct FActiveServerData& NewValue);
	void ClearActiveServerData();
	void HandleGameInfoSpawned(class AGameInfo_X* InGameInfo);
	bool IsJoiningGame();
	void CancelJoin();
	bool StartJoinCustomMatch(struct FServerReservationData Reservation, struct FJoinMatchSettings JoinSettings, struct FCustomMatchSettings& InSettings);
	bool StartJoinPrivateMatch(struct FServerReservationData Reservation, struct FJoinMatchSettings JoinSettings, struct FCustomMatchSettings& InSettings);
	bool StartJoin(struct FServerReservationData Reservation, struct FJoinMatchSettings JoinSettings);
	void OnInit();
	void EventMaxPlayersChanged(class UOnlineGameJoinGame_X* OnlineGameJoinGame, int32_t MaxPlayers);
	void EventJoiningGame(class UOnlineGameJoinGame_X* OnlineGameJoinGame);
	void EventPasswordRequired();
	void EventServerReserved();
	void EventActiveServerChanged();
	void EventCountdownEnded();
	void EventCountdownStarted();
	void EventStatusUpdate(struct FString NewStatus);
	void EventJoinGameComplete(unsigned long bSuccess, struct FString FailReason);
};

// Class ProjectX.OnlineGameAccount_X
// 0x0040 (0x0098 - 0x00D8)
class UOnlineGameAccount_X : public UOnline_X
{
public:
	class UOnlinePlayer_X*                             PrimaryPlayer;                                 // 0x0098 (0x0008) [0x0000004000002000] (CPF_Transient)
	float                                              UpdateCurrentGameTaskTimer;                    // 0x00A0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            CurrentPlaylistId;                             // 0x00A4 (0x0004) [0x0000004000002000] (CPF_Transient)
	struct FScriptDelegate                             __EventPrimaryPlayerIdChanged__Delegate;       // 0x00A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventCurrentPlaylistSet__Delegate;           // 0x00C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGameAccount_X");
		}

		return uClassPointer;
	};

	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void OnMainMenuOpened();
	int32_t GetNumLocalPlayers();
	void SendUpdatePlayerCurrentGameRPC();
	void SendUpdatePlayerCurrentGameRequest();
	void UpdateCurrentGame();
	void ClearCurrentPlaylist();
	void SetCurrentPlaylist(int32_t PlaylistId);
	void HandleActiveServerChanged();
	void HandlePsyNetConnectionChanged(class UPsyNetConnection_X* C);
	void HandlePlayerLoginStatusChanged(class UOnlinePlayer_X* Player);
	void OnPrimaryPlayerIdChanged();
	void SetPrimaryPlayer(class UOnlinePlayer_X* Player);
	void OnInit();
	void EventCurrentPlaylistSet(class UOnlineGameAccount_X* InAccount, class UGameSettingPlaylist_X* NewPlaylist);
	void EventPrimaryPlayerIdChanged(class UOnlineGameAccount_X* InAccount, struct FUniqueNetId PlayerID);
};

// Class ProjectX.PartySequence_InvitedToPlatformParty_X
// 0x0000 (0x0060 - 0x0060)
class UPartySequence_InvitedToPlatformParty_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartySequence_InvitedToPlatformParty_X");
		}

		return uClassPointer;
	};

	void HandleJoinPlatformLobby(unsigned long bWasSuccessful, struct FString Error, struct FActiveLobbyInfo& LobbyInfo, struct FUniqueLobbyId& LobbyUID);
	void JoinPlatformPartyCallback(int32_t LocalPlayerNum, struct FUniqueLobbyId& InLobbyId);
	void HandlePlayerInvited(unsigned long bAccepted, struct FUniqueLobbyId& InLobbyId, struct FUniqueNetId& FriendId);
	void Init();
};

// Class ProjectX.Parties_X
// 0x02B8 (0x0060 - 0x0318)
class UParties_X : public UObject
{
public:
	struct FActiveLobbyInfo                            ActiveLobby;                                   // 0x0060 (0x0030) [0x0001008000400000] (CPF_NeedCtorLink)
	struct FUniqueLobbyId                              LastActiveLobby;                               // 0x0090 (0x0010) [0x0001004000000000]               
	struct FUniqueNetId                                PartyLeaderID;                                 // 0x00A0 (0x0048) [0x0001004000400000] (CPF_NeedCtorLink)
	class UPsyNet_X*                                   PsyNet;                                        // 0x00E8 (0x0008) [0x0001800000000000]               
	class UOnlineGameParty_X*                          OnlineGameParty;                               // 0x00F0 (0x0008) [0x0001800000000000]               
	class UPartyMessageQueue_X*                        MessageQueue;                                  // 0x00F8 (0x0008) [0x0001000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPsyNetConnection_X*                         PsyNetConnection;                              // 0x0100 (0x0008) [0x0001004000000000]               
	class UPsyNetChannel_X*                            PsyNetChannel;                                 // 0x0108 (0x0008) [0x0001004000000000]               
	class UPsyNetServiceSubscriptions_X*               Subscriptions;                                 // 0x0110 (0x0008) [0x0001004004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPartyPlatformSession_X*                     PlatformSession;                               // 0x0118 (0x0008) [0x0001004000000000]               
	class UPartySequence_CreateParty_X*                SequenceCreateParty;                           // 0x0120 (0x0008) [0x0001004000000000]               
	class UPartySequence_JoinParty_X*                  SequenceJoinParty;                             // 0x0128 (0x0008) [0x0001004000000000]               
	class UPartySequence_LeaveParty_X*                 SequenceLeaveParty;                            // 0x0130 (0x0008) [0x0001004000000000]               
	class UPartySequence_InviteToParty_X*              SequenceInviteToParty;                         // 0x0138 (0x0008) [0x0001004000000000]               
	unsigned long                                      bRejoiningParty : 1;                           // 0x0140 (0x0004) [0x0001000000000000] [0x00000001] 
	float                                              SecondToWaitForPerConReconnect;                // 0x0144 (0x0004) [0x0001000000000001] (CPF_Edit)    
	struct FString                                     PartySetting_PsyNetPartyId;                    // 0x0148 (0x0010) [0x0001000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     PartySetting_JoinKey;                          // 0x0158 (0x0010) [0x0001000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventShowInviteUI__Delegate;                 // 0x0168 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLobbyInviteComplete__Delegate;          // 0x0180 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnCreateLobbyComplete__Delegate;             // 0x0198 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyError__Delegate;                      // 0x01B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbySessionCreated__Delegate;             // 0x01C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFindLobbiesComplete__Delegate;             // 0x01E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnJoinLobbyComplete__Delegate;               // 0x01F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbySettingsUpdate__Delegate;             // 0x0210 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyMemberSettingsUpdate__Delegate;       // 0x0228 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyMemberStatusUpdate__Delegate;         // 0x0240 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyReceiveMessage__Delegate;             // 0x0258 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyReceiveBinaryData__Delegate;          // 0x0270 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyJoinGame__Delegate;                   // 0x0288 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyInvite__Delegate;                     // 0x02A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLobbyInvitePending__Delegate;           // 0x02B8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnLobbyDestroyed__Delegate;                  // 0x02D0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPartyChatRecieved__Delegate;            // 0x02E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnHostStartPlayTogether__Delegate;           // 0x0300 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.Parties_X");
		}

		return uClassPointer;
	};

	void __Parties_X__CreateLobby_336EDA7C4C943601D0C62CBE00F54A91(class UError* Error);
	void __Parties_X__HandlePsyNetPartyJoined_68A354A849ADEDEAA7AD86BBCA84A438(struct FPsyNetPartyMember Member);
	void __Parties_X__SetLobbyOwner_703C222B42A26EFA119FDFB1A91518CA(class URPC_PartyChangeOwner_X* RPC);
	void HandlePsyNetPartyInviteAccepted(struct FString PartyID);
	struct FString GetPsyNetPartyID();
	struct FUniqueNetId FindPartyLeaderID(TArray<struct FPsyNetPartyMember>& Members);
	void HandleOwnerChanged(class UPsyNetService_PartyOwnerChanged_X* Notification);
	void HandleChatNotification(class UPsyNetService_PartyChat_X* Notifications);
	void HandleSystemNotification(class UPsyNetService_PartySystem_X* Notifications);
	void HandleUserKicked(class UPsyNetService_PartyUserKicked_X* Notification);
	void HandleUserDisconnected(class UPsyNetService_PartyUserDisconnected_X* Notification);
	void HandleUserLeft(class UPsyNetService_PartyUserLeft_X* Notification);
	void HandleUserJoined(class UPsyNetService_PartyUserJoined_X* Notification);
	void HandleMemberStatusUpdate(struct FUniqueNetId MemberUID, struct FString Status);
	void HandleUserInvitedResponse(struct FUniqueLobbyId LobbyId, struct FUniqueNetId ForUserId, unsigned long bAccepted);
	void HandleUserInvited(class UPsyNetService_PartyUserInvited_X* Notifications);
	void SetRejoiningParty(unsigned long bRejoining);
	void HandleChannelClosed(class UPsyNetChannel_X* InChannel);
	class UPsyNetChannel_X* CreatePsyNetChannel(struct FUniqueLobbyId PsyNetPartyId);
	void SetPsyNetSubscriptions(class UPsyNetServiceSubscriptions_X* InSubscriptions);
	void SetPsyNetChannel(class UPsyNetChannel_X* InChannel);
	void TimeoutPerconReconnect();
	void SetPsyNetConnection(class UPsyNetConnection_X* InConnection);
	void ClearLobbyData();
	void DestroyLobby(uint8_t Reason);
	void HandlePerConDisconnected(class UPsyNetConnection_X* Connection);
	void HandlePerConConnected(class UPsyNetConnection_X* Connection);
	void HandlePartyInfoFail(class URPC_X* RPC);
	void HandlePartyInfoSuccess(class URPC_PartyInfo_X* RPC_PartyInfo);
	void GetPartyInfo();
	class UOnlinePlayer_X* GetPrimaryPlayer();
	bool IsInLobby();
	struct FUniqueLobbyId CreatePsyNetPartyID(struct FString S);
	void ClearHostStartPlayTogetherDelegate(struct FScriptDelegate InDelegate);
	void AddHostStartPlayTogetherDelegate(struct FScriptDelegate InDelegate);
	void OnHostStartPlayTogether(uint8_t LocalUserNum);
	int32_t FindMemberId(struct FLobbyMember& MemberData);
	int32_t PlayerIdToMemberId(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID, int32_t& MemberIndex);
	struct FUniqueNetId MemberIdToPlayerId(int32_t MemberId, struct FUniqueLobbyId& LobbyId, int32_t& MemberIndex);
	bool KickPlayer(uint8_t Reason, struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID);
	bool ShowInviteUI(uint8_t LocalUserNum, struct FUniqueLobbyId& LobbyId);
	bool InviteToPsyNetLobbyExclusively(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID);
	bool InviteToLobby(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID);
	bool CanInviteToLobby(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID);
	bool InviteToActiveLobby(struct FUniqueNetId& PlayerID);
	bool SetLobbyOwner(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& NewOwnerId);
	bool SetLobbyLock(unsigned long bLocked, struct FUniqueLobbyId& LobbyId);
	bool SetLobbyType(uint8_t Type, struct FUniqueLobbyId& LobbyId);
	bool SetLobbyServer(struct FString ServerIP, struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& ServerUID);
	bool RemoveLobbySetting(struct FString Key, struct FUniqueLobbyId& LobbyId);
	bool SetLobbySetting(struct FString Key, struct FString Value, struct FUniqueLobbyId& LobbyId);
	bool GetLobbyAdmin(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& AdminId);
	bool SendLobbyBinaryData(struct FUniqueLobbyId& LobbyId, TArray<uint8_t>& Data);
	bool SendLobbyMessage(struct FString Message, struct FUniqueLobbyId& LobbyId);
	bool SetLobbyUserSetting(struct FString Key, struct FString Value, struct FUniqueLobbyId& LobbyId);
	bool LeaveLobby(struct FUniqueLobbyId& LobbyId);
	void RemoveLobbyMember(struct FUniqueNetId PlayerUID);
	void AddLobbyMember(struct FUniqueNetId PlayerUID, struct FString Username);
	void HandleLobbyJoinFailed(class UError* InError);
	void HandlePsyNetPartyJoined(struct FUniqueLobbyId PsyNetPartyId, TArray<struct FPsyNetPartyMember>& Members);
	void HandlePsyNetPartyCreated(struct FUniqueLobbyId PsyNetPartyId, TArray<struct FPsyNetPartyMember>& Members);
	bool JoinLobbyWithKey(struct FString PsyNetPartyId, struct FString JoinKey);
	bool JoinLobby(int32_t LocalPlayerNum, struct FUniqueLobbyId& LobbyId);
	bool UpdateFoundLobbies(struct FUniqueLobbyId LobbyId);
	int32_t FindMemberIndex(struct FUniqueNetId MemberId);
	bool FindLobbies(int32_t MaxResults, TArray<struct FLobbyFilter> Filters, TArray<struct FLobbySortFilter> SortFilters, int32_t MinSlots, uint8_t Distance);
	bool CreateLobby(int32_t LocalPlayerNum, int32_t MaxPlayers, uint8_t Type, TArray<struct FLobbyMetaData> InitialSettings);
	void EventPartyChatRecieved(struct FUniqueNetId PlayerID, struct FString Text);
	void ClearLobbyDestroyedDelegate(struct FScriptDelegate LobbyDestroyedDelegate);
	void AddLobbyDestroyedDelegate(struct FScriptDelegate LobbyDestroyedDelegate);
	void OnLobbyDestroyed(uint8_t Reason, struct FUniqueLobbyId& LobbyId);
	void RemoveLocalPlayerFromSession(struct FUniqueNetId& PartyMember);
	void AddLocalPartyMemberToSession(struct FUniqueNetId& NewPartyMember);
	bool GetLobbyMembers(struct FUniqueLobbyId& LobbyId, TArray<struct FLobbyMember>& Members);
	void EventLobbyInvitePending(struct FUniqueLobbyId LobbyId, struct FUniqueNetId FromUserId, struct FString FromUserName);
	void ClearLobbyInviteDelegate(struct FScriptDelegate LobbyInviteDelegate);
	void AddLobbyInviteDelegate(struct FScriptDelegate LobbyInviteDelegate);
	void OnLobbyInvite(unsigned long bAccepted, struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& FriendId);
	void ClearLobbyJoinGameDelegate(struct FScriptDelegate LobbyJoinGameDelegate);
	void AddLobbyJoinGameDelegate(struct FScriptDelegate LobbyJoinGameDelegate);
	void OnLobbyJoinGame(struct FString ServerIP, struct FActiveLobbyInfo& LobbyInfo, struct FUniqueNetId& ServerId);
	void TriggerLobbyReceiveBinaryDataDelegate(int32_t MemberIndex, TArray<uint8_t> Data);
	void ClearLobbyReceiveBinaryDataDelegate(struct FScriptDelegate LobbyReceiveBinaryDataDelegate);
	void AddLobbyReceiveBinaryDataDelegate(struct FScriptDelegate LobbyReceiveBinaryDataDelegate);
	void OnLobbyReceiveBinaryData(int32_t MemberIndex, struct FActiveLobbyInfo& LobbyInfo, TArray<uint8_t>& Data);
	void ClearLobbyReceiveMessageDelegate(struct FScriptDelegate LobbyReceiveMessageDelegate);
	void AddLobbyReceiveMessageDelegate(struct FScriptDelegate LobbyReceiveMessageDelegate);
	void OnLobbyReceiveMessage(int32_t MemberIndex, struct FString Type, struct FString Message, struct FActiveLobbyInfo& LobbyInfo);
	void ClearLobbyMemberStatusUpdateDelegate(struct FScriptDelegate LobbyMemberStatusUpdateDelegate);
	void AddLobbyMemberStatusUpdateDelegate(struct FScriptDelegate LobbyMemberStatusUpdateDelegate);
	void eventTriggerLobbyMemberStatusUpdateDelegates(int32_t MemberIndex, int32_t InstigatorIndex, struct FString Status);
	void OnLobbyMemberStatusUpdate(int32_t MemberIndex, int32_t InstigatorIndex, struct FString Status, struct FActiveLobbyInfo& LobbyInfo);
	void ClearLobbyMemberSettingsUpdateDelegate(struct FScriptDelegate LobbyMemberSettingsUpdateDelegate);
	void AddLobbyMemberSettingsUpdateDelegate(struct FScriptDelegate LobbyMemberSettingsUpdateDelegate);
	void OnLobbyMemberSettingsUpdate(int32_t MemberIndex, struct FActiveLobbyInfo& LobbyInfo);
	void ClearLobbySettingsUpdateDelegate(struct FScriptDelegate LobbySettingsUpdateDelegate);
	void AddLobbySettingsUpdateDelegate(struct FScriptDelegate LobbySettingsUpdateDelegate);
	void OnLobbySettingsUpdate(struct FActiveLobbyInfo& LobbyInfo);
	void ClearJoinLobbyCompleteDelegate(struct FScriptDelegate JoinLobbyCompleteDelegate);
	void AddJoinLobbyCompleteDelegate(struct FScriptDelegate JoinLobbyCompleteDelegate);
	void OnJoinLobbyComplete(unsigned long bWasSuccessful, struct FString Error, struct FActiveLobbyInfo& LobbyInfo, struct FUniqueLobbyId& LobbyId);
	void ClearFindLobbiesCompleteDelegate(struct FScriptDelegate FindLobbiesCompleteDelegate);
	void AddFindLobbiesCompleteDelegate(struct FScriptDelegate FindLobbiesCompleteDelegate);
	void OnFindLobbiesComplete(unsigned long bWasSuccessful, TArray<struct FBasicLobbyInfo>& LobbyList);
	void ClearLobbySessionCreatedDelegate(struct FScriptDelegate LobbySessionCreatedDelegate);
	void AddLobbySessionCreatedDelegate(struct FScriptDelegate LobbySessionCreatedDelegate);
	void OnLobbySessionCreated();
	void ClearLobbyErrorDelegate(struct FScriptDelegate LobbyErrorDelegate);
	void AddLobbyErrorDelegate(struct FScriptDelegate LobbyErrorDelegate);
	void OnLobbyError(struct FString Error);
	void ClearCreateLobbyCompleteDelegate(struct FScriptDelegate CreateLobbyCompleteDelegate);
	void AddCreateLobbyCompleteDelegate(struct FScriptDelegate CreateLobbyCompleteDelegate);
	void OnCreateLobbyComplete(unsigned long bWasSuccessful, struct FString Error, struct FUniqueLobbyId& LobbyId);
	void OnExit();
	void Init();
	void eventConstruct();
	void EventLobbyInviteComplete(unsigned long bSucceeded, struct FUniqueNetId InviteeID, struct FString Error);
	void EventShowInviteUI();
};

// Class ProjectX.PartySequence_PsyNetPartyUpgrade_X
// 0x0000 (0x0060 - 0x0060)
class UPartySequence_PsyNetPartyUpgrade_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartySequence_PsyNetPartyUpgrade_X");
		}

		return uClassPointer;
	};

	void HandleJoinPsyNetLobby(unsigned long bWasSuccessful, struct FString Error, struct FActiveLobbyInfo& LobbyInfo, struct FUniqueLobbyId& LobbyUID);
	void TryUpgrade(struct FActiveLobbyInfo& LobbyInfo, struct FUniqueLobbyId& PlatformLobbyUID);
};

// Class ProjectX.PartySequence_InvitedToPsyNetParty_X
// 0x0000 (0x0060 - 0x0060)
class UPartySequence_InvitedToPsyNetParty_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartySequence_InvitedToPsyNetParty_X");
		}

		return uClassPointer;
	};

	void JoinPsyNetPartyCallback(int32_t LocalPlayerNum, struct FUniqueLobbyId& InLobbyId);
	class UAsyncTask* HandlePlayerInvited(unsigned long bAccepted, struct FUniqueLobbyId& InLobbyId, struct FUniqueNetId& InviterId);
	void HandlePlayerInvitedPrompt(unsigned long bAccepted, struct FUniqueLobbyId& InLobbyId, struct FUniqueNetId& InviterId);
	void HandlePlayerInvitedSilent(struct FUniqueLobbyId& InLobbyId, struct FUniqueNetId& InviterId);
	void Init();
};

// Class ProjectX.PartyPlatformSession_X
// 0x0028 (0x0060 - 0x0088)
class UPartyPlatformSession_X : public UObject
{
public:
	struct FUniqueLobbyId                              PartyID;                                       // 0x0060 (0x0010) [0x0001004000000000]               
	struct FScriptDelegate                             __EventPartyIdChanged__Delegate;               // 0x0070 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartyPlatformSession_X");
		}

		return uClassPointer;
	};

	void ClearPlatformParty();
	void LeaveParty();
	void BroadcastPlatformParty();
	void HandleJoinPlatformParty(struct FUniqueLobbyId InPartyId);
	bool IsInParty();
	void EventPartyIdChanged(class UPartyPlatformSession_X* Session);
};

// Class ProjectX.PartyMetrics_X
// 0x000C (0x0080 - 0x008C)
class UPartyMetrics_X : public UMetricsGroup_X
{
public:
	struct FPartyMetricsData                           PartyData;                                     // 0x0080 (0x000C) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartyMetrics_X");
		}

		return uClassPointer;
	};

	void PartyChannelError(struct FUniqueLobbyId PartyID, struct FUniqueNetId LeaderID, int32_t MissingMessageID);
	void PartyMessage(struct FUniqueLobbyId PartyID, struct FUniqueNetId LeaderID, struct FName MessageType);
	void PartyChanged(struct FUniqueLobbyId PartyID, struct FUniqueNetId LeaderID, unsigned long bLeader, int32_t PartySize, int32_t LocalPlayers, int32_t RemotePlayers);
	struct FPartyMetricsData CreatePartyMetricsData(class UOnlineGameParty_X* Party);
	void RecordPartyChanged(class UOnlineGameParty_X* Party);
	void PartyError(struct FUniqueLobbyId PartyID, struct FUniqueNetId LeaderID, struct FString Error);
	void PartyKickRemotePlayer(struct FUniqueLobbyId PartyID, struct FUniqueNetId LeaderID, struct FString Reason);
	void PartyKickLocalPlayer(struct FUniqueLobbyId PartyID, struct FUniqueNetId LeaderID, struct FString Reason);
	void PartyLeave(struct FUniqueLobbyId PartyID, struct FUniqueNetId LeaderID, struct FString Reason);
	void PartyCreationError(struct FUniqueLobbyId PartyID, struct FUniqueNetId LeaderID, struct FString Error);
	void PartyCreated(struct FUniqueLobbyId PartyID, struct FUniqueNetId LeaderID);
};

// Class ProjectX.__OnlineGameParty_X__CreatePartyInternal_E8AB80DF40420338F5A801B084CF7FF7
// 0x0030 (0x0060 - 0x0090)
class U__OnlineGameParty_X__CreatePartyInternal_E8AB80DF40420338F5A801B084CF7FF7 : public UObject
{
public:
	class UOnlineLobbyInterface*                       LobbyInterface;                                // 0x0060 (0x0010) [0x0000000000000000]               
	uint8_t                                            LobbyInterface_UnknownData00[0x8];             // 0x0068 (0x0008) FIX WRONG SIZE OF PREVIOUS PROPERTY [Original: 0x0010, Missing: 0x0008]
	int32_t                                            LocalPlayerNum;                                // 0x0070 (0x0004) [0x0000000000000000]               
	struct FScriptDelegate                             Handler;                                       // 0x0078 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlineGameParty_X__CreatePartyInternal_E8AB80DF40420338F5A801B084CF7FF7");
		}

		return uClassPointer;
	};

	void __OnlineGameParty_X__CreatePartyInternal_E8AB80DF40420338F5A801B084CF7FF7(class UError* ConnectionError);
};

// Class ProjectX.PartyErrors_X
// 0x0128 (0x0080 - 0x01A8)
class UPartyErrors_X : public UErrorList
{
public:
	class UErrorType*                                  CreatePartyFailed;                             // 0x0080 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  CreatePartyFailedTeamFull;                     // 0x0088 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  CreatePlayerFailedPartyFull;                   // 0x0090 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  InvitePlayerToPartyFailedPartyFull;            // 0x0098 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  JoinPartyFailedPartyFull;                      // 0x00A0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  JoinPartyFailedPartyMatchmaking;               // 0x00A8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  JoinPartyFailedPartyInGame;                    // 0x00B0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  KickedFromParty;                               // 0x00B8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PartyDestroyedConnectionError;                 // 0x00C0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PartyDestroyedSignedOut;                       // 0x00C8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  JoinPartyFailed;                               // 0x00D0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  JoinPartyFailedNotAllowed;                     // 0x00D8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  JoinPartyFailedNotJoinable;                    // 0x00E0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PartyBuildID;                                  // 0x00E8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PartyNotFound;                                 // 0x00F0 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  UserNotOwner;                                  // 0x00F8 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PartyIsFull;                                   // 0x0100 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  CannotAddToParty;                              // 0x0108 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  UserListInvalid;                               // 0x0110 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  InvalidOwner;                                  // 0x0118 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  ChatDisabled;                                  // 0x0120 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  MissingOrExpiredInvite;                        // 0x0128 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  MemberNotFound;                                // 0x0130 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PartyIdConflict;                               // 0x0138 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  CannotKickSelf;                                // 0x0140 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  RegionRestrictedTrade;                         // 0x0148 (0x0008) [0x0001000000000002] (CPF_Const)   
	class UErrorType*                                  CannotCrossPlatformTrade;                      // 0x0150 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  CannotCrossPlayInvite;                         // 0x0158 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  RestrictedPlatformInvite;                      // 0x0160 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  PlatformNotSupported;                          // 0x0168 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  KickedCrossplayDisabled;                       // 0x0170 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  KickedLeaderPartyUp;                           // 0x0178 (0x0008) [0x0001000000000002] (CPF_Const)   
	class UErrorType*                                  VoterDisconnected;                             // 0x0180 (0x0008) [0x0001000000000002] (CPF_Const)   
	class UErrorType*                                  VoteEnded;                                     // 0x0188 (0x0008) [0x0001000000000002] (CPF_Const)   
	class UErrorType*                                  UsePlatformPartySystem;                        // 0x0190 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  InvitationRejected;                            // 0x0198 (0x0008) [0x0000000000000002] (CPF_Const)   
	class UErrorType*                                  SplitScreenNotAllowedInLan;                    // 0x01A0 (0x0008) [0x0000000000000002] (CPF_Const)   
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartyErrors_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.__OnlineGameParty_X__JoinParty_A62CBA0147A02230348584A210A2FCCC
// 0x0018 (0x0060 - 0x0078)
class U__OnlineGameParty_X__JoinParty_A62CBA0147A02230348584A210A2FCCC : public UObject
{
public:
	int32_t                                            LocalPlayerNum;                                // 0x0060 (0x0004) [0x0000000000000000]               
	struct FUniqueLobbyId                              InPartyId;                                     // 0x0068 (0x0010) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlineGameParty_X__JoinParty_A62CBA0147A02230348584A210A2FCCC");
		}

		return uClassPointer;
	};

	void __OnlineGameParty_X__JoinParty_A62CBA0147A02230348584A210A2FCCC(class UPrivilegeCheck_X* PrivilegeCheck);
};

// Class ProjectX.OnlineGamePrivileges_X
// 0x0048 (0x0098 - 0x00E0)
class UOnlineGamePrivileges_X : public UOnline_X
{
public:
	TArray<class UPrivilegeCheck_X*>                   PendingChecks;                                 // 0x0098 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      bIsCheckingPrivileges : 1;                     // 0x00A8 (0x0004) [0x0000004000002000] [0x00000001] (CPF_Transient)
	struct FScriptDelegate                             __EventCheckingPrivilegesChanged__Delegate;    // 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPrivilegeCheckRestriction__Delegate;    // 0x00C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGamePrivileges_X");
		}

		return uClassPointer;
	};

	bool IsCheckingPrivileges();
	void RemoveCallback(struct FScriptDelegate Callback);
	void HandlePrivilegeCheckFinished(class UPrivilegeCheck_X* PrivilegeCheck);
	class UPrivilegeCheck_X* CreatePrivilegeCheck(int32_t ControllerId, struct FScriptDelegate Callback);
	void TryToUseUGC(int32_t ControllerId, struct FScriptDelegate Callback);
	void TryToPlayOnline(int32_t ControllerId, struct FScriptDelegate Callback);
	void TryToUsePsyNet(int32_t ControllerId, struct FScriptDelegate Callback);
	void TryToViewLeaderboards(int32_t ControllerId, struct FScriptDelegate Callback);
	void TryToBrowseInternet(int32_t ControllerId, struct FScriptDelegate Callback);
	void EventPrivilegeCheckRestriction(class UPrivilegeCheck_X* Check);
	void EventCheckingPrivilegesChanged(class UOnlineGamePrivileges_X* PrivilegesObject);
};

// Class ProjectX.OnlineGamePlaylists_X
// 0x0068 (0x0098 - 0x0100)
class UOnlineGamePlaylists_X : public UOnline_X
{
public:
	class UClass*                                      PlaylistClass;                                 // 0x0098 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<class UGameSettingPlaylist_X*>              DownloadedPlaylists;                           // 0x00A0 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	class URankedConfig_X*                             RankedConfig;                                  // 0x00B0 (0x0008) [0x0000800000000001] (CPF_Edit)    
	struct FString                                     CompetitiveCategory;                           // 0x00B8 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     CasualCategory;                                // 0x00C8 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     ExtraModeCategory;                             // 0x00D8 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlaylistsChanged__Delegate;             // 0x00E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGamePlaylists_X");
		}

		return uClassPointer;
	};

	bool __OnlineGamePlaylists_X__GetPrivateMatch_A22E5DC94D81F3317638948357E0D2A2(class UGameSettingPlaylist_X* P);
	bool __OnlineGamePlaylists_X__GetLanMatch_2DF730AB4BB9553195F4AF95E8599D0D(class UGameSettingPlaylist_X* P);
	int32_t __OnlineGamePlaylists_X__GetRankedPlaylistIDs_962930BC435EE73F12C0D5BC0FDBB85A(class UGameSettingPlaylist_X* Playlist);
	bool __OnlineGamePlaylists_X__GetRankedPlaylistIDs_73F0BC694A51F7EE7B5231977E80F80A(class UGameSettingPlaylist_X* Playlist);
	TArray<int32_t> GetRankedPlaylistIDs();
	struct FString GetLocalizedPlaylistIDCategory(int32_t PlaylistId);
	class UGameSettingPlaylist_X* GetLanMatch();
	class UGameSettingPlaylist_X* GetPrivateMatch();
	TArray<struct FName> GetAccessiblePlaylists(TArray<struct FName>& SelectedPlaylists);
	bool IsRankedEnabled();
	bool IsRankedPlaylistID(int32_t PlaylistId);
	bool IsRankedPlaylistName(struct FName PlaylistName);
	bool IsUnrankedPlaylistName(struct FName PlaylistName);
	bool IsStandardPlaylistID(int32_t PlaylistId);
	bool IsStandardPlaylistName(struct FName PlaylistName);
	bool IsNonStandardPlaylistName(struct FName PlaylistName);
	void NamesToIDs(TArray<struct FName>& Names, TArray<int32_t>& Ids);
	struct FString GetPlaylistFriendlyName(int32_t PlaylistId);
	void CopyPlaylistGameTags();
	void HandlePlaylistsChanged(class UObjectProvider* Provider);
	struct FName IdToName(int32_t PlaylistId);
	int32_t NameToId(struct FName PlaylistName);
	int32_t GetTimeRemaining(int32_t PlaylistId);
	bool IsTimeConstrained(int32_t PlaylistId);
	class UGameSettingPlaylist_X* GetPlaylistByID(int32_t PlaylistId);
	class UGameSettingPlaylist_X* GetPlaylistByName(struct FName PlaylistName);
	bool IsPlaylistEnabled(class UGameSettingPlaylist_X* Playlist);
	void NotifyWhenChanged(struct FScriptDelegate Callback);
	void OnInit();
	void EventPlaylistsChanged(class UOnlineGamePlaylists_X* PlaylistsObj);
};

// Class ProjectX.GameSettingPlaylist_X
// 0x00CC (0x0064 - 0x0130)
class UGameSettingPlaylist_X : public UGameSetting_X
{
public:
	struct FString                                     Title;                                         // 0x0068 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     Description;                                   // 0x0078 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     BadgeTitle;                                    // 0x0088 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            PlayerCount;                                   // 0x0098 (0x0004) [0x0000004000000001] (CPF_Edit)    
	unsigned long                                      bStandard : 1;                                 // 0x009C (0x0004) [0x0000004000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bRanked : 1;                                   // 0x009C (0x0004) [0x0000004000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      bSolo : 1;                                     // 0x009C (0x0004) [0x0000004000000001] [0x00000004] (CPF_Edit)
	unsigned long                                      bExtraMode : 1;                                // 0x009C (0x0004) [0x0000004000000001] [0x00000008] (CPF_Edit)
	unsigned long                                      bPrivate : 1;                                  // 0x009C (0x0004) [0x0000004000000001] [0x00000010] (CPF_Edit)
	unsigned long                                      bTournament : 1;                               // 0x009C (0x0004) [0x0000004000000001] [0x00000020] (CPF_Edit)
	unsigned long                                      bApplyQuitPenalty : 1;                         // 0x009C (0x0004) [0x0000004000000001] [0x00000040] (CPF_Edit)
	unsigned long                                      bAllowForfeit : 1;                             // 0x009C (0x0004) [0x0000004000000001] [0x00000080] (CPF_Edit)
	unsigned long                                      bDisableRankedReconnect : 1;                   // 0x009C (0x0004) [0x0000004000000001] [0x00000100] (CPF_Edit)
	unsigned long                                      bIgnoreAssignTeams : 1;                        // 0x009C (0x0004) [0x0000004000000001] [0x00000200] (CPF_Edit)
	unsigned long                                      bAllowBotFills : 1;                            // 0x009C (0x0004) [0x0000004000000001] [0x00000400] (CPF_Edit)
	unsigned long                                      bKickOnMigrate : 1;                            // 0x009C (0x0004) [0x0000004000000001] [0x00000800] (CPF_Edit)
	unsigned long                                      bCheckRankedMatchReservationID : 1;            // 0x009C (0x0004) [0x0000004000000001] [0x00001000] (CPF_Edit)
	unsigned long                                      bServerBroadcastCancellations : 1;             // 0x009C (0x0004) [0x0000004000000001] [0x00002000] (CPF_Edit)
	unsigned long                                      bSkipGameModeVerification : 1;                 // 0x009C (0x0004) [0x0000004000000001] [0x00004000] (CPF_Edit)
	unsigned long                                      bIsMicroEventPlaylist : 1;                     // 0x009C (0x0004) [0x0000004000000001] [0x00008000] (CPF_Edit)
	unsigned long                                      bHasVariablePlayerCount : 1;                   // 0x009C (0x0004) [0x0000004000000001] [0x00010000] (CPF_Edit)
	unsigned long                                      bNew : 1;                                      // 0x009C (0x0004) [0x0000004000000001] [0x00020000] (CPF_Edit)
	unsigned long                                      bAllowClubs : 1;                               // 0x009C (0x0004) [0x0001004000000001] [0x00040000] (CPF_Edit)
	unsigned long                                      bAllowStayAsParty : 1;                         // 0x009C (0x0004) [0x0001000000000001] [0x00080000] (CPF_Edit)
	struct FString                                     PlaylistImageURL;                              // 0x00A0 (0x0010) [0x0000004000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     PlaylistImageTexture;                          // 0x00B0 (0x0010) [0x0000004000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     PlaylistIconActiveURL;                         // 0x00C0 (0x0010) [0x0000004000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     PlaylistIconInactiveURL;                       // 0x00D0 (0x0010) [0x0000004000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            PlaylistId;                                    // 0x00E0 (0x0004) [0x0000004000000001] (CPF_Edit)    
	class UTimeWindow*                                 PlaylistTimeWindow;                            // 0x00E8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<class UPresetMutators_X*>                   PresetMutators;                                // 0x00F0 (0x0010) [0x0000008000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FName                                       MapName;                                       // 0x0100 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FString                                     ServerCommand;                                 // 0x0108 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FName                                       MapSetName;                                    // 0x0118 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<int32_t>                                    PopulationBuckets;                             // 0x0120 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.GameSettingPlaylist_X");
		}

		return uClassPointer;
	};

	bool UseRandomizedNameAndPassword();
	bool ShouldAllowRankedReconnect();
	bool IsLanMatch();
	bool IsTournamentMatch();
	bool IsPrivateMatch();
	bool IsRankedMatch();
	bool ShouldUpdateSkills();
	bool IsValidID(int32_t InPlaylistID);
	bool IsValid();
	struct FString GetLocalizedBadgeTitle();
	struct FString GetLocalizedDescription();
	struct FString GetLocalizedName();
	void Setup(class UPlaylistSettings_X* Settings);
};

// Class ProjectX.__OnlineGameParty_X__HandleConfirmJoinGame_F9CB463644F3604C5F8E668138415676
// 0x0068 (0x0060 - 0x00C8)
class U__OnlineGameParty_X__HandleConfirmJoinGame_F9CB463644F3604C5F8E668138415676 : public UObject
{
public:
	struct FPartyJoinMatchSettings                     InSettings;                                    // 0x0060 (0x0068) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlineGameParty_X__HandleConfirmJoinGame_F9CB463644F3604C5F8E668138415676");
		}

		return uClassPointer;
	};

	void __OnlineGameParty_X__HandleConfirmJoinGame_F9CB463644F3604C5F8E668138415676();
};

// Class ProjectX.__OnlineGameParty_X__HandleConfirmJoinGame_ConnectionValid_5EB6D68342391F46B31E39A58D19952C
// 0x0020 (0x0060 - 0x0080)
class U__OnlineGameParty_X__HandleConfirmJoinGame_ConnectionValid_5EB6D68342391F46B31E39A58D19952C : public UObject
{
public:
	struct FJoinMatchSettings                          Settings;                                      // 0x0060 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlineGameParty_X__HandleConfirmJoinGame_ConnectionValid_5EB6D68342391F46B31E39A58D19952C");
		}

		return uClassPointer;
	};

	void __OnlineGameParty_X__HandleConfirmJoinGame_ConnectionValid_5EB6D68342391F46B31E39A58D19952C(struct FServerReservationData Reservation);
};

// Class ProjectX.FindServerTask_X
// 0x0028 (0x00D0 - 0x00F8)
class UFindServerTask_X : public UAsyncTask
{
public:
	float                                              SearchTimeout;                                 // 0x00D0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class URPC_X*                                      RPC;                                           // 0x00D8 (0x0008) [0x0000000000000000]               
	struct FScriptDelegate                             __EventResult__Delegate;                       // 0x00E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.FindServerTask_X");
		}

		return uClassPointer;
	};

	void HandleClientReservationMessage(class UIReservationConnection_X* Connection, class UClientReservationMessage_X* Message);
	void HandleSearchTimeout();
	void HandleJoinMatchError(class URPC_X* InRPC);
	void Cleanup();
	void Init(class URPC_X* InRPC);
	class UFindServerTask_X* NotifyOnResult(struct FScriptDelegate Callback);
	class UFindServerTask_X* FindUsingRPC(class URPC_X* InRPC);
	class UFindServerTask_X* FindUsingNamePassword(struct FString JoinName, struct FString JoinPassword, struct FName ReservationType);
	void EventResult(struct FServerReservationData OutResult);
};

// Class ProjectX.PartyJoinedEvent_X
// 0x0000 (0x0060 - 0x0060)
class UPartyJoinedEvent_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartyJoinedEvent_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.ClientReservationMessage_X
// 0x0080 (0x0060 - 0x00E0)
class UClientReservationMessage_X : public UBeaconMessage_X
{
public:
	struct FServerReservationData                      Reservation;                                   // 0x0060 (0x0080) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ClientReservationMessage_X");
		}

		return uClassPointer;
	};

	struct FString GetDSRToken();
	struct FString GetReservationID();
};

// Class ProjectX.__OnlineGameParty_X__HandleClientReservationMessage_0B4924BC4EFDB923A4AB9494E233545D
// 0x0028 (0x0060 - 0x0088)
class U__OnlineGameParty_X__HandleClientReservationMessage_0B4924BC4EFDB923A4AB9494E233545D : public UObject
{
public:
	class UClientReservationMessage_X*                 Message;                                       // 0x0060 (0x0008) [0x0000000000000000]               
	struct FJoinMatchSettings                          Settings;                                      // 0x0068 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlineGameParty_X__HandleClientReservationMessage_0B4924BC4EFDB923A4AB9494E233545D");
		}

		return uClassPointer;
	};

	void __OnlineGameParty_X__HandleClientReservationMessage_0B4924BC4EFDB923A4AB9494E233545D();
};

// Class ProjectX.__OnlineGameParty_X__HasMultiplePlatforms_EF65765F48F4DD4712011CA6ADE69362
// 0x0010 (0x0060 - 0x0070)
class U__OnlineGameParty_X__HasMultiplePlatforms_EF65765F48F4DD4712011CA6ADE69362 : public UObject
{
public:
	TArray<uint8_t>                                    PartyLeaderCrossPlayGroup;                     // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlineGameParty_X__HasMultiplePlatforms_EF65765F48F4DD4712011CA6ADE69362");
		}

		return uClassPointer;
	};

	bool __OnlineGameParty_X__HasMultiplePlatforms_EF65765F48F4DD4712011CA6ADE69362(struct FPartyMember P);
};

// Class ProjectX.OnlineGameSkill_X
// 0x0058 (0x0098 - 0x00F0)
class UOnlineGameSkill_X : public UOnline_X
{
public:
	TArray<class UPlaylistSkillCache_X*>               Playlists;                                     // 0x0098 (0x0010) [0x0000008000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FPlayerSeasonRewardProgress>         SeasonRewards;                                 // 0x00A8 (0x0010) [0x0000008000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FSkillSyncRequest>                   SyncRequests;                                  // 0x00B8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FUniqueNetId>                        SkillsSyncedPlayers;                           // 0x00C8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSkillSynced__Delegate;                  // 0x00D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGameSkill_X");
		}

		return uClassPointer;
	};

	void __OnlineGameSkill_X__Construct_9D2B24024D17379AF1C26AA1D1114DF4(class UOnlineGameParty_X* PartyObject);
	void __OnlineGameSkill_X__CreateSyncPlayerSkillRPC_6E74856F464682A04D1ADB84C0EEC3F2(class URPC_GetPartyMemberSkill_X* RPC);
	void __OnlineGameSkill_X__CreateSyncPlayerSkillRPC_A333BC67413547AEE509CE87FADF0A78(class URPC_GetPlayerSkill_X* RPC);
	void __OnlineGameSkill_X__ClearPartyMembersSkill_A11449474E5CDBBCE41A229B5E3F37B7(struct FPartyMember Member);
	void __OnlineGameSkill_X__CacheSkills_9CFBD36E4A27DFF0DAF13895A0ADA13A(struct FPlayerSkillRating Rating);
	void __OnlineGameSkill_X__SyncPartyMembersSkills_E9070998455996FE79456AAB52055ED0(struct FPartyMember Member);
	bool __OnlineGameSkill_X__SyncPartyMembersSkills_045A664A4A748D737E493DAEBC78EEE7(struct FPartyMember Member);
	bool SkillsSynced(struct FUniqueNetId PlayerID);
	int32_t GetHighestSkillTier(struct FUniqueNetId PlayerID);
	struct FPlayerSeasonRewardProgress GetPlayerSeasonRewardProgress(struct FUniqueNetId PlayerID);
	class UPlaylistSkillCache_X* GetPlaylistSkillCache(int32_t Playlist);
	void HandleSkillsUpdateFailed(class URPC_X* RPC);
	void SetPlayerSeasonReward(struct FPlayerSeasonRewardProgress Reward);
	void ReplicateSeasonReward(struct FPlayerSeasonRewardProgress Reward);
	void HandleSkillsUpdated(class URPC_UpdateSkills_X* RPC);
	void SubmitMatch(class UMatchData_X* Match, struct FString MatchGUID);
	void Clear();
	float GetConservativeMMR(float Mu, float Sigma);
	float GetPlayerConservativeMMR(struct FUniqueNetId PlayerID, int32_t Playlist);
	float GetMMR(float Mu, float Sigma);
	float GetPlayerMMR(struct FUniqueNetId PlayerID, int32_t Playlist);
	struct FUpdatedPlayerSkillRating GetUpdatedPlayerRating(struct FUniqueNetId PlayerID, int32_t Playlist);
	struct FPlayerSkillRating GetPlayerRating(struct FUniqueNetId PlayerID, int32_t Playlist);
	void OnSkillSynced(struct FUniqueNetId PlayerID, class UError* Error);
	void CacheSeasonReward(struct FPlayerSeasonRewardProgress Reward);
	void HandleSyncedPlayerSkill(class URPC_X* RPC, struct FUniqueNetId PlayerID, TArray<struct FPlayerSkillRating> PlayerSkillRatings, class UError* Error);
	void SyncPlayerSkill(struct FUniqueNetId PlayerID, struct FScriptDelegate Callback);
	void SyncPartyMembersSkills();
	void CacheSkill(struct FUpdatedPlayerSkillRating Rating, int32_t Playlist);
	void CacheSkills(TArray<struct FPlayerSkillRating> Ratings);
	void PreCacheSkill(struct FPlayerSkillRating Rating, int32_t Playlist);
	void HandlePartyDestroyed(class UOnlineGameParty_X* PartyObject);
	void HandlePartyLeaderChanged(class UOnlineGameParty_X* PartyObject, struct FUniqueNetId NewLeader);
	void HandlePartyMemberRemoved(class UOnlineGameParty_X* PartyObject, struct FUniqueNetId InMemberId);
	void HandlePartyMemberAdded(class UOnlineGameParty_X* PartyObject, struct FUniqueNetId InMemberId);
	int32_t GetSkillPlaylistID(int32_t PlaylistId);
	void ClearSkill(struct FUniqueNetId PlayerID);
	void ClearPartyMembersSkill();
	bool AllPlayersAreAroundTheSameRank(int32_t PlaylistId);
	class URPC_X* CreateSyncPlayerSkillRPC(struct FUniqueNetId PlayerID);
	void eventConstruct();
	void EventSkillSynced(class UOnlineGameSkill_X* Skill, struct FUniqueNetId PlayerID, class UError* Error);
};

// Class ProjectX.__OnlineGameParty_X__GetPlayersWithPrimaryMemberID_3E91E8A346A5FCCD460213B74D3BEABF
// 0x0048 (0x0060 - 0x00A8)
class U__OnlineGameParty_X__GetPlayersWithPrimaryMemberID_3E91E8A346A5FCCD460213B74D3BEABF : public UObject
{
public:
	struct FUniqueNetId                                InPrimaryID;                                   // 0x0060 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlineGameParty_X__GetPlayersWithPrimaryMemberID_3E91E8A346A5FCCD460213B74D3BEABF");
		}

		return uClassPointer;
	};

	bool __OnlineGameParty_X__GetPlayersWithPrimaryMemberID_3E91E8A346A5FCCD460213B74D3BEABF(struct FPartyMember Member);
};

// Class ProjectX.OnlinePlayerRegionRestrictions_X
// 0x0010 (0x0098 - 0x00A8)
class UOnlinePlayerRegionRestrictions_X : public UOnline_X
{
public:
	TArray<uint8_t>                                    Restrictions;                                  // 0x0098 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlinePlayerRegionRestrictions_X");
		}

		return uClassPointer;
	};

	uint8_t __OnlinePlayerRegionRestrictions_X__HandleLoginChanged_F50BC57A4FEB4F26BC0A1E88AD331686(struct FName S);
	bool IsRestricted(uint8_t Restriction);
	void HandleLoginChanged(class UOnlinePlayerAuthentication_X* Auth);
	void OnExit();
	void OnInit();
};

// Class ProjectX.PartyMessage_InviteToTradeError_X
// 0x0008 (0x00A8 - 0x00B0)
class UPartyMessage_InviteToTradeError_X : public UPartyMessage_X
{
public:
	struct FName                                       ErrorTypeName;                                 // 0x00A8 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartyMessage_InviteToTradeError_X");
		}

		return uClassPointer;
	};

	class UPartyMessage_InviteToTradeError_X* SetError(class UErrorType* Type);
};

// Class ProjectX.PartyMessage_ReadyToLockTrade_X
// 0x004C (0x00A8 - 0x00F4)
class UPartyMessage_ReadyToLockTrade_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                TradingMemberId;                               // 0x00A8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bReady : 1;                                    // 0x00F0 (0x0004) [0x0000000000000000] [0x00000001] 
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartyMessage_ReadyToLockTrade_X");
		}

		return uClassPointer;
	};

	class UPartyMessage_ReadyToLockTrade_X* SetReadyToTrade(unsigned long bInReadyToTrade);
	class UPartyMessage_ReadyToLockTrade_X* SetTradingMemberId(struct FUniqueNetId InTradingMemberId);
};

// Class ProjectX.PartyMessage_ReadyToConfirmTrade_X
// 0x0048 (0x00A8 - 0x00F0)
class UPartyMessage_ReadyToConfirmTrade_X : public UPartyMessage_X
{
public:
	struct FUniqueNetId                                TradingMemberId;                               // 0x00A8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartyMessage_ReadyToConfirmTrade_X");
		}

		return uClassPointer;
	};

	class UPartyMessage_ReadyToConfirmTrade_X* SetTradingMemberId(struct FUniqueNetId InTradingMemberId);
};

// Class ProjectX.PartyConfig_X
// 0x0004 (0x0078 - 0x007C)
class UPartyConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bCompressMessages : 1;                         // 0x0078 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartyConfig_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.__OnlineGameReservations_X__GetMigrationReservationData_F00FD14D4E74D4BB94E78794623A7D8B
// 0x0018 (0x0060 - 0x0078)
class U__OnlineGameReservations_X__GetMigrationReservationData_F00FD14D4E74D4BB94E78794623A7D8B : public UObject
{
public:
	TArray<struct FMigrationReservationData>           CurrentPlayers;                                // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UEngine*                                     GEngine;                                       // 0x0070 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlineGameReservations_X__GetMigrationReservationData_F00FD14D4E74D4BB94E78794623A7D8B");
		}

		return uClassPointer;
	};

	void __OnlineGameReservations_X__GetMigrationReservationData_F00FD14D4E74D4BB94E78794623A7D8B(struct FReservationData P);
};

// Class ProjectX.__OnlineGameReservations_X__RecordReservation_0CB49C3B42D7EFF750CFD9A31C107194
// 0x0008 (0x0060 - 0x0068)
class U__OnlineGameReservations_X__RecordReservation_0CB49C3B42D7EFF750CFD9A31C107194 : public UObject
{
public:
	class UAddReservationMessage_X*                    Message;                                       // 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlineGameReservations_X__RecordReservation_0CB49C3B42D7EFF750CFD9A31C107194");
		}

		return uClassPointer;
	};

	void __OnlineGameReservations_X__RecordReservation_0CB49C3B42D7EFF750CFD9A31C107194(struct FReservationPlayerData P);
};

// Class ProjectX.__OnlineGameReservations_X__SetPlayersWithMigrationData_283099A84B2FE08365974FB44FD3CAEA
// 0x0018 (0x0060 - 0x0078)
class U__OnlineGameReservations_X__SetPlayersWithMigrationData_283099A84B2FE08365974FB44FD3CAEA : public UObject
{
public:
	TArray<struct FReservationData>                    CurrentPlayers;                                // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UEngine*                                     GEngine;                                       // 0x0070 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlineGameReservations_X__SetPlayersWithMigrationData_283099A84B2FE08365974FB44FD3CAEA");
		}

		return uClassPointer;
	};

	void __OnlineGameReservations_X__SetPlayersWithMigrationData_581D9E7D4F9F5B35E01FA1B87D2853E7(struct FMigrationReservationData P);
	void __OnlineGameReservations_X__SetPlayersWithMigrationData_283099A84B2FE08365974FB44FD3CAEA(struct FMigrationReservationData P);
};

// Class ProjectX.__OnlineGameSkill_X__ClearPartyMembersSkill_6C80F2AA4C9FB75A72D26B9283BFDBC5
// 0x0048 (0x0060 - 0x00A8)
class U__OnlineGameSkill_X__ClearPartyMembersSkill_6C80F2AA4C9FB75A72D26B9283BFDBC5 : public UObject
{
public:
	struct FUniqueNetId                                PrimaryPlayerId;                               // 0x0060 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlineGameSkill_X__ClearPartyMembersSkill_6C80F2AA4C9FB75A72D26B9283BFDBC5");
		}

		return uClassPointer;
	};

	bool __OnlineGameSkill_X__ClearPartyMembersSkill_6C80F2AA4C9FB75A72D26B9283BFDBC5(struct FPartyMember Member);
};

// Class ProjectX.__OnlineGameSkill_X__ClearSkill_2EEC813146B5F458BDCA20878771E928
// 0x0048 (0x0060 - 0x00A8)
class U__OnlineGameSkill_X__ClearSkill_2EEC813146B5F458BDCA20878771E928 : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x0060 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlineGameSkill_X__ClearSkill_2EEC813146B5F458BDCA20878771E928");
		}

		return uClassPointer;
	};

	void __OnlineGameSkill_X__ClearSkill_2EEC813146B5F458BDCA20878771E928(class UPlaylistSkillCache_X* P);
};

// Class ProjectX.PlaylistSkillCache_X
// 0x0030 (0x0060 - 0x0090)
class UPlaylistSkillCache_X : public UObject
{
public:
	TArray<struct FUpdatedPlayerSkillRating>           Players;                                       // 0x0060 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	class URankedConfig_X*                             RankedConfig;                                  // 0x0070 (0x0008) [0x0001800000000001] (CPF_Edit)    
	struct FScriptDelegate                             __EventPlaylistSkillChanged__Delegate;         // 0x0078 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PlaylistSkillCache_X");
		}

		return uClassPointer;
	};

	struct FPlayerSkillRating ConvertUpdatedSkillRating(struct FUpdatedPlayerSkillRating InUpdatedRating);
	int32_t GetPlayerIndex(struct FUniqueNetId PlayerID);
	struct FPlayerSkillRating GetPlayerRating(struct FUniqueNetId PlayerID);
	struct FUpdatedPlayerSkillRating GetUpdatedPlayerRating(struct FUniqueNetId PlayerID);
	void ClearSkill(struct FUniqueNetId PlayerID);
	void CacheSkill(struct FUpdatedPlayerSkillRating Rating);
	void PreCacheSkill(struct FPlayerSkillRating Rating);
	bool AllPlayersAreAroundTheSameRank();
	void EventPlaylistSkillChanged();
};

// Class ProjectX.__OnlineGameSkill_X__HandleSyncedPlayerSkill_7E55F70A4C1A49DA6CD6CF845D6603C4
// 0x0058 (0x0060 - 0x00B8)
class U__OnlineGameSkill_X__HandleSyncedPlayerSkill_7E55F70A4C1A49DA6CD6CF845D6603C4 : public UObject
{
public:
	TArray<struct FPlayerSkillRating>                  PlayerSkillRatings;                            // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                      // 0x0070 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlineGameSkill_X__HandleSyncedPlayerSkill_7E55F70A4C1A49DA6CD6CF845D6603C4");
		}

		return uClassPointer;
	};

	void __OnlineGameSkill_X__HandleSyncedPlayerSkill_7E55F70A4C1A49DA6CD6CF845D6603C4(int32_t RankedPlaylistID);
};

// Class ProjectX.__OnlineGameSkill_X__OnSkillSynced_E0467635492A7F3CC5FA4FB61406B283
// 0x0048 (0x0060 - 0x00A8)
class U__OnlineGameSkill_X__OnSkillSynced_E0467635492A7F3CC5FA4FB61406B283 : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x0060 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlineGameSkill_X__OnSkillSynced_E0467635492A7F3CC5FA4FB61406B283");
		}

		return uClassPointer;
	};

	bool __OnlineGameSkill_X__OnSkillSynced_E0467635492A7F3CC5FA4FB61406B283(class ULocalPlayer* P);
};

// Class ProjectX.__OnlineGameWordFilter_X__InternalSanitize_1A938D7145004832B7CC8FBD769639F4
// 0x0010 (0x0060 - 0x0070)
class U__OnlineGameWordFilter_X__InternalSanitize_1A938D7145004832B7CC8FBD769639F4 : public UObject
{
public:
	struct FString                                     Id;                                            // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlineGameWordFilter_X__InternalSanitize_1A938D7145004832B7CC8FBD769639F4");
		}

		return uClassPointer;
	};

	void __OnlineGameWordFilter_X__InternalSanitize_1A938D7145004832B7CC8FBD769639F4(struct FWordFilterResult Result);
};

// Class ProjectX.OnlineGameWordFilter_X
// 0x0020 (0x0098 - 0x00B8)
class UOnlineGameWordFilter_X : public UOnline_X
{
public:
	TArray<struct FWordFilterPair>                     Filtered;                                      // 0x0098 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UWordFilterConfig_X*                         Config;                                        // 0x00A8 (0x0008) [0x0000800000000001] (CPF_Edit)    
	class UPsyNetWordFilter_X*                         PsyNetWordFilter;                              // 0x00B0 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGameWordFilter_X");
		}

		return uClassPointer;
	};

	struct FString SanitizePhraseAndNotify(struct FString Comment, struct FScriptDelegate Callback);
	struct FString SanitizePhrase(struct FString Comment);
	class UError* CreateError(uint8_t Usage, struct FWordFilterResult& Result);
	bool IsChat(uint8_t Usage);
	void HandleCommentSanitized(struct FString Id, struct FWordFilterResult& Result);
	bool StartWordFilterTask(uint8_t Usage, struct FString Comment, struct FScriptDelegate SanitizeDelegate, struct FUniqueNetId PlayerID);
	struct FString InternalSanitize(struct FString Comment, struct FScriptDelegate Callback, struct FScriptDelegate ErrorCallback, uint8_t Usage, struct FUniqueNetId PlayerID);
	bool IsPending(struct FString Comment);
	struct FString Sanitize(uint8_t Usage, struct FString Comment, struct FScriptDelegate Callback, struct FScriptDelegate ErrorCallback, struct FUniqueNetId PlayerID);
	struct FString SanitizePlayerName(uint8_t PlayerPlatform, struct FString PlayerName, struct FScriptDelegate Callback, struct FScriptDelegate ErrorCallback, struct FUniqueNetId PlayerID);
	void OnMainMenuOpened();
};

// Class ProjectX.OnlinePlayerFriends_X
// 0x0290 (0x0098 - 0x0328)
class UOnlinePlayerFriends_X : public UOnline_X
{
public:
	unsigned long                                      bAllowSamePlatformPsyNetFriends : 1;           // 0x0098 (0x0004) [0x0000000000004000] [0x00000001] (CPF_Config)
	unsigned long                                      bRepeatFriendsListDownloadsUntilSuccess : 1;   // 0x0098 (0x0004) [0x0000000000004002] [0x00000002] (CPF_Const | CPF_Config)
	unsigned long                                      bFetchingLinkedAccounts : 1;                   // 0x0098 (0x0004) [0x0000000000000000] [0x00000004] 
	class UOnlineFriendMap_X*                          CachedFriends;                                 // 0x00A0 (0x0008) [0x0000004004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPlatformFriends_X*                          PlatformFriends;                               // 0x00A8 (0x0008) [0x0000004004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UPsyNetFriends_X*                            PsyNetFriends;                                 // 0x00B0 (0x0008) [0x0000004004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UEpicFriends_X*                              EpicFriends;                                   // 0x00B8 (0x0008) [0x0000004004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UOnlineFriendMap_X*                          BlockedPlayers;                                // 0x00C0 (0x0008) [0x0000004004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UOnlineFriendMap_X*                          PsyNetBlockList;                               // 0x00C8 (0x0008) [0x0000004004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UOnlineFriendMap_X*                          EpicBlockList;                                 // 0x00D0 (0x0008) [0x0000004004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class ULinkedAccountMap_X*                         PlatformToEpicAccountMap;                      // 0x00D8 (0x0008) [0x0000004004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class ULinkedAccountMap_X*                         EpicToPlatformAccountMap;                      // 0x00E0 (0x0008) [0x0000004004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class URetryDelayer_X*                             PlatformFriendsDownloadDelayer;                // 0x00E8 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class URetryDelayer_X*                             PsyNetFriendsDownloadDelayer;                  // 0x00F0 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class URetryDelayer_X*                             EpicFriendsDownloadDelayer;                    // 0x00F8 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class URetryDelayer_X*                             BlockedListDownloadDelayer;                    // 0x0100 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	TArray<struct FUniqueNetId>                        PendingFriendAccepts;                          // 0x0108 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UOSSConfig_X*                                OSSConfig;                                     // 0x0118 (0x0008) [0x0000800000000001] (CPF_Edit)    
	class UEpicConfig_X*                               EpicConfig;                                    // 0x0120 (0x0008) [0x0000800000000000]               
	class UEpicFriendsPlugin_X*                        EpicFriendsPlugin;                             // 0x0128 (0x0008) [0x0001000000000001] (CPF_Edit)    
	struct FScriptDelegate                             __EventFriendsListChanged__Delegate;           // 0x0130 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPsyNetBlockedListDownloadComplete__Delegate;// 0x0148 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPsyNetBlockedListChanged__Delegate;     // 0x0160 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPsyNetBlockedPlayer__Delegate;          // 0x0178 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPsyNetUnblockedPlayer__Delegate;        // 0x0190 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventAcceptEpicFriendInvite__Delegate;       // 0x01A8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDeclineEpicFriendInvite__Delegate;      // 0x01C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventChatMessage__Delegate;                  // 0x01D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPsyNetStatusUpdate__Delegate;           // 0x01F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPsyNetPsyTagUpdate__Delegate;           // 0x0208 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlatformStatusUpdate__Delegate;         // 0x0220 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventEpicStatusUpdate__Delegate;             // 0x0238 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventEpicFriendInviteReceived__Delegate;     // 0x0250 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventEpicFriendInviteRemoved__Delegate;      // 0x0268 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventEpicFriendInviteSucceeded__Delegate;    // 0x0280 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventEpicFriendInviteFailed__Delegate;       // 0x0298 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventEpicPlayerUnfriended__Delegate;         // 0x02B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventQueriedUserByEpicDisplayName__Delegate; // 0x02C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlatformFriendsListDownloadCompleted__Delegate;// 0x02E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPsyNetFriendsListDownloadCompleted__Delegate;// 0x02F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventEpicFriendsListDownloadCompleted__Delegate;// 0x0310 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlinePlayerFriends_X");
		}

		return uClassPointer;
	};

	void __OnlinePlayerFriends_X__OnInit_D76108B645FC633F0FE393BD73E1DDFC(class UEpicFriendsPlugin_X* Plugin);
	void __OnlinePlayerFriends_X__OnInit_FAFA238C4120D42988FE758F06F0D225();
	void __OnlinePlayerFriends_X__OnInit_6F4942764DCA50F8DD403A89ED82D2A2(class UPsyNetService_FriendChatReceived_X* N);
	void RebuildFriendsCache();
	void RemoveEpicFriendLocally(struct FUniqueNetId RemovedID);
	void SendChatMessage(struct FString InMessage, struct FUniqueNetId Recipient);
	void ShowPlayerCard(struct FUniqueNetId FriendId, struct FString FriendName);
	void SetEpicRichPresence(uint8_t LocalUserNum, struct FString PresenceString, struct FString GameDataString);
	void SetPlatformRichPresence(uint8_t LocalUserNum, struct FString PresenceString, struct FString GameDataString);
	void HandleEpicFriendRemoved(unsigned long bWasSuccessful, struct FUniqueNetId RemovedID);
	void RemoveEpicFriend(struct FUniqueNetId FriendId);
	bool IsFriend(struct FUniqueNetId FriendId);
	bool IsPlatformFriend(struct FUniqueNetId FriendId);
	bool IsPsyNetFriend(struct FUniqueNetId FriendId);
	bool IsEpicFriend(struct FUniqueNetId FriendId);
	void ConditionalUpdateFriendInMap(class UOnlineFriendMap_X* FriendMap, struct FOnlineFriend NewFriendData);
	void HandlePsyTagUpdated(class UPsyNetService_FriendPsyTagUpdated_X* Notification);
	void HandleEpicPresenceChanged(struct FUniqueNetId FriendId);
	void HandlePlatformPresenceChange(struct FUniqueNetId FriendId);
	struct FOnlineStatus ExtractStatusData(struct FOnlineFriend InFriend);
	void HandleReadEpicFriendsAbandoned();
	void HandleDownloadEpicFriendsTryComplete(unsigned long bSuccess);
	void HandleDownloadedEpicBlockList(uint8_t LocalUserNum);
	void DownloadEpicFriendsList();
	void BeginEpicFriendsDownloadAttempts();
	void HandleOnReceivedLinkedAccounts(unsigned long bSuccess, TArray<struct FLinkedAccountData> LinkedAccountData);
	void GetLinkedFriendData();
	void HandleReadPsyNetFriendsAbandoned();
	void HandleReadPsyNetFriendsFail(class URPC_PsyNetReadFriends_X* RPC);
	void HandleReadPsyNetFriendsSuccess(class URPC_PsyNetReadFriends_X* RPC);
	void DownloadPsyNetFriendsList();
	void BeginPsyNetFriendsDownloadAttempts();
	void UpdateFriendsFromOnlineSub();
	void DelayedUpdateFriendsFromOnlineSub();
	void UpdateFriendsFromEpicSub();
	void DelayedUpdateFriendsFromEpicSub();
	void HandleDeclineEpicFriendInviteComplete(struct FUniqueNetId DeclinedId, class UError* Error);
	void DeclineEpicFriendInvite(struct FUniqueNetId FriendId);
	void HandleAcceptEpicFriendInviteComplete(struct FUniqueNetId AcceptedId, class UError* Error);
	void AcceptEpicFriendInvite(struct FUniqueNetId FriendId);
	void HandleEpicFriendInviteCompleted(struct FUniqueNetId InvitedPlayerId, class UError* Error);
	void HandleEpicFriendInviteRemoved(uint8_t LocalUserNum, struct FUniqueNetId PlayerToRemove);
	void HandleEpicFriendInviteReceived(uint8_t LocalUserNum, struct FUniqueNetId RequestingPlayer, struct FString RequestingNick, struct FString Message);
	bool InviteEpicFriend(struct FUniqueNetId FriendPlayerId);
	bool RequestLinkedAccounts(TArray<struct FUniqueNetId> AccountIds, struct FScriptDelegate Callback);
	void HandleQueriedUserByEpicDisplayName(unsigned long bWasSuccessful, struct FString QueriedDisplayName, struct FUniqueNetId QueriedPlayerId);
	bool QueryUserByEpicDisplayName(struct FString DisplayName);
	void OnPlatformFriendsDownloadAbandoned();
	void HandleDownloadPlatformFriendsTryComplete(unsigned long bSuccess);
	void DownloadPlatformFriendsList();
	void BeginDownloadPlatformFriendsListAttempts();
	void UnblockPlayer(struct FUniqueNetId UnblockID, struct FScriptDelegate Callback);
	void BlockPlayer(struct FUniqueNetId BlockedID, struct FString BlockedPlayerName, struct FPsyTag BlockedTag, struct FScriptDelegate Callback);
	void OnBlockedListDownloadAbandoned(struct FScriptDelegate Callback);
	void HandleDownloadBlockedListAttemptComplete(class URPC_GetBlockList_X* RPC, struct FScriptDelegate Callback);
	void DownloadBlockedListAttempt(struct FScriptDelegate Callback);
	void DownloadBlockedList(struct FScriptDelegate Callback);
	void HandlePsyNetConnected(class UPsyNetConnection_X* C);
	uint8_t GetFriendState(struct FString PresenceState);
	struct FOnlineFriend ConvertPsyNetResponseToOnlineFriend(struct FPsyNetPersonaData InData);
	void eventConstruct();
	void HandleOSSConfigChanged(class UOSSConfig_X* InOSSConfig);
	void OnInit();
	void EventEpicFriendsListDownloadCompleted(unsigned long bSuccess);
	void EventPsyNetFriendsListDownloadCompleted(unsigned long bSuccess);
	void EventPlatformFriendsListDownloadCompleted(unsigned long bSuccess);
	void EventQueriedUserByEpicDisplayName(unsigned long bWasSuccessful, struct FString QueriedDisplayName, struct FUniqueNetId QueriedPlayerId);
	void EventEpicPlayerUnfriended(struct FUniqueNetId RemovedID);
	void EventEpicFriendInviteFailed(struct FUniqueNetId InvitedPlayerId, class UError* InviteFriendError);
	void EventEpicFriendInviteSucceeded(struct FUniqueNetId InvitedPlayerId);
	void EventEpicFriendInviteRemoved(struct FUniqueNetId PlayerToRemove);
	void EventEpicFriendInviteReceived(struct FUniqueNetId RequestingPlayer, struct FString RequestingNick);
	void EventEpicStatusUpdate(struct FOnlineStatus StatusData);
	void EventPlatformStatusUpdate(struct FOnlineStatus StatusData);
	void EventPsyNetPsyTagUpdate(struct FOnlineFriend& FriendData);
	void EventPsyNetStatusUpdate(struct FOnlineStatus StatusData);
	void EventChatMessage(struct FString InMessage, struct FUniqueNetId SenderId, unsigned long bIsLocal);
	void EventDeclineEpicFriendInvite(struct FUniqueNetId DeclinedId, class UError* RequestError);
	void EventAcceptEpicFriendInvite(struct FUniqueNetId AcceptedId, class UError* RequestError);
	void EventPsyNetUnblockedPlayer(struct FUniqueNetId BlockedID, class UError* RequestError);
	void EventPsyNetBlockedPlayer(struct FUniqueNetId BlockedID, class UError* RequestError);
	void EventPsyNetBlockedListChanged(class UOnlinePlayerFriends_X* FriendsObject);
	void EventPsyNetBlockedListDownloadComplete(class UError* RequestError);
	void EventFriendsListChanged(class UOnlinePlayerFriends_X* FriendsRef, class UError* Error);
};

// Class ProjectX.OSSConfig_X
// 0x0004 (0x0078 - 0x007C)
class UOSSConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bEnablePresence : 1;                           // 0x0078 (0x0004) [0x0000000000004001] [0x00000001] (CPF_Edit | CPF_Config)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OSSConfig_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.RetryDelayer_X
// 0x0058 (0x0070 - 0x00C8)
class URetryDelayer_X : public UComponent
{
public:
	TArray<float>                                      RetryDelays;                                   // 0x0070 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              RepeatBackoff;                                 // 0x0080 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            RepeatCycleCount;                              // 0x0084 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bRepeatUntilSuccess : 1;                       // 0x0088 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	int32_t                                            FailedAttempts;                                // 0x008C (0x0004) [0x0000000000000000]               
	int32_t                                            FailedCycles;                                  // 0x0090 (0x0004) [0x0000000000000000]               
	struct FScriptDelegate                             __RepeatedDelegate__Delegate;                  // 0x0098 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __NotifyAbandondedDelegate__Delegate;          // 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RetryDelayer_X");
		}

		return uClassPointer;
	};

	void Abandon();
	void ExecuteNextStep();
	void Cancel();
	void RetryOrAbandon();
	void Start(struct FScriptDelegate ToRepeat, struct FScriptDelegate Abandoned);
	void NotifyAbandondedDelegate();
	void RepeatedDelegate();
};

// Class ProjectX.EpicFriends_X
// 0x0000 (0x00C0 - 0x00C0)
class UEpicFriends_X : public UOnlineFriendMap_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.EpicFriends_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetFriends_X
// 0x0000 (0x00C0 - 0x00C0)
class UPsyNetFriends_X : public UOnlineFriendMap_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetFriends_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PlatformFriends_X
// 0x0000 (0x00C0 - 0x00C0)
class UPlatformFriends_X : public UOnlineFriendMap_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PlatformFriends_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.__OnlinePlayerFriends_X__BlockPlayer_A8B048CE40A4574431068796362A17AC
// 0x0040 (0x0060 - 0x00A0)
class U__OnlinePlayerFriends_X__BlockPlayer_A8B048CE40A4574431068796362A17AC : public UObject
{
public:
	struct FString                                     BlockedPlayerName;                             // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPsyTag                                     BlockedTag;                                    // 0x0070 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                      // 0x0088 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlinePlayerFriends_X__BlockPlayer_A8B048CE40A4574431068796362A17AC");
		}

		return uClassPointer;
	};

	void __OnlinePlayerFriends_X__BlockPlayer_2D58AA9749CA78556C0BF19FC9F6AFA6(class URPC_BlockPlayer_X* RPC);
	void __OnlinePlayerFriends_X__BlockPlayer_A8B048CE40A4574431068796362A17AC(class URPC_BlockPlayer_X* RPC);
};

// Class ProjectX.RPC_BlockPlayer_X
// 0x0048 (0x00E8 - 0x0130)
class URPC_BlockPlayer_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x00E8 (0x0048) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_BlockPlayer_X");
		}

		return uClassPointer;
	};

	class URPC_BlockPlayer_X* SetBlockedPlayerId(struct FUniqueNetId InPlayerId);
};

// Class ProjectX.__OnlinePlayerFriends_X__DownloadBlockedList_4AFDD20D4DED88C7B352EDA7E801070A
// 0x0018 (0x0060 - 0x0078)
class U__OnlinePlayerFriends_X__DownloadBlockedList_4AFDD20D4DED88C7B352EDA7E801070A : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                      // 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlinePlayerFriends_X__DownloadBlockedList_4AFDD20D4DED88C7B352EDA7E801070A");
		}

		return uClassPointer;
	};

	void __OnlinePlayerFriends_X__DownloadBlockedList_D5F37E9749BF61011EAA8B822A63EEC0();
	void __OnlinePlayerFriends_X__DownloadBlockedList_4AFDD20D4DED88C7B352EDA7E801070A();
};

// Class ProjectX.__OnlinePlayerFriends_X__DownloadBlockedListAttempt_6495B2CE44C609A2A4953D995593AF6E
// 0x0018 (0x0060 - 0x0078)
class U__OnlinePlayerFriends_X__DownloadBlockedListAttempt_6495B2CE44C609A2A4953D995593AF6E : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                      // 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlinePlayerFriends_X__DownloadBlockedListAttempt_6495B2CE44C609A2A4953D995593AF6E");
		}

		return uClassPointer;
	};

	void __OnlinePlayerFriends_X__DownloadBlockedListAttempt_6495B2CE44C609A2A4953D995593AF6E(class URPC_GetBlockList_X* RPC);
};

// Class ProjectX.RPC_GetBlockList_X
// 0x0020 (0x00E8 - 0x0108)
class URPC_GetBlockList_X : public URPC_X
{
public:
	TArray<struct FBlockedListRequestData>             bLocked;                                       // 0x00E8 (0x0010) [0x0001000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FOnlineFriend>                       FriendsData;                                   // 0x00F8 (0x0010) [0x0001000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_GetBlockList_X");
		}

		return uClassPointer;
	};

	struct FOnlineFriend ConvertToBlockedOnlineFriend(struct FBlockedListRequestData FromPlayer);
	void eventOnComplete();
};

// Class ProjectX.__OnlinePlayerFriends_X__UnblockPlayer_FCA88D1C4EDB25C6CCD3EDB348A92D37
// 0x0018 (0x0060 - 0x0078)
class U__OnlinePlayerFriends_X__UnblockPlayer_FCA88D1C4EDB25C6CCD3EDB348A92D37 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                      // 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlinePlayerFriends_X__UnblockPlayer_FCA88D1C4EDB25C6CCD3EDB348A92D37");
		}

		return uClassPointer;
	};

	void __OnlinePlayerFriends_X__UnblockPlayer_2BCEB8614223183584F308B604C101BF(class URPC_UnblockPlayer_X* RPC);
	void __OnlinePlayerFriends_X__UnblockPlayer_FCA88D1C4EDB25C6CCD3EDB348A92D37(class URPC_UnblockPlayer_X* RPC);
};

// Class ProjectX.RPC_UnblockPlayer_X
// 0x0048 (0x00E8 - 0x0130)
class URPC_UnblockPlayer_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x00E8 (0x0048) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_UnblockPlayer_X");
		}

		return uClassPointer;
	};

	class URPC_UnblockPlayer_X* SetUnblockedPlayerId(struct FUniqueNetId InPlayerId);
};

// Class ProjectX.__OnlinePlayerStorageQueue_X__GetStorageMaxSizeBytes_C2E5301B45EB90B9E44BAD9B5867651C
// 0x0008 (0x0060 - 0x0068)
class U__OnlinePlayerStorageQueue_X__GetStorageMaxSizeBytes_C2E5301B45EB90B9E44BAD9B5867651C : public UObject
{
public:
	struct FName                                       Category;                                      // 0x0060 (0x0008) [0x0001000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlinePlayerStorageQueue_X__GetStorageMaxSizeBytes_C2E5301B45EB90B9E44BAD9B5867651C");
		}

		return uClassPointer;
	};

	bool __OnlinePlayerStorageQueue_X__GetStorageMaxSizeBytes_C2E5301B45EB90B9E44BAD9B5867651C(struct FStorageMaxSize C);
};

// Class ProjectX.EncodeObject_X
// 0x0018 (0x0060 - 0x0078)
class UEncodeObject_X : public UObject
{
public:
	uint8_t                                            Encoding;                                      // 0x0060 (0x0001) [0x0000004000000000]               
	int32_t                                            Checksum;                                      // 0x0064 (0x0004) [0x0000008000000000]               
	struct FString                                     Encoded;                                       // 0x0068 (0x0010) [0x0000008000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.EncodeObject_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_PlayerStorageSet_X
// 0x0060 (0x00E8 - 0x0148)
class URPC_PlayerStorageSet_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x00E8 (0x0048) [0x0001000000400000] (CPF_NeedCtorLink)
	TArray<struct FSetPlayerStorageRequestItem>        Items;                                         // 0x0130 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	class USetPlayerStorageResult_X*                   Result;                                        // 0x0140 (0x0008) [0x0001000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_PlayerStorageSet_X");
		}

		return uClassPointer;
	};

	class UObject* eventGetResponseObject();
};

// Class ProjectX.__OnlinePlayerStorageQueue_X__MapResultItem_1EEE2E26478BFB0F705543B6C7C811A4
// 0x0010 (0x0060 - 0x0070)
class U__OnlinePlayerStorageQueue_X__MapResultItem_1EEE2E26478BFB0F705543B6C7C811A4 : public UObject
{
public:
	struct FSetPlayerStorageResultItem                 Item;                                          // 0x0060 (0x0010) [0x0001000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlinePlayerStorageQueue_X__MapResultItem_1EEE2E26478BFB0F705543B6C7C811A4");
		}

		return uClassPointer;
	};

	bool __OnlinePlayerStorageQueue_X__MapResultItem_1EEE2E26478BFB0F705543B6C7C811A4(struct FPendingStorage P);
};

// Class ProjectX.__OnlinePlayerStorageSync_X__SyncObjects_E2D9F9DD40B561BD7659CBA588DFE51B
// 0x0008 (0x0060 - 0x0068)
class U__OnlinePlayerStorageSync_X__SyncObjects_E2D9F9DD40B561BD7659CBA588DFE51B : public UObject
{
public:
	class UAsyncTask*                                  ResponseTask;                                  // 0x0060 (0x0008) [0x0001000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__OnlinePlayerStorageSync_X__SyncObjects_E2D9F9DD40B561BD7659CBA588DFE51B");
		}

		return uClassPointer;
	};

	void __OnlinePlayerStorageSync_X__SyncObjects_E2D9F9DD40B561BD7659CBA588DFE51B(class URPC_X* RPC);
};

// Class ProjectX.OnlinePlayerStorageSync_X
// 0x0018 (0x0060 - 0x0078)
class UOnlinePlayerStorageSync_X : public UObject
{
public:
	struct FScriptDelegate                             __EventSyncSuccess__Delegate;                  // 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlinePlayerStorageSync_X");
		}

		return uClassPointer;
	};

	void __OnlinePlayerStorageSync_X__HandleSyncSuccess_71A136F04E485BE2903844B41028812F(struct FOnlinePlayerStorageSyncResult Result);
	class UObject* InstanceSyncData(class UObject* LocalObject, class UDecodeObject_X* DecodeObj);
	void HandleSyncSuccess(class URPC_PlayerStorageGet_X* RPC, class UAsyncTask* ResponseTask);
	int32_t CrcObject(uint8_t Encoding, class UObject* Data);
	struct FGetPlayerStorageRequestItem MapRequestItem(struct FOnlinePlayerStorageSyncRequest Request);
	class UAsyncTask* SyncObjects(TArray<struct FOnlinePlayerStorageSyncRequest>& Requests);
	void EventSyncSuccess(struct FOnlinePlayerStorageSyncResult& Result);
};

// Class ProjectX.__PartyMessageQueue_X__SendMessage_E83150754D6B90085DA06EA758B77029
// 0x0008 (0x0060 - 0x0068)
class U__PartyMessageQueue_X__SendMessage_E83150754D6B90085DA06EA758B77029 : public UObject
{
public:
	class UAsyncTask*                                  Task;                                          // 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__PartyMessageQueue_X__SendMessage_E83150754D6B90085DA06EA758B77029");
		}

		return uClassPointer;
	};

	void __PartyMessageQueue_X__SendMessage_E83150754D6B90085DA06EA758B77029(class UError* _);
};

// Class ProjectX.PartyMessageQueue_X
// 0x0040 (0x0070 - 0x00B0)
class UPartyMessageQueue_X : public UComponent
{
public:
	TArray<struct FPendingMessage>                     Pending;                                       // 0x0070 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<class UAsyncTask*>                          CurrentBatch;                                  // 0x0080 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      bPaused : 1;                                   // 0x0090 (0x0004) [0x0000004000000000] [0x00000001] 
	float                                              BatchDelayTime;                                // 0x0094 (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FScriptDelegate                             __SendMessageServiceDelegate__Delegate;        // 0x0098 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartyMessageQueue_X");
		}

		return uClassPointer;
	};

	void __PartyMessageQueue_X__CancelAll_1C5B0DD7441DA1DAE7A1D4959466A047(class UAsyncTask* Task);
	void HandleTaskComplete(class UAsyncTask* Task);
	class UAsyncTask* SendMessage(struct FUniqueLobbyId LobbyId, struct FString Message);
	void SendBatch();
	void SendBatchTimer();
	void QueueBatch();
	void CancelAll();
	void QueueMessage(struct FUniqueLobbyId LobbyId, struct FString Message);
	void SetPaused(unsigned long bPause);
	class UAsyncTask* SendMessageServiceDelegate(struct FUniqueLobbyId LobbyId, struct FString Message);
};

// Class ProjectX.__PartySequence_CreateParty_X__CreateParty_A6A54963454003DB50106BBE61530677
// 0x0019 (0x0060 - 0x0079)
class U__PartySequence_CreateParty_X__CreateParty_A6A54963454003DB50106BBE61530677 : public UObject
{
public:
	TArray<struct FLobbyMetaData>                      InitialSettings;                               // 0x0060 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	int32_t                                            LocalPlayerNum;                                // 0x0070 (0x0004) [0x0001000000000000]               
	int32_t                                            MaxPlayers;                                    // 0x0074 (0x0004) [0x0001000000000000]               
	uint8_t                                            Type;                                          // 0x0078 (0x0001) [0x0001000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__PartySequence_CreateParty_X__CreateParty_A6A54963454003DB50106BBE61530677");
		}

		return uClassPointer;
	};

	void __PartySequence_CreateParty_X__CreateParty_A6A54963454003DB50106BBE61530677(class URPC_PartyCreate_X* RPC);
};

// Class ProjectX.RPC_PartyCreate_X
// 0x0088 (0x00E8 - 0x0170)
class URPC_PartyCreate_X : public URPC_X
{
public:
	unsigned long                                      bForcePartyonix : 1;                           // 0x00E8 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FPsyNetPartyInfo                            Info;                                          // 0x00F0 (0x0070) [0x0001000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FPsyNetPartyMember>                  Members;                                       // 0x0160 (0x0010) [0x0001000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_PartyCreate_X");
		}

		return uClassPointer;
	};

	class URPC_PartyCreate_X* SetRequirePsyNetParty(unsigned long bValue);
};

// Class ProjectX.PartySequence_CreateParty_X
// 0x0020 (0x0060 - 0x0080)
class UPartySequence_CreateParty_X : public UObject
{
public:
	class URPC_PartyCreate_X*                          PendingRPC;                                    // 0x0060 (0x0008) [0x0001000000000000]               
	struct FScriptDelegate                             __EventPartyCreated__Delegate;                 // 0x0068 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartySequence_CreateParty_X");
		}

		return uClassPointer;
	};

	void __PartySequence_CreateParty_X__CreateParty_BB0E044946A84BEA5289C88897519A41(class URPC_X* _);
	void HandleCreatePartyComplete();
	void HandlePlatformPartyCreated(unsigned long bWasSuccessful, struct FString Error, struct FUniqueLobbyId& PlatformPartyID);
	class UAsyncTask* CreateParty(int32_t LocalPlayerNum, int32_t MaxPlayers, uint8_t Type, TArray<struct FLobbyMetaData> InitialSettings);
	void EventPartyCreated(struct FUniqueLobbyId PsyNetPartyId, TArray<struct FPsyNetPartyMember>& Members);
};

// Class ProjectX.__PartySequence_InvitedToPlatformParty_X__HandlePlayerInvited_066D947B4A1256526FAE348A85CC3C93
// 0x0058 (0x0060 - 0x00B8)
class U__PartySequence_InvitedToPlatformParty_X__HandlePlayerInvited_066D947B4A1256526FAE348A85CC3C93 : public UObject
{
public:
	struct FUniqueLobbyId                              InLobbyId;                                     // 0x0060 (0x0010) [0x0000000000000000]               
	struct FUniqueNetId                                FriendId;                                      // 0x0070 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__PartySequence_InvitedToPlatformParty_X__HandlePlayerInvited_066D947B4A1256526FAE348A85CC3C93");
		}

		return uClassPointer;
	};

	void __PartySequence_InvitedToPlatformParty_X__HandlePlayerInvited_066D947B4A1256526FAE348A85CC3C93();
};

// Class ProjectX.__PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvitedPrompt_CAD898AA4D5D6B16F0FF3D934DC26E28
// 0x0058 (0x0060 - 0x00B8)
class U__PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvitedPrompt_CAD898AA4D5D6B16F0FF3D934DC26E28 : public UObject
{
public:
	struct FUniqueLobbyId                              InLobbyId;                                     // 0x0060 (0x0010) [0x0001000000000000]               
	struct FUniqueNetId                                InviterId;                                     // 0x0070 (0x0048) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvitedPrompt_CAD898AA4D5D6B16F0FF3D934DC26E28");
		}

		return uClassPointer;
	};

	void __PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvitedPrompt_CAD898AA4D5D6B16F0FF3D934DC26E28();
};

// Class ProjectX.__PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvitedSilent_C811B22942BB05528BBD06866E6BF9C0
// 0x0058 (0x0060 - 0x00B8)
class U__PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvitedSilent_C811B22942BB05528BBD06866E6BF9C0 : public UObject
{
public:
	struct FUniqueLobbyId                              InLobbyId;                                     // 0x0060 (0x0010) [0x0001000000000000]               
	struct FUniqueNetId                                InviterId;                                     // 0x0070 (0x0048) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvitedSilent_C811B22942BB05528BBD06866E6BF9C0");
		}

		return uClassPointer;
	};

	void __PartySequence_InvitedToPsyNetParty_X__HandlePlayerInvitedSilent_C811B22942BB05528BBD06866E6BF9C0();
};

// Class ProjectX.__PartySequence_JoinParty_X__HandleGetPlatformPartyMessage_682233CC41702B6C081E5B9B1DBEDEA4
// 0x0008 (0x0060 - 0x0068)
class U__PartySequence_JoinParty_X__HandleGetPlatformPartyMessage_682233CC41702B6C081E5B9B1DBEDEA4 : public UObject
{
public:
	class UPartyMessage_GetPlatformParty_X*            Message;                                       // 0x0060 (0x0008) [0x0001000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__PartySequence_JoinParty_X__HandleGetPlatformPartyMessage_682233CC41702B6C081E5B9B1DBEDEA4");
		}

		return uClassPointer;
	};

	bool __PartySequence_JoinParty_X__HandleGetPlatformPartyMessage_682233CC41702B6C081E5B9B1DBEDEA4(struct FPartyMember M);
};

// Class ProjectX.PartyMessage_GetPlatformParty_X
// 0x0000 (0x00A8 - 0x00A8)
class UPartyMessage_GetPlatformParty_X : public UPartyMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartyMessage_GetPlatformParty_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PartySequence_JoinParty_X
// 0x0018 (0x0060 - 0x0078)
class UPartySequence_JoinParty_X : public UObject
{
public:
	struct FScriptDelegate                             __EventJoinedParty__Delegate;                  // 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartySequence_JoinParty_X");
		}

		return uClassPointer;
	};

	void HandlePlatformPartyCreated(unsigned long bWasSuccessful, struct FString Error, struct FUniqueLobbyId& PlatformPartyID);
	void HandleJoinLobby(unsigned long bWasSuccessful, struct FString Error, struct FActiveLobbyInfo& LobbyInfo, struct FUniqueLobbyId& LobbyUID);
	void HandleGetPlatformPartyResponseMessage(class UOnlineMessageComponent_X* Component, class UPartyMessage_GetPlatformPartyResponse_X* Message);
	void HandleGetPlatformPartyMessage(class UOnlineMessageComponent_X* Component, class UPartyMessage_GetPlatformParty_X* Message);
	void HandlePsyNetLobbyJoinSucceeded(class URPC_PartyJoin_X* RpcPartyJoin);
	class UAsyncTask* JoinLobbyWithKey(struct FString PsyNetPartyId, struct FString JoinKey);
	class UAsyncTask* JoinLobby(struct FUniqueLobbyId& LobbyId);
	void Init();
	void EventJoinedParty(struct FUniqueLobbyId PsyNetPartyId, TArray<struct FPsyNetPartyMember>& Members);
};

// Class ProjectX.__PsyNetBeacon_X__SendMessageToClients_D8CE543F4FD8ECC0ED42D1915562AE63
// 0x0008 (0x0060 - 0x0068)
class U__PsyNetBeacon_X__SendMessageToClients_D8CE543F4FD8ECC0ED42D1915562AE63 : public UObject
{
public:
	class UPsyNetBeaconConnection_X*                   Connection;                                    // 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__PsyNetBeacon_X__SendMessageToClients_D8CE543F4FD8ECC0ED42D1915562AE63");
		}

		return uClassPointer;
	};

	bool __PsyNetBeacon_X__SendMessageToClients_D8CE543F4FD8ECC0ED42D1915562AE63(class URPC_RelayToClient_X* OtherRPC);
};

// Class ProjectX.RPC_RelayToClient_X
// 0x0048 (0x00E8 - 0x0130)
class URPC_RelayToClient_X : public URPC_X
{
public:
	TArray<struct FString>                             PlayerIDs;                                     // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ReservationID;                                 // 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     MessageType;                                   // 0x0108 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     MessagePayload;                                // 0x0118 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      AllowPartialSuccess : 1;                       // 0x0128 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      QueueOffline : 1;                              // 0x0128 (0x0004) [0x0000000000000000] [0x00000002] 
	int32_t                                            OfflineTTLSeconds;                             // 0x012C (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_RelayToClient_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.__PsyNetBeacon_X__SendMessageToServer_A4C0475244D80CEA506D7DB51E98FF57
// 0x0010 (0x0060 - 0x0070)
class U__PsyNetBeacon_X__SendMessageToServer_A4C0475244D80CEA506D7DB51E98FF57 : public UObject
{
public:
	class URPC_RelayToServer_X*                        RPC;                                           // 0x0060 (0x0008) [0x0000000000000000]               
	class UPsyNetBeaconConnection_X*                   Connection;                                    // 0x0068 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__PsyNetBeacon_X__SendMessageToServer_A4C0475244D80CEA506D7DB51E98FF57");
		}

		return uClassPointer;
	};

	void __PsyNetBeacon_X__SendMessageToServer_A4C0475244D80CEA506D7DB51E98FF57(class URPC_X* _);
};

// Class ProjectX.RPC_RelayToServer_X
// 0x0040 (0x00E8 - 0x0128)
class URPC_RelayToServer_X : public URPC_X
{
public:
	struct FString                                     DSConnectToken;                                // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ReservationID;                                 // 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     MessageType;                                   // 0x0108 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     MessagePayload;                                // 0x0118 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_RelayToServer_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.__PsyNetConnection_X__ProcessServiceCall_31E761A8444E1BAA7E255081E9AB4BCA
// 0x0008 (0x0060 - 0x0068)
class U__PsyNetConnection_X__ProcessServiceCall_31E761A8444E1BAA7E255081E9AB4BCA : public UObject
{
public:
	class UPsyNetMessage_X*                            Response;                                      // 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__PsyNetConnection_X__ProcessServiceCall_31E761A8444E1BAA7E255081E9AB4BCA");
		}

		return uClassPointer;
	};

	void __PsyNetConnection_X__ProcessServiceCall_31E761A8444E1BAA7E255081E9AB4BCA(class UError* _);
};

// Class ProjectX.__PsyNetMessengerHttp_X__SendMessage_B02A80E0404057203B0DE6AE8A0FD8A9
// 0x0018 (0x0060 - 0x0078)
class U__PsyNetMessengerHttp_X__SendMessage_B02A80E0404057203B0DE6AE8A0FD8A9 : public UObject
{
public:
	struct FString                                     PsyRequestID;                                  // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UAsyncTask*                                  Task;                                          // 0x0070 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__PsyNetMessengerHttp_X__SendMessage_B02A80E0404057203B0DE6AE8A0FD8A9");
		}

		return uClassPointer;
	};

	void __PsyNetMessengerHttp_X__SendMessage_B02A80E0404057203B0DE6AE8A0FD8A9(class UWebRequest_X* Request);
};

// Class ProjectX.__PsyNetRequestQue_X__SendRequest_385271D44054E149C14586A577011B77
// 0x0008 (0x0060 - 0x0068)
class U__PsyNetRequestQue_X__SendRequest_385271D44054E149C14586A577011B77 : public UObject
{
public:
	struct FName                                       RequestID;                                     // 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__PsyNetRequestQue_X__SendRequest_385271D44054E149C14586A577011B77");
		}

		return uClassPointer;
	};

	void __PsyNetRequestQue_X__SendRequest_385271D44054E149C14586A577011B77();
};

// Class ProjectX.PsyNetRequestQue_X
// 0x0030 (0x0060 - 0x0090)
class UPsyNetRequestQue_X : public UObject
{
public:
	float                                              RequestTimeout;                                // 0x0060 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FPsyNetRequest>                      Requests;                                      // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __SendMessageDelegate__Delegate;               // 0x0078 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetRequestQue_X");
		}

		return uClassPointer;
	};

	void FailAllPending(class UError* Error);
	void TimeoutRequests();
	bool ProcessResponseMessage(class UPsyNetMessage_X* Message);
	void RemoveRequest(struct FName RequestID);
	void SetRequestComplete(struct FName RequestID, class UPsyNetMessage_X* Response, class UError* Error);
	class UTAsyncResult__PsyNetMessage_X* eventSendRequest(class UPsyNetMessage_X* Message);
	class UAsyncTask* SendMessageDelegate(class UPsyNetMessage_X* Message);
};

// Class ProjectX.__PsyNetServiceProvider_X__CreateChannel_A80C7D8548439DBCA513DCA2C9865490
// 0x0010 (0x0060 - 0x0070)
class U__PsyNetServiceProvider_X__CreateChannel_A80C7D8548439DBCA513DCA2C9865490 : public UObject
{
public:
	struct FString                                     ChannelName;                                   // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__PsyNetServiceProvider_X__CreateChannel_A80C7D8548439DBCA513DCA2C9865490");
		}

		return uClassPointer;
	};

	bool __PsyNetServiceProvider_X__CreateChannel_A80C7D8548439DBCA513DCA2C9865490(class UPsyNetChannel_X* C);
};

// Class ProjectX.PsyNetChannel_X
// 0x0050 (0x0060 - 0x00B0)
class UPsyNetChannel_X : public UObject
{
public:
	struct FString                                     ChannelName;                                   // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bOpen : 1;                                     // 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bReceivedFirstMessage : 1;                     // 0x0070 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bClosed : 1;                                   // 0x0070 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bTimedOut : 1;                                 // 0x0070 (0x0004) [0x0000000000000000] [0x00000008] 
	int32_t                                            NextMessageID;                                 // 0x0074 (0x0004) [0x0000000000000000]               
	float                                              WaitForMessageTime;                            // 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FPendingChannelService>              ServiceQueue;                                  // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UPsyNetServiceSubscriptions_X*               Subscriptions;                                 // 0x0090 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FScriptDelegate                             __EventClosed__Delegate;                       // 0x0098 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetChannel_X");
		}

		return uClassPointer;
	};

	struct FString GetDebugName();
	void Close();
	void Timeout();
	void ClearTimeout();
	void UpdateTimeout();
	void ExecuteService(class UPsyNetClientService_X* Service);
	void ExecuteNext();
	class UAsyncTask* CreatePendingService(class UPsyNetClientService_X* Service, int32_t MessageId);
	class UAsyncTask* QueueServiceCall(class UPsyNetClientService_X* Service, class UPsyNetMessage_X* Message);
	void Open();
	void Unsubscribe(struct FScriptDelegate Callback);
	void Subscribe(class UClass* ServiceClass, struct FScriptDelegate Callback);
	void Init(struct FString InChannelName);
	void EventClosed(class UPsyNetChannel_X* Channel);
};

// Class ProjectX.PsyNetServiceProvider_X
// 0x0038 (0x0060 - 0x0098)
class UPsyNetServiceProvider_X : public UObject
{
public:
	class UPsyNetClientServiceCollection_X*            ServiceCollection;                             // 0x0060 (0x0008) [0x0000004000000000]               
	class UPsyNetServiceSubscriptions_X*               Subscriptions;                                 // 0x0068 (0x0008) [0x0000004004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	TArray<class UPsyNetChannel_X*>                    Channels;                                      // 0x0070 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventServiceExecuted__Delegate;              // 0x0080 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetServiceProvider_X");
		}

		return uClassPointer;
	};

	void FinalizeServiceTask(class UPsyNetClientService_X* Service, class UTAsyncResult__PsyNetClientService_X* Task, class UError* Error);
	void PrintServiceResult(struct FString ServiceName, class UError* Error);
	class UTAsyncResult__PsyNetClientService_X* ExecuteServiceMessage(class UPsyNetConnection_X* Connection, class UPsyNetMessage_X* Message);
	bool IsServiceRequest(class UPsyNetMessage_X* Message);
	class UTAsyncResult__PsyNetClientService_X* ExecuteNotification(class UPsyNetConnection_X* Connection, class UPsyNetMessage_X* Message);
	void SetResponse(class UPsyNetClientService_X* Service, class UError* Error, class UPsyNetMessage_X* Response);
	class UTAsyncResult__PsyNetClientService_X* ExecuteRequest(class UPsyNetConnection_X* Connection, class UPsyNetMessage_X* Request, class UPsyNetMessage_X* Response);
	void HandleChannelClosed(class UPsyNetChannel_X* Channel);
	class UPsyNetChannel_X* CreateChannel(struct FString ChannelName);
	void Unsubscribe(struct FScriptDelegate Callback);
	void Subscribe(class UClass* ServiceClass, struct FScriptDelegate Callback);
	void eventConstruct();
	void EventServiceExecuted(class UPsyNetServiceProvider_X* ServiceProvider, class UPsyNetClientService_X* Service);
};

// Class ProjectX.__PsyNetServiceProvider_X__ExecuteRequest_C453E89345823459CADB96BA10E4E2BB
// 0x0008 (0x0060 - 0x0068)
class U__PsyNetServiceProvider_X__ExecuteRequest_C453E89345823459CADB96BA10E4E2BB : public UObject
{
public:
	class UPsyNetMessage_X*                            Response;                                      // 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__PsyNetServiceProvider_X__ExecuteRequest_C453E89345823459CADB96BA10E4E2BB");
		}

		return uClassPointer;
	};

	void __PsyNetServiceProvider_X__ExecuteRequest_C453E89345823459CADB96BA10E4E2BB(class UPsyNetClientService_X* Result, class UError* Error);
};

// Class ProjectX.__PsyNetServiceProvider_X__ExecuteServiceMessage_2677686E48FC95BC28283892E18A0D8F
// 0x0020 (0x0060 - 0x0080)
class U__PsyNetServiceProvider_X__ExecuteServiceMessage_2677686E48FC95BC28283892E18A0D8F : public UObject
{
public:
	struct FString                                     ServiceName;                                   // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UPsyNetClientService_X*                      Service;                                       // 0x0070 (0x0008) [0x0000000000000000]               
	class UTAsyncResult__PsyNetClientService_X*        Task;                                          // 0x0078 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__PsyNetServiceProvider_X__ExecuteServiceMessage_2677686E48FC95BC28283892E18A0D8F");
		}

		return uClassPointer;
	};

	void __PsyNetServiceProvider_X__ExecuteServiceMessage_FA118E954B94EC8E045B2B95524A2B78(class UError* Err);
	void __PsyNetServiceProvider_X__ExecuteServiceMessage_2677686E48FC95BC28283892E18A0D8F(class UPsyNetClientService_X* R, class UError* E);
};

// Class ProjectX.TAsyncResult__PsyNetClientService_X
// 0x0050 (0x00D0 - 0x0120)
class UTAsyncResult__PsyNetClientService_X : public UAsyncTask
{
public:
	class UPsyNetClientService_X*                      Result;                                        // 0x00D0 (0x0008) [0x0000004000000000]               
	struct FScriptDelegate                             __EventResult__Delegate;                       // 0x00D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventResultComplete__Delegate;               // 0x00F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ResultDelegate__Delegate;                    // 0x0108 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.TAsyncResult__PsyNetClientService_X");
		}

		return uClassPointer;
	};

	class UTAsyncResult__PsyNetClientService_X* CreateResultError(class UError* InError);
	class UTAsyncResult__PsyNetClientService_X* CreateResult(class UPsyNetClientService_X* InResult);
	class UTAsyncResult__PsyNetClientService_X* Copy();
	void eventClearCallbacks();
	class UTAsyncResult__PsyNetClientService_X* eventSetResultWhen(class UAsyncTask* Other, struct FScriptDelegate GetResultDelegate);
	class UTAsyncResult__PsyNetClientService_X* eventSetResult(class UPsyNetClientService_X* InResult, class UError* InError);
	class UTAsyncResult__PsyNetClientService_X* NotifyOnResultComplete(struct FScriptDelegate Callback);
	class UTAsyncResult__PsyNetClientService_X* NotifyOnResult(struct FScriptDelegate Callback);
	class UPsyNetClientService_X* ResultDelegate();
	void EventResultComplete(class UPsyNetClientService_X* OutResult, class UError* OutError);
	void EventResult(class UPsyNetClientService_X* OutResult);
};

// Class ProjectX.__RegionConfig_X__GetSubRegions_7B0F22A147B0383241EE2CAB7F4FA73F
// 0x0010 (0x0060 - 0x0070)
class U__RegionConfig_X__GetSubRegions_7B0F22A147B0383241EE2CAB7F4FA73F : public UObject
{
public:
	struct FString                                     SuperRegionID;                                 // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__RegionConfig_X__GetSubRegions_7B0F22A147B0383241EE2CAB7F4FA73F");
		}

		return uClassPointer;
	};

	bool __RegionConfig_X__GetSubRegions_7B0F22A147B0383241EE2CAB7F4FA73F(class URegion_X* R);
};

// Class ProjectX.RegionConfig_X
// 0x0020 (0x0078 - 0x0098)
class URegionConfig_X : public UOnlineConfig_X
{
public:
	TArray<class USuperRegion_X*>                      SuperRegions;                                  // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class URegion_X*>                           Regions;                                       // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RegionConfig_X");
		}

		return uClassPointer;
	};

	struct FRegionSecret __RegionConfig_X__GetRegionSecrets_77470F2B4380A2D6AF5BC2BBA5F26CAD(class URegion_X* R);
	bool __RegionConfig_X__GetRegionSecrets_423210984731EE2F87549B8D3D4190FC(class URegion_X* R);
	TArray<struct FRegionSecret> GetRegionSecrets();
	TArray<class URegion_X*> GetSubRegions(struct FString SuperRegionID);
	class URegion_X* FindRegion(struct FString RegionID);
	class USuperRegion_X* FindSuperRegion(struct FString SuperRegionID);
	void Apply();
};

// Class ProjectX.__RPC_X__CreateTask_B7E6AA394E0667FD06750CBFEC827F6B
// 0x0018 (0x0060 - 0x0078)
class U__RPC_X__CreateTask_B7E6AA394E0667FD06750CBFEC827F6B : public UObject
{
public:
	struct FScriptDelegate                             InCallback;                                    // 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__RPC_X__CreateTask_B7E6AA394E0667FD06750CBFEC827F6B");
		}

		return uClassPointer;
	};

	void __RPC_X__CreateTask_B7E6AA394E0667FD06750CBFEC827F6B(class UError* Err);
};

// Class ProjectX.__RPCQueue_X__CreateBatch_6312E04E48D767A5E52E8BA9A556319C
// 0x0008 (0x0060 - 0x0068)
class U__RPCQueue_X__CreateBatch_6312E04E48D767A5E52E8BA9A556319C : public UObject
{
public:
	class URPCBatch_X*                                 Batch;                                         // 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__RPCQueue_X__CreateBatch_6312E04E48D767A5E52E8BA9A556319C");
		}

		return uClassPointer;
	};

	void __RPCQueue_X__CreateBatch_6312E04E48D767A5E52E8BA9A556319C(class UPsyNetMessage_X* Response, class UError* Error);
};

// Class ProjectX.__RPCQueue_X__CreateBatchSingleRPC_4826214F48AF7DC47B01FCBC36BD7C6B
// 0x0008 (0x0060 - 0x0068)
class U__RPCQueue_X__CreateBatchSingleRPC_4826214F48AF7DC47B01FCBC36BD7C6B : public UObject
{
public:
	class URPCBatch_X*                                 Batch;                                         // 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__RPCQueue_X__CreateBatchSingleRPC_4826214F48AF7DC47B01FCBC36BD7C6B");
		}

		return uClassPointer;
	};

	void __RPCQueue_X__CreateBatchSingleRPC_4826214F48AF7DC47B01FCBC36BD7C6B(class UPsyNetMessage_X* Response, class UError* Error);
};

// Class ProjectX.__ServerPlayerTracker_X__AddPlayer_2CF406DA4E7BC245C01992BFE8FEAA78
// 0x0048 (0x0060 - 0x00A8)
class U__ServerPlayerTracker_X__AddPlayer_2CF406DA4E7BC245C01992BFE8FEAA78 : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x0060 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__ServerPlayerTracker_X__AddPlayer_2CF406DA4E7BC245C01992BFE8FEAA78");
		}

		return uClassPointer;
	};

	bool __ServerPlayerTracker_X__AddPlayer_2CF406DA4E7BC245C01992BFE8FEAA78(struct FUniqueNetId P);
};

// Class ProjectX.ServerPlayerTracker_X
// 0x0058 (0x0070 - 0x00C8)
class UServerPlayerTracker_X : public UComponent
{
public:
	TArray<struct FUniqueNetId>                        Players;                                       // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UAddReservationMessage_X*>            Messages;                                      // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UOnlineGameReservations_X*                   Reservations;                                  // 0x0090 (0x0008) [0x0000800000000000]               
	struct FScriptDelegate                             __EventPlayerAdded__Delegate;                  // 0x0098 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPlayerRemoved__Delegate;                // 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ServerPlayerTracker_X");
		}

		return uClassPointer;
	};

	TArray<struct FUniqueNetId> __ServerPlayerTracker_X__Refresh_5D74102D4D58430145FDB4A4EA8B433F(class UAddReservationMessage_X* Message);
	struct FUniqueNetId __ServerPlayerTracker_X__Refresh_EA1C3ED84B6D2A22C0F4459BEC957269(struct FReservationData P);
	bool __ServerPlayerTracker_X__Refresh_A35FD21E40939916B3BF7C97D72240EB(struct FReservationData P);
	struct FString GetPlayerName(struct FUniqueNetId PlayerID);
	void Reset();
	void Refresh();
	void RemoveReservationMessage(class UAddReservationMessage_X* Message);
	void AddReservationMessage(class UAddReservationMessage_X* Message);
	void RemovePlayer(struct FUniqueNetId PlayerID);
	void AddPlayer(struct FUniqueNetId PlayerID);
	void EventPlayerRemoved(class UServerPlayerTracker_X* Tracker, struct FUniqueNetId PlayerID);
	void EventPlayerAdded(class UServerPlayerTracker_X* Tracker, struct FUniqueNetId PlayerID);
};

// Class ProjectX.__StatusObserver_X__FindByAcceptedType_9C6A93DB48FC38D21B054487E4780BC0
// 0x0008 (0x0060 - 0x0068)
class U__StatusObserver_X__FindByAcceptedType_9C6A93DB48FC38D21B054487E4780BC0 : public UObject
{
public:
	class UClass*                                      InType;                                        // 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__StatusObserver_X__FindByAcceptedType_9C6A93DB48FC38D21B054487E4780BC0");
		}

		return uClassPointer;
	};

	bool __StatusObserver_X__FindByAcceptedType_9C6A93DB48FC38D21B054487E4780BC0(class UTriggerInfo* TT);
};

// Class ProjectX.StatusTrigger_X
// 0x0020 (0x0060 - 0x0080)
class UStatusTrigger_X : public UObject
{
public:
	unsigned long                                      bTriggered : 1;                                // 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             EventPropertyChange;                           // 0x0068 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.StatusTrigger_X");
		}

		return uClassPointer;
	};

	void EventPropertyChangeFunc();
	void EvaluateCondition(unsigned long InConditionalValue);
	bool IsTriggered();
	void ToggleTriggered();
	void DebugPrintInfo(struct FString AddedInfo);
	void DebugPrint();
};

// Class ProjectX.TriggerInfo
// 0x0048 (0x0060 - 0x00A8)
class UTriggerInfo : public UObject
{
public:
	class UClass*                                      AcceptedType;                                  // 0x0060 (0x0008) [0x0000000000000000]               
	TArray<class UStatusTrigger_X*>                    Triggers;                                      // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                      // 0x0078 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __UpdateTrigger__Delegate;                     // 0x0090 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.TriggerInfo");
		}

		return uClassPointer;
	};

	class UTriggerInfo* SetType(class UClass* InType);
	void UpdateTrigger(class UStatusTrigger_X* InTrigger);
};

// Class ProjectX.StatusObserver_X
// 0x0040 (0x0060 - 0x00A0)
class UStatusObserver_X : public UObject
{
public:
	TArray<class UTriggerInfo*>                        TriggerTypes;                                  // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class UClass*>                              AcceptedTypes;                                 // 0x0070 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	unsigned long                                      bInitComplete : 1;                             // 0x0080 (0x0004) [0x0008000000000000] [0x00000001] 
	struct FScriptDelegate                             __bInitComplete__ChangeNotify;                 // 0x0088 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.StatusObserver_X");
		}

		return uClassPointer;
	};

	class UTriggerInfo* __StatusObserver_X__Init_6E4666F5411AF8590C51958962D2F19E(class UClass* T);
	void __bInitComplete__ChangeNotifyFunc();
	void DebugPrintTriggers();
	void DebugPrint();
	bool ObservesTriggerType(class UStatusTrigger_X* InTrigger);
	void UpdateTriggers(class UClass* InType);
	void UnRegisterTriggers(TArray<class UStatusTrigger_X*>& InTriggers);
	void RegisterTriggers(TArray<class UStatusTrigger_X*>& InTriggers);
	void AddCallback(class UClass* InType, struct FScriptDelegate InCallback);
	class UTriggerInfo* FindByAcceptedType(class UClass* InType);
	void SetInitComplete();
	void Init(class ULocalPlayer_X* LP);
};

// Class ProjectX.__StatusObserver_X__ObservesTriggerType_C6FDE9AF4587AF73AD767392BC4C24AE
// 0x0008 (0x0060 - 0x0068)
class U__StatusObserver_X__ObservesTriggerType_C6FDE9AF4587AF73AD767392BC4C24AE : public UObject
{
public:
	class UStatusTrigger_X*                            InTrigger;                                     // 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__StatusObserver_X__ObservesTriggerType_C6FDE9AF4587AF73AD767392BC4C24AE");
		}

		return uClassPointer;
	};

	bool __StatusObserver_X__ObservesTriggerType_C6FDE9AF4587AF73AD767392BC4C24AE(class UClass* C);
};

// Class ProjectX.__TaskGate_X__Add_44CB550A4DD36476A6B83DB046F52A3C
// 0x0008 (0x0060 - 0x0068)
class U__TaskGate_X__Add_44CB550A4DD36476A6B83DB046F52A3C : public UObject
{
public:
	class UAsyncTask*                                  Task;                                          // 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__TaskGate_X__Add_44CB550A4DD36476A6B83DB046F52A3C");
		}

		return uClassPointer;
	};

	void __TaskGate_X__Add_44CB550A4DD36476A6B83DB046F52A3C();
};

// Class ProjectX.TaskGate_X
// 0x0018 (0x0060 - 0x0078)
class UTaskGate_X : public UObject
{
public:
	unsigned long                                      bOpen : 1;                                     // 0x0060 (0x0004) [0x0000004000000000] [0x00000001] 
	TArray<class UAsyncTask*>                          Tasks;                                         // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.TaskGate_X");
		}

		return uClassPointer;
	};

	class UAsyncTask* AddWithTimeout(float TimeoutSeconds, class UErrorType* TimeoutError, struct FString ErrorMessage);
	class UAsyncTask* Add();
	void CompleteTasks();
	void SetOpen(unsigned long bIsOpen);
};

// Class ProjectX.__TaskGate_X__AddWithTimeout_2A5E18AF4E7845C466F1DC87E31E15CE
// 0x0038 (0x0060 - 0x0098)
class U__TaskGate_X__AddWithTimeout_2A5E18AF4E7845C466F1DC87E31E15CE : public UObject
{
public:
	class UAsyncTask*                                  Task;                                          // 0x0060 (0x0008) [0x0000000000000000]               
	class UErrorType*                                  TimeoutError;                                  // 0x0068 (0x0008) [0x0000000000000000]               
	struct FString                                     ErrorMessage;                                  // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             TimeoutDelegate;                               // 0x0080 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__TaskGate_X__AddWithTimeout_2A5E18AF4E7845C466F1DC87E31E15CE");
		}

		return uClassPointer;
	};

	void __TaskGate_X__AddWithTimeout_807FE9D6418317613E9E07A655B40D98();
	void __TaskGate_X__AddWithTimeout_2A5E18AF4E7845C466F1DC87E31E15CE();
};

// Class ProjectX.__TAsyncResult__array_ClubInvite_X__Copy_08546648458B6DB0E72780AD3CFA4D5F
// 0x0008 (0x0060 - 0x0068)
class U__TAsyncResult__array_ClubInvite_X__Copy_08546648458B6DB0E72780AD3CFA4D5F : public UObject
{
public:
	class UTAsyncResult__array_ClubInvite_X*           Instance;                                      // 0x0060 (0x0008) [0x0001000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__TAsyncResult__array_ClubInvite_X__Copy_08546648458B6DB0E72780AD3CFA4D5F");
		}

		return uClassPointer;
	};

	void __TAsyncResult__array_ClubInvite_X__Copy_08546648458B6DB0E72780AD3CFA4D5F(TArray<class UClubInvite_X*> R, class UError* E);
};

// Class ProjectX.TAsyncResult__array_ClubInvite_X
// 0x0058 (0x00D0 - 0x0128)
class UTAsyncResult__array_ClubInvite_X : public UAsyncTask
{
public:
	TArray<class UClubInvite_X*>                       Result;                                        // 0x00D0 (0x0010) [0x0001004000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventResult__Delegate;                       // 0x00E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventResultComplete__Delegate;               // 0x00F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ResultDelegate__Delegate;                    // 0x0110 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.TAsyncResult__array_ClubInvite_X");
		}

		return uClassPointer;
	};

	class UTAsyncResult__array_ClubInvite_X* CreateResultError(class UError* InError);
	class UTAsyncResult__array_ClubInvite_X* CreateResult(TArray<class UClubInvite_X*> InResult);
	class UTAsyncResult__array_ClubInvite_X* Copy();
	void eventClearCallbacks();
	class UTAsyncResult__array_ClubInvite_X* eventSetResultWhen(class UAsyncTask* Other, struct FScriptDelegate GetResultDelegate);
	class UTAsyncResult__array_ClubInvite_X* eventSetResult(TArray<class UClubInvite_X*> InResult, class UError* InError);
	class UTAsyncResult__array_ClubInvite_X* NotifyOnResultComplete(struct FScriptDelegate Callback);
	class UTAsyncResult__array_ClubInvite_X* NotifyOnResult(struct FScriptDelegate Callback);
	TArray<class UClubInvite_X*> ResultDelegate();
	void EventResultComplete(TArray<class UClubInvite_X*> OutResult, class UError* OutError);
	void EventResult(TArray<class UClubInvite_X*> OutResult);
};

// Class ProjectX.ClubInvite_X
// 0x0080 (0x0060 - 0x00E0)
class UClubInvite_X : public UObject
{
public:
	uint64_t                                           ClubID;                                        // 0x0060 (0x0008) [0x0001000000000000]               
	struct FString                                     ClubName;                                      // 0x0068 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	struct FString                                     ClubTag;                                       // 0x0078 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	struct FClubMember                                 InvitedBy;                                     // 0x0088 (0x0058) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ClubInvite_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.__TAsyncResult__array_ClubInvite_X__NotifyOnResult_7A33043149DA8EC1EB89418DF898B451
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__array_ClubInvite_X__NotifyOnResult_7A33043149DA8EC1EB89418DF898B451 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                      // 0x0060 (0x0018) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__TAsyncResult__array_ClubInvite_X__NotifyOnResult_7A33043149DA8EC1EB89418DF898B451");
		}

		return uClassPointer;
	};

	void __TAsyncResult__array_ClubInvite_X__NotifyOnResult_7A33043149DA8EC1EB89418DF898B451();
};

// Class ProjectX.__TAsyncResult__array_ClubInvite_X__NotifyOnResultComplete_2E66E0114760F98597A756A9C34261EE
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__array_ClubInvite_X__NotifyOnResultComplete_2E66E0114760F98597A756A9C34261EE : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                      // 0x0060 (0x0018) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__TAsyncResult__array_ClubInvite_X__NotifyOnResultComplete_2E66E0114760F98597A756A9C34261EE");
		}

		return uClassPointer;
	};

	void __TAsyncResult__array_ClubInvite_X__NotifyOnResultComplete_2E66E0114760F98597A756A9C34261EE(class UError* Err);
};

// Class ProjectX.__TAsyncResult__array_ClubInvite_X__SetResultWhen_CB7D83DE400EFFEBFB3F8B81B38A1DB5
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__array_ClubInvite_X__SetResultWhen_CB7D83DE400EFFEBFB3F8B81B38A1DB5 : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                             // 0x0060 (0x0018) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__TAsyncResult__array_ClubInvite_X__SetResultWhen_CB7D83DE400EFFEBFB3F8B81B38A1DB5");
		}

		return uClassPointer;
	};

	void __TAsyncResult__array_ClubInvite_X__SetResultWhen_CB7D83DE400EFFEBFB3F8B81B38A1DB5();
};

// Class ProjectX.__TAsyncResult__array_LanServerRecord_X__Copy_DFEC85FD4942A6DB6769DA876BF408C4
// 0x0008 (0x0060 - 0x0068)
class U__TAsyncResult__array_LanServerRecord_X__Copy_DFEC85FD4942A6DB6769DA876BF408C4 : public UObject
{
public:
	class UTAsyncResult__array_LanServerRecord_X*      Instance;                                      // 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__TAsyncResult__array_LanServerRecord_X__Copy_DFEC85FD4942A6DB6769DA876BF408C4");
		}

		return uClassPointer;
	};

	void __TAsyncResult__array_LanServerRecord_X__Copy_DFEC85FD4942A6DB6769DA876BF408C4(TArray<class ULanServerRecord_X*> R, class UError* E);
};

// Class ProjectX.TAsyncResult__array_LanServerRecord_X
// 0x0058 (0x00D0 - 0x0128)
class UTAsyncResult__array_LanServerRecord_X : public UAsyncTask
{
public:
	TArray<class ULanServerRecord_X*>                  Result;                                        // 0x00D0 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventResult__Delegate;                       // 0x00E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventResultComplete__Delegate;               // 0x00F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ResultDelegate__Delegate;                    // 0x0110 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.TAsyncResult__array_LanServerRecord_X");
		}

		return uClassPointer;
	};

	class UTAsyncResult__array_LanServerRecord_X* CreateResultError(class UError* InError);
	class UTAsyncResult__array_LanServerRecord_X* CreateResult(TArray<class ULanServerRecord_X*> InResult);
	class UTAsyncResult__array_LanServerRecord_X* Copy();
	void eventClearCallbacks();
	class UTAsyncResult__array_LanServerRecord_X* eventSetResultWhen(class UAsyncTask* Other, struct FScriptDelegate GetResultDelegate);
	class UTAsyncResult__array_LanServerRecord_X* eventSetResult(TArray<class ULanServerRecord_X*> InResult, class UError* InError);
	class UTAsyncResult__array_LanServerRecord_X* NotifyOnResultComplete(struct FScriptDelegate Callback);
	class UTAsyncResult__array_LanServerRecord_X* NotifyOnResult(struct FScriptDelegate Callback);
	TArray<class ULanServerRecord_X*> ResultDelegate();
	void EventResultComplete(TArray<class ULanServerRecord_X*> OutResult, class UError* OutError);
	void EventResult(TArray<class ULanServerRecord_X*> OutResult);
};

// Class ProjectX.LanServerRecord_X
// 0x0020 (0x0060 - 0x0080)
class ULanServerRecord_X : public UObject
{
public:
	struct FString                                     ServerId;                                      // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     MetaData;                                      // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.LanServerRecord_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.__TAsyncResult__array_LanServerRecord_X__NotifyOnResult_195C9D3440B00895FB231A913EA27DEB
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__array_LanServerRecord_X__NotifyOnResult_195C9D3440B00895FB231A913EA27DEB : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                      // 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__TAsyncResult__array_LanServerRecord_X__NotifyOnResult_195C9D3440B00895FB231A913EA27DEB");
		}

		return uClassPointer;
	};

	void __TAsyncResult__array_LanServerRecord_X__NotifyOnResult_195C9D3440B00895FB231A913EA27DEB();
};

// Class ProjectX.__TAsyncResult__array_LanServerRecord_X__NotifyOnResultComplete_012A9C5044681649C2EE7F96D8009859
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__array_LanServerRecord_X__NotifyOnResultComplete_012A9C5044681649C2EE7F96D8009859 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                      // 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__TAsyncResult__array_LanServerRecord_X__NotifyOnResultComplete_012A9C5044681649C2EE7F96D8009859");
		}

		return uClassPointer;
	};

	void __TAsyncResult__array_LanServerRecord_X__NotifyOnResultComplete_012A9C5044681649C2EE7F96D8009859(class UError* Err);
};

// Class ProjectX.__TAsyncResult__array_LanServerRecord_X__SetResultWhen_7E6BF87943900E9B1ECD978A29F0D7C9
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__array_LanServerRecord_X__SetResultWhen_7E6BF87943900E9B1ECD978A29F0D7C9 : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                             // 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__TAsyncResult__array_LanServerRecord_X__SetResultWhen_7E6BF87943900E9B1ECD978A29F0D7C9");
		}

		return uClassPointer;
	};

	void __TAsyncResult__array_LanServerRecord_X__SetResultWhen_7E6BF87943900E9B1ECD978A29F0D7C9();
};

// Class ProjectX.__TAsyncResult__ClubDetails_X__Copy_6D7F8026459F46782C55F3BB78040B57
// 0x0008 (0x0060 - 0x0068)
class U__TAsyncResult__ClubDetails_X__Copy_6D7F8026459F46782C55F3BB78040B57 : public UObject
{
public:
	class UTAsyncResult__ClubDetails_X*                Instance;                                      // 0x0060 (0x0008) [0x0001000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__TAsyncResult__ClubDetails_X__Copy_6D7F8026459F46782C55F3BB78040B57");
		}

		return uClassPointer;
	};

	void __TAsyncResult__ClubDetails_X__Copy_6D7F8026459F46782C55F3BB78040B57(class UClubDetails_X* R, class UError* E);
};

// Class ProjectX.TAsyncResult__ClubDetails_X
// 0x0050 (0x00D0 - 0x0120)
class UTAsyncResult__ClubDetails_X : public UAsyncTask
{
public:
	class UClubDetails_X*                              Result;                                        // 0x00D0 (0x0008) [0x0001004000000000]               
	struct FScriptDelegate                             __EventResult__Delegate;                       // 0x00D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventResultComplete__Delegate;               // 0x00F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ResultDelegate__Delegate;                    // 0x0108 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.TAsyncResult__ClubDetails_X");
		}

		return uClassPointer;
	};

	class UTAsyncResult__ClubDetails_X* CreateResultError(class UError* InError);
	class UTAsyncResult__ClubDetails_X* CreateResult(class UClubDetails_X* InResult);
	class UTAsyncResult__ClubDetails_X* Copy();
	void eventClearCallbacks();
	class UTAsyncResult__ClubDetails_X* eventSetResultWhen(class UAsyncTask* Other, struct FScriptDelegate GetResultDelegate);
	class UTAsyncResult__ClubDetails_X* eventSetResult(class UClubDetails_X* InResult, class UError* InError);
	class UTAsyncResult__ClubDetails_X* NotifyOnResultComplete(struct FScriptDelegate Callback);
	class UTAsyncResult__ClubDetails_X* NotifyOnResult(struct FScriptDelegate Callback);
	class UClubDetails_X* ResultDelegate();
	void EventResultComplete(class UClubDetails_X* OutResult, class UError* OutError);
	void EventResult(class UClubDetails_X* OutResult);
};

// Class ProjectX.__TAsyncResult__ClubDetails_X__NotifyOnResult_D1BF2EBE4A34974E58C9018E4810001B
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__ClubDetails_X__NotifyOnResult_D1BF2EBE4A34974E58C9018E4810001B : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                      // 0x0060 (0x0018) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__TAsyncResult__ClubDetails_X__NotifyOnResult_D1BF2EBE4A34974E58C9018E4810001B");
		}

		return uClassPointer;
	};

	void __TAsyncResult__ClubDetails_X__NotifyOnResult_D1BF2EBE4A34974E58C9018E4810001B();
};

// Class ProjectX.__TAsyncResult__ClubDetails_X__NotifyOnResultComplete_5A789DDB4CC637A0FF084E8E40A2F145
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__ClubDetails_X__NotifyOnResultComplete_5A789DDB4CC637A0FF084E8E40A2F145 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                      // 0x0060 (0x0018) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__TAsyncResult__ClubDetails_X__NotifyOnResultComplete_5A789DDB4CC637A0FF084E8E40A2F145");
		}

		return uClassPointer;
	};

	void __TAsyncResult__ClubDetails_X__NotifyOnResultComplete_5A789DDB4CC637A0FF084E8E40A2F145(class UError* Err);
};

// Class ProjectX.__TAsyncResult__ClubDetails_X__SetResultWhen_93B9A7F14833486FBCE34DAFB6195F50
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__ClubDetails_X__SetResultWhen_93B9A7F14833486FBCE34DAFB6195F50 : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                             // 0x0060 (0x0018) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__TAsyncResult__ClubDetails_X__SetResultWhen_93B9A7F14833486FBCE34DAFB6195F50");
		}

		return uClassPointer;
	};

	void __TAsyncResult__ClubDetails_X__SetResultWhen_93B9A7F14833486FBCE34DAFB6195F50();
};

// Class ProjectX.__TAsyncResult__PsyNetClientService_X__Copy_57098A3543023444B090B28F85DC8772
// 0x0008 (0x0060 - 0x0068)
class U__TAsyncResult__PsyNetClientService_X__Copy_57098A3543023444B090B28F85DC8772 : public UObject
{
public:
	class UTAsyncResult__PsyNetClientService_X*        Instance;                                      // 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyNetClientService_X__Copy_57098A3543023444B090B28F85DC8772");
		}

		return uClassPointer;
	};

	void __TAsyncResult__PsyNetClientService_X__Copy_57098A3543023444B090B28F85DC8772(class UPsyNetClientService_X* R, class UError* E);
};

// Class ProjectX.__TAsyncResult__PsyNetClientService_X__NotifyOnResult_DF8F46394322B9FD9A75B6A2FB8A827F
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__PsyNetClientService_X__NotifyOnResult_DF8F46394322B9FD9A75B6A2FB8A827F : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                      // 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyNetClientService_X__NotifyOnResult_DF8F46394322B9FD9A75B6A2FB8A827F");
		}

		return uClassPointer;
	};

	void __TAsyncResult__PsyNetClientService_X__NotifyOnResult_DF8F46394322B9FD9A75B6A2FB8A827F();
};

// Class ProjectX.__TAsyncResult__PsyNetClientService_X__NotifyOnResultComplete_2EC5F1354B43AC6E59B0498A248FDEF7
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__PsyNetClientService_X__NotifyOnResultComplete_2EC5F1354B43AC6E59B0498A248FDEF7 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                      // 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyNetClientService_X__NotifyOnResultComplete_2EC5F1354B43AC6E59B0498A248FDEF7");
		}

		return uClassPointer;
	};

	void __TAsyncResult__PsyNetClientService_X__NotifyOnResultComplete_2EC5F1354B43AC6E59B0498A248FDEF7(class UError* Err);
};

// Class ProjectX.__TAsyncResult__PsyNetClientService_X__SetResultWhen_F90DFD3843472025F443EB8D3EFC1041
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__PsyNetClientService_X__SetResultWhen_F90DFD3843472025F443EB8D3EFC1041 : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                             // 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyNetClientService_X__SetResultWhen_F90DFD3843472025F443EB8D3EFC1041");
		}

		return uClassPointer;
	};

	void __TAsyncResult__PsyNetClientService_X__SetResultWhen_F90DFD3843472025F443EB8D3EFC1041();
};

// Class ProjectX.__TAsyncResult__PsyNetMessage_X__Copy_3CEBB2434A4B12B0EFEF328AA4F3F36F
// 0x0008 (0x0060 - 0x0068)
class U__TAsyncResult__PsyNetMessage_X__Copy_3CEBB2434A4B12B0EFEF328AA4F3F36F : public UObject
{
public:
	class UTAsyncResult__PsyNetMessage_X*              Instance;                                      // 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyNetMessage_X__Copy_3CEBB2434A4B12B0EFEF328AA4F3F36F");
		}

		return uClassPointer;
	};

	void __TAsyncResult__PsyNetMessage_X__Copy_3CEBB2434A4B12B0EFEF328AA4F3F36F(class UPsyNetMessage_X* R, class UError* E);
};

// Class ProjectX.TAsyncResult__PsyNetMessage_X
// 0x0050 (0x00D0 - 0x0120)
class UTAsyncResult__PsyNetMessage_X : public UAsyncTask
{
public:
	class UPsyNetMessage_X*                            Result;                                        // 0x00D0 (0x0008) [0x0000004000000000]               
	struct FScriptDelegate                             __EventResult__Delegate;                       // 0x00D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventResultComplete__Delegate;               // 0x00F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ResultDelegate__Delegate;                    // 0x0108 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.TAsyncResult__PsyNetMessage_X");
		}

		return uClassPointer;
	};

	class UTAsyncResult__PsyNetMessage_X* CreateResultError(class UError* InError);
	class UTAsyncResult__PsyNetMessage_X* CreateResult(class UPsyNetMessage_X* InResult);
	class UTAsyncResult__PsyNetMessage_X* Copy();
	void eventClearCallbacks();
	class UTAsyncResult__PsyNetMessage_X* eventSetResultWhen(class UAsyncTask* Other, struct FScriptDelegate GetResultDelegate);
	class UTAsyncResult__PsyNetMessage_X* eventSetResult(class UPsyNetMessage_X* InResult, class UError* InError);
	class UTAsyncResult__PsyNetMessage_X* NotifyOnResultComplete(struct FScriptDelegate Callback);
	class UTAsyncResult__PsyNetMessage_X* NotifyOnResult(struct FScriptDelegate Callback);
	class UPsyNetMessage_X* ResultDelegate();
	void EventResultComplete(class UPsyNetMessage_X* OutResult, class UError* OutError);
	void EventResult(class UPsyNetMessage_X* OutResult);
};

// Class ProjectX.__TAsyncResult__PsyNetMessage_X__NotifyOnResult_637C9A424DF16C107E1874BDE7094A15
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__PsyNetMessage_X__NotifyOnResult_637C9A424DF16C107E1874BDE7094A15 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                      // 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyNetMessage_X__NotifyOnResult_637C9A424DF16C107E1874BDE7094A15");
		}

		return uClassPointer;
	};

	void __TAsyncResult__PsyNetMessage_X__NotifyOnResult_637C9A424DF16C107E1874BDE7094A15();
};

// Class ProjectX.__TAsyncResult__PsyNetMessage_X__NotifyOnResultComplete_FA947DF344F15B9108202B8500E9AE23
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__PsyNetMessage_X__NotifyOnResultComplete_FA947DF344F15B9108202B8500E9AE23 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                      // 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyNetMessage_X__NotifyOnResultComplete_FA947DF344F15B9108202B8500E9AE23");
		}

		return uClassPointer;
	};

	void __TAsyncResult__PsyNetMessage_X__NotifyOnResultComplete_FA947DF344F15B9108202B8500E9AE23(class UError* Err);
};

// Class ProjectX.__TAsyncResult__PsyNetMessage_X__SetResultWhen_E4D37FBD42D4A7FB4F17DEB8A1F2448C
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__PsyNetMessage_X__SetResultWhen_E4D37FBD42D4A7FB4F17DEB8A1F2448C : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                             // 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyNetMessage_X__SetResultWhen_E4D37FBD42D4A7FB4F17DEB8A1F2448C");
		}

		return uClassPointer;
	};

	void __TAsyncResult__PsyNetMessage_X__SetResultWhen_E4D37FBD42D4A7FB4F17DEB8A1F2448C();
};

// Class ProjectX.__TAsyncResult__PsyTagCheckResult_X__Copy_3851EF6547E634198F2EEE9291632471
// 0x0008 (0x0060 - 0x0068)
class U__TAsyncResult__PsyTagCheckResult_X__Copy_3851EF6547E634198F2EEE9291632471 : public UObject
{
public:
	class UTAsyncResult__PsyTagCheckResult_X*          Instance;                                      // 0x0060 (0x0008) [0x0001000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyTagCheckResult_X__Copy_3851EF6547E634198F2EEE9291632471");
		}

		return uClassPointer;
	};

	void __TAsyncResult__PsyTagCheckResult_X__Copy_3851EF6547E634198F2EEE9291632471(class UPsyTagCheckResult_X* R, class UError* E);
};

// Class ProjectX.TAsyncResult__PsyTagCheckResult_X
// 0x0050 (0x00D0 - 0x0120)
class UTAsyncResult__PsyTagCheckResult_X : public UAsyncTask
{
public:
	class UPsyTagCheckResult_X*                        Result;                                        // 0x00D0 (0x0008) [0x0001004000000000]               
	struct FScriptDelegate                             __EventResult__Delegate;                       // 0x00D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventResultComplete__Delegate;               // 0x00F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ResultDelegate__Delegate;                    // 0x0108 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.TAsyncResult__PsyTagCheckResult_X");
		}

		return uClassPointer;
	};

	class UTAsyncResult__PsyTagCheckResult_X* CreateResultError(class UError* InError);
	class UTAsyncResult__PsyTagCheckResult_X* CreateResult(class UPsyTagCheckResult_X* InResult);
	class UTAsyncResult__PsyTagCheckResult_X* Copy();
	void eventClearCallbacks();
	class UTAsyncResult__PsyTagCheckResult_X* eventSetResultWhen(class UAsyncTask* Other, struct FScriptDelegate GetResultDelegate);
	class UTAsyncResult__PsyTagCheckResult_X* eventSetResult(class UPsyTagCheckResult_X* InResult, class UError* InError);
	class UTAsyncResult__PsyTagCheckResult_X* NotifyOnResultComplete(struct FScriptDelegate Callback);
	class UTAsyncResult__PsyTagCheckResult_X* NotifyOnResult(struct FScriptDelegate Callback);
	class UPsyTagCheckResult_X* ResultDelegate();
	void EventResultComplete(class UPsyTagCheckResult_X* OutResult, class UError* OutError);
	void EventResult(class UPsyTagCheckResult_X* OutResult);
};

// Class ProjectX.PsyTagCheckResult_X
// 0x0030 (0x0060 - 0x0090)
class UPsyTagCheckResult_X : public UObject
{
public:
	struct FPsyTag                                     PsyTag;                                        // 0x0060 (0x0018) [0x0001000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bValid : 1;                                    // 0x0078 (0x0004) [0x0001000000000000] [0x00000001] 
	struct FString                                     ErrorMessage;                                  // 0x0080 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyTagCheckResult_X");
		}

		return uClassPointer;
	};

	void SetPsyTag(struct FPsyTag InPsyTag);
};

// Class ProjectX.__TAsyncResult__PsyTagCheckResult_X__NotifyOnResult_F32FE0494C06D7D648A19B940D92F84B
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__PsyTagCheckResult_X__NotifyOnResult_F32FE0494C06D7D648A19B940D92F84B : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                      // 0x0060 (0x0018) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyTagCheckResult_X__NotifyOnResult_F32FE0494C06D7D648A19B940D92F84B");
		}

		return uClassPointer;
	};

	void __TAsyncResult__PsyTagCheckResult_X__NotifyOnResult_F32FE0494C06D7D648A19B940D92F84B();
};

// Class ProjectX.__TAsyncResult__PsyTagCheckResult_X__NotifyOnResultComplete_7DE59225432657B9EE782486A8DBBEDA
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__PsyTagCheckResult_X__NotifyOnResultComplete_7DE59225432657B9EE782486A8DBBEDA : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                      // 0x0060 (0x0018) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyTagCheckResult_X__NotifyOnResultComplete_7DE59225432657B9EE782486A8DBBEDA");
		}

		return uClassPointer;
	};

	void __TAsyncResult__PsyTagCheckResult_X__NotifyOnResultComplete_7DE59225432657B9EE782486A8DBBEDA(class UError* Err);
};

// Class ProjectX.__TAsyncResult__PsyTagCheckResult_X__SetResultWhen_543201B44922D90B1AA117A94770D836
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__PsyTagCheckResult_X__SetResultWhen_543201B44922D90B1AA117A94770D836 : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                             // 0x0060 (0x0018) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__TAsyncResult__PsyTagCheckResult_X__SetResultWhen_543201B44922D90B1AA117A94770D836");
		}

		return uClassPointer;
	};

	void __TAsyncResult__PsyTagCheckResult_X__SetResultWhen_543201B44922D90B1AA117A94770D836();
};

// Class ProjectX.__TAsyncResult__Texture2DDynamic__Copy_100472594CABA0A417C94892CE370816
// 0x0008 (0x0060 - 0x0068)
class U__TAsyncResult__Texture2DDynamic__Copy_100472594CABA0A417C94892CE370816 : public UObject
{
public:
	class UTAsyncResult__Texture2DDynamic*             Instance;                                      // 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__TAsyncResult__Texture2DDynamic__Copy_100472594CABA0A417C94892CE370816");
		}

		return uClassPointer;
	};

	void __TAsyncResult__Texture2DDynamic__Copy_100472594CABA0A417C94892CE370816(class UTexture2DDynamic* R, class UError* E);
};

// Class ProjectX.TAsyncResult__Texture2DDynamic
// 0x0050 (0x00D0 - 0x0120)
class UTAsyncResult__Texture2DDynamic : public UAsyncTask
{
public:
	class UTexture2DDynamic*                           Result;                                        // 0x00D0 (0x0008) [0x0000004000000000]               
	struct FScriptDelegate                             __EventResult__Delegate;                       // 0x00D8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventResultComplete__Delegate;               // 0x00F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __ResultDelegate__Delegate;                    // 0x0108 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.TAsyncResult__Texture2DDynamic");
		}

		return uClassPointer;
	};

	class UTAsyncResult__Texture2DDynamic* CreateResultError(class UError* InError);
	class UTAsyncResult__Texture2DDynamic* CreateResult(class UTexture2DDynamic* InResult);
	class UTAsyncResult__Texture2DDynamic* Copy();
	void eventClearCallbacks();
	class UTAsyncResult__Texture2DDynamic* eventSetResultWhen(class UAsyncTask* Other, struct FScriptDelegate GetResultDelegate);
	class UTAsyncResult__Texture2DDynamic* eventSetResult(class UTexture2DDynamic* InResult, class UError* InError);
	class UTAsyncResult__Texture2DDynamic* NotifyOnResultComplete(struct FScriptDelegate Callback);
	class UTAsyncResult__Texture2DDynamic* NotifyOnResult(struct FScriptDelegate Callback);
	class UTexture2DDynamic* ResultDelegate();
	void EventResultComplete(class UTexture2DDynamic* OutResult, class UError* OutError);
	void EventResult(class UTexture2DDynamic* OutResult);
};

// Class ProjectX.__TAsyncResult__Texture2DDynamic__NotifyOnResult_E6D350854C8B729791479085970318E6
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__Texture2DDynamic__NotifyOnResult_E6D350854C8B729791479085970318E6 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                      // 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__TAsyncResult__Texture2DDynamic__NotifyOnResult_E6D350854C8B729791479085970318E6");
		}

		return uClassPointer;
	};

	void __TAsyncResult__Texture2DDynamic__NotifyOnResult_E6D350854C8B729791479085970318E6();
};

// Class ProjectX.__TAsyncResult__Texture2DDynamic__NotifyOnResultComplete_395CF92844941F8309148BA1FB148C34
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__Texture2DDynamic__NotifyOnResultComplete_395CF92844941F8309148BA1FB148C34 : public UObject
{
public:
	struct FScriptDelegate                             Callback;                                      // 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__TAsyncResult__Texture2DDynamic__NotifyOnResultComplete_395CF92844941F8309148BA1FB148C34");
		}

		return uClassPointer;
	};

	void __TAsyncResult__Texture2DDynamic__NotifyOnResultComplete_395CF92844941F8309148BA1FB148C34(class UError* Err);
};

// Class ProjectX.__TAsyncResult__Texture2DDynamic__SetResultWhen_DE144F9B403C181989A60D9AF7FB0E50
// 0x0018 (0x0060 - 0x0078)
class U__TAsyncResult__Texture2DDynamic__SetResultWhen_DE144F9B403C181989A60D9AF7FB0E50 : public UObject
{
public:
	struct FScriptDelegate                             GetResultDelegate;                             // 0x0060 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__TAsyncResult__Texture2DDynamic__SetResultWhen_DE144F9B403C181989A60D9AF7FB0E50");
		}

		return uClassPointer;
	};

	void __TAsyncResult__Texture2DDynamic__SetResultWhen_DE144F9B403C181989A60D9AF7FB0E50();
};

// Class ProjectX.__WebCache_X__DownloadData_91C10AD94797101456FAD59B5D68C6CA
// 0x0008 (0x0060 - 0x0068)
class U__WebCache_X__DownloadData_91C10AD94797101456FAD59B5D68C6CA : public UObject
{
public:
	class UWebRequest_X*                               WebRequest;                                    // 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__WebCache_X__DownloadData_91C10AD94797101456FAD59B5D68C6CA");
		}

		return uClassPointer;
	};

	void __WebCache_X__DownloadData_91C10AD94797101456FAD59B5D68C6CA(struct FString Key, struct FString Value);
};

// Class ProjectX.WebCache_X
// 0x0028 (0x0060 - 0x0088)
class UWebCache_X : public UObject
{
public:
	TArray<struct FCachedDataRequest>                  Requests;                                      // 0x0060 (0x0010) [0x0000000000482000] (CPF_Transient | CPF_Component | CPF_NeedCtorLink)
	struct FScriptDelegate                             __CachedDataCallback__Delegate;                // 0x0070 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.WebCache_X");
		}

		return uClassPointer;
	};

	struct FString GetRequestDebugString(struct FCachedDataRequest Request);
	void HandleWebRequest(class UWebRequest_X* WebRequest);
	void DownloadData(struct FString URL, struct FString ETag, class UStringMap* Headers, unsigned long bZipResponse);
	void HandleLoadFromCache(class ULocalCache_X* Cache, class UCachedWebData_X* CacheObject, class UError* Error);
	void RaiseUrlEmptyError(struct FScriptDelegate Callback);
	void SyncDataInternal(struct FString URL, struct FScriptDelegate Callback, unsigned long bZipResponse, class UStringMap* Headers);
	void SyncDataZipped(struct FString URL, struct FScriptDelegate Callback, class UStringMap* Headers);
	void SyncData(struct FString URL, struct FScriptDelegate Callback, class UStringMap* Headers);
	struct FString GetCachedPath(struct FString URL);
	void CachedDataCallback(class UCachedWebData_X* CachedData);
};

// Class ProjectX.__WebImageCache_X__HandleImageData_A940831546272D6B16DCBBBEB528EBF1
// 0x0008 (0x0060 - 0x0068)
class U__WebImageCache_X__HandleImageData_A940831546272D6B16DCBBBEB528EBF1 : public UObject
{
public:
	class UWebImageDownload_X*                         Download;                                      // 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__WebImageCache_X__HandleImageData_A940831546272D6B16DCBBBEB528EBF1");
		}

		return uClassPointer;
	};

	void __WebImageCache_X__HandleImageData_A940831546272D6B16DCBBBEB528EBF1(struct FString _, struct FImageLayout Image);
};

// Class ProjectX.WebImageDownload_X
// 0x0028 (0x0060 - 0x0088)
class UWebImageDownload_X : public UObject
{
public:
	struct FString                                     URL;                                           // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bSRGB : 1;                                     // 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	class UTexture2DDynamic*                           Texture;                                       // 0x0078 (0x0008) [0x0000000000000000]               
	class UTAsyncResult__Texture2DDynamic*             AsyncResult;                                   // 0x0080 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.WebImageDownload_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.WebImageCache_X
// 0x0028 (0x0060 - 0x0088)
class UWebImageCache_X : public UObject
{
public:
	class UImageDecoder*                               Decoder;                                       // 0x0060 (0x0008) [0x0000000000000000]               
	class UStringObjectMap*                            Downloads;                                     // 0x0068 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FScriptDelegate                             __ImageSyncCallback__Delegate;                 // 0x0070 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.WebImageCache_X");
		}

		return uClassPointer;
	};

	void SyncImageURL(struct FString URL, struct FScriptDelegate Callback);
	void HandleImageDecoded(class UWebImageDownload_X* Download, struct FImageLayout Image);
	void SetDownloadError(class UWebImageDownload_X* Download, class UError* Error);
	void HandleImageData(class UWebImageDownload_X* Download, class UCachedWebData_X* Data);
	class UWebImageDownload_X* StartSync(struct FString URL);
	void HandleUncachedImageDownload(class UTAsyncResult__Texture2DDynamic* Task, class UTexture2DDynamic* Texture);
	class UTAsyncResult__Texture2DDynamic* SyncUncachedImage(struct FString URL, unsigned long bSRGB);
	class UWebImageDownload_X* GetDownload(struct FString URL);
	class UTAsyncResult__Texture2DDynamic* SyncImageSRGB(struct FString URL);
	class UTAsyncResult__Texture2DDynamic* SyncImage(struct FString URL);
	void eventConstruct();
	void ImageSyncCallback(class UTexture2DDynamic* Texture);
};

// Class ProjectX.__WebImageCache_X__StartSync_63F226CF46ABFD73EF09FE9F7A01430E
// 0x0008 (0x0060 - 0x0068)
class U__WebImageCache_X__StartSync_63F226CF46ABFD73EF09FE9F7A01430E : public UObject
{
public:
	class UWebImageDownload_X*                         Download;                                      // 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__WebImageCache_X__StartSync_63F226CF46ABFD73EF09FE9F7A01430E");
		}

		return uClassPointer;
	};

	void __WebImageCache_X__StartSync_63F226CF46ABFD73EF09FE9F7A01430E(class UCachedWebData_X* Data);
};

// Class ProjectX.__WebImageCache_X__SyncUncachedImage_78C2613241A3E0C25F873AAD963430DB
// 0x0008 (0x0060 - 0x0068)
class U__WebImageCache_X__SyncUncachedImage_78C2613241A3E0C25F873AAD963430DB : public UObject
{
public:
	class UTAsyncResult__Texture2DDynamic*             Task;                                          // 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.__WebImageCache_X__SyncUncachedImage_78C2613241A3E0C25F873AAD963430DB");
		}

		return uClassPointer;
	};

	void __WebImageCache_X__SyncUncachedImage_78C2613241A3E0C25F873AAD963430DB(struct FOnlineImageDownload ImageInfo);
};

// Class ProjectX._ReservationTypes_X
// 0x0000 (0x0060 - 0x0060)
class U_ReservationTypes_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX._ReservationTypes_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.ActionQueue_X
// 0x0038 (0x0070 - 0x00A8)
class UActionQueue_X : public UComponent
{
public:
	float                                              ActionsPerSecond;                              // 0x0070 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FScriptDelegate>                     Queue;                                         // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            QueueIndex;                                    // 0x0088 (0x0004) [0x0000000000000000]               
	struct FScriptDelegate                             __ActionDelegate__Delegate;                    // 0x0090 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ActionQueue_X");
		}

		return uClassPointer;
	};

	void Tick();
	void Add(struct FScriptDelegate Callback);
	void ActionDelegate();
};

// Class ProjectX.ActivateAnimSeriesComponent_X
// 0x000C (0x00A4 - 0x00B0)
class UActivateAnimSeriesComponent_X : public UActorComponent_X
{
public:
	struct FName                                       AnimNodeName;                                  // 0x00A8 (0x0008) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ActivateAnimSeriesComponent_X");
		}

		return uClassPointer;
	};

	void SetAnimSeriesActiveInComponent(class USkeletalMeshComponent* SKC, unsigned long bActive);
	void SetAnimSeriesActive(unsigned long bActive);
	void eventDetached();
	void eventAttached();
};

// Class ProjectX.AddReservationMessagePrivate_X
// 0x0094 (0x00CC - 0x0160)
class UAddReservationMessagePrivate_X : public UAddReservationMessage_X
{
public:
	struct FCustomMatchSettings                        Settings;                                      // 0x00D0 (0x0090) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.AddReservationMessagePrivate_X");
		}

		return uClassPointer;
	};

	struct FString GetDebugString();
	class UAddReservationMessagePrivate_X* SetSettings(struct FCustomMatchSettings& InSettings);
};

// Class ProjectX.AddReservationMessagePublic_X
// 0x0034 (0x00CC - 0x0100)
class UAddReservationMessagePublic_X : public UAddReservationMessage_X
{
public:
	struct FJoinMatchSettings                          Settings;                                      // 0x00D0 (0x0020) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FOnlinePlayerMapPrefs>               MapPrefs;                                      // 0x00F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.AddReservationMessagePublic_X");
		}

		return uClassPointer;
	};

	class UAddReservationMessage_X* AddPlayers();
	void SetPlayerPref(class UGameSettingPlaylist_X* Playlist, class UOnlinePlayer_X* OnlinePlayer);
	void GetPlayerMapPrefs(struct FUniqueNetId PlayerID, TArray<struct FName>& Likes, TArray<struct FName>& Dislikes);
	class UAddReservationMessage_X* AddPlayer(struct FUniqueNetId PlayerID, struct FString PlayerName, unsigned long bRemotePlayer);
	struct FString GetDebugString();
	struct FString GetPlayerDebugString(struct FReservationPlayerData Player);
	class UAddReservationMessagePublic_X* SetSettings(struct FJoinMatchSettings& InSettings);
};

// Class ProjectX.AppConfig_X
// 0x0004 (0x0078 - 0x007C)
class UAppConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bSpinSleep : 1;                                // 0x0078 (0x0004) [0x0000000000004001] [0x00000001] (CPF_Edit | CPF_Config)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.AppConfig_X");
		}

		return uClassPointer;
	};

	void Undo();
	void Apply();
};

// Class ProjectX.AprilConfig_X
// 0x001C (0x0078 - 0x0094)
class UAprilConfig_X : public UOnlineConfig_X
{
public:
	uint64_t                                           StartTime;                                     // 0x0078 (0x0008) [0x0000000000000001] (CPF_Edit)    
	uint64_t                                           EndTime;                                       // 0x0080 (0x0008) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bChangeRankedIcons : 1;                        // 0x0088 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bChangePlaylists : 1;                          // 0x0088 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      bChangeCrowd : 1;                              // 0x0088 (0x0004) [0x0001000000000001] [0x00000004] (CPF_Edit)
	float                                              HatScale;                                      // 0x008C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              AntennaScale;                                  // 0x0090 (0x0004) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.AprilConfig_X");
		}

		return uClassPointer;
	};

	bool IsActive();
};

// Class ProjectX.SeqEvent_Spawned_X
// 0x000C (0x017C - 0x0188)
class USeqEvent_Spawned_X : public USequenceEvent
{
public:
	class AActor*                                      Spawned;                                       // 0x0180 (0x0008) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.SeqEvent_Spawned_X");
		}

		return uClassPointer;
	};

	void TriggerFor(class AActor* A);
};

// Class ProjectX.BanMessage_X
// 0x00A8 (0x0060 - 0x0108)
class UBanMessage_X : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x0060 (0x0048) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	uint8_t                                            BanType;                                       // 0x00A8 (0x0001) [0x0000000040000000] (CPF_EditInlineNotify)
	uint8_t                                            SeverityType;                                  // 0x00A9 (0x0001) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     Title;                                         // 0x00B0 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     Body;                                          // 0x00C0 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	int32_t                                            BannedMinutes;                                 // 0x00D0 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	unsigned long                                      bContributedToBan : 1;                         // 0x00D4 (0x0004) [0x0000000040000000] [0x00000001] (CPF_EditInlineNotify)
	TArray<struct FString>                             Citations;                                     // 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              BannedUntilTime;                               // 0x00E8 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FScriptDelegate                             __EventBanEnded__Delegate;                     // 0x00F0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.BanMessage_X");
		}

		return uClassPointer;
	};

	void __BanMessage_X__Init_8D8DE3784C431363E9721FA115EEF8E9();
	bool IsPermanentlyBanned();
	bool IsBanned();
	int32_t GetMinutesRemaining();
	float GetSecondsRemaining();
	void Init();
	void EventBanEnded(class UBanMessage_X* BanMessage);
};

// Class ProjectX.BlogConfig_X
// 0x0020 (0x0078 - 0x0098)
class UBlogConfig_X : public UOnlineConfig_X
{
public:
	TArray<class UBlogTile_X*>                         Entries;                                       // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     MotD;                                          // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.BlogConfig_X");
		}

		return uClassPointer;
	};

	int32_t __BlogConfig_X__Apply_0F4AED6043885FBE01151088357BF523(class UBlogTile_X* L, class UBlogTile_X* R);
	void __BlogConfig_X__Apply_03F473A4495DBC40E54A7BB7E7F85DB2(class UBlogTile_X* X);
	void Apply();
};

// Class ProjectX.BlogTile_X
// 0x00B8 (0x0060 - 0x0118)
class UBlogTile_X : public UObject
{
public:
	struct FString                                     Title;                                         // 0x0060 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     DescriptionHeader;                             // 0x0070 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     Description;                                   // 0x0080 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     WebURL;                                        // 0x0090 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     CarName;                                       // 0x00A0 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
	struct FString                                     ImageURL;                                      // 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     StartTime;                                     // 0x00C0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint64_t                                           StartTimeEpoch;                                // 0x00D0 (0x0008) [0x0000000000000000]               
	struct FString                                     EndTime;                                       // 0x00D8 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	uint64_t                                           EndTimeEpoch;                                  // 0x00E8 (0x0008) [0x0001000000000000]               
	uint8_t                                            LinkType;                                      // 0x00F0 (0x0001) [0x0000000040000000] (CPF_EditInlineNotify)
	int32_t                                            ShopID;                                        // 0x00F4 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int32_t                                            ShopItemID;                                    // 0x00F8 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int32_t                                            ProductID;                                     // 0x00FC (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int32_t                                            CategoryID;                                    // 0x0100 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int32_t                                            PlaylistId;                                    // 0x0104 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	struct FString                                     InfoURL;                                       // 0x0108 (0x0010) [0x0000000040400000] (CPF_NeedCtorLink | CPF_EditInlineNotify)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.BlogTile_X");
		}

		return uClassPointer;
	};

	struct FString GetTileID();
};

// Class ProjectX.BugMetrics_X
// 0x0010 (0x0080 - 0x0090)
class UBugMetrics_X : public UMetricsGroup_X
{
public:
	TArray<struct FName>                               ReportedIDs;                                   // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.BugMetrics_X");
		}

		return uClassPointer;
	};

	void Report(struct FName Id, struct FString Details, struct FString Trace);
	void BugReport(struct FName Id, struct FString Details);
	void StaticReport(struct FName Id, struct FString Details);
};

// Class ProjectX.CacheTimer_X
// 0x0028 (0x0070 - 0x0098)
class UCacheTimer_X : public UComponent
{
public:
	float                                              CacheTimeoutSeconds;                           // 0x0070 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              CacheExpireTime;                               // 0x0074 (0x0004) [0x0000004000002000] (CPF_Transient)
	unsigned long                                      bEnabled : 1;                                  // 0x0078 (0x0004) [0x0000004000002000] [0x00000001] (CPF_Transient)
	struct FScriptDelegate                             __EventExpired__Delegate;                      // 0x0080 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.CacheTimer_X");
		}

		return uClassPointer;
	};

	float GetRandomCacheTimeoutTime();
	void OnExpired();
	void OnDisabled();
	void OnEnabled();
	void SetEnabled(unsigned long bEnableExpiration);
	void Reset(float TimeoutTime);
	bool IsExpired();
	void EventExpired(class UCacheTimer_X* Timer);
};

// Class ProjectX.CameraStateBlender_X
// 0x00A0 (0x0070 - 0x0110)
class UCameraStateBlender_X : public UComponent
{
public:
	struct FCameraTransition                           Transition;                                    // 0x0070 (0x0050) [0x0000004000002000] (CPF_Transient)
	struct FCameraOrientation                          TransitionDelta;                               // 0x00C0 (0x002C) [0x0000000000002000] (CPF_Transient)
	class UCameraState_X*                              CameraState;                                   // 0x00F0 (0x0008) [0x0000004000002000] (CPF_Transient)
	struct FScriptDelegate                             __EventBlenderStateChanged__Delegate;          // 0x00F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.CameraStateBlender_X");
		}

		return uClassPointer;
	};

	bool IsTransitioning();
	void BlendCameraState(float DeltaTime, struct FCameraOrientation& OutPOV);
	void PostProcessPOV(float DeltaTime, struct FCameraOrientation& OutPOV);
	void UpdatePOV(float DeltaTime, struct FCameraOrientation& OutPOV);
	void Tick(float DeltaTime);
	void ClearTransitionDelta();
	void ClearTransition();
	bool TransitionToState(class UCameraState_X* NewState);
	void Snap();
	void EventBlenderStateChanged(class UCameraStateBlender_X* CameraBender);
};

// Class ProjectX.CameraState_X
// 0x0028 (0x0064 - 0x008C)
class UCameraState_X : public UStateObject_X
{
public:
	struct FViewTargetTransitionParams                 DefaultBlendParams;                            // 0x0068 (0x0010) [0x0000000000000001] (CPF_Edit)    
	class AWorldInfo*                                  WorldInfo;                                     // 0x0078 (0x0008) [0x0000004000002000] (CPF_Transient)
	class ACamera_X*                                   Camera;                                        // 0x0080 (0x0008) [0x0000004000002000] (CPF_Transient)
	unsigned long                                      bCanSwivel : 1;                                // 0x0088 (0x0004) [0x0000000000000002] [0x00000001] (CPF_Const)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.CameraState_X");
		}

		return uClassPointer;
	};

	void OnSnap();
	void ModifyPostProcessSettings(struct FPostProcessSettings& PP);
	void ProcessViewRotation(float DeltaTime, struct FRotator& OutViewRotation, struct FRotator& OutDeltaRot);
	void UpdatePOV(float DeltaTime, struct FCameraOrientation& OutPOV);
	void Tick(float DeltaTime);
	void EndCameraState();
	void BeginCameraState();
	struct FViewTargetTransitionParams GetEndBlendParams(class UCameraState_X* NewState);
	struct FViewTargetTransitionParams GetStartBlendParams(class UCameraState_X* PreviousState);
	bool ShouldKeepExecuting();
	bool ShouldExecute();
	void ShutDown();
	void Init(class ACamera_X* InCamera);
};

// Class ProjectX.CameraUtils_X
// 0x0000 (0x0060 - 0x0060)
class UCameraUtils_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.CameraUtils_X");
		}

		return uClassPointer;
	};

	void UpdateAspectRatioFOV(float AspectRatio, struct FCameraOrientation& OutPOV);
	void BlendPOVs(struct FCameraOrientation FromPOV, struct FCameraOrientation ToPOV, float Percent, struct FCameraOrientation& OutPOV);
	float GetBlendPercent(struct FViewTargetTransitionParams BlendParams, float Time);
	bool IsPointInView(struct FVector Point, struct FVector ViewStart, struct FRotator ViewRotation, float FOV);
	float GetFrustumDistanceFromWidth(float FOV, float Width, float AspectRatio);
	float GetFrustumDistanceFromHeight(float FOV, float Height);
	void GetFrustumSize(float Dist, float FOV, float AspectRatio, float& OutWidth, float& OutHeight);
	void CalculateDistanceRotation(struct FVector Focus, struct FVector Origin, float& OutDistance, struct FRotator& OutRotation);
};

// Class ProjectX.CameraModifier_CameraShake_X
// 0x0004 (0x009C - 0x00A0)
class UCameraModifier_CameraShake_X : public UCameraModifier_CameraShake
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.CameraModifier_CameraShake_X");
		}

		return uClassPointer;
	};

	void ModifyCameraShakeScale(class UCameraShake* Shake, float NewScale);
	void RemoveCameraShake(class UCameraShake* Shake);
};

// Class ProjectX.CameraState_CamActor_X
// 0x0180 (0x008C - 0x020C)
class UCameraState_CamActor_X : public UCameraState_X
{
public:
	unsigned long                                      bUseOverridePostProcess : 1;                   // 0x0090 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	class ACameraActor*                                CamActor;                                      // 0x0098 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FPostProcessSettings                        PrevPost;                                      // 0x00A0 (0x0168) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	float                                              PrevPostAlpha;                                 // 0x0208 (0x0004) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.CameraState_CamActor_X");
		}

		return uClassPointer;
	};

	void UpdatePOV(float DeltaTime, struct FCameraOrientation& OutPOV);
	void EndCameraState();
	void BeginCameraState();
	struct FViewTargetTransitionParams GetBlendParams(class UCameraState_X* PrevState);
	bool ShouldExecute();
};

// Class ProjectX.CameraState_CamActorCinematic_X
// 0x0004 (0x020C - 0x0210)
class UCameraState_CamActorCinematic_X : public UCameraState_CamActor_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.CameraState_CamActorCinematic_X");
		}

		return uClassPointer;
	};

	void UpdatePOV(float DeltaTime, struct FCameraOrientation& OutPOV);
	void EndCameraState();
};

// Class ProjectX.CancelJoinMessage_X
// 0x0000 (0x0060 - 0x0060)
class UCancelJoinMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.CancelJoinMessage_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.CDN_X
// 0x0020 (0x0060 - 0x0080)
class UCDN_X : public UObject
{
public:
	struct FString                                     URL;                                           // 0x0060 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     BlogURL;                                       // 0x0070 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.CDN_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.HUD_X
// 0x0018 (0x0308 - 0x0320)
class AHUD_X : public AHUD
{
public:
	class UObject*                                     ShowDebugObject;                               // 0x0308 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UDebugDrawer_X*                              DebugDrawer;                                   // 0x0310 (0x0008) [0x0000000000002000] (CPF_Transient)
	class UTexture*                                    DebugTexture;                                  // 0x0318 (0x0008) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.HUD_X");
		}

		return uClassPointer;
	};

	void SetShowDebugObject(class UObject* inObj);
	void ShowDebugInfo(float& out_YL, float& out_YPos);
	void ShowDebug(struct FName DebugType);
	void DebugCategory(struct FName DebugType);
	void DebugCategorySwitch(unsigned long bForward);
	void DrawPauseScreen();
	bool ShouldShowConsoleMessage(struct FConsoleMessage InConsoleMessage);
	void DrawDebugTexture();
	void DrawHUD();
};

// Class ProjectX.CheckReservation_X
// 0x00F0 (0x0060 - 0x0150)
class UCheckReservation_X : public UObject
{
public:
	float                                              StartDelay;                                    // 0x0060 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Rate;                                          // 0x0064 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LastMatchmakingHeartbeatTime;                  // 0x0068 (0x0004) [0x0000004000002000] (CPF_Transient)
	class UAsyncTask*                                  CheckReservationTask;                          // 0x0070 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FScriptDelegate                             FoundReservationCallback;                      // 0x0078 (0x0018) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FServerReservationData                      FoundReservation;                              // 0x0090 (0x0080) [0x0000000000400000] (CPF_NeedCtorLink)
	class UPsyNetConfig_X*                             Config;                                        // 0x0110 (0x0008) [0x0000800000000000]               
	class UReservationBeacon_X*                        ReservationBeacon;                             // 0x0118 (0x0008) [0x0000800004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FScriptDelegate                             __OnStartSearch__Delegate;                     // 0x0120 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnFoundReservation__Delegate;                // 0x0138 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.CheckReservation_X");
		}

		return uClassPointer;
	};

	void HandleReservationData(struct FServerReservationData& Reservation);
	void HandleClientReservationMessage(class UIReservationConnection_X* Connection, class UClientReservationMessage_X* Message);
	void HandleReservation2Notification(class UPsyNetService_Reservation2_X* Service);
	void HandlePendingReservation();
	void HandleReservationNotification(class UPsyNetService_Reservation_X* Service);
	void SendRequest();
	void HandlePreLoadMap(struct FString _);
	void Cancel();
	bool IsSearching();
	void StartSearch(struct FScriptDelegate Callback);
	class UCheckReservation_X* NotifyOnStartSearch(struct FScriptDelegate Callback);
	void OnFoundReservation(struct FServerReservationData Reservation);
	void OnStartSearch(class UAsyncTask* Task);
};

// Class ProjectX.PsyNetService_Reservation_X
// 0x0080 (0x0090 - 0x0110)
class UPsyNetService_Reservation_X : public UPsyNetClientService_X
{
public:
	struct FCheckReservationResponse                   Reservation;                                   // 0x0090 (0x0080) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetService_Reservation_X");
		}

		return uClassPointer;
	};

	struct FServerReservationData GetReservation();
};

// Class ProjectX.PsyNetService_Reservation2_X
// 0x0080 (0x0090 - 0x0110)
class UPsyNetService_Reservation2_X : public UPsyNetClientService_X
{
public:
	struct FCheckReservationResponse                   Reservation;                                   // 0x0090 (0x0080) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetService_Reservation2_X");
		}

		return uClassPointer;
	};

	struct FServerReservationData GetReservation();
};

// Class ProjectX.RPC_ReservationHeartbeat_X
// 0x0000 (0x00E8 - 0x00E8)
class URPC_ReservationHeartbeat_X : public URPC_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_ReservationHeartbeat_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.MatchmakingMetrics_X
// 0x0014 (0x0080 - 0x0094)
class UMatchmakingMetrics_X : public UMetricsGroup_X
{
public:
	float                                              StartTime;                                     // 0x0080 (0x0004) [0x0000000000000000]               
	struct FGuid                                       MMGuid;                                        // 0x0084 (0x0010) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.MatchmakingMetrics_X");
		}

		return uClassPointer;
	};

	void SendReservationRetryFail();
	void SendReservationRetrySuccess();
	void SendReservationRetry();
	void RankedReconnect(struct FString ServerName, struct FGuid MatchMakingGuid);
	void FoundServer(struct FString Address, struct FString ServerName, int32_t Playlist, struct FString ReservationID, unsigned long bFromNotification, float ElapsedTime, struct FGuid MatchMakingGuid);
	void RecordFoundServer(unsigned long bFromNotification, struct FGuid MatchMakingGuid, struct FServerReservationData& Reservation);
	void Cancel(float ElapsedTime, struct FGuid MatchMakingGuid);
	void RecordCancel(struct FGuid MatchMakingGuid);
	void ErrorID(int32_t Error, struct FGuid MatchMakingGuid);
	void ErrorUnknown(struct FString Message, struct FGuid MatchMakingGuid);
	void RecordError(struct FString Error, struct FGuid MatchMakingGuid);
	void Start(TArray<class URegionPing_X*> Regions, TArray<int32_t> Playlists, unsigned long bDisableCrossPlay, unsigned long bUseRecommendedRegions, struct FGuid MatchMakingGuid);
};

// Class ProjectX.ClanforgeReservation_X
// 0x0068 (0x0060 - 0x00C8)
class UClanforgeReservation_X : public UObject
{
public:
	struct FString                                     ReserveURLs[0x3];                              // 0x0060 (0x0030) [0x0001004000400000] (CPF_NeedCtorLink)
	uint8_t                                            ReserveState;                                  // 0x0090 (0x0001) [0x0001000000002000] (CPF_Transient)
	TArray<float>                                      RetryDelays;                                   // 0x0098 (0x0010) [0x0001000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            SendFailures;                                  // 0x00A8 (0x0004) [0x0001000000002000] (CPF_Transient)
	TArray<class UWebRequest_X*>                       QueuedRequests;                                // 0x00B0 (0x0010) [0x0001000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UWebRequest_X*                               PendingRequest;                                // 0x00C0 (0x0008) [0x0001000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ClanforgeReservation_X");
		}

		return uClassPointer;
	};

	void HandleRetry();
	void Retry();
	void HandleSendComplete(class UWebRequest_X* Request);
	void ProcessNextRequest();
	void Send(struct FString URL);
	void SetReserveState(uint8_t NewState);
	void HandleActivate(class UOnlineGameDedicatedServer_X* Server);
	void HandleInactive(class UOnlineGameDedicatedServer_X* Server);
	void Init(class UOnlineGameDedicatedServer_X* Server, struct FString ReserveURL, struct FString UnreserveURL);
};

// Class ProjectX.ClientNetMetrics_X
// 0x0054 (0x0060 - 0x00B4)
class UClientNetMetrics_X : public UObject
{
public:
	float                                              RecordPeriod;                                  // 0x0060 (0x0004) [0x0000000000000000]               
	float                                              LastRecordTime;                                // 0x0064 (0x0004) [0x0000000000000000]               
	struct FNetPacketStats                             OldStats;                                      // 0x0068 (0x001C) [0x0000000000000000]               
	TArray<float>                                      GamePings;                                     // 0x0088 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UGameServerPinger_X*                         Pinger;                                        // 0x0098 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	TArray<float>                                      PsyPings;                                      // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            PsyPacketsLost;                                // 0x00B0 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ClientNetMetrics_X");
		}

		return uClassPointer;
	};

	void __ClientNetMetrics_X__StartRecording_969E9D3446B042116065469821712B67(class UGameServerPinger_X* _);
	void __ClientNetMetrics_X__StartRecording_163040974628395FDF11BE9AC710FF41(class UGameServerPinger_X* _, float DelaySeconds);
	struct FPingStats CalcPingStats(TArray<float>& Pings);
	void Record();
	void RecordTimer();
	void StopRecording();
	void StartRecording();
	void eventConstruct();
};

// Class ProjectX.GameServerPinger_X
// 0x0048 (0x0070 - 0x00B8)
class UGameServerPinger_X : public UComponent
{
public:
	class UBeaconConfig_X*                             Config;                                        // 0x0070 (0x0008) [0x0000800000000000]               
	struct FName                                       Address;                                       // 0x0078 (0x0008) [0x0000000000000000]               
	class UUdpPingBeaconClient_X*                      PingBeacon;                                    // 0x0080 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FScriptDelegate                             __EventPong__Delegate;                         // 0x0088 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventLost__Delegate;                         // 0x00A0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.GameServerPinger_X");
		}

		return uClassPointer;
	};

	void HandleLost(class UUdpPingBeaconClient_X* _, struct FName __);
	void HandlePong(class UUdpPingBeaconClient_X* _, struct FName __, float DeltaSeconds);
	void SendPing();
	void StopPinging();
	void StartPinging();
	void SetAddress(struct FString InAddress);
	void EventLost(class UGameServerPinger_X* Pinger);
	void EventPong(class UGameServerPinger_X* Pinger, float DeltaSeconds);
};

// Class ProjectX.InitialServerToClientMessage_X
// 0x0000 (0x0060 - 0x0060)
class UInitialServerToClientMessage_X : public UInterface
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.InitialServerToClientMessage_X");
		}

		return uClassPointer;
	};

	struct FString GetDSRToken();
	struct FString GetReservationID();
};

// Class ProjectX.ClubErrors_X
// 0x0098 (0x0080 - 0x0118)
class UClubErrors_X : public UErrorList
{
public:
	class UErrorType*                                  ClubNotFound;                                  // 0x0080 (0x0008) [0x0001000000000002] (CPF_Const)   
	class UErrorType*                                  PlayerAlreadyInClub;                           // 0x0088 (0x0008) [0x0001000000000002] (CPF_Const)   
	class UErrorType*                                  PlayerInSameClub;                              // 0x0090 (0x0008) [0x0001000000000002] (CPF_Const)   
	class UErrorType*                                  PlayerInDifferentClub;                         // 0x0098 (0x0008) [0x0001000000000002] (CPF_Const)   
	class UErrorType*                                  NotClubOwner;                                  // 0x00A0 (0x0008) [0x0001000000000002] (CPF_Const)   
	class UErrorType*                                  ClubNameChangeNotAllowed;                      // 0x00A8 (0x0008) [0x0001000000000002] (CPF_Const)   
	class UErrorType*                                  ClubFull;                                      // 0x00B0 (0x0008) [0x0001000000000002] (CPF_Const)   
	class UErrorType*                                  ClubMemberNotFound;                            // 0x00B8 (0x0008) [0x0001000000000002] (CPF_Const)   
	class UErrorType*                                  ClubInviteNotFound;                            // 0x00C0 (0x0008) [0x0001000000000002] (CPF_Const)   
	class UErrorType*                                  ClubInvalidParameters;                         // 0x00C8 (0x0008) [0x0001000000000002] (CPF_Const)   
	class UErrorType*                                  ClubNameInvalid;                               // 0x00D0 (0x0008) [0x0001000000000002] (CPF_Const)   
	class UErrorType*                                  ClubTagInvalid;                                // 0x00D8 (0x0008) [0x0001000000000002] (CPF_Const)   
	class UErrorType*                                  ClubTagPlusNameInvalid;                        // 0x00E0 (0x0008) [0x0001000000000002] (CPF_Const)   
	class UErrorType*                                  ClubMotdInvalid;                               // 0x00E8 (0x0008) [0x0001000000000002] (CPF_Const)   
	class UErrorType*                                  ClubNameTaken;                                 // 0x00F0 (0x0008) [0x0001000000000002] (CPF_Const)   
	class UErrorType*                                  ClubOwnerCannotLeaveUnlessEmpty;               // 0x00F8 (0x0008) [0x0001000000000002] (CPF_Const)   
	class UErrorType*                                  CrossPlatformClubsDisabled;                    // 0x0100 (0x0008) [0x0001000000000002] (CPF_Const)   
	class UErrorType*                                  ClubInviteCrossPlatformClubsDisabled;          // 0x0108 (0x0008) [0x0001000000000002] (CPF_Const)   
	class UErrorType*                                  ClubBanned;                                    // 0x0110 (0x0008) [0x0001000000000002] (CPF_Const)   
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ClubErrors_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.ClubServerResult_X
// 0x0048 (0x0060 - 0x00A8)
class UClubServerResult_X : public UObject
{
public:
	struct FString                                     Host;                                          // 0x0060 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	int32_t                                            Port;                                          // 0x0070 (0x0004) [0x0001000000000000]               
	struct FString                                     ServerName;                                    // 0x0078 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	struct FString                                     CustomServerName;                              // 0x0088 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	struct FString                                     CustomServerPassword;                          // 0x0098 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ClubServerResult_X");
		}

		return uClassPointer;
	};

	struct FString GetAddress();
};

// Class ProjectX.ServerToServerMessage_X
// 0x0008 (0x0060 - 0x0068)
class UServerToServerMessage_X : public UObject
{
public:
	uint64_t                                           ServerId;                                      // 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ServerToServerMessage_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.ConnectionInfoMessage_X
// 0x0040 (0x0068 - 0x00A8)
class UConnectionInfoMessage_X : public UServerToServerMessage_X
{
public:
	struct FServerConnectionInfo                       ConnectionInfo;                                // 0x0068 (0x0040) [0x0000004000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ConnectionInfoMessage_X");
		}

		return uClassPointer;
	};

	bool IsConnectionInfoValid(struct FServerConnectionInfo& ServerInfo);
};

// Class ProjectX.CountTrigger_X
// 0x0020 (0x0070 - 0x0090)
class UCountTrigger_X : public UComponent
{
public:
	int32_t                                            Threshold;                                     // 0x0070 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Count;                                         // 0x0074 (0x0004) [0x0000004000000000]               
	struct FScriptDelegate                             __EventTriggered__Delegate;                    // 0x0078 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.CountTrigger_X");
		}

		return uClassPointer;
	};

	void Reset();
	void Increment();
	void EventTriggered(class UCountTrigger_X* Trigger);
};

// Class ProjectX.DebugDrawer_X
// 0x0040 (0x00C0 - 0x0100)
class UDebugDrawer_X : public UDebugDrawer
{
public:
	float                                              TextScale;                                     // 0x00C0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UCanvas*                                     Canvas;                                        // 0x00C8 (0x0008) [0x0000000000002000] (CPF_Transient)
	TArray<struct FName>                               DebugCategories;                               // 0x00D0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FName>                               PossibleDebugCategories;                       // 0x00E0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	float                                              CharWidth;                                     // 0x00F0 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              LastWidestElement;                             // 0x00F4 (0x0004) [0x0000000000002000] (CPF_Transient)
	unsigned long                                      bHideDebug : 1;                                // 0x00F8 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	float                                              OffsetX;                                       // 0x00FC (0x0004) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.DebugDrawer_X");
		}

		return uClassPointer;
	};

	void DrawHeader();
	void DrawSpacer(float Height);
	void DrawBackground(float Width, float Height);
	void FinishDrawDebug();
	void StartDrawDebug(class UCanvas* C);
	void PrintText(struct FString Text, struct FColor InColor);
	void PrintProperty(struct FString PropertyName, struct FString Value);
	void PrintSeperater();
	void UpdateCanvasIndentation();
	void EndSection();
	void StartSection();
	void SetPos(float X, float Y);
	bool ShouldDisplayDebug(struct FName Category);
};

// Class ProjectX.DecodeObject_X
// 0x0010 (0x0060 - 0x0070)
class UDecodeObject_X : public UObject
{
public:
	int32_t                                            Checksum;                                      // 0x0060 (0x0004) [0x0000008000000000]               
	class UError*                                      Error;                                         // 0x0068 (0x0008) [0x0000008000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.DecodeObject_X");
		}

		return uClassPointer;
	};

	void Decode(class UObject* OutObj);
};

// Class ProjectX.DecodeObjectJson_X
// 0x0018 (0x0070 - 0x0088)
class UDecodeObjectJson_X : public UDecodeObject_X
{
public:
	class UJSONSerializer_X*                           JsonSerializer;                                // 0x0070 (0x0008) [0x0000004000000000]               
	struct FString                                     Stream;                                        // 0x0078 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.DecodeObjectJson_X");
		}

		return uClassPointer;
	};

	void Decode(class UObject* OutObj);
	class UDecodeObjectJson_X* SetStream(struct FString& InStream);
};

// Class ProjectX.DecodeObjectTypes_X
// 0x0000 (0x0060 - 0x0060)
class UDecodeObjectTypes_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.DecodeObjectTypes_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.DecodeObjectUObject_X
// 0x0018 (0x0070 - 0x0088)
class UDecodeObjectUObject_X : public UDecodeObject_X
{
public:
	class UObjectSerializer_X*                         ObjectSerializer;                              // 0x0070 (0x0008) [0x0000004000000000]               
	TArray<uint8_t>                                    Stream;                                        // 0x0078 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.DecodeObjectUObject_X");
		}

		return uClassPointer;
	};

	void Decode(class UObject* OutObj);
	class UDecodeObjectUObject_X* SetStream(int32_t RequestChecksum, struct FString& InStream);
};

// Class ProjectX.DownloadedPlaylistsData_X
// 0x0010 (0x0060 - 0x0070)
class UDownloadedPlaylistsData_X : public UObject
{
public:
	TArray<class UGameSettingPlaylist_X*>              Playlists;                                     // 0x0060 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.DownloadedPlaylistsData_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.DSPendingMessage_X
// 0x000C (0x0060 - 0x006C)
class UDSPendingMessage_X : public UObject
{
public:
	class UDSR_DSMessage_X*                            Message;                                       // 0x0060 (0x0008) [0x0000000000000000]               
	float                                              TimeoutTime;                                   // 0x0068 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.DSPendingMessage_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.DSR_DSMessage_X
// 0x0040 (0x0090 - 0x00D0)
class UDSR_DSMessage_X : public UPsyNetClientService_X
{
public:
	struct FString                                     PlayerID;                                      // 0x0090 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     ReservationID;                                 // 0x00A0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     MessageType;                                   // 0x00B0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     MessagePayload;                                // 0x00C0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.DSR_DSMessage_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.DSR_ClientMessage_X
// 0x0030 (0x0090 - 0x00C0)
class UDSR_ClientMessage_X : public UPsyNetClientService_X
{
public:
	struct FString                                     ReservationID;                                 // 0x0090 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     MessageType;                                   // 0x00A0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     MessagePayload;                                // 0x00B0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.DSR_ClientMessage_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.DSR_DSToDSMessage_X
// 0x0020 (0x0090 - 0x00B0)
class UDSR_DSToDSMessage_X : public UPsyNetClientService_X
{
public:
	struct FString                                     MessageType;                                   // 0x0090 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     MessagePayload;                                // 0x00A0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.DSR_DSToDSMessage_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.DynamicValue_X
// 0x0024 (0x0060 - 0x0084)
class UDynamicValue_X : public UObject
{
public:
	float                                              DefaultValue;                                  // 0x0060 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bClampMax : 1;                                 // 0x0064 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bClampMin : 1;                                 // 0x0064 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	float                                              MaxValue;                                      // 0x0068 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              MinValue;                                      // 0x006C (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<class UDynamicValueModifier_X*>             Modifiers;                                     // 0x0070 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	float                                              CachedValue;                                   // 0x0080 (0x0004) [0x0000008000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.DynamicValue_X");
		}

		return uClassPointer;
	};

	void PrintDebugInfo(class UDebugDrawer* Drawer);
	struct FString GetDebugValue();
	float GetValue();
	void Tick(float DeltaTime);
	void RemoveAllModifiers();
	void RemoveModifier(class UDynamicValueModifier_X* Mod);
	class UDynamicValueModifier_X* AddModifier(class UDynamicValueModifier_X* Mod);
	void eventConstruct();
};

// Class ProjectX.DynamicValueModifier_X
// 0x0018 (0x0060 - 0x0078)
class UDynamicValueModifier_X : public UObject
{
public:
	struct FString                                     DisplayName;                                   // 0x0060 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	uint8_t                                            Type;                                          // 0x0070 (0x0001) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            Priority;                                      // 0x0074 (0x0004) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.DynamicValueModifier_X");
		}

		return uClassPointer;
	};

	struct FString GetDebugValue();
	struct FString GetDebugString();
	bool Expired();
	float GetValue();
	void Tick(float DeltaTime);
};

// Class ProjectX.DynamicValueModifierCurve_X
// 0x0030 (0x0078 - 0x00A8)
class UDynamicValueModifierCurve_X : public UDynamicValueModifier_X
{
public:
	struct FInterpCurveFloat                           Curve;                                         // 0x0078 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FScriptDelegate                             __GetValueDelegate__Delegate;                  // 0x0090 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.DynamicValueModifierCurve_X");
		}

		return uClassPointer;
	};

	struct FString GetDebugValue();
	float GetValue();
	float GetValueDelegate();
};

// Class ProjectX.DynamicValueModifierDuration_X
// 0x0024 (0x0078 - 0x009C)
class UDynamicValueModifierDuration_X : public UDynamicValueModifier_X
{
public:
	float                                              Duration;                                      // 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              Value;                                         // 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    
	struct FInterpCurveFloat                           CurveValue;                                    // 0x0080 (0x0018) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	unsigned long                                      bUseCurve : 1;                                 // 0x0098 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.DynamicValueModifierDuration_X");
		}

		return uClassPointer;
	};

	struct FString GetDebugString();
	float GetValue();
	bool Expired();
	void Tick(float DeltaTime);
};

// Class ProjectX.EncodeObjectFactory_X
// 0x0010 (0x0060 - 0x0070)
class UEncodeObjectFactory_X : public UObject
{
public:
	class UJSONSerializer_X*                           JsonSerializer;                                // 0x0060 (0x0008) [0x0000004000000001] (CPF_Edit)    
	class UObjectSerializer_X*                         ObjectSerializer;                              // 0x0068 (0x0008) [0x0000004000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.EncodeObjectFactory_X");
		}

		return uClassPointer;
	};

	class UDecodeObject_X* DecodeObject(uint8_t Encoding, int32_t RequestChecksum, struct FString& Stream);
	class UEncodeObject_X* EncodeObject(uint8_t Encoding, class UObject* Target);
};

// Class ProjectX.EncodeObjectUObject_X
// 0x0008 (0x0078 - 0x0080)
class UEncodeObjectUObject_X : public UEncodeObject_X
{
public:
	class UObjectSerializer_X*                         ObjectSerializer;                              // 0x0078 (0x0008) [0x0000004000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.EncodeObjectUObject_X");
		}

		return uClassPointer;
	};

	class UEncodeObject_X* Encode(class UObject* inObj);
};

// Class ProjectX.EncodeObjectJson_X
// 0x0008 (0x0078 - 0x0080)
class UEncodeObjectJson_X : public UEncodeObject_X
{
public:
	class UJSONSerializer_X*                           JsonSerializer;                                // 0x0078 (0x0008) [0x0000004000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.EncodeObjectJson_X");
		}

		return uClassPointer;
	};

	class UEncodeObject_X* Encode(class UObject* inObj);
};

// Class ProjectX.EncodeObjectTypes_X
// 0x0000 (0x0060 - 0x0060)
class UEncodeObjectTypes_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.EncodeObjectTypes_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.OnlineGameLanServer_X
// 0x00E0 (0x0180 - 0x0260)
class UOnlineGameLanServer_X : public UOnlineGameServer_X
{
public:
	class UOnlineGameLanReservations_X*                Reservations;                                  // 0x0180 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FCustomMatchSettings                        CustomMatch;                                   // 0x0188 (0x0090) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FUniqueNetId                                CustomMatchOwner;                              // 0x0218 (0x0048) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGameLanServer_X");
		}

		return uClassPointer;
	};

	void StartReservationTimeout();
	void PlayerLoggedOut(class APlayerReplicationInfo* PRI);
	bool AllowSplitscreenJoin(struct FUniqueNetId PrimaryPlayerId, struct FUniqueNetId PlayerID, struct FString PlayerName, struct FString& Error);
	void PlayerLoggedIn(class APlayerReplicationInfo* PRI);
	void AllowPlayerLogin(struct FString Options, struct FUniqueNetId PlayerID, struct FString& ErrorMessage);
	void TravelToMap(struct FString ServerCommand);
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	void GoToNextMap();
	void ClearSettings();
	void HandleReservationsTimeout();
	struct FCustomMatchSettings GetCustomMatchSettings();
	struct FUniqueNetId GetCustomMatchOwner();
	void UpdateCustomMatchOwner(struct FUniqueNetId NewOwner);
	void SetupPrivateMatch(struct FCustomMatchSettings Settings, struct FUniqueNetId Creator);
	void OnInit();
};

// Class ProjectX.PreExitEvent_X
// 0x0000 (0x0060 - 0x0060)
class UPreExitEvent_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PreExitEvent_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.EOSMetricsConfig_X
// 0x0014 (0x0078 - 0x008C)
class UEOSMetricsConfig_X : public UOnlineConfig_X
{
public:
	struct FString                                     DataRouterURL;                                 // 0x0078 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              PingDelayTime;                                 // 0x0088 (0x0004) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.EOSMetricsConfig_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.LocalizedAccountLinkURL
// 0x0020 (0x0060 - 0x0080)
class ULocalizedAccountLinkURL : public UObject
{
public:
	struct FString                                     Language;                                      // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     URL;                                           // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.LocalizedAccountLinkURL");
		}

		return uClassPointer;
	};

};

// Class ProjectX.Explosion_X
// 0x0018 (0x0268 - 0x0280)
class AExplosion_X : public AActor
{
public:
	class UExplosionComponent_X*                       ExplosionComponent;                            // 0x0268 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class AFXActor_X*                                  FXActorArchetype;                              // 0x0270 (0x0008) [0x0000000100000021] (CPF_Edit | CPF_Net)
	class AFXActor_X*                                  FXActor;                                       // 0x0278 (0x0008) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.Explosion_X");
		}

		return uClassPointer;
	};

	void eventDestroyed();
	void eventForceNetRelevant();
	void SetFXActorArchetype(class AFXActor_X* A);
	void SpawnFX();
	void SetExplosionHandler(TArray<class UExplosionHitHandler_X*> InExplosionHandlers, struct FBox GoalBox, class UActorComponent_X* ExplosionGoal);
	void eventPostBeginPlay();
	void eventReplicatedEvent(struct FName VarName);
};

// Class ProjectX.RPC_JoinMatch_X
// 0x0028 (0x00E8 - 0x0110)
class URPC_JoinMatch_X : public URPC_X
{
public:
	struct FName                                       JoinType;                                      // 0x00E8 (0x0008) [0x0000000000000000]               
	struct FString                                     ServerName;                                    // 0x00F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Password;                                      // 0x0100 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_JoinMatch_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.SeqAct_TriggerFXActor_X
// 0x0010 (0x0160 - 0x0170)
class USeqAct_TriggerFXActor_X : public USequenceAction
{
public:
	class UFXActorEvent_X*                             Event;                                         // 0x0160 (0x0008) [0x0000000000000001] (CPF_Edit)    
	class AActor*                                      AttachTo;                                      // 0x0168 (0x0008) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.SeqAct_TriggerFXActor_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.IOnlineGameHost_X
// 0x0000 (0x0060 - 0x0060)
class UIOnlineGameHost_X : public UInterface
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.IOnlineGameHost_X");
		}

		return uClassPointer;
	};

	struct FUniqueNetId GetCustomMatchOwner();
	struct FCustomMatchSettings GetCustomMatchSettings();
	bool AllowSplitscreenJoin(struct FUniqueNetId PrimaryPlayerId, struct FUniqueNetId PlayerID, struct FString PlayerName, struct FString& Error);
	void PlayerLoggedOut(class APlayerReplicationInfo* PRI);
	void PlayerLoggedIn(class APlayerReplicationInfo* PRI);
	void AllowPlayerLogin(struct FString Options, struct FUniqueNetId PlayerID, struct FString& ErrorMessage);
};

// Class ProjectX.GameInfo_MapProfiler_X
// 0x0000 (0x04C8 - 0x04C8)
class AGameInfo_MapProfiler_X : public AGameInfo_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.GameInfo_MapProfiler_X");
		}

		return uClassPointer;
	};

	void GenericPlayerInitialization(class AController* C);
	class APlayerController* SpawnPlayerController(struct FVector SpawnLocation, struct FRotator SpawnRotation);
};

// Class ProjectX.PresetMutators_X
// 0x0038 (0x0060 - 0x0098)
class UPresetMutators_X : public UObject
{
public:
	TArray<struct FCategorySettingPair>                PresetTags;                                    // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FName>                               RequiresMaps;                                  // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bLockSettings : 1;                             // 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHideSettings : 1;                             // 0x0080 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     OverrideName;                                  // 0x0088 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PresetMutators_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PlaylistSettings_X
// 0x00C8 (0x0060 - 0x0128)
class UPlaylistSettings_X : public UObject
{
public:
	struct FString                                     Title;                                         // 0x0060 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     Description;                                   // 0x0070 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     BadgeTitle;                                    // 0x0080 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	int32_t                                            PlaylistId;                                    // 0x0090 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            PlayerCount;                                   // 0x0094 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bStandard : 1;                                 // 0x0098 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bRanked : 1;                                   // 0x0098 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	unsigned long                                      bCheckRankedMatchReservationID : 1;            // 0x0098 (0x0004) [0x0000000000000001] [0x00000004] (CPF_Edit)
	unsigned long                                      bSolo : 1;                                     // 0x0098 (0x0004) [0x0000000000000001] [0x00000008] (CPF_Edit)
	unsigned long                                      bHidden : 1;                                   // 0x0098 (0x0004) [0x0000000000000001] [0x00000010] (CPF_Edit)
	unsigned long                                      bExtraMode : 1;                                // 0x0098 (0x0004) [0x0000000000000001] [0x00000020] (CPF_Edit)
	unsigned long                                      bPrivate : 1;                                  // 0x0098 (0x0004) [0x0000000000000001] [0x00000040] (CPF_Edit)
	unsigned long                                      bTournament : 1;                               // 0x0098 (0x0004) [0x0000000000000001] [0x00000080] (CPF_Edit)
	unsigned long                                      bApplyQuitPenalty : 1;                         // 0x0098 (0x0004) [0x0000000000000001] [0x00000100] (CPF_Edit)
	unsigned long                                      bAllowForfeit : 1;                             // 0x0098 (0x0004) [0x0000000000000001] [0x00000200] (CPF_Edit)
	unsigned long                                      bDisableRankedReconnect : 1;                   // 0x0098 (0x0004) [0x0000000000000001] [0x00000400] (CPF_Edit)
	unsigned long                                      bIgnoreAssignTeams : 1;                        // 0x0098 (0x0004) [0x0000000000000001] [0x00000800] (CPF_Edit)
	unsigned long                                      bKickOnMigrate : 1;                            // 0x0098 (0x0004) [0x0000000000000001] [0x00001000] (CPF_Edit)
	unsigned long                                      bAllowBotFills : 1;                            // 0x0098 (0x0004) [0x0000000000000001] [0x00002000] (CPF_Edit)
	unsigned long                                      bServerBroadcastCancellations : 1;             // 0x0098 (0x0004) [0x0000000000000001] [0x00004000] (CPF_Edit)
	unsigned long                                      bSkipGameModeVerification : 1;                 // 0x0098 (0x0004) [0x0000000000000001] [0x00008000] (CPF_Edit)
	unsigned long                                      bIsMicroEventPlaylist : 1;                     // 0x0098 (0x0004) [0x0000000000000001] [0x00010000] (CPF_Edit)
	unsigned long                                      bHasVariablePlayerCount : 1;                   // 0x0098 (0x0004) [0x0000000000000001] [0x00020000] (CPF_Edit)
	unsigned long                                      bNew : 1;                                      // 0x0098 (0x0004) [0x0000000000000001] [0x00040000] (CPF_Edit)
	unsigned long                                      bAllowClubs : 1;                               // 0x0098 (0x0004) [0x0001000000000001] [0x00080000] (CPF_Edit)
	unsigned long                                      bAllowStayAsParty : 1;                         // 0x0098 (0x0004) [0x0001000000000001] [0x00100000] (CPF_Edit)
	struct FString                                     PlaylistImageURL;                              // 0x00A0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     PlaylistImageTexture;                          // 0x00B0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     PlaylistIconActiveURL;                         // 0x00C0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     PlaylistIconInactiveURL;                       // 0x00D0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	class UTimeWindow*                                 PlaylistTimeWindow;                            // 0x00E0 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<class UPresetMutators_X*>                   PresetMutators;                                // 0x00E8 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FName                                       MapName;                                       // 0x00F8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FString                                     ServerCommand;                                 // 0x0100 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FName                                       MapSetName;                                    // 0x0110 (0x0008) [0x0000000000000001] (CPF_Edit)    
	TArray<int32_t>                                    PopulationBuckets;                             // 0x0118 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PlaylistSettings_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.GetPlayerStorageResult_X
// 0x0010 (0x0060 - 0x0070)
class UGetPlayerStorageResult_X : public UObject
{
public:
	TArray<class UGetPlayerStorageResultItem_X*>       Items;                                         // 0x0060 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.GetPlayerStorageResult_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.GetPlayerStorageResultItem_X
// 0x0029 (0x0060 - 0x0089)
class UGetPlayerStorageResultItem_X : public UObject
{
public:
	struct FName                                       Category;                                      // 0x0060 (0x0008) [0x0001000000000000]               
	int32_t                                            Tick;                                          // 0x0068 (0x0004) [0x0001000000000000]               
	struct FString                                     Data;                                          // 0x0070 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	int32_t                                            Checksum;                                      // 0x0080 (0x0004) [0x0001000000000000]               
	unsigned long                                      bChecksumMatch : 1;                            // 0x0084 (0x0004) [0x0001000000000000] [0x00000001] 
	uint8_t                                            Encoding;                                      // 0x0088 (0x0001) [0x0001000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.GetPlayerStorageResultItem_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.GFxModal_X
// 0x0068 (0x0060 - 0x00C8)
class UGFxModal_X : public UObject
{
public:
	struct FString                                     ActionScriptModalName;                         // 0x0060 (0x0010) [0x0000000000400003] (CPF_Edit | CPF_Const | CPF_NeedCtorLink)
	class UGFxObject*                                  GFxPopup;                                      // 0x0070 (0x0008) [0x0000000000000000]               
	TArray<struct FScriptDelegate>                     Callbacks;                                     // 0x0078 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     ConfirmString;                                 // 0x0088 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FScriptDelegate                             __ClickDelegate__Delegate;                     // 0x0098 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventClosed__Delegate;                       // 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.GFxModal_X");
		}

		return uClassPointer;
	};

	class UGFxModal_X* NotifyOnClosed(struct FScriptDelegate Callback);
	void Close();
	void FlashAddButton(struct FString Label);
	void FlashAddCancelButton(struct FString LocalizedText);
	void HandleButtonClicked(int32_t Index);
	class UGFxModal_X* AddButtonCallback(int32_t Index, struct FScriptDelegate OnClick);
	class UGFxModal_X* AddButton(struct FString Label, struct FScriptDelegate OnClick);
	class UGFxModal_X* AddCancelButton(struct FString LocalizedText, struct FScriptDelegate OnClick);
	class UGFxModal_X* SetCancellable(unsigned long bCancellable);
	class UGFxModal_X* SetDefaultSelectedButtonIndex(int32_t buttonIndex);
	class UGFxModal_X* SetIcon(struct FString IconName);
	class UGFxModal_X* SetBody(struct FString LocalizedText);
	class UGFxModal_X* SetTitle(struct FString LocalizedText);
	void SetGFxObject(class UGFxObject* Obj);
	void EventClosed(class UGFxModal_X* Modal);
	void ClickDelegate(class UGFxModal_X* Modal);
};

// Class ProjectX.IEOSGameClipsController
// 0x0000 (0x0060 - 0x0060)
class UIEOSGameClipsController : public UInterface
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.IEOSGameClipsController");
		}

		return uClassPointer;
	};

	void DisableBackgroundRecording();
	void EnableBackgroundRecording();
	void StartCapturingClip();
};

// Class ProjectX.IOnlineGamePlaylists_X
// 0x0000 (0x0060 - 0x0060)
class UIOnlineGamePlaylists_X : public UInterface
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.IOnlineGamePlaylists_X");
		}

		return uClassPointer;
	};

	bool IsNonStandardPlaylistName(struct FName PlaylistName);
	bool IsStandardPlaylistName(struct FName PlaylistName);
	bool IsUnrankedPlaylistName(struct FName PlaylistName);
	bool IsRankedPlaylistName(struct FName PlaylistName);
	struct FName IdToName(int32_t PlaylistId);
	int32_t NameToId(struct FName PlaylistName);
	TArray<struct FName> GetAccessiblePlaylists(TArray<struct FName>& SelectedPlaylists);
};

// Class ProjectX.LanMessage_X
// 0x0008 (0x0060 - 0x0068)
class ULanMessage_X : public UOnlineMessage_X
{
public:
	uint64_t                                           Nonce;                                         // 0x0060 (0x0008) [0x0000004000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.LanMessage_X");
		}

		return uClassPointer;
	};

	bool Broadcast();
	class ULanMessage_X* SetNonce(uint64_t InNonce);
};

// Class ProjectX.LanMessage_HostQuery_X
// 0x0098 (0x0068 - 0x0100)
class ULanMessage_HostQuery_X : public ULanMessage_X
{
public:
	struct FCustomMatchSettings                        Filter;                                        // 0x0068 (0x0090) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            BuildID;                                       // 0x00F8 (0x0004) [0x0000000000000000]               
	unsigned long                                      bHost : 1;                                     // 0x00FC (0x0004) [0x0000000000000000] [0x00000001] 
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.LanMessage_HostQuery_X");
		}

		return uClassPointer;
	};

	class ULanMessage_HostQuery_X* SetHost(unsigned long bValue);
	class ULanMessage_HostQuery_X* SetBuildID(int32_t InBuildID);
	class ULanMessage_HostQuery_X* SetFilter(struct FCustomMatchSettings InFilter);
};

// Class ProjectX.LanMessage_HostResponse_X
// 0x00D0 (0x0068 - 0x0138)
class ULanMessage_HostResponse_X : public ULanMessage_X
{
public:
	struct FServerResult                               Result;                                        // 0x0068 (0x00B0) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ServerId;                                      // 0x0118 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     MetaData;                                      // 0x0128 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.LanMessage_HostResponse_X");
		}

		return uClassPointer;
	};

	struct FString GetDebugString();
	class ULanMessage_HostResponse_X* SetMetaData(struct FString InMetaData);
	class ULanMessage_HostResponse_X* SetServerID(struct FString InServerID);
	class ULanMessage_HostResponse_X* SetResult(struct FServerResult InResult);
};

// Class ProjectX.LanMessage_Ping_X
// 0x0000 (0x0068 - 0x0068)
class ULanMessage_Ping_X : public ULanMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.LanMessage_Ping_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.LocalCacheTests_X
// 0x0010 (0x0060 - 0x0070)
class ULocalCacheTests_X : public UObject
{
public:
	struct FString                                     CacheFilePath;                                 // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.LocalCacheTests_X");
		}

		return uClassPointer;
	};

	void HandleLocalCacheImported(class ULocalCache_X* Cache, class UObject* CacheObject, class UError* Error);
	void ImportTest();
	void HandleLocalCacheExported(class ULocalCache_X* Cache, class UObject* CacheObject, class UError* Error);
	void ToCacheAndBack(int32_t RandomSeed);
};

// Class ProjectX.LoginResponse_X
// 0x0014 (0x0060 - 0x0074)
class ULoginResponse_X : public UObject
{
public:
	struct FString                                     BannedMessage;                                 // 0x0060 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            BannedMinutes;                                 // 0x0070 (0x0004) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.LoginResponse_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.MapPrefsConfig_X
// 0x000C (0x0078 - 0x0084)
class UMapPrefsConfig_X : public UOnlineConfig_X
{
public:
	float                                              PreferenceWeight;                              // 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MaxLikes;                                      // 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MaxDislikes;                                   // 0x0080 (0x0004) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.MapPrefsConfig_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.MatchData_X
// 0x00E8 (0x0060 - 0x0148)
class UMatchData_X : public UObject
{
public:
	struct FString                                     MatchGUID;                                     // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint64_t                                           RecordStartTimestamp;                          // 0x0070 (0x0008) [0x0000000000000000]               
	uint64_t                                           RecordEndTimestamp;                            // 0x0078 (0x0008) [0x0000000000000000]               
	uint64_t                                           MatchStartTimestamp;                           // 0x0080 (0x0008) [0x0000000000000000]               
	uint64_t                                           MatchEndTimestamp;                             // 0x0088 (0x0008) [0x0000000000000000]               
	struct FName                                       MapName;                                       // 0x0090 (0x0008) [0x0000000040000000] (CPF_EditInlineNotify)
	int32_t                                            Playlist;                                      // 0x0098 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	TArray<struct FName>                               Mutators;                                      // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      bIsBotMatch : 1;                               // 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bClubVsClub : 1;                               // 0x00B0 (0x0004) [0x0001000000000000] [0x00000002] 
	unsigned long                                      bOverTime : 1;                                 // 0x00B0 (0x0004) [0x0000000040000000] [0x00000004] (CPF_EditInlineNotify)
	unsigned long                                      bNoContest : 1;                                // 0x00B0 (0x0004) [0x0000000040000000] [0x00000008] (CPF_EditInlineNotify)
	unsigned long                                      bForfeit : 1;                                  // 0x00B0 (0x0004) [0x0000000040000000] [0x00000010] (CPF_EditInlineNotify)
	int32_t                                            ClubID;                                        // 0x00B4 (0x0004) [0x0001000000000000]               
	struct FUniqueNetId                                CustomMatchCreatorPlayerID;                    // 0x00B8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     CustomServerName;                              // 0x0100 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     CustomServerPassword;                          // 0x0110 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              SecondsPlayed;                                 // 0x0120 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	float                                              OvertimeSecondsPlayed;                         // 0x0124 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int32_t                                            WinningTeam;                                   // 0x0128 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int32_t                                            Team0Score;                                    // 0x012C (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	int32_t                                            Team1Score;                                    // 0x0130 (0x0004) [0x0000000040000000] (CPF_EditInlineNotify)
	TArray<class UMatchPlayerData_X*>                  Players;                                       // 0x0138 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.MatchData_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.MatchEndedMessage_X
// 0x0000 (0x0060 - 0x0060)
class UMatchEndedMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.MatchEndedMessage_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.MatchInfoMessage_X
// 0x0048 (0x0068 - 0x00B0)
class UMatchInfoMessage_X : public UServerToServerMessage_X
{
public:
	int32_t                                            Playlist;                                      // 0x0068 (0x0004) [0x0000000000000000]               
	unsigned long                                      bIsBotMatch : 1;                               // 0x006C (0x0004) [0x0000000000000000] [0x00000001] 
	TArray<struct FString>                             BotNames;                                      // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ReservationID;                                 // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     JoinName;                                      // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     JoinPassword;                                  // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.MatchInfoMessage_X");
		}

		return uClassPointer;
	};

	struct FPsyNetBeaconReservation GetReservation();
};

// Class ProjectX.PsyNetService_DSReservation_X
// 0x0048 (0x0090 - 0x00D8)
class UPsyNetService_DSReservation_X : public UPsyNetClientService_X
{
public:
	struct FPsyNetBeaconReservation                    Reservation;                                   // 0x0090 (0x0048) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetService_DSReservation_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.MatchLog_X
// 0x0028 (0x0060 - 0x0088)
class UMatchLog_X : public UObject
{
public:
	int32_t                                            LogFileStartSize;                              // 0x0060 (0x0004) [0x0000000000000000]               
	struct FString                                     URL;                                           // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<uint8_t>                                    Content;                                       // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.MatchLog_X");
		}

		return uClassPointer;
	};

	void ConditionalSendWebRequest();
	void End(int32_t MaxSize);
	void SetURL(struct FString InURL);
	struct FString GetLogFileName();
	int32_t GetLogFileSize();
	void Start();
};

// Class ProjectX.MaterialEffect_X
// 0x0038 (0x0090 - 0x00C8)
class UMaterialEffect_X : public UMaterialEffect
{
public:
	struct FName                                       TimeParamName;                                 // 0x0090 (0x0008) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeInTime;                                    // 0x0098 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeInFalloff;                                 // 0x009C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeOutTime;                                   // 0x00A0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              FadeOutFalloff;                                // 0x00A4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ActiveTime;                                    // 0x00A8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ValueMin;                                      // 0x00AC (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              ValueMax;                                      // 0x00B0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	class UMaterialInstanceConstant*                   MatInst;                                       // 0x00B8 (0x0008) [0x0000000000002000] (CPF_Transient)
	uint8_t                                            Stage;                                         // 0x00C0 (0x0001) [0x0000000000002000] (CPF_Transient)
	float                                              StageTime;                                     // 0x00C4 (0x0004) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.MaterialEffect_X");
		}

		return uClassPointer;
	};

	struct FString GetActiveEffects();
	bool HasAnyEffectsActive();
	float GetMaterialParameterValue(struct FName MaterialParamName);
	void SetMaterialParameterLinearColorValue(struct FName MaterialParamName, struct FLinearColor NewValue);
	void SetMaterialParameterValue(struct FName MaterialParamName, float NewValue);
	void HandleParametersChanged();
	void UpdateFade(float Alpha);
	void SetStage(uint8_t NewStage);
	bool Tick(float dt);
	void End();
	void Start();
	void Init();
	bool IsInitialized();
};

// Class ProjectX.PauseMetricsState_X
// 0x0000 (0x0060 - 0x0060)
class UPauseMetricsState_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PauseMetricsState_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.NetModeBase
// 0x0000 (0x0060 - 0x0060)
class UNetModeBase : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.NetModeBase");
		}

		return uClassPointer;
	};

};

// Class ProjectX.NetMode_Networked
// 0x0000 (0x0060 - 0x0060)
class UNetMode_Networked : public UNetModeBase
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.NetMode_Networked");
		}

		return uClassPointer;
	};

};

// Class ProjectX.MigrationStartedMessage_X
// 0x00F0 (0x0068 - 0x0158)
class UMigrationStartedMessage_X : public UServerToServerMessage_X
{
public:
	unsigned long                                      bRematch : 1;                                  // 0x0068 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FCustomMatchSettings                        PrivateMatchSettings;                          // 0x0070 (0x0090) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                PrivateMatchCreator;                           // 0x0100 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FMigrationReservationData>           MigratingPlayers;                              // 0x0148 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.MigrationStartedMessage_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.NetMetricsSystem_X
// 0x0000 (0x0060 - 0x0060)
class UNetMetricsSystem_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.NetMetricsSystem_X");
		}

		return uClassPointer;
	};

	void Exit(class UPreExitEvent_X* Event, class UClientNetMetrics_X* Metrics);
	void RecordGamePing(class UNetworkPingEvent_X* Ping, class UClientNetMetrics_X* Metrics);
	void PlayerRemoved(class UClientNetMetrics_X* Metrics);
	void PlayerAdded(class UPrimaryPlayer* PP, class UNetMode_DedicatedClient* NetMode, class APlayerReplicationInfo* PRI);
};

// Class ProjectX.NetMode_DedicatedClient
// 0x0000 (0x0060 - 0x0060)
class UNetMode_DedicatedClient : public UNetModeBase
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.NetMode_DedicatedClient");
		}

		return uClassPointer;
	};

};

// Class ProjectX.NetworkPingEvent_X
// 0x0004 (0x0060 - 0x0064)
class UNetworkPingEvent_X : public UObject
{
public:
	float                                              DeltaSeconds;                                  // 0x0060 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.NetworkPingEvent_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.NetMode_Authoritative
// 0x0000 (0x0060 - 0x0060)
class UNetMode_Authoritative : public UNetModeBase
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.NetMode_Authoritative");
		}

		return uClassPointer;
	};

};

// Class ProjectX.NetMode_Client
// 0x0000 (0x0060 - 0x0060)
class UNetMode_Client : public UNetModeBase
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.NetMode_Client");
		}

		return uClassPointer;
	};

};

// Class ProjectX.NetMode_DedicatedServer
// 0x0000 (0x0060 - 0x0060)
class UNetMode_DedicatedServer : public UNetModeBase
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.NetMode_DedicatedServer");
		}

		return uClassPointer;
	};

};

// Class ProjectX.NetMode_ListenServer
// 0x0000 (0x0060 - 0x0060)
class UNetMode_ListenServer : public UNetModeBase
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.NetMode_ListenServer");
		}

		return uClassPointer;
	};

};

// Class ProjectX.NetMode_Server
// 0x0000 (0x0060 - 0x0060)
class UNetMode_Server : public UNetModeBase
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.NetMode_Server");
		}

		return uClassPointer;
	};

};

// Class ProjectX.NetMode_Standalone
// 0x0000 (0x0060 - 0x0060)
class UNetMode_Standalone : public UNetModeBase
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.NetMode_Standalone");
		}

		return uClassPointer;
	};

};

// Class ProjectX.NetModeReplicator_X
// 0x0000 (0x0268 - 0x0268)
class ANetModeReplicator_X : public AReplicationInfo
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.NetModeReplicator_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.NetModeSystem_X
// 0x0000 (0x0060 - 0x0060)
class UNetModeSystem_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.NetModeSystem_X");
		}

		return uClassPointer;
	};

	void AddModes(TArray<class UClass*>& NetModes);
	void HandleDedicatedClient(class ANetModeReplicator_X* _, class UNetMode_Client* NetMode);
	void LevelUnloaded(class AWorldInfo* WorldInfo);
	void LevelLoaded(class AWorldInfo* WorldInfo);
};

// Class ProjectX.RPC_CreateClub_X
// 0x0028 (0x00F8 - 0x0120)
class URPC_CreateClub_X : public URPC_ClubDetailsBase_X
{
public:
	struct FString                                     ClubName;                                      // 0x00F8 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	struct FString                                     ClubTag;                                       // 0x0108 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	int32_t                                            PrimaryColor;                                  // 0x0118 (0x0004) [0x0001000000000000]               
	int32_t                                            AccentColor;                                   // 0x011C (0x0004) [0x0001000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_CreateClub_X");
		}

		return uClassPointer;
	};

	class UErrorType* eventOverrideErrorType(class UErrorType* ErrorType);
	class URPC_CreateClub_X* SetSettings(class UClubSettings_X* Settings);
};

// Class ProjectX.RPC_UpdateClubName_X
// 0x0020 (0x00F8 - 0x0118)
class URPC_UpdateClubName_X : public URPC_ClubDetailsBase_X
{
public:
	struct FString                                     ClubName;                                      // 0x00F8 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	struct FString                                     ClubTag;                                       // 0x0108 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_UpdateClubName_X");
		}

		return uClassPointer;
	};

	class UErrorType* eventOverrideErrorType(class UErrorType* ErrorType);
	class URPC_UpdateClubName_X* SetName(struct FString InName, struct FString InTag);
};

// Class ProjectX.RPC_UpdateClubColors_X
// 0x0008 (0x00F8 - 0x0100)
class URPC_UpdateClubColors_X : public URPC_ClubDetailsBase_X
{
public:
	int32_t                                            PrimaryColor;                                  // 0x00F8 (0x0004) [0x0001000000000000]               
	int32_t                                            AccentColor;                                   // 0x00FC (0x0004) [0x0001000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_UpdateClubColors_X");
		}

		return uClassPointer;
	};

	class URPC_UpdateClubColors_X* SetColors(int32_t InPrimary, int32_t InAccent);
};

// Class ProjectX.RPC_UpdateClubMotD_X
// 0x0010 (0x00F8 - 0x0108)
class URPC_UpdateClubMotD_X : public URPC_ClubDetailsBase_X
{
public:
	struct FString                                     MotD;                                          // 0x00F8 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_UpdateClubMotD_X");
		}

		return uClassPointer;
	};

	class UErrorType* eventOverrideErrorType(class UErrorType* ErrorType);
	class URPC_UpdateClubMotD_X* SetMotD(struct FString InMotD);
};

// Class ProjectX.RPC_InviteToClub_X
// 0x0048 (0x00E8 - 0x0130)
class URPC_InviteToClub_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x00E8 (0x0048) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_InviteToClub_X");
		}

		return uClassPointer;
	};

	class UErrorType* eventOverrideErrorType(class UErrorType* ErrorType);
	class URPC_InviteToClub_X* SetPlayerID(struct FUniqueNetId InPlayerId);
};

// Class ProjectX.RPC_RemoveFromClub_X
// 0x0048 (0x00F8 - 0x0140)
class URPC_RemoveFromClub_X : public URPC_ClubDetailsBase_X
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x00F8 (0x0048) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_RemoveFromClub_X");
		}

		return uClassPointer;
	};

	class URPC_RemoveFromClub_X* SetPlayerID(struct FUniqueNetId InPlayerId);
};

// Class ProjectX.RPC_SetClubOwner_X
// 0x0048 (0x00F8 - 0x0140)
class URPC_SetClubOwner_X : public URPC_ClubDetailsBase_X
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x00F8 (0x0048) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_SetClubOwner_X");
		}

		return uClassPointer;
	};

	class URPC_SetClubOwner_X* SetNewOwner(struct FUniqueNetId InPlayerId);
};

// Class ProjectX.RPC_GetClubInvites_X
// 0x0010 (0x00E8 - 0x00F8)
class URPC_GetClubInvites_X : public URPC_X
{
public:
	TArray<class UClubInvite_X*>                       ClubInvites;                                   // 0x00E8 (0x0010) [0x0001000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_GetClubInvites_X");
		}

		return uClassPointer;
	};

	TArray<class UClubInvite_X*> __RPC_GetClubInvites_X__CreateClubInvitesTask_3089FD95429C2AEBA26F6BBC4FB8E132();
	class UTAsyncResult__array_ClubInvite_X* CreateClubInvitesTask();
};

// Class ProjectX.RPC_AcceptClubInvite_X
// 0x0004 (0x00F8 - 0x00FC)
class URPC_AcceptClubInvite_X : public URPC_ClubDetailsBase_X
{
public:
	int32_t                                            ClubID;                                        // 0x00F8 (0x0004) [0x0001000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_AcceptClubInvite_X");
		}

		return uClassPointer;
	};

	class URPC_AcceptClubInvite_X* SetClubID(uint64_t InClubID);
};

// Class ProjectX.RPC_RejectClubInvite_X
// 0x0004 (0x00E8 - 0x00EC)
class URPC_RejectClubInvite_X : public URPC_X
{
public:
	int32_t                                            ClubID;                                        // 0x00E8 (0x0004) [0x0001000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_RejectClubInvite_X");
		}

		return uClassPointer;
	};

	class URPC_RejectClubInvite_X* SetClubID(uint64_t InClubID);
};

// Class ProjectX.RPC_LeaveClub_X
// 0x0000 (0x00E8 - 0x00E8)
class URPC_LeaveClub_X : public URPC_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_LeaveClub_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.OnlineClubServerList_X
// 0x0020 (0x0060 - 0x0080)
class UOnlineClubServerList_X : public UObject
{
public:
	TArray<class UClubServerResult_X*>                 Servers;                                       // 0x0060 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	class URPC_GetClubPrivateMatches_X*                RPC;                                           // 0x0070 (0x0008) [0x0001004000000000]               
	class UError*                                      Error;                                         // 0x0078 (0x0008) [0x0001004000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineClubServerList_X");
		}

		return uClassPointer;
	};

	void __OnlineClubServerList_X__Refresh_958EE5644BD8D1DE7DA4F4B5DEA1FBBC(class URPC_X* _);
	void __OnlineClubServerList_X__Refresh_659886ED4E08494009267DA66F48632C(class URPC_X* _);
	void __OnlineClubServerList_X__Refresh_43E935144E7FDA08759A3A913C7DC72F(class URPC_X* _);
	class UAsyncTask* Refresh();
};

// Class ProjectX.RPC_GetClubPrivateMatches_X
// 0x0010 (0x00E8 - 0x00F8)
class URPC_GetClubPrivateMatches_X : public URPC_X
{
public:
	TArray<class UClubServerResult_X*>                 Servers;                                       // 0x00E8 (0x0010) [0x0001000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_GetClubPrivateMatches_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.OnlineConfigDispatcher_X
// 0x0004 (0x0060 - 0x0064)
class UOnlineConfigDispatcher_X : public UObject
{
public:
	unsigned long                                      bDebug : 1;                                    // 0x0060 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineConfigDispatcher_X");
		}

		return uClassPointer;
	};

	struct FString GetDebugString(class UOnlineConfig_X* Config);
	void UndoConfigObject(class UOnlineConfig_X* Config);
	void ApplyConfigObject(class UOnlineConfig_X* Config);
	void eventConstruct();
};

// Class ProjectX.UrlConfig_X
// 0x0050 (0x0060 - 0x00B0)
class UUrlConfig_X : public UObject
{
public:
	struct FString                                     CDN;                                           // 0x0060 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     ESportsURL;                                    // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ChinaPaymentURL;                               // 0x0080 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     CrossPlatformSupportURL;                       // 0x0090 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
	struct FString                                     LegalTextWebFolder;                            // 0x00A0 (0x0010) [0x0000000000404000] (CPF_Config | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.UrlConfig_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.OnlineGameVersion_X
// 0x0004 (0x0098 - 0x009C)
class UOnlineGameVersion_X : public UOnline_X
{
public:
	unsigned long                                      bUpdateRequired : 1;                           // 0x0098 (0x0004) [0x0000004000002000] [0x00000001] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGameVersion_X");
		}

		return uClassPointer;
	};

	void __OnlineGameVersion_X__OnInit_BB5C4BCD4ED16463399003A4D8998FC0(class UOnlineGameServerBrowser_X* _, class UError* Error);
	void __OnlineGameVersion_X__OnInit_7F30DD624E05CA289F2F88A1D6AE1A65(class UOnlineGamePrivateMatch_X* _, class UError* Error);
	void __OnlineGameVersion_X__OnInit_9D2E754E4B888475C9357493DD941D61(class UOnlineGameRegions_X* _, class UError* Error);
	void __OnlineGameVersion_X__OnInit_EA609CDF478B573A879E70BFAE09B8CC(class UOnlineGameMatchmaking_X* _, class UError* Error);
	void HandleError(class UError* Error);
	void OnInit();
};

// Class ProjectX.OnlineGameWordFilterProcessor_X
// 0x0030 (0x0098 - 0x00C8)
class UOnlineGameWordFilterProcessor_X : public UOnline_X
{
public:
	float                                              ResponseDelay;                                 // 0x0098 (0x0004) [0x0000000000000002] (CPF_Const)   
	TArray<struct FWordFilterRequest>                  SanitizeCallbacks;                             // 0x00A0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __OnSanitizeStringComplete__Delegate;          // 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGameWordFilterProcessor_X");
		}

		return uClassPointer;
	};

	void TriggerCallbacks(int32_t Index);
	void ProcessSanitizedDelayed();
	void HandleWordSanitized(class UWebRequest_X* Request);
	bool SanitizeString(struct FString Comment, struct FScriptDelegate SanitizeDelegate);
	void OnSanitizeStringComplete(struct FString Original, struct FString Sanitized);
};

// Class ProjectX.OnlineGameRegions_X
// 0x0098 (0x0098 - 0x0130)
class UOnlineGameRegions_X : public UOnline_X
{
public:
	float                                              PingRegionsCacheTime;                          // 0x0098 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LastPingRegionsTime;                           // 0x009C (0x0004) [0x0000000000002000] (CPF_Transient)
	int32_t                                            RegionIdxPingCur;                              // 0x00A0 (0x0004) [0x0000000000000000]               
	class URegionConfig_X*                             Config;                                        // 0x00A8 (0x0008) [0x0000804000000000]               
	TArray<class URegionPing_X*>                       RegionPings;                                   // 0x00B0 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FCachedRegionPing>                   CachedRegionPings;                             // 0x00C0 (0x0010) [0x0000008000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UTcpMessageBeacon*                           Beacon;                                        // 0x00D0 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UBeaconConfig_X*                             BeaconConfig;                                  // 0x00D8 (0x0008) [0x0000800000000000]               
	unsigned long                                      bWaitingToPingRegions : 1;                     // 0x00E0 (0x0004) [0x0000004000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      bPingingRegions : 1;                           // 0x00E0 (0x0004) [0x0000004000002000] [0x00000002] (CPF_Transient)
	struct FScriptDelegate                             __EventRegionsSynced__Delegate;                // 0x00E8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventRegionsPinged__Delegate;                // 0x0100 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventRegionsError__Delegate;                 // 0x0118 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGameRegions_X");
		}

		return uClassPointer;
	};

	struct FString __OnlineGameRegions_X__HandleGetPingRegionPingsRPC_297D70604567C9597EBC01A6022DF045(class URegionPing_X* R);
	bool __OnlineGameRegions_X__HandleGetPingRegionPingsRPC_0827A49A4E4D1F8F92CF2CA7407D5A6F(class URegionPing_X* R);
	void __OnlineGameRegions_X__HandleGetPingRegionPingsRPC_D91EFDD2442B986AA6AB54818662AC05(struct FGetGameServerPingListData Server);
	void __OnlineGameRegions_X__HandleGetPingRegionPingsRPC_E02C29664771DE83882A68A375E3210C(class URegionPing_X* RegionPing);
	bool __OnlineGameRegions_X__HandlePingMessage_B65D5E7448B85C1F38B573910B85BDB0(class URegionPing_X* RegionPing);
	struct FString GetLocalizedName(struct FString RegionID);
	bool Exists(struct FString RegionID);
	void SetCachedRegionPings(TArray<struct FCachedRegionPing>& InCachedRegionPings);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void NotifyWhenSynced(struct FScriptDelegate Callback);
	struct FString GetRegionDebugString(class URegionPing_X* RegionPing);
	struct FString GetRegionsDebugString();
	int32_t SortRegionDelegate(class URegionPing_X* A, class URegionPing_X* B);
	void FinalizeRegionPing(class URegionPing_X* RegionPing);
	void OnAllRegionsPinged();
	void HandlePingMessage(class UTcpConnection* Connection, class URegionPingMessage_X* PingMessage);
	void HandleBeaconMessage(class UTcpConnection* Connection, class UObject* Message);
	void PingRegionsPieceWise(int32_t PingCount);
	void HandleRegionPinged(class URegionPingData_X* Data);
	void HandleRegionsPinged(class URegionPinger_X* Pinger);
	void HandleGetPingRegionPingsRPC(class URPC_GetGameServerPingList_X* RPC);
	void PingRegions(struct FScriptDelegate Callback);
	void UpdateRegionPings();
	void OnRegionsSynced();
	void AddRegionPing(class URegion_X* Region);
	class URegionPing_X* GetRegionPing(struct FString RegionID);
	void eventOnInit();
	void EventRegionsError(class UOnlineGameRegions_X* RegionsObj, class UError* Error);
	void EventRegionsPinged(class UOnlineGameRegions_X* RegionsObj);
	void EventRegionsSynced(class UOnlineGameRegions_X* RegionsObj);
};

// Class ProjectX.OnlineGameInvite_X
// 0x0118 (0x0098 - 0x01B0)
class UOnlineGameInvite_X : public UOnline_X
{
public:
	struct FUniqueNetId                                FriendJoinPlayerID;                            // 0x0098 (0x0048) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     UnableToFindFriendsGameString;                 // 0x00E0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     AlreadyInSameServerString;                     // 0x00F0 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     FriendNotJoinable;                             // 0x0100 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     GameInviteBeaconAddress;                       // 0x0110 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     GameInviteCredentials;                         // 0x0120 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FName                                       ActionRequired;                                // 0x0130 (0x0008) [0x0000000000002000] (CPF_Transient)
	struct FScriptDelegate                             __EventGameInviteAccepted__Delegate;           // 0x0138 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventGameInviteComplete__Delegate;           // 0x0150 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventConfirmationRequired__Delegate;         // 0x0168 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPasswordRequired__Delegate;             // 0x0180 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventPsyNetPartyInviteAccepted__Delegate;    // 0x0198 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGameInvite_X");
		}

		return uClassPointer;
	};

	void HandleJoinGameComplete(unsigned long bSuccess, struct FString FailReason);
	void HandlePasswordRequired();
	void HandleTaskSuccess(struct FServerReservationData Reservation);
	void __OnlineGameInvite_X__BeginState_EE8B720B47EFA4E9E7E27DBDCA6D04BF(class UError* Error);
	void OnGameInviteComplete(unsigned long bSuccess, struct FString FailReason);
	void JoinGameInviteGame(struct FJoinMatchSettings Settings);
	void OnGameInviteAccepted(struct FString ErrorString, struct FOnlineGameSearchResult& InviteResult);
	void OnInit();
	void EventPsyNetPartyInviteAccepted(struct FString PartyID);
	void EventPasswordRequired();
	void EventConfirmationRequired(struct FName ConfirmationReason);
	void EventGameInviteComplete(unsigned long bSuccess, struct FString FailReason);
	void EventGameInviteAccepted();
};

// Class ProjectX.OnlineGameVoice_X
// 0x0018 (0x0098 - 0x00B0)
class UOnlineGameVoice_X : public UOnline_X
{
public:
	struct FScriptDelegate                             __EventPlayerTalking__Delegate;                // 0x0098 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGameVoice_X");
		}

		return uClassPointer;
	};

	uint8_t GetControllerID(class APlayerReplicationInfo* PRI);
	int32_t GetNumTalkers();
	bool IsRemotePlayerTalking(class APlayerReplicationInfo* PRI);
	void HandlePlayerTalkingStateChange(struct FUniqueNetId PlayerID, unsigned long bTalking);
	void UnregisterTalker(class UOnlinePlayer_X* Player);
	void RegisterTalker(class UOnlinePlayer_X* Player);
	void OnInit();
	void EventPlayerTalking(class UOnlineGameVoice_X* SelfRef, struct FUniqueNetId PlayerID, unsigned long bTalking);
};

// Class ProjectX.OnlineGamePopulation_X
// 0x0040 (0x0098 - 0x00D8)
class UOnlineGamePopulation_X : public UOnline_X
{
public:
	float                                              UpdatePopulationDelay;                         // 0x0098 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LastUpdatePopulationTime;                      // 0x009C (0x0004) [0x0000004000002000] (CPF_Transient)
	class URPC_X*                                      GetPopulationRPC;                              // 0x00A0 (0x0008) [0x0000004000002000] (CPF_Transient)
	int32_t                                            TotalPlayers;                                  // 0x00A8 (0x0004) [0x0000004000002000] (CPF_Transient)
	TArray<struct FGetPopulationData>                  Populations;                                   // 0x00B0 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventGetPlaylistPopulations__Delegate;       // 0x00C0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGamePopulation_X");
		}

		return uClassPointer;
	};

	int32_t __OnlineGamePopulation_X__HandleGotAllPopulationPlaylistsRPC_6C9FB2314742996BB1503CBFD4E1AEB3(struct FGetPopulationData P);
	bool __OnlineGamePopulation_X__HandleGotAllPopulationPlaylistsRPC_19212F07444E7C9260F14EB3F7588D52(struct FGetPopulationData P);
	void HandleGotAllPopulationPlaylistsRPC(class URPC_GetPopulation_X* RPC);
	void GetPlaylistPopulations(struct FScriptDelegate Callback);
	void EventGetPlaylistPopulations(class UOnlineGamePopulation_X* PopulationsObject);
};

// Class ProjectX.OnlineGameLanBrowser_X
// 0x0148 (0x0098 - 0x01E0)
class UOnlineGameLanBrowser_X : public UOnline_X
{
public:
	struct FString                                     StartSearchFailString;                         // 0x0098 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     SearchingString;                               // 0x00A8 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     FoundServerString;                             // 0x00B8 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FCustomMatchSettings                        Filter;                                        // 0x00C8 (0x0090) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      bIsHostQuery : 1;                              // 0x0158 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	float                                              SearchTimeout;                                 // 0x015C (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class ULanBeacon_X*                                LanBeacon;                                     // 0x0160 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FScriptDelegate                             __EventSearchNewResponse__Delegate;            // 0x0168 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSearchStatus__Delegate;                 // 0x0180 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSearchStateChanged__Delegate;           // 0x0198 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSearchComplete__Delegate;               // 0x01B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSearchError__Delegate;                  // 0x01C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGameLanBrowser_X");
		}

		return uClassPointer;
	};

	void HandleGameStarted(class AGRI_X* GRI);
	void PerformSearch();
	void UpdateStatusMessage();
	void HandleSearchTimeout();
	void HandleStatusUpdate(struct FString NewStatus);
	void HandleJoinGameComplete(unsigned long bSuccess, struct FString FailReason);
	void CreateLanGame(struct FCustomMatchSettings MatchSettings, struct FServerResult& HostResponse);
	void HandleHostResponse(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void OnSearchComplete(unsigned long bCancelled);
	void OnSearchError(struct FString Message);
	bool IsSearching();
	void Cancel();
	bool StartSearch(struct FCustomMatchSettings InFilter, unsigned long bHostQuery);
	class UOnlineGameLanBrowser_X* ClearCompleteDelegate(struct FScriptDelegate Callback);
	class UOnlineGameLanBrowser_X* ClearNewResponseDelegate(struct FScriptDelegate Callback);
	class UOnlineGameLanBrowser_X* ClearStateChangedDelegate(struct FScriptDelegate Callback);
	class UOnlineGameLanBrowser_X* ClearStatusDelegate(struct FScriptDelegate Callback);
	class UOnlineGameLanBrowser_X* ClearErrorDelegate(struct FScriptDelegate Callback);
	class UOnlineGameLanBrowser_X* SetCompleteDelegate(struct FScriptDelegate Callback);
	class UOnlineGameLanBrowser_X* SetNewResponseDelegate(struct FScriptDelegate Callback);
	class UOnlineGameLanBrowser_X* SetStateChangedDelegate(struct FScriptDelegate Callback);
	class UOnlineGameLanBrowser_X* SetStatusDelegate(struct FScriptDelegate Callback);
	class UOnlineGameLanBrowser_X* SetErrorDelegate(struct FScriptDelegate Callback);
	void OnInit();
	void EventSearchError(struct FString NewStatus);
	void EventSearchComplete(unsigned long bCancelled);
	void EventSearchStateChanged(struct FName SearchState);
	void EventSearchStatus(struct FString NewStatus);
	void EventSearchNewResponse(struct FServerResult& Result);
};

// Class ProjectX.OnlineGameServerBrowser_X
// 0x0130 (0x0098 - 0x01C8)
class UOnlineGameServerBrowser_X : public UOnline_X
{
public:
	struct FString                                     PreferredRegion;                               // 0x0098 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FCustomMatchSettings                        Filter;                                        // 0x00A8 (0x0090) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     StartSearchFailString;                         // 0x0138 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     NoResultsFound;                                // 0x0148 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     NotLoggedInToPsynet;                           // 0x0158 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSearchComplete__Delegate;               // 0x0168 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSearchError__Delegate;                  // 0x0180 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventBrowserError__Delegate;                 // 0x0198 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSearchCompleteReservation__Delegate;    // 0x01B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGameServerBrowser_X");
		}

		return uClassPointer;
	};

	void HandleGameStarted(class AGRI_X* GRI);
	void HandleGameServerList(class URPC_CustomGameServerGet_X* RPC);
	void HandleSearchError(class UError* Error);
	void PerformSearch();
	void HandleTaskFail(class UError* Error);
	void HandleTaskSuccess(struct FServerReservationData Reservation);
	struct FString GetRegionsString();
	void OnSearchComplete(TArray<struct FServerResult>& Results);
	void OnSearchError(struct FString Message);
	bool IsSearching();
	void Cancel();
	bool StartSearch(struct FCustomMatchSettings InFilter, struct FString InPreferredRegion);
	class UOnlineGameServerBrowser_X* SetCompleteReservationDelegate(struct FScriptDelegate Callback);
	class UOnlineGameServerBrowser_X* SetCompleteDelegate(struct FScriptDelegate Callback);
	class UOnlineGameServerBrowser_X* SetErrorDelegate(struct FScriptDelegate Callback);
	void EventSearchCompleteReservation(struct FServerReservationData& Reservation);
	void EventBrowserError(class UOnlineGameServerBrowser_X* Browser, class UError* Error);
	void EventSearchError(struct FString NewStatus);
	void EventSearchComplete(TArray<struct FServerResult>& Results);
};

// Class ProjectX.OnlineGamePrivateMatch_X
// 0x0120 (0x0118 - 0x0238)
class UOnlineGamePrivateMatch_X : public UOnlineGameMatchmakingBase_X
{
public:
	struct FString                                     PreferredRegion;                               // 0x0118 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     SearchingString;                               // 0x0128 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     StartSearchFailString;                         // 0x0138 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     FoundServerString;                             // 0x0148 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     AlreadyJoiningGameString;                      // 0x0158 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     TimeoutString;                                 // 0x0168 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     WrongRegionString;                             // 0x0178 (0x0010) [0x0000000000408003] (CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FCustomMatchSettings                        Settings;                                      // 0x0188 (0x0090) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	float                                              SearchTimeout;                                 // 0x0218 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	struct FScriptDelegate                             __EventPrivateMatchError__Delegate;            // 0x0220 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGamePrivateMatch_X");
		}

		return uClassPointer;
	};

	void UpdateStatusMessage();
	void HandleError(class UError* Error);
	void StartCheckingReservations();
	void HandleStartSearch(class UAsyncTask* Task);
	void OnReceiveGameServer(struct FServerReservationData Reservation);
	void HandleSearchTimeout();
	void ResetPrivateMatchSettings();
	void UpdatePrivateMatchSettings(struct FCustomMatchSettings InSettings);
	void OnPrivateMatchError(struct FString Message);
	bool StartSearch(struct FString InPreferredRegion, struct FCustomMatchSettings InSettings);
	void EventPrivateMatchError(class UOnlineGamePrivateMatch_X* InPrivateMatch, class UError* Error);
};

// Class ProjectX.UdpLanBrowser_X
// 0x0030 (0x0060 - 0x0090)
class UUdpLanBrowser_X : public ULanBrowser_X
{
public:
	float                                              SearchTimeout;                                 // 0x0060 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
	class ULanBeacon_X*                                LanBeacon;                                     // 0x0068 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UTAsyncResult__array_LanServerRecord_X*      SearchTask;                                    // 0x0070 (0x0008) [0x0000000000000000]               
	TArray<class ULanServerRecord_X*>                  SearchResults;                                 // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UUdpLanServer_X*                             LocalServer;                                   // 0x0088 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.UdpLanBrowser_X");
		}

		return uClassPointer;
	};

	class UAsyncTask* JoinServer(struct FString ServerId, struct FString Options);
	void HandleSearchTimeout();
	void HandleHostResponse(class UOnlineMessageComponent_X* Component, class ULanMessage_HostResponse_X* Response);
	void SearchTaskDisposed();
	class UTAsyncResult__array_LanServerRecord_X* GetServerList();
	void DestroyServer();
	class UAsyncTask* SetServerMetaData(struct FString MetaData);
	class UAsyncTask* CreateServer(struct FString MetaData);
};

// Class ProjectX.SystemMetrics_X
// 0x0000 (0x0080 - 0x0080)
class USystemMetrics_X : public UMetricsGroup_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.SystemMetrics_X");
		}

		return uClassPointer;
	};

	void Specs(struct FOSMetrics OS, struct FCpuMetrics CPU, struct FMemoryMetrics Memory, struct FVideoCardMetrics Video, struct FNetworkAdapterMetrics Network);
	void RecordSpecs();
};

// Class ProjectX.RPC_GetPublicIP_X
// 0x0010 (0x00E8 - 0x00F8)
class URPC_GetPublicIP_X : public URPC_X
{
public:
	struct FString                                     IP;                                            // 0x00E8 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_GetPublicIP_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_UpdatePlayerPlaylist_X
// 0x0008 (0x00E8 - 0x00F0)
class URPC_UpdatePlayerPlaylist_X : public URPC_X
{
public:
	int32_t                                            Playlist;                                      // 0x00E8 (0x0004) [0x0000004000000000]               
	int32_t                                            NumLocalPlayers;                               // 0x00EC (0x0004) [0x0000004000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_UpdatePlayerPlaylist_X");
		}

		return uClassPointer;
	};

	class URPC_UpdatePlayerPlaylist_X* SetNumLocalPlayers(int32_t InNumLocalPlayers);
	class URPC_UpdatePlayerPlaylist_X* SetPlaylist(int32_t InPlaylist);
};

// Class ProjectX.OnlineGameDedicatedServerRegistration_X
// 0x002C (0x0098 - 0x00C4)
class UOnlineGameDedicatedServerRegistration_X : public UOnline_X
{
public:
	class UServerConfig_X*                             MyConfig;                                      // 0x0098 (0x0008) [0x0000800000000001] (CPF_Edit)    
	class UCacheTimer_X*                               HeartbeatTimer;                                // 0x00A0 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            GameTimeTimer;                                 // 0x00A8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            GameTimeSeconds;                               // 0x00AC (0x0004) [0x0000004000002000] (CPF_Transient)
	class URPC_CreateGameServer_X*                     CreateGameServerRPC;                           // 0x00B0 (0x0008) [0x0000000000002000] (CPF_Transient)
	class URPC_UpdateGameServer_X*                     UpdateGameServerRPC;                           // 0x00B8 (0x0008) [0x0000000000002000] (CPF_Transient)
	float                                              PsyNetDisconnectShutdownTime;                  // 0x00C0 (0x0004) [0x0000000000000003] (CPF_Edit | CPF_Const)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGameDedicatedServerRegistration_X");
		}

		return uClassPointer;
	};

	void __OnlineGameDedicatedServerRegistration_X__HandleCreateServerSucces_3DF6D3844104EAE7B0D012B668D9E4A3(class UCacheTimer_X* Timer);
	void HandleCrashed();
	class UServerMetrics_X* GetServerMetrics();
	struct FString GetExclusivePlatformString(uint8_t Platform);
	void UpdateGameTime(int32_t TimeSeconds);
	bool ShouldShutdownWhenEmpty();
	void TimerShutdownWhenEmpty();
	void HandleUpdateServerFailed(class URPC_UpdateGameServer_X* RPC);
	void HandleUpdateServerSucces(class URPC_UpdateGameServer_X* RPC);
	void HandleCreateServerFailed(class URPC_CreateGameServer_X* RPC);
	void HandlePerConDisconnect(class UPsyNetConnection_X* _);
	void HandlePerConConnect(class UPsyNetConnection_X* Connection);
	void ConnectToPerCon();
	void HandleCreateServerSucces(class URPC_CreateGameServer_X* RPC);
	void SetServerNotJoinable();
	void SendUpdateServerRPC();
	struct FString GetServerType();
	void SendCreateServerRPC();
	void SendUpdateRequest();
	void UpdateServer();
	void ForceUpdateServer();
	void ForceUpdateServerOnMapPreLoad(struct FString MapName);
	void HandleConfigUpdate();
	void UnregisterServer();
	void RegisterServer();
	void OnInit();
};

// Class ProjectX.OnlinePlayerPermissions_X
// 0x0040 (0x0060 - 0x00A0)
class UOnlinePlayerPermissions_X : public UObject
{
public:
	float                                              SyncDelay;                                     // 0x0060 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<struct FUniqueNetId>                        PendingPlayerRequests;                         // 0x0068 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FPlayerPermissionsList>              PlayerPermissions;                             // 0x0078 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventUpdated__Delegate;                      // 0x0088 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlinePlayerPermissions_X");
		}

		return uClassPointer;
	};

	bool HasPermission(struct FUniqueNetId PlayerID, uint8_t Permission);
	void HandlePlayerPermissions(class URPC_GetPlayerPermissions_X* RPC);
	void SendRequest();
	void SyncPermissions(struct FUniqueNetId PlayerID);
	void EventUpdated(class UOnlinePlayerPermissions_X* Permissions);
};

// Class ProjectX.RPC_CheckReplacementDedicatedServer_X
// 0x0040 (0x00E8 - 0x0128)
class URPC_CheckReplacementDedicatedServer_X : public URPC_X
{
public:
	uint64_t                                           ServerId;                                      // 0x00E8 (0x0008) [0x0000004000000000]               
	unsigned long                                      bFoundReplacement : 1;                         // 0x00F0 (0x0004) [0x0000004000002000] [0x00000001] (CPF_Transient)
	struct FCheckReplacementDedicatedServerData        Server;                                        // 0x00F8 (0x0030) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_CheckReplacementDedicatedServer_X");
		}

		return uClassPointer;
	};

	struct FString GetServerAddress();
	class URPC_CheckReplacementDedicatedServer_X* SetServerID(uint64_t InServerID);
};

// Class ProjectX.RPC_AddQuitter_X
// 0x0070 (0x00E8 - 0x0158)
class URPC_AddQuitter_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x00E8 (0x0048) [0x0000004000400000] (CPF_NeedCtorLink)
	struct FString                                     Reason;                                        // 0x0130 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	int32_t                                            PlaylistId;                                    // 0x0140 (0x0004) [0x0000004000000000]               
	struct FString                                     MatchGUID;                                     // 0x0148 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_AddQuitter_X");
		}

		return uClassPointer;
	};

	class URPC_AddQuitter_X* SetMatchGUID(struct FString InMatchGUID);
	class URPC_AddQuitter_X* SetPlaylistID(int32_t InPlaylistID);
	class URPC_AddQuitter_X* SetReason(struct FString InReason);
	class URPC_AddQuitter_X* SetPlayerID(struct FUniqueNetId InPlayerId);
};

// Class ProjectX.RPC_RemoveQuitter_X
// 0x0060 (0x00E8 - 0x0148)
class URPC_RemoveQuitter_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x00E8 (0x0048) [0x0000004000400000] (CPF_NeedCtorLink)
	int32_t                                            PlaylistId;                                    // 0x0130 (0x0004) [0x0000004000000000]               
	struct FString                                     MatchGUID;                                     // 0x0138 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_RemoveQuitter_X");
		}

		return uClassPointer;
	};

	class URPC_RemoveQuitter_X* SetMatchGUID(struct FString InMatchGUID);
	class URPC_RemoveQuitter_X* SetPlaylistID(int32_t InPlaylistID);
	class URPC_RemoveQuitter_X* SetPlayerID(struct FUniqueNetId InPlayerId);
};

// Class ProjectX.RPC_RecordMatch_X
// 0x0008 (0x00E8 - 0x00F0)
class URPC_RecordMatch_X : public URPC_X
{
public:
	class UObject*                                     Match;                                         // 0x00E8 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_RecordMatch_X");
		}

		return uClassPointer;
	};

	class URPC_RecordMatch_X* SetMatch(class UObject* InMatch);
};

// Class ProjectX.RPC_UpdateGameServer_X
// 0x0094 (0x00E8 - 0x017C)
class URPC_UpdateGameServer_X : public URPC_X
{
public:
	uint64_t                                           ServerId;                                      // 0x00E8 (0x0008) [0x0000004000000000]               
	int32_t                                            Playlist;                                      // 0x00F0 (0x0004) [0x0000004000000000]               
	int32_t                                            MaxPlayers;                                    // 0x00F4 (0x0004) [0x0000004000000000]               
	int32_t                                            NumPlayersTeam1;                               // 0x00F8 (0x0004) [0x0000004000000000]               
	int32_t                                            NumPlayersTeam2;                               // 0x00FC (0x0004) [0x0000004000000000]               
	int32_t                                            ReservationsTeam1;                             // 0x0100 (0x0004) [0x0000004000000000]               
	int32_t                                            ReservationsTeam2;                             // 0x0104 (0x0004) [0x0000004000000000]               
	unsigned long                                      bIsPostGame : 1;                               // 0x0108 (0x0004) [0x0000004000000000] [0x00000001] 
	unsigned long                                      bIsBotMatch : 1;                               // 0x0108 (0x0004) [0x0000004000000000] [0x00000002] 
	int32_t                                            TimeRemaining;                                 // 0x010C (0x0004) [0x0000004000000000]               
	struct FString                                     ExclusivePlatform;                             // 0x0110 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	TArray<struct FString>                             PlayersPlatforms;                              // 0x0120 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	TArray<struct FUniqueNetId>                        PlayerIDs;                                     // 0x0130 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	TArray<struct FUniqueNetId>                        AbandonedPlayerIDs;                            // 0x0140 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	struct FString                                     CustomServerName;                              // 0x0150 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	struct FString                                     CustomServerPassword;                          // 0x0160 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	int32_t                                            ScoreTeam1;                                    // 0x0170 (0x0004) [0x0000004000000000]               
	int32_t                                            ScoreTeam2;                                    // 0x0174 (0x0004) [0x0000004000000000]               
	int32_t                                            ClubID;                                        // 0x0178 (0x0004) [0x0001004000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_UpdateGameServer_X");
		}

		return uClassPointer;
	};

	class URPC_UpdateGameServer_X* SetTeam2Score(int32_t TeamScore);
	class URPC_UpdateGameServer_X* SetTeam1Score(int32_t TeamScore);
	class URPC_UpdateGameServer_X* SetIsBotMatch(unsigned long bBotMatch);
	class URPC_UpdateGameServer_X* SetClubID(uint64_t InClubID);
	class URPC_UpdateGameServer_X* SetCustomServerPassword(struct FString InCustomServerPassword);
	class URPC_UpdateGameServer_X* SetCustomServerName(struct FString InCustomServerName);
	class URPC_UpdateGameServer_X* SetPlayersPlatforms(TArray<struct FString> InPlayersPlatforms);
	class URPC_UpdateGameServer_X* SetExclusivePlatform(struct FString InExclusivePlatform);
	class URPC_UpdateGameServer_X* SetTimeRemaining(int32_t InTimeRemaining);
	class URPC_UpdateGameServer_X* SetIsPostGame(unsigned long bInIsPostGame);
	class URPC_UpdateGameServer_X* SetAbandonedPlayerIDs(TArray<struct FUniqueNetId> InPlayerIDs);
	class URPC_UpdateGameServer_X* SetPlayerIDs(TArray<struct FUniqueNetId> InPlayerIDs);
	class URPC_UpdateGameServer_X* SetReservationsTeam2(int32_t InReservationsTeam2);
	class URPC_UpdateGameServer_X* SetReservationsTeam1(int32_t InReservationsTeam1);
	class URPC_UpdateGameServer_X* SetNumPlayersTeam2(int32_t InNumPlayersTeam2);
	class URPC_UpdateGameServer_X* SetNumPlayersTeam1(int32_t InNumPlayersTeam1);
	class URPC_UpdateGameServer_X* SetMaxPlayers(int32_t InMaxPlayers);
	class URPC_UpdateGameServer_X* SetPlaylist(int32_t InPlaylist);
	class URPC_UpdateGameServer_X* SetServerID(uint64_t InServerID);
};

// Class ProjectX.RPC_CreateGameServer_X
// 0x00A0 (0x00E8 - 0x0188)
class URPC_CreateGameServer_X : public URPC_X
{
public:
	struct FString                                     ServerName;                                    // 0x00E8 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	int32_t                                            MachineId;                                     // 0x00F8 (0x0004) [0x0000004000000000]               
	struct FString                                     IP;                                            // 0x0100 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	struct FString                                     Region;                                        // 0x0110 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	int32_t                                            BuildID;                                       // 0x0120 (0x0004) [0x0000004000000000]               
	struct FString                                     ServerType;                                    // 0x0128 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	uint64_t                                           ServerId;                                      // 0x0138 (0x0008) [0x0000004000002000] (CPF_Transient)
	struct FString                                     Host;                                          // 0x0140 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	int32_t                                            Zone;                                          // 0x0150 (0x0004) [0x0000004000002000] (CPF_Transient)
	unsigned long                                      UseWebSocket : 1;                              // 0x0154 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	struct FString                                     PerConURL;                                     // 0x0158 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     PerConURLv2;                                   // 0x0168 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     PsyToken;                                      // 0x0178 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_CreateGameServer_X");
		}

		return uClassPointer;
	};

	class URPC_CreateGameServer_X* SetBuildID(int32_t InBuildID);
	class URPC_CreateGameServer_X* SetRegion(struct FString InRegion);
	class URPC_CreateGameServer_X* SetIP(struct FString InIP);
	class URPC_CreateGameServer_X* SetMachineID(int32_t InMachineID);
	class URPC_CreateGameServer_X* SetServerType(struct FString InServerType);
	class URPC_CreateGameServer_X* SetServerName(struct FString InServerName);
};

// Class ProjectX.ServerMetrics_X
// 0x0000 (0x0080 - 0x0080)
class UServerMetrics_X : public UMetricsGroup_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ServerMetrics_X");
		}

		return uClassPointer;
	};

	void CrashedError();
	void ShutDown();
	void Created(uint64_t ServerId, struct FString Host);
};

// Class ProjectX.RPC_DeactivateGameServer_X
// 0x0008 (0x00E8 - 0x00F0)
class URPC_DeactivateGameServer_X : public URPC_X
{
public:
	uint64_t                                           ServerId;                                      // 0x00E8 (0x0008) [0x0000004000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_DeactivateGameServer_X");
		}

		return uClassPointer;
	};

	class URPC_DeactivateGameServer_X* SetServerID(uint64_t InServerID);
};

// Class ProjectX.RPC_SetServerNotJoinable_X
// 0x0008 (0x00E8 - 0x00F0)
class URPC_SetServerNotJoinable_X : public URPC_X
{
public:
	uint64_t                                           ServerId;                                      // 0x00E8 (0x0008) [0x0000004000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_SetServerNotJoinable_X");
		}

		return uClassPointer;
	};

	class URPC_SetServerNotJoinable_X* SetServerID(uint64_t InServerID);
};

// Class ProjectX.ReservationsMetrics_X
// 0x0000 (0x0080 - 0x0080)
class UReservationsMetrics_X : public UMetricsGroup_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ReservationsMetrics_X");
		}

		return uClassPointer;
	};

	void PlayerReservationWithNoPsyNetBeaconError(struct FUniqueNetId PlayerID);
	void ServerMigrationPlayersAlreadySetError(uint64_t ServerId);
	void ServerMigrationPlaylistNotSetError(uint64_t ServerId);
	void TournamentMigrationMessageInvalidTournamentPlaylistError();
	void TournamentMigrationMessageWhileActiveError();
	void JoinExternalMatchReservationWhileInactiveError();
	void CreateExternalMatchReservationWhileActiveError();
	void DsrServerToServerFailedDeserializeError(struct FString MessageType);
	void JoinTournamentReservationWhileInactiveError();
	void CreateTournamentReservationInvalidPlaylistError();
	void CreateTournamentReservationWhileActiveError();
	void JoinPrivateReservationWhileInactiveError();
	void CreatePrivateReservationWhileActiveError();
	void BackfillReservationIncorrectPlaylist();
	void BackfillReservationWhileInactiveError();
	void NewGameReservationWhileActiveError();
	void SplitscreenIdMismatchError(struct FUniqueNetId PrimaryPlayerId, struct FUniqueNetId SplitscreenPlayerId);
	void PartyLeaderInDuelError(struct FUniqueNetId PlayerID);
	void PlayerReservationWrongIdError(struct FUniqueNetId PlayerID, struct FString AttemptedId);
	void JoinWhileInactiveError();
	void DsrConnectionTimeoutError();
	void DsrClientFailedDeserializeError(struct FString MessageType);
	void DsrUnreservedServerError(struct FString MessageType);
	void DsrServerFailedDeserializeError(struct FUniqueNetId PlayerID, struct FString MessageType);
	void DsrMissingReservationError(struct FUniqueNetId PlayerID);
	void DsrMissingConnectionError();
	void PlayerCanceled();
	void NotAllPlayersJoinedError();
	void GetKeysInvalidOriginError();
	void GetKeysFailedError();
	void ReservationsFullError();
	void PlatformExclusiveReservationError();
	void WrongReservationRankedMatchError();
	void WrongReservationPlaylistError();
	void InvalidReservationPlaylistError();
	void RankedReconnect();
	void RankedReconnectFinished();
	void PrivateMatchFinished();
	void FriendJoin();
	void FriendJoinEmptyError();
	void FriendJoinRankedError();
	void AddReservation(struct FUniqueNetId PlayerID, int32_t Playlist, struct FString ReservationID);
	void FirstReservation(int32_t Playlist, struct FString ReservationID);
};

// Class ProjectX.QueuedOfflineMessage_X
// 0x0000 (0x0060 - 0x0060)
class UQueuedOfflineMessage_X : public UInterface
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.QueuedOfflineMessage_X");
		}

		return uClassPointer;
	};

	int32_t GetOfflineTimeToLiveSeconds();
};

// Class ProjectX.RPC_ServerToServer_X
// 0x0028 (0x00E8 - 0x0110)
class URPC_ServerToServer_X : public URPC_X
{
public:
	uint64_t                                           ServerId;                                      // 0x00E8 (0x0008) [0x0000000000000000]               
	struct FString                                     MessageType;                                   // 0x00F0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     MessagePayload;                                // 0x0100 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_ServerToServer_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_KeysBase_X
// 0x005C (0x00E8 - 0x0144)
class URPC_KeysBase_X : public URPC_X
{
public:
	struct FString                                     ServerHost;                                    // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            ServerPort;                                    // 0x00F8 (0x0004) [0x0000000000000000]               
	TArray<uint8_t>                                    Key;                                           // 0x0100 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<uint8_t>                                    IV;                                            // 0x0110 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<uint8_t>                                    HMACKey;                                       // 0x0120 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<uint8_t>                                    SessionId;                                     // 0x0130 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      bPrimaryPlayer : 1;                            // 0x0140 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_KeysBase_X");
		}

		return uClassPointer;
	};

	class URPC_KeysBase_X* SetPrimaryPlayer();
	class URPC_KeysBase_X* SetServerAddress(struct FString ServerAddress);
};

// Class ProjectX.RPC_GenerateKeys_X
// 0x0004 (0x0144 - 0x0148)
class URPC_GenerateKeys_X : public URPC_KeysBase_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_GenerateKeys_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.ReservationsFullMessage_X
// 0x0000 (0x0060 - 0x0060)
class UReservationsFullMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ReservationsFullMessage_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.ReservationsTeamFullMessage_X
// 0x0000 (0x0060 - 0x0060)
class UReservationsTeamFullMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ReservationsTeamFullMessage_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.ReservationsWaitingMessage_X
// 0x0000 (0x0060 - 0x0060)
class UReservationsWaitingMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ReservationsWaitingMessage_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.ReservationsReadyMessage_X
// 0x004C (0x0060 - 0x00AC)
class UReservationsReadyMessage_X : public UBeaconMessage_X
{
public:
	struct FString                                     ServerAddress;                                 // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     BeaconAddress;                                 // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PingAddress;                                   // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<int32_t>                                    ProductIDs;                                    // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UNetworkEncryptionKey*                       Keys;                                          // 0x00A0 (0x0008) [0x0000000000000000]               
	unsigned long                                      bUseNetworkNextDriver : 1;                     // 0x00A8 (0x0004) [0x0001000000000000] [0x00000001] 
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ReservationsReadyMessage_X");
		}

		return uClassPointer;
	};

	class UReservationsReadyMessage_X* SetKeys(class UNetworkEncryptionKey* InKeys);
	class UReservationsReadyMessage_X* SetProductIDs(TArray<int32_t> InProductIDs);
	class UReservationsReadyMessage_X* SetPingAddress(struct FString InAddress);
	class UReservationsReadyMessage_X* SetBeaconAddress(struct FString InAddress);
	class UReservationsReadyMessage_X* SetServerAddress(struct FString InAddress);
};

// Class ProjectX.ReservationsTimedOutMessage_X
// 0x0000 (0x0060 - 0x0060)
class UReservationsTimedOutMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ReservationsTimedOutMessage_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.ReservationsPrivateMessage_X
// 0x0000 (0x0060 - 0x0060)
class UReservationsPrivateMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ReservationsPrivateMessage_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.ReservationsPasswordMessage_X
// 0x0001 (0x0060 - 0x0061)
class UReservationsPasswordMessage_X : public UBeaconMessage_X
{
public:
	uint8_t                                            Reason;                                        // 0x0060 (0x0001) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ReservationsPasswordMessage_X");
		}

		return uClassPointer;
	};

	class UReservationsPasswordMessage_X* SetReason(uint8_t InReason);
};

// Class ProjectX.ReservationsWrongPlaylistMessage_X
// 0x0000 (0x0060 - 0x0060)
class UReservationsWrongPlaylistMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ReservationsWrongPlaylistMessage_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.ReservationsWrongRankedMatchMessage_X
// 0x0000 (0x0060 - 0x0060)
class UReservationsWrongRankedMatchMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ReservationsWrongRankedMatchMessage_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.ReservationsKeysFailedMessage_X
// 0x0000 (0x0060 - 0x0060)
class UReservationsKeysFailedMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ReservationsKeysFailedMessage_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.ReservationCrossplayDisabledMessage_X
// 0x0000 (0x0060 - 0x0060)
class UReservationCrossplayDisabledMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ReservationCrossplayDisabledMessage_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.ReservationsMaxPlayersMessage_X
// 0x0004 (0x0060 - 0x0064)
class UReservationsMaxPlayersMessage_X : public UBeaconMessage_X
{
public:
	int32_t                                            MaxPlayerCount;                                // 0x0060 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ReservationsMaxPlayersMessage_X");
		}

		return uClassPointer;
	};

	class UReservationsMaxPlayersMessage_X* SetMaxPlayerCount(int32_t inMaxPlayerCount);
};

// Class ProjectX.PingMessage_X
// 0x0004 (0x0060 - 0x0064)
class UPingMessage_X : public UBeaconMessage_X
{
public:
	unsigned long                                      bIsResponse : 1;                               // 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PingMessage_X");
		}

		return uClassPointer;
	};

	class UPingMessage_X* SetIsResponse();
};

// Class ProjectX.OnlineGameLanReservations_X
// 0x0030 (0x0098 - 0x00C8)
class UOnlineGameLanReservations_X : public UOnline_X
{
public:
	class ULanBeacon_X*                                LanBeacon;                                     // 0x0098 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UReservationBeacon_X*                        Beacon;                                        // 0x00A0 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	float                                              ReservationTimeout;                            // 0x00A8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bServerTraveling : 1;                          // 0x00AC (0x0004) [0x0000004000002000] [0x00000001] (CPF_Transient)
	struct FScriptDelegate                             __EventReservationsTimeout__Delegate;          // 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGameLanReservations_X");
		}

		return uClassPointer;
	};

	void HandleReservationDisconnected(class UTcpConnection* Connection);
	void HackForceNotServerTravelling();
	void SetServerTraveling(unsigned long bTraveling);
	void OnNewGameInfoCreated(class AGameInfo_X* Game);
	int32_t GetNumPlayers();
	void AllowPlayerLogin(struct FString Options, struct FUniqueNetId PlayerID, struct FString& ErrorMessage);
	void PlayerLoggedOut(class APlayerReplicationInfo* PRI);
	void PlayerLoggedIn(class APlayerReplicationInfo* PRI);
	void Reset();
	void CheckReservationTimeout();
	bool HandlePublicReservation(class UTcpConnection* Connection, class UAddReservationMessagePublic_X* Message);
	void HandlePublicReservationMessage(class UTcpConnection* Connection, class UObject* Message);
	void StartReservationTimeout();
	bool HandlePrivateReservation(class UTcpConnection* Connection, class UAddReservationMessagePrivate_X* Message);
	void HandlePrivateReservationMessage(class UTcpConnection* Connection, class UObject* Message);
	void HandlePingMessage(class UTcpConnection* Connection, class UObject* Message);
	void HandleLanQueryMessage(class UOnlineMessageComponent_X* Component, class UObject* Message);
	void OnInit();
	void EventReservationsTimeout();
};

// Class ProjectX.RPC_GetLeaderboardValueForUserBase_X
// 0x0064 (0x00E8 - 0x014C)
class URPC_GetLeaderboardValueForUserBase_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x00E8 (0x0048) [0x0000004000400000] (CPF_NeedCtorLink)
	struct FString                                     LeaderboardId;                                 // 0x0130 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      bHasSkill : 1;                                 // 0x0140 (0x0004) [0x0000004000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      bHasValue : 1;                                 // 0x0140 (0x0004) [0x0000004000002000] [0x00000002] (CPF_Transient)
	int32_t                                            Value;                                         // 0x0144 (0x0004) [0x0000004000002000] (CPF_Transient)
	float                                              MMR;                                           // 0x0148 (0x0004) [0x0000004000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_GetLeaderboardValueForUserBase_X");
		}

		return uClassPointer;
	};

	class URPC_GetLeaderboardValueForUserBase_X* SetPlayerID(struct FUniqueNetId InPlayerId);
};

// Class ProjectX.RPC_GetSkillLeaderboardValueForUser_X
// 0x0008 (0x014C - 0x0154)
class URPC_GetSkillLeaderboardValueForUser_X : public URPC_GetLeaderboardValueForUserBase_X
{
public:
	int32_t                                            Playlist;                                      // 0x0150 (0x0004) [0x0000004000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_GetSkillLeaderboardValueForUser_X");
		}

		return uClassPointer;
	};

	class URPC_GetSkillLeaderboardValueForUser_X* SetPlaylist(int32_t InPlaylist);
};

// Class ProjectX.RPC_GetLeaderboardValueForUser_X
// 0x0014 (0x014C - 0x0160)
class URPC_GetLeaderboardValueForUser_X : public URPC_GetLeaderboardValueForUserBase_X
{
public:
	struct FString                                     Stat;                                          // 0x0150 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_GetLeaderboardValueForUser_X");
		}

		return uClassPointer;
	};

	class URPC_GetLeaderboardValueForUser_X* SetStat(struct FString InStat);
};

// Class ProjectX.RPC_GetLeaderboardBase_X
// 0x0028 (0x00E8 - 0x0110)
class URPC_GetLeaderboardBase_X : public URPC_X
{
public:
	unsigned long                                      bDisableCrossPlay : 1;                         // 0x00E8 (0x0004) [0x0000004000000000] [0x00000001] 
	struct FString                                     LeaderboardId;                                 // 0x00F0 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FGetLeaderboardPlatformBaseData>     Platforms;                                     // 0x0100 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_GetLeaderboardBase_X");
		}

		return uClassPointer;
	};

	class URPC_GetLeaderboardBase_X* SetDisableCrossPlay(unsigned long InDisableCrossplay);
};

// Class ProjectX.RPC_GetSkillLeaderboard_X
// 0x0004 (0x0110 - 0x0114)
class URPC_GetSkillLeaderboard_X : public URPC_GetLeaderboardBase_X
{
public:
	int32_t                                            Playlist;                                      // 0x0110 (0x0004) [0x0000004000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_GetSkillLeaderboard_X");
		}

		return uClassPointer;
	};

	class URPC_GetSkillLeaderboard_X* SetPlaylist(int32_t InPlaylist);
};

// Class ProjectX.RPC_GetLeaderboard_X
// 0x0010 (0x0110 - 0x0120)
class URPC_GetLeaderboard_X : public URPC_GetLeaderboardBase_X
{
public:
	struct FString                                     Stat;                                          // 0x0110 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_GetLeaderboard_X");
		}

		return uClassPointer;
	};

	class URPC_GetLeaderboard_X* SetStat(struct FString InStat);
};

// Class ProjectX.RPC_GetLeaderboardRankForUsersBase_X
// 0x0030 (0x00E8 - 0x0118)
class URPC_GetLeaderboardRankForUsersBase_X : public URPC_X
{
public:
	TArray<struct FUniqueNetId>                        PlayerIDs;                                     // 0x00E8 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	struct FString                                     LeaderboardId;                                 // 0x00F8 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FGetLeaderboardRankForUserData>      Players;                                       // 0x0108 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_GetLeaderboardRankForUsersBase_X");
		}

		return uClassPointer;
	};

	class URPC_GetLeaderboardRankForUsersBase_X* SetPlayerIDs(TArray<struct FUniqueNetId> InPlayerIDs);
};

// Class ProjectX.RPC_GetSkillLeaderboardRankForUsers_X
// 0x0004 (0x0118 - 0x011C)
class URPC_GetSkillLeaderboardRankForUsers_X : public URPC_GetLeaderboardRankForUsersBase_X
{
public:
	int32_t                                            Playlist;                                      // 0x0118 (0x0004) [0x0000004000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_GetSkillLeaderboardRankForUsers_X");
		}

		return uClassPointer;
	};

	class URPC_GetSkillLeaderboardRankForUsers_X* SetPlaylist(int32_t InPlaylist);
};

// Class ProjectX.RPC_GetLeaderboardRankForUsers_X
// 0x0010 (0x0118 - 0x0128)
class URPC_GetLeaderboardRankForUsers_X : public URPC_GetLeaderboardRankForUsersBase_X
{
public:
	struct FString                                     Stat;                                          // 0x0118 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_GetLeaderboardRankForUsers_X");
		}

		return uClassPointer;
	};

	class URPC_GetLeaderboardRankForUsers_X* SetStat(struct FString InStat);
};

// Class ProjectX.SuperRegion_X
// 0x0020 (0x0060 - 0x0080)
class USuperRegion_X : public UObject
{
public:
	struct FString                                     Id;                                            // 0x0060 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Label;                                         // 0x0070 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.SuperRegion_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_PlayerCancelMatchmaking_X
// 0x0000 (0x00E8 - 0x00E8)
class URPC_PlayerCancelMatchmaking_X : public URPC_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_PlayerCancelMatchmaking_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_StartMatchmaking_X
// 0x005C (0x00E8 - 0x0144)
class URPC_StartMatchmaking_X : public URPC_X
{
public:
	TArray<struct FString>                             Regions;                                       // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<int32_t>                                    Playlists;                                     // 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            SecondsSearching;                              // 0x0108 (0x0004) [0x0000000000000000]               
	uint64_t                                           CurrentServerId;                               // 0x0110 (0x0008) [0x0000000000000000]               
	unsigned long                                      bDisableCrossPlay : 1;                         // 0x0118 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     PartyID;                                       // 0x0120 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FUniqueNetId>                        PartyMembers;                                  // 0x0130 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	float                                              BannedSecondsRemaining;                        // 0x0140 (0x0004) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_StartMatchmaking_X");
		}

		return uClassPointer;
	};

	class URPC_StartMatchmaking_X* SetIgnoreSkill(unsigned long bInIgnoreSkill);
	class URPC_StartMatchmaking_X* SetPartyId(struct FString InPartyId);
	class URPC_StartMatchmaking_X* SetPartyMembers(TArray<struct FUniqueNetId> InPartyMembers);
	class URPC_StartMatchmaking_X* SetDisableCrossPlay(unsigned long bInDisableCrossplay);
	class URPC_StartMatchmaking_X* SetCurrentServerID(uint64_t InCurrentServerID);
	class URPC_StartMatchmaking_X* SetSecondsSearching(int32_t InSecondsSearching);
	class URPC_StartMatchmaking_X* SetPlaylists(TArray<int32_t> InPlaylists);
	class URPC_StartMatchmaking_X* SetRegions(TArray<struct FString> InRegions);
};

// Class ProjectX.RankedConfig_X
// 0x0048 (0x0078 - 0x00C0)
class URankedConfig_X : public UOnlineConfig_X
{
public:
	int32_t                                            ReconnectTimeoutSeconds;                       // 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<int32_t>                                    SkillTierToSeasonRewardLevel;                  // 0x0080 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<int32_t>                                    SeasonRewardRequiredWinsPerLevel;              // 0x0090 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	unsigned long                                      bCheckReservationID : 1;                       // 0x00A0 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	uint64_t                                           SeasonEndTimeSeconds;                          // 0x00A8 (0x0008) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            MaximumRankDisparity;                          // 0x00B0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            PlacementMatchesNeededToReceiveRank;           // 0x00B4 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            HighestTierNewPlayersCanPlayWith;              // 0x00B8 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            HighestMuNewPlayersCanHave;                    // 0x00BC (0x0004) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RankedConfig_X");
		}

		return uClassPointer;
	};

	bool HasSeasonEnded();
	int32_t GetSeasonTimeRemaining();
};

// Class ProjectX.RPC_GetPopulation_X
// 0x0010 (0x00E8 - 0x00F8)
class URPC_GetPopulation_X : public URPC_X
{
public:
	TArray<struct FGetPopulationData>                  Playlists;                                     // 0x00E8 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_GetPopulation_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_PlayerSearchPrivateMatch_X
// 0x0010 (0x00E8 - 0x00F8)
class URPC_PlayerSearchPrivateMatch_X : public URPC_X
{
public:
	struct FString                                     Region;                                        // 0x00E8 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_PlayerSearchPrivateMatch_X");
		}

		return uClassPointer;
	};

	class URPC_PlayerSearchPrivateMatch_X* SetRegion(struct FString InRegion);
};

// Class ProjectX.RPC_PlayerCancelPrivateMatch_X
// 0x0000 (0x00E8 - 0x00E8)
class URPC_PlayerCancelPrivateMatch_X : public URPC_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_PlayerCancelPrivateMatch_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_GetGameServerPingList_X
// 0x0020 (0x00E8 - 0x0108)
class URPC_GetGameServerPingList_X : public URPC_X
{
public:
	TArray<struct FRegionSecret>                       Regions;                                       // 0x00E8 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	TArray<struct FGetGameServerPingListData>          Servers;                                       // 0x00F8 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_GetGameServerPingList_X");
		}

		return uClassPointer;
	};

	class URPC_GetGameServerPingList_X* SetRegionSecrets(TArray<struct FRegionSecret>& InRegions);
	void eventOnSuccess();
};

// Class ProjectX.RegionPinger_X
// 0x0058 (0x0070 - 0x00C8)
class URegionPinger_X : public UComponent
{
public:
	float                                              MaxPing;                                       // 0x0070 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            PingsPerRegion;                                // 0x0074 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              DelayBetweenPings;                             // 0x0078 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<class URegionPingData_X*>                   ActivePings;                                   // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class UUdpPingBeaconClient_X*                      PingBeacon;                                    // 0x0090 (0x0008) [0x0000000004080008] (CPF_ExportObject | CPF_Component | CPF_EditInline)
	int32_t                                            TickIndex;                                     // 0x0098 (0x0004) [0x0000000000000000]               
	TArray<class URegionPingData_X*>                   PingResults;                                   // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventRegionsPinged__Delegate;                // 0x00B0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RegionPinger_X");
		}

		return uClassPointer;
	};

	class URegionPingData_X* __RegionPinger_X__PingRegions_2B458B7941C3BB8C6101F7BF3EE0F786(struct FString Address);
	void HandlePong(class UUdpPingBeaconClient_X* _, struct FName Address, float DeltaSeconds);
	void SendPing(int32_t Idx);
	void Tick(float _);
	void StopPingBeacon();
	void StartPingBeacon();
	void PingRegions(TArray<struct FString>& Addresses);
	void EventRegionsPinged(class URegionPinger_X* Pinger);
};

// Class ProjectX.RegionPingData_X
// 0x0018 (0x0060 - 0x0078)
class URegionPingData_X : public UObject
{
public:
	struct FName                                       Address;                                       // 0x0060 (0x0008) [0x0000000000000000]               
	int32_t                                            PingsSent;                                     // 0x0068 (0x0004) [0x0000000000000000]               
	int32_t                                            PingsReceived;                                 // 0x006C (0x0004) [0x0000000000000000]               
	float                                              LowestPing;                                    // 0x0070 (0x0004) [0x0000000000000000]               
	float                                              LastSendTime;                                  // 0x0074 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RegionPingData_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.RegionPingMessage_X
// 0x0004 (0x0060 - 0x0064)
class URegionPingMessage_X : public UObject
{
public:
	unsigned long                                      bIsResponse : 1;                               // 0x0060 (0x0004) [0x0000000000000000] [0x00000001] 
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RegionPingMessage_X");
		}

		return uClassPointer;
	};

	class URegionPingMessage_X* SetIsResponse();
};

// Class ProjectX.OnlineGameReservations_AssignTeamsByParty_X
// 0x0000 (0x0060 - 0x0060)
class UOnlineGameReservations_AssignTeamsByParty_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineGameReservations_AssignTeamsByParty_X");
		}

		return uClassPointer;
	};

	int32_t PartySort(struct FPartyByTeam Left, struct FPartyByTeam Right);
	void AssignTeams(int32_t TeamSize, TArray<struct FReservationData>& TestPlayers);
};

// Class ProjectX.PsyNetService_ReservationBase_X
// 0x0020 (0x0090 - 0x00B0)
class UPsyNetService_ReservationBase_X : public UPsyNetClientService_X
{
public:
	struct FString                                     ReservationID;                                 // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FPsyNetBeaconPlayerReservation>      Players;                                       // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetService_ReservationBase_X");
		}

		return uClassPointer;
	};

	struct FPsyNetBeaconReservation GetReservation();
};

// Class ProjectX.PsyNetService_NewGame_X
// 0x0028 (0x00B0 - 0x00D8)
class UPsyNetService_NewGame_X : public UPsyNetService_ReservationBase_X
{
public:
	int32_t                                            Playlist;                                      // 0x00B0 (0x0004) [0x0000000000000000]               
	unsigned long                                      IsBotMatch : 1;                                // 0x00B4 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray<struct FString>                             BotNames;                                      // 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FPsyNetBeaconPartyReservation>       Parties;                                       // 0x00C8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetService_NewGame_X");
		}

		return uClassPointer;
	};

	struct FPsyNetBeaconReservation GetReservation();
};

// Class ProjectX.PsyNetService_Backfill_X
// 0x0018 (0x00B0 - 0x00C8)
class UPsyNetService_Backfill_X : public UPsyNetService_ReservationBase_X
{
public:
	int32_t                                            Playlist;                                      // 0x00B0 (0x0004) [0x0000000000000000]               
	TArray<struct FPsyNetBeaconPartyReservation>       Parties;                                       // 0x00B8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetService_Backfill_X");
		}

		return uClassPointer;
	};

	struct FPsyNetBeaconReservation GetReservation();
};

// Class ProjectX.PsyNetService_CreatePrivate_X
// 0x0000 (0x00B0 - 0x00B0)
class UPsyNetService_CreatePrivate_X : public UPsyNetService_ReservationBase_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetService_CreatePrivate_X");
		}

		return uClassPointer;
	};

	struct FPsyNetBeaconReservation GetReservation();
};

// Class ProjectX.PsyNetService_JoinPrivate_X
// 0x0000 (0x00B0 - 0x00B0)
class UPsyNetService_JoinPrivate_X : public UPsyNetService_ReservationBase_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetService_JoinPrivate_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetService_FriendJoin_X
// 0x0000 (0x00B0 - 0x00B0)
class UPsyNetService_FriendJoin_X : public UPsyNetService_ReservationBase_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetService_FriendJoin_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetService_Reconnect_X
// 0x0000 (0x00B0 - 0x00B0)
class UPsyNetService_Reconnect_X : public UPsyNetService_ReservationBase_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetService_Reconnect_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PRI_X
// 0x0048 (0x0410 - 0x0458)
class APRI_X : public APlayerReplicationInfo
{
public:
	struct FScriptDelegate                             __EventPlayerNameChanged__Delegate;            // 0x0410 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventUniqueIdChanged__Delegate;              // 0x0428 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDestroyed__Delegate;                    // 0x0440 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PRI_X");
		}

		return uClassPointer;
	};

	void eventDestroyed();
	void OnUniqueIdChanged();
	void SetUniqueId(struct FUniqueNetId PlayerUniqueId);
	void UnregisterPlayerFromSession();
	void RegisterPlayerWithSession();
	void AddPlayerHistoryKey(class UOnlineRecentPlayersList* PlayersList);
	void eventOnOwnerChanged();
	void eventSetPlayerName(struct FString S);
	void eventReplicatedEvent(struct FName VarName);
	void EventDestroyed(class APRI_X* PRI);
	void EventUniqueIdChanged(class APRI_X* PRI);
	void EventPlayerNameChanged(class APRI_X* PRI);
};

// Class ProjectX.RPC_CustomGameServerGet_X
// 0x0040 (0x00E8 - 0x0128)
class URPC_CustomGameServerGet_X : public URPC_X
{
public:
	struct FString                                     ServerName;                                    // 0x00E8 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	struct FString                                     Password;                                      // 0x00F8 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	TArray<struct FFindPrivateServerResult>            Servers;                                       // 0x0108 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FServerResult>                       Results;                                       // 0x0118 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_CustomGameServerGet_X");
		}

		return uClassPointer;
	};

	void eventOnSuccess();
	class URPC_CustomGameServerGet_X* SetPassword(struct FString InPassword);
	class URPC_CustomGameServerGet_X* SetServerName(struct FString InServerName);
};

// Class ProjectX.RPC_GetPlayerSkill_X
// 0x00A8 (0x00E8 - 0x0190)
class URPC_GetPlayerSkill_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x00E8 (0x0048) [0x0000004000400000] (CPF_NeedCtorLink)
	TArray<struct FPlayerSkillRating>                  Skills;                                        // 0x0130 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FPlayerSeasonRewardProgress                 RewardLevels;                                  // 0x0140 (0x0050) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_GetPlayerSkill_X");
		}

		return uClassPointer;
	};

	class URPC_GetPlayerSkill_X* SetPlayerID(struct FUniqueNetId InPlayerId);
	void eventOnSuccess();
	void AddPlayerIDToResponse();
};

// Class ProjectX.RPC_GetPartyMemberSkill_X
// 0x0020 (0x00E8 - 0x0108)
class URPC_GetPartyMemberSkill_X : public URPC_X
{
public:
	TArray<struct FUniqueNetId>                        PlayerIDs;                                     // 0x00E8 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	TArray<struct FPartyMemberSkill>                   Players;                                       // 0x00F8 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_GetPartyMemberSkill_X");
		}

		return uClassPointer;
	};

	void eventOnSuccess();
	void AddPlayerIDsToResponse();
	class URPC_GetPartyMemberSkill_X* AddPlayer(struct FUniqueNetId PlayerID);
};

// Class ProjectX.SyncedSkillData_X
// 0x0008 (0x0060 - 0x0068)
class USyncedSkillData_X : public UObject
{
public:
	class UOnlineGameSkill_X*                          OnlineGameSkill;                               // 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.SyncedSkillData_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_RecordMatchResults_X
// 0x0084 (0x00E8 - 0x016C)
class URPC_RecordMatchResults_X : public URPC_X
{
public:
	struct FString                                     MatchGUID;                                     // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FSkillMatchData                             Match;                                         // 0x00F8 (0x0020) [0x0000000000000000]               
	struct FString                                     MatchName;                                     // 0x0118 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FSkillMatchPlayer>                   Winners;                                       // 0x0128 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FSkillMatchPlayer>                   Losers;                                        // 0x0138 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FGuid                                       AppSessionID;                                  // 0x0148 (0x0010) [0x0000000000000000]               
	struct FGuid                                       LevelSessionID;                                // 0x0158 (0x0010) [0x0000000000000000]               
	unsigned long                                      bIsBotMatch : 1;                               // 0x0168 (0x0004) [0x0000000000000000] [0x00000001] 
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_RecordMatchResults_X");
		}

		return uClassPointer;
	};

	int32_t GetPartyIndex(struct FUniqueNetId LeaderID, TArray<struct FUniqueNetId>& PartyIDs);
	void InitSkillMatchPlayers(class UMatchData_X* MatchData);
	struct FSkillMatchPlayer InitSkillMatchPlayer(class UMatchData_X* MatchData, class UMatchPlayerData_X* Player, TArray<struct FUniqueNetId>& PartyIDs);
	class URPC_RecordMatchResults_X* SetMetrics(class UMetricsSystem_X* MetricsSystem);
	class URPC_RecordMatchResults_X* SetMatchName(struct FString InName);
	class URPC_RecordMatchResults_X* SetMatch(class UMatchData_X* InMatch);
	class URPC_RecordMatchResults_X* SetIsBotMatch(unsigned long bBotMatch);
	class URPC_RecordMatchResults_X* SetMatchGUID(struct FString InGuid);
};

// Class ProjectX.RPC_UpdateSkills_X
// 0x0034 (0x016C - 0x01A0)
class URPC_UpdateSkills_X : public URPC_RecordMatchResults_X
{
public:
	int32_t                                            Playlist;                                      // 0x0170 (0x0004) [0x0000000000000000]               
	TArray<struct FUpdatedPlayerSkillRating>           NewSkills;                                     // 0x0178 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FPlayerSeasonRewardProgress>         NewRewardLevels;                               // 0x0188 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UMatchData_X*                                MatchData;                                     // 0x0198 (0x0008) [0x0000004000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_UpdateSkills_X");
		}

		return uClassPointer;
	};

	class URPC_RecordMatchResults_X* SetMatch(class UMatchData_X* InMatch);
};

// Class ProjectX.RPC_UpdateLeaderboard_X
// 0x0024 (0x00E8 - 0x010C)
class URPC_UpdateLeaderboard_X : public URPC_X
{
public:
	TArray<struct FUploadStatDataSet>                  Updates;                                       // 0x00E8 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	struct FString                                     MatchGUID;                                     // 0x00F8 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	int32_t                                            PlaylistId;                                    // 0x0108 (0x0004) [0x0000004000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_UpdateLeaderboard_X");
		}

		return uClassPointer;
	};

	class URPC_UpdateLeaderboard_X* SetPlaylistID(int32_t InID);
	class URPC_UpdateLeaderboard_X* SetMatchGUID(struct FString InGuid);
	class URPC_UpdateLeaderboard_X* SetUpdates(TArray<struct FUploadStatDataSet>& InUpdates);
};

// Class ProjectX.PsyNetWordFilter_X
// 0x0010 (0x0070 - 0x0080)
class UPsyNetWordFilter_X : public UComponent
{
public:
	class UWordFilterConfig_X*                         Config;                                        // 0x0070 (0x0008) [0x0000800000000001] (CPF_Edit)    
	class URPC_FilterContent_X*                        PendingFilterRPC;                              // 0x0078 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetWordFilter_X");
		}

		return uClassPointer;
	};

	void __PsyNetWordFilter_X__WordFilterSanitizeString_50F92BD7422329BE0C51B786948BA9F9(class URPC_FilterContent_X* RPC);
	void HandlePsyNetWordFilterFail(class URPC_FilterContent_X* RPC);
	void HandlePsyNetWordFilterSuccess(class URPC_FilterContent_X* RPC);
	void HandlePsyNetWordFilter(class URPC_FilterContent_X* RPC);
	void SendPendingFilterRPC();
	bool WordFilterSanitizeString(struct FString Comment, struct FScriptDelegate SanitizeDelegate, struct FUniqueNetId PlayerID);
};

// Class ProjectX.WordFilterConfig_X
// 0x0030 (0x0078 - 0x00A8)
class UWordFilterConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bSanitizeEntirePhrase : 1;                     // 0x0078 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      PsyNetFilterEnabled : 1;                       // 0x0078 (0x0004) [0x0000000000000001] [0x00000002] (CPF_Edit)
	int32_t                                            NameHistoryCacheLength;                        // 0x007C (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<uint8_t>                                    IgnoreFilterList;                              // 0x0080 (0x0010) [0x0000000000404001] (CPF_Edit | CPF_Config | CPF_NeedCtorLink)
	TArray<uint8_t>                                    PlatformFilterList;                            // 0x0090 (0x0010) [0x0000000000404001] (CPF_Edit | CPF_Config | CPF_NeedCtorLink)
	float                                              PsyNetWordFilterBatchDelay;                    // 0x00A0 (0x0004) [0x0000000000000001] (CPF_Edit)    
	int32_t                                            PsyNetWordFilterBatchMaxSize;                  // 0x00A4 (0x0004) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.WordFilterConfig_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.OnlinePlayerStorage_X
// 0x0018 (0x0098 - 0x00B0)
class UOnlinePlayerStorage_X : public UOnline_X
{
public:
	class UOnlinePlayerStorageQueue_X*                 Queue;                                         // 0x0098 (0x0008) [0x0001004000000000]               
	class UOnlinePlayerStorageSync_X*                  Sync;                                          // 0x00A0 (0x0008) [0x0001004000000000]               
	class UOnlinePlayerStorageManifest_X*              Manifest;                                      // 0x00A8 (0x0008) [0x0001004000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlinePlayerStorage_X");
		}

		return uClassPointer;
	};

	void OnInit();
};

// Class ProjectX.RPC_LoginAuthPlayer_X
// 0x0110 (0x00E8 - 0x01F8)
class URPC_LoginAuthPlayer_X : public URPC_X
{
public:
	struct FString                                     Platform;                                      // 0x00E8 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	struct FString                                     PlayerName;                                    // 0x00F8 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	struct FString                                     PlayerID;                                      // 0x0108 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	struct FString                                     Language;                                      // 0x0118 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	struct FString                                     AuthTicket;                                    // 0x0128 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	struct FString                                     BuildRegion;                                   // 0x0138 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	struct FName                                       FeatureSet;                                    // 0x0148 (0x0008) [0x0000004000000000]               
	unsigned long                                      bSkipAuth : 1;                                 // 0x0150 (0x0004) [0x0001004000000000] [0x00000001] 
	unsigned long                                      bSetAsPrimaryAccount : 1;                      // 0x0150 (0x0004) [0x0001004000000000] [0x00000002] 
	unsigned long                                      UseWebSocket : 1;                              // 0x0150 (0x0004) [0x0000004000002000] [0x00000004] (CPF_Transient)
	unsigned long                                      IsLastChanceAuthBan : 1;                       // 0x0150 (0x0004) [0x0000004000002000] [0x00000008] (CPF_Transient)
	struct FString                                     EpicAuthTicket;                                // 0x0158 (0x0010) [0x0001004000400000] (CPF_NeedCtorLink)
	struct FString                                     EpicAccountId;                                 // 0x0168 (0x0010) [0x0001004000400000] (CPF_NeedCtorLink)
	struct FString                                     SessionId;                                     // 0x0178 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     PsyToken;                                      // 0x0188 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UBanMessage_X*                               BanMessage;                                    // 0x0198 (0x0008) [0x0000004000002000] (CPF_Transient)
	struct FString                                     VerifiedPlayerName;                            // 0x01A0 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     PerConURL;                                     // 0x01B0 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     PerConURLv2;                                   // 0x01C0 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FPsyTag                                     PsyTag;                                        // 0x01D0 (0x0018) [0x0001004000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FName>                               CountryRestrictions;                           // 0x01E8 (0x0010) [0x0001004000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_LoginAuthPlayer_X");
		}

		return uClassPointer;
	};

	class URPC_LoginAuthPlayer_X* SetAsPrimaryAccount(unsigned long bInPrimary);
	class URPC_LoginAuthPlayer_X* SetEpicAccountId(struct FString InEpicAccountID);
	class URPC_LoginAuthPlayer_X* SetEpicAuthTicket(struct FString InEpicAuthTicket);
	class URPC_LoginAuthPlayer_X* SetFeatureSet(struct FName InFeatureSet);
	class URPC_LoginAuthPlayer_X* SetBuildRegion(struct FString InBuildRegion);
	class URPC_LoginAuthPlayer_X* SetAuthTicket(struct FString InAuthTicket);
	class URPC_LoginAuthPlayer_X* SetLanguage(struct FString InLanguage);
	class URPC_LoginAuthPlayer_X* SetPlayerID(struct FString InPlayerId);
	class URPC_LoginAuthPlayer_X* SetPlayerName(struct FString InPlayerName);
	class URPC_LoginAuthPlayer_X* SetPlatform(struct FString InPlatform);
};

// Class ProjectX.PsyTagComponent_X
// 0x0018 (0x0070 - 0x0088)
class UPsyTagComponent_X : public UComponent
{
public:
	struct FPsyTag                                     PsyTag;                                        // 0x0070 (0x0018) [0x0001004000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyTagComponent_X");
		}

		return uClassPointer;
	};

	void HandleClaimTagSuccess(class UPsyTagCheckResult_X* Result);
	class UTAsyncResult__PsyTagCheckResult_X* ClaimTag(struct FString NewTagName);
	void SetPsyTag(struct FPsyTag InPsyTag);
};

// Class ProjectX.RPC_CheckPsyTag_X
// 0x0058 (0x00E8 - 0x0140)
class URPC_CheckPsyTag_X : public URPC_X
{
public:
	struct FString                                     PsyTagName;                                    // 0x00E8 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	struct FPsyTag                                     PsyTag;                                        // 0x00F8 (0x0018) [0x0001000000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      bIsValid : 1;                                  // 0x0110 (0x0004) [0x0001000000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      bIsProfane : 1;                                // 0x0110 (0x0004) [0x0001000000002000] [0x00000002] (CPF_Transient)
	unsigned long                                      bIsAvailable : 1;                              // 0x0110 (0x0004) [0x0001000000002000] [0x00000004] (CPF_Transient)
	unsigned long                                      bIsUpdated : 1;                                // 0x0110 (0x0004) [0x0001000000002000] [0x00000008] (CPF_Transient)
	TArray<struct FString>                             InvalidCharacters;                             // 0x0118 (0x0010) [0x0001000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FString>                             SuggestedNames;                                // 0x0128 (0x0010) [0x0001000000402000] (CPF_Transient | CPF_NeedCtorLink)
	class UTAsyncResult__PsyTagCheckResult_X*          CheckTask;                                     // 0x0138 (0x0008) [0x0001000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_CheckPsyTag_X");
		}

		return uClassPointer;
	};

	bool __RPC_CheckPsyTag_X__GetTagCheckError_D87F21B94CC6D3EA5DF719B5D7BD0C79(struct FString S);
	class UErrorType* eventOverrideErrorType(class UErrorType* ErrorType);
	class URPC_CheckPsyTag_X* SetPsyTagName(struct FString InName);
	struct FString GetTagCheckError();
	class UPsyTagCheckResult_X* CreateTaskResult();
	class UTAsyncResult__PsyTagCheckResult_X* CreatePsyTagTask();
};

// Class ProjectX.RPC_ClaimPsyTag_X
// 0x0000 (0x0140 - 0x0140)
class URPC_ClaimPsyTag_X : public URPC_CheckPsyTag_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_ClaimPsyTag_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetService_FriendChatReceived_X
// 0x0068 (0x0090 - 0x00F8)
class UPsyNetService_FriendChatReceived_X : public UPsyNetClientService_X
{
public:
	struct FUniqueNetId                                FromPlayerID;                                  // 0x0090 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Message;                                       // 0x00D8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	unsigned long                                      IsLocalMessage : 1;                            // 0x00E8 (0x0004) [0x0000000000000000] [0x00000001] 
	uint64_t                                           TimeStamp;                                     // 0x00F0 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetService_FriendChatReceived_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetService_FriendPsyTagUpdated_X
// 0x0060 (0x0090 - 0x00F0)
class UPsyNetService_FriendPsyTagUpdated_X : public UPsyNetClientService_X
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x0090 (0x0048) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FPsyTag                                     PsyTag;                                        // 0x00D8 (0x0018) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetService_FriendPsyTagUpdated_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_PsyNetReadFriends_X
// 0x0020 (0x00E8 - 0x0108)
class URPC_PsyNetReadFriends_X : public URPC_X
{
public:
	TArray<struct FPsyNetPersonaData>                  Friends;                                       // 0x00E8 (0x0010) [0x0001000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FOnlineFriend>                       FriendsData;                                   // 0x00F8 (0x0010) [0x0001000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_PsyNetReadFriends_X");
		}

		return uClassPointer;
	};

	void eventOnSuccess();
};

// Class ProjectX.RPC_PsyNetSendIndividualChat_X
// 0x0058 (0x00E8 - 0x0140)
class URPC_PsyNetSendIndividualChat_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x00E8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Message;                                       // 0x0130 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_PsyNetSendIndividualChat_X");
		}

		return uClassPointer;
	};

	class URPC_PsyNetSendIndividualChat_X* SetMessage(struct FString InMessage);
	class URPC_PsyNetSendIndividualChat_X* SetPlayerID(struct FUniqueNetId InPlayerId);
};

// Class ProjectX.RPC_GetPlayerPermissions_X
// 0x0020 (0x00E8 - 0x0108)
class URPC_GetPlayerPermissions_X : public URPC_X
{
public:
	TArray<struct FUniqueNetId>                        PlayerIDs;                                     // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FPlayerPermissionsReponse>           PlayerPermissions;                             // 0x00F8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_GetPlayerPermissions_X");
		}

		return uClassPointer;
	};

	bool GetPermissionFromString(struct FName PermissionName, uint8_t& Permission);
	TArray<uint8_t> ConvertPermissions(TArray<struct FName> PermissionNames);
	struct FPlayerPermissionsList ConvertPlayerPermissions(struct FUniqueNetId PlayerID);
	TArray<struct FPlayerPermissionsList> GetPlayerPermissions();
	class URPC_GetPlayerPermissions_X* SetPlayers(TArray<struct FUniqueNetId>& InPlayerIDs);
};

// Class ProjectX.OnlinePlayerStorageManifest_X
// 0x0010 (0x0060 - 0x0070)
class UOnlinePlayerStorageManifest_X : public UObject
{
public:
	TArray<struct FStorageMetadata>                    MetaData;                                      // 0x0060 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlinePlayerStorageManifest_X");
		}

		return uClassPointer;
	};

	bool ChecksumMatches(struct FName Category, int32_t Checksum, uint8_t Encoding);
	void SetChecksum(struct FName Category, int32_t Checksum, uint8_t Encoding);
	int32_t GetIndex(struct FName Category);
};

// Class ProjectX.OnlinePlayerStorageConfig_X
// 0x0004 (0x0078 - 0x007C)
class UOnlinePlayerStorageConfig_X : public UOnlineConfig_X
{
public:
	float                                              QueueBatchDelay;                               // 0x0078 (0x0004) [0x0001000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlinePlayerStorageConfig_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.SaveLock_X
// 0x0008 (0x0060 - 0x0068)
class USaveLock_X : public UObject
{
public:
	class UGFxEngine_X*                                GFxEngine;                                     // 0x0060 (0x0008) [0x0000800000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.SaveLock_X");
		}

		return uClassPointer;
	};

	bool StaticAllowSave();
	bool AllowSave();
};

// Class ProjectX.RPC_PlayerStorageGet_X
// 0x0060 (0x00E8 - 0x0148)
class URPC_PlayerStorageGet_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x00E8 (0x0048) [0x0001000000400000] (CPF_NeedCtorLink)
	TArray<struct FGetPlayerStorageRequestItem>        Items;                                         // 0x0130 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	class UGetPlayerStorageResult_X*                   Result;                                        // 0x0140 (0x0008) [0x0001000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_PlayerStorageGet_X");
		}

		return uClassPointer;
	};

	void __RPC_PlayerStorageGet_X__OnSuccess_8B59BB984CAC0E85B6805CAB6C091FD5(class UGetPlayerStorageResultItem_X* Item);
	bool __RPC_PlayerStorageGet_X__OnSuccess_D2429DC64FE3A77B33D05987968F60EA(class UGetPlayerStorageResultItem_X* Item);
	void eventOnSuccess();
	class UObject* eventGetResponseObject();
};

// Class ProjectX.OnlineResource_X
// 0x00A0 (0x0070 - 0x0110)
class UOnlineResource_X : public UComponent
{
public:
	struct FString                                     URL;                                           // 0x0070 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<float>                                      RetryDelays;                                   // 0x0080 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	float                                              CacheSeconds;                                  // 0x0090 (0x0004) [0x0000000000000001] (CPF_Edit)    
	unsigned long                                      bZipResponse : 1;                              // 0x0094 (0x0004) [0x0000000000000001] [0x00000001] (CPF_Edit)
	unsigned long                                      bSyncing : 1;                                  // 0x0094 (0x0004) [0x0000004000002000] [0x00000002] (CPF_Transient)
	class UStringMap*                                  Headers;                                       // 0x0098 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	class UCachedWebData_X*                            CachedData;                                    // 0x00A0 (0x0008) [0x0000004000002000] (CPF_Transient)
	int32_t                                            RetryCount;                                    // 0x00A8 (0x0004) [0x0000000000002000] (CPF_Transient)
	float                                              LastSyncTime;                                  // 0x00AC (0x0004) [0x0000000000002000] (CPF_Transient)
	class UPsyNetRetryConfig_X*                        RetryConfig;                                   // 0x00B0 (0x0008) [0x0000800000000000]               
	struct FString                                     ServiceName;                                   // 0x00B8 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSyncComplete__Delegate;                 // 0x00C8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventSyncError__Delegate;                    // 0x00E0 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FScriptDelegate                             __EventDataChanged__Delegate;                  // 0x00F8 (0x0018) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.OnlineResource_X");
		}

		return uClassPointer;
	};

	void SetCachedData(class UCachedWebData_X* NewData);
	bool IsValidNewData(class UCachedWebData_X* Data);
	void ClearRetryTimer();
	void SetRetryTimer(float Delay);
	void UpdateRetryDelays(class UError* SyncError);
	void HandleRetryConfigChanged();
	void HandleSync(class UCachedWebData_X* Data);
	void RetrySync();
	void SyncData(struct FScriptDelegate Callback);
	void EventDataChanged(class UOnlineResource_X* DataSync);
	void EventSyncError(class UOnlineResource_X* DataSync, class UError* Error);
	void EventSyncComplete(class UOnlineResource_X* DataSync);
};

// Class ProjectX.RPC_PartyBase_X
// 0x0010 (0x00E8 - 0x00F8)
class URPC_PartyBase_X : public URPC_X
{
public:
	struct FString                                     PartyID;                                       // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_PartyBase_X");
		}

		return uClassPointer;
	};

	class URPC_PartyBase_X* SetPartyIdStr(struct FString InPartyId);
	class URPC_PartyBase_X* SetPartyId(struct FUniqueLobbyId InLobbyId);
};

// Class ProjectX.RPC_PartyMessage_X
// 0x0010 (0x00F8 - 0x0108)
class URPC_PartyMessage_X : public URPC_PartyBase_X
{
public:
	struct FString                                     Message;                                       // 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_PartyMessage_X");
		}

		return uClassPointer;
	};

	class URPC_PartyMessage_X* SetMessage(struct FString InMessage);
};

// Class ProjectX.PartySequence_InviteToParty_X
// 0x0000 (0x0060 - 0x0060)
class UPartySequence_InviteToParty_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartySequence_InviteToParty_X");
		}

		return uClassPointer;
	};

	void __PartySequence_InviteToParty_X__InviteToPsyNetParty_9A9AB74345F15040A7A3C8A2C1E34121(class URPC_PartySendInvite_X* RPC);
	void __PartySequence_InviteToParty_X__InviteToPsyNetParty_32E0400B409E1F7D9F36F8982671E0DA(class URPC_PartySendInvite_X* RPC);
	bool InviteToPsyNetParty(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID);
	bool InviteToParty(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID);
};

// Class ProjectX.PartySequence_LeaveParty_X
// 0x0000 (0x0060 - 0x0060)
class UPartySequence_LeaveParty_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartySequence_LeaveParty_X");
		}

		return uClassPointer;
	};

	void LeaveParty(struct FUniqueLobbyId& LobbyId);
};

// Class ProjectX.RPC_PartyChat_X
// 0x0010 (0x00F8 - 0x0108)
class URPC_PartyChat_X : public URPC_PartyBase_X
{
public:
	struct FString                                     Message;                                       // 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_PartyChat_X");
		}

		return uClassPointer;
	};

	class URPC_PartyChat_X* SetText(struct FString InText);
};

// Class ProjectX.RPC_PartyChangeOwner_X
// 0x00C8 (0x00F8 - 0x01C0)
class URPC_PartyChangeOwner_X : public URPC_PartyBase_X
{
public:
	struct FUniqueNetId                                NewOwnerId;                                    // 0x00F8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPsyNetPartyInfo                            Info;                                          // 0x0140 (0x0070) [0x0001000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FPsyNetPartyMember>                  Members;                                       // 0x01B0 (0x0010) [0x0001000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_PartyChangeOwner_X");
		}

		return uClassPointer;
	};

	class URPC_PartyChangeOwner_X* SetNewOwnerId(struct FUniqueNetId InNewOwnerId);
};

// Class ProjectX.RPC_PartyKickMember_X
// 0x0011 (0x00F8 - 0x0109)
class URPC_PartyKickMember_X : public URPC_PartyBase_X
{
public:
	TArray<struct FString>                             Members;                                       // 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            KickReason;                                    // 0x0108 (0x0001) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_PartyKickMember_X");
		}

		return uClassPointer;
	};

	class URPC_PartyKickMember_X* SetReason(uint8_t InReason);
	class URPC_PartyKickMember_X* AddMember(struct FString InMemberId);
};

// Class ProjectX.RPC_PartyInfo_X
// 0x0090 (0x00E8 - 0x0178)
class URPC_PartyInfo_X : public URPC_X
{
public:
	TArray<struct FPartyInvite>                        Invites;                                       // 0x00E8 (0x0010) [0x0001000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FPsyNetPartyMember                          Member;                                        // 0x00F8 (0x0080) [0x0001000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_PartyInfo_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetService_Party_X
// 0x00D8 (0x0090 - 0x0168)
class UPsyNetService_Party_X : public UPsyNetClientService_X
{
public:
	struct FString                                     PartyID;                                       // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     NotificationType;                              // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     Content;                                       // 0x00B0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                FromUserId;                                    // 0x00C0 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     FromUserName;                                  // 0x0108 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            CreatedAt;                                     // 0x0118 (0x0004) [0x0000000000000000]               
	struct FUniqueNetId                                ForUserId;                                     // 0x0120 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetService_Party_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetService_PartyUserInvited_X
// 0x0000 (0x0168 - 0x0168)
class UPsyNetService_PartyUserInvited_X : public UPsyNetService_Party_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetService_PartyUserInvited_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetService_PartySystem_X
// 0x0000 (0x0168 - 0x0168)
class UPsyNetService_PartySystem_X : public UPsyNetService_Party_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetService_PartySystem_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetService_PartyUserJoined_X
// 0x0000 (0x0168 - 0x0168)
class UPsyNetService_PartyUserJoined_X : public UPsyNetService_Party_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetService_PartyUserJoined_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetService_PartyUserKicked_X
// 0x0101 (0x0090 - 0x0191)
class UPsyNetService_PartyUserKicked_X : public UPsyNetClientService_X
{
public:
	struct FString                                     PartyID;                                       // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     NotificationType;                              // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                Content;                                       // 0x00B0 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                FromUserId;                                    // 0x00F8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            CreatedAt;                                     // 0x0140 (0x0004) [0x0000000000000000]               
	struct FUniqueNetId                                ForUserId;                                     // 0x0148 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	uint8_t                                            KickReason;                                    // 0x0190 (0x0001) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetService_PartyUserKicked_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetService_PartyUserLeft_X
// 0x0000 (0x0168 - 0x0168)
class UPsyNetService_PartyUserLeft_X : public UPsyNetService_Party_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetService_PartyUserLeft_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetService_PartyUserDisconnected_X
// 0x0000 (0x0168 - 0x0168)
class UPsyNetService_PartyUserDisconnected_X : public UPsyNetService_Party_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetService_PartyUserDisconnected_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetService_PartyOwnerChanged_X
// 0x0100 (0x0090 - 0x0190)
class UPsyNetService_PartyOwnerChanged_X : public UPsyNetClientService_X
{
public:
	struct FString                                     PartyID;                                       // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     NotificationType;                              // 0x00A0 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                Content;                                       // 0x00B0 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                FromUserId;                                    // 0x00F8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	int32_t                                            CreatedAt;                                     // 0x0140 (0x0004) [0x0000000000000000]               
	struct FUniqueNetId                                ForUserId;                                     // 0x0148 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetService_PartyOwnerChanged_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetService_PartyChat_X
// 0x0000 (0x0168 - 0x0168)
class UPsyNetService_PartyChat_X : public UPsyNetService_Party_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetService_PartyChat_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PartyMessage_GetPlatformPartyResponse_X
// 0x0058 (0x00A8 - 0x0100)
class UPartyMessage_GetPlatformPartyResponse_X : public UPartyMessage_X
{
public:
	struct FUniqueLobbyId                              PlatformPartyID;                               // 0x00A8 (0x0010) [0x0000000000000000]               
	struct FUniqueNetId                                OriginalSender;                                // 0x00B8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PartyMessage_GetPlatformPartyResponse_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_PartySendInvite_X
// 0x0048 (0x00F8 - 0x0140)
class URPC_PartySendInvite_X : public URPC_PartyBase_X
{
public:
	struct FUniqueNetId                                InviteeID;                                     // 0x00F8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_PartySendInvite_X");
		}

		return uClassPointer;
	};

	class URPC_PartySendInvite_X* Invite(struct FUniqueNetId InInviteeUserId);
};

// Class ProjectX.RPC_PartyJoin_X
// 0x0090 (0x00F8 - 0x0188)
class URPC_PartyJoin_X : public URPC_PartyBase_X
{
public:
	struct FString                                     JoinID;                                        // 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FPsyNetPartyInfo                            Info;                                          // 0x0108 (0x0070) [0x0001000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FPsyNetPartyMember>                  Members;                                       // 0x0178 (0x0010) [0x0001000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_PartyJoin_X");
		}

		return uClassPointer;
	};

	class URPC_PartyBase_X* SetJoinKey(struct FString InJoinKey);
};

// Class ProjectX.RPC_PartyLeave_X
// 0x0000 (0x00F8 - 0x00F8)
class URPC_PartyLeave_X : public URPC_PartyBase_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_PartyLeave_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PauseStaticDataSync_X
// 0x0000 (0x0060 - 0x0060)
class UPauseStaticDataSync_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PauseStaticDataSync_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PerConMetrics_X
// 0x001C (0x0080 - 0x009C)
class UPerConMetrics_X : public UMetricsGroup_X
{
public:
	int32_t                                            StartConnectFailCount;                         // 0x0080 (0x0004) [0x0000000000000000]               
	int32_t                                            ConnectFailCount;                              // 0x0084 (0x0004) [0x0000000000000000]               
	int32_t                                            DisconnectCount;                               // 0x0088 (0x0004) [0x0000000000000000]               
	int32_t                                            RPCErrorCount;                                 // 0x008C (0x0004) [0x0000000000000000]               
	int32_t                                            InvalidMessageCount;                           // 0x0090 (0x0004) [0x0000000000000000]               
	unsigned long                                      bConnected : 1;                                // 0x0094 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              StartTime;                                     // 0x0098 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PerConMetrics_X");
		}

		return uClassPointer;
	};

	void ServiceError(struct FUniqueNetId PlayerID, int32_t Count, struct FString Service, struct FName Error);
	void InvalidMessageError(struct FUniqueNetId PlayerID, int32_t Count, struct FString Substring);
	void DisconnectedError(struct FUniqueNetId PlayerID, int32_t Count, int32_t Code, struct FString Reason, float ElapsedSeconds);
	void Connected(struct FUniqueNetId PlayerID, float ElapsedSeconds);
	void ConnectError(struct FUniqueNetId PlayerID, int32_t Count, int32_t Code, struct FString Reason, float ElapsedSeconds);
	void StartConnectError(struct FUniqueNetId PlayerID, int32_t Count);
	void StartConnect(struct FUniqueNetId PlayerID);
	void Disabled(struct FUniqueNetId PlayerID);
	void Enabled(struct FUniqueNetId PlayerID);
	void HandleRPCError(class URPCQueue_X* InQueue, class URPC_X* RPC, class UError* Error);
	void HandleInvalidMessage(class UPsyNetMessengerWebSocket_X* InMessenger, struct FString Substring);
	void HandleDisconnected(class UPsyNetMessengerWebSocket_X* Socket, int32_t Code, struct FString Reason);
	void HandleConnected(class UPsyNetMessengerWebSocket_X* Socket);
	void HandleStartConnectFail(class UPsyNetMessengerWebSocket_X* Socket);
	void HandleStartConnect(class UPsyNetMessengerWebSocket_X* Socket);
	void HandleStatusChanged(class UPerCon_X* PerCon);
	struct FUniqueNetId GetPlayerID();
	void SetMessenger(class UPsyNetMessengerWebSocket_X* PerConMessenger);
	void eventConstruct();
};

// Class ProjectX.Platform_Console
// 0x0000 (0x0060 - 0x0060)
class UPlatform_Console : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.Platform_Console");
		}

		return uClassPointer;
	};

};

// Class ProjectX.Platform_DedicatedServer
// 0x0000 (0x0060 - 0x0060)
class UPlatform_DedicatedServer : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.Platform_DedicatedServer");
		}

		return uClassPointer;
	};

};

// Class ProjectX.Platform_Dingo
// 0x0000 (0x0060 - 0x0060)
class UPlatform_Dingo : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.Platform_Dingo");
		}

		return uClassPointer;
	};

};

// Class ProjectX.Platform_GameClient
// 0x0000 (0x0060 - 0x0060)
class UPlatform_GameClient : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.Platform_GameClient");
		}

		return uClassPointer;
	};

};

// Class ProjectX.Platform_LanServer
// 0x0000 (0x0060 - 0x0060)
class UPlatform_LanServer : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.Platform_LanServer");
		}

		return uClassPointer;
	};

};

// Class ProjectX.Platform_NNX
// 0x0000 (0x0060 - 0x0060)
class UPlatform_NNX : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.Platform_NNX");
		}

		return uClassPointer;
	};

};

// Class ProjectX.Platform_Orbis
// 0x0000 (0x0060 - 0x0060)
class UPlatform_Orbis : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.Platform_Orbis");
		}

		return uClassPointer;
	};

};

// Class ProjectX.Platform_PC
// 0x0000 (0x0060 - 0x0060)
class UPlatform_PC : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.Platform_PC");
		}

		return uClassPointer;
	};

};

// Class ProjectX.Platform_Server
// 0x0000 (0x0060 - 0x0060)
class UPlatform_Server : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.Platform_Server");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PlatformSystem_X
// 0x0000 (0x0060 - 0x0060)
class UPlatformSystem_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PlatformSystem_X");
		}

		return uClassPointer;
	};

	void AddPlatforms(TArray<class UClass*>& Platforms);
	void AddServer(class UClass* PlatformClass);
	void AddConsole(class UClass* PlatformClass);
	void Init(class UGameEngine* Engine);
};

// Class ProjectX.PlayerTitleConfig_X
// 0x0030 (0x0078 - 0x00A8)
class UPlayerTitleConfig_X : public UOnlineConfig_X
{
public:
	TArray<struct FPlayerTitleCategory>                Categories;                                    // 0x0078 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FPlayerTitleData>                    Titles;                                        // 0x0088 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	struct FString                                     DefaultColorHexCode;                           // 0x0098 (0x0010) [0x0000000000400002] (CPF_Const | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PlayerTitleConfig_X");
		}

		return uClassPointer;
	};

	struct FPlayerTitleData InitTitleColors(struct FPlayerTitleData Data);
	struct FPlayerTitleData GetTitleData(struct FName TitleId);
	struct FPlayerTitleCategory GetCategory(struct FName CategoryID);
	void Apply();
};

// Class ProjectX.PostProcessManager_X
// 0x0070 (0x0060 - 0x00D0)
class UPostProcessManager_X : public UObject
{
public:
	class ULocalPlayer*                                PlayerOwner;                                   // 0x0060 (0x0008) [0x0000008000002000] (CPF_Transient)
	TArray<class UMaterialEffect_X*>                   ActiveEffects;                                 // 0x0068 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	unsigned long                                      bNeedsReset : 1;                               // 0x0078 (0x0004) [0x0000000000002000] [0x00000001] (CPF_Transient)
	TArray<struct FPPEffectDefaults>                   EffectDefaults;                                // 0x0080 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FPPPersistentEffectDefaults>         PersistentEffectDefaults;                      // 0x0090 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FPPChainInfo>                        ActiveChains;                                  // 0x00A0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FPPChainInfo>                        ChainDefaults;                                 // 0x00B0 (0x0010) [0x0000000000400001] (CPF_Edit | CPF_NeedCtorLink)
	TArray<struct FPostProcessOverride>                PostProcessOverrides;                          // 0x00C0 (0x0010) [0x0000008000400001] (CPF_Edit | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PostProcessManager_X");
		}

		return uClassPointer;
	};

	int32_t GetNextPostProcessOverride();
	void TogglePostProcessSettings(struct FName Id, unsigned long bEnabled);
	void SetMaterialEffectValue(struct FName EffectName, float NewValue);
	void ResetEffectsToDefaults(unsigned long bRebuildPostProcessChains);
	void ToggleChainNamed(class UPostProcessChain* Chain, struct FName ChainName, unsigned long bEnabled);
	void StopChainNamed(struct FName ChainName);
	void StartChainNamed(class UPostProcessChain* Chain, struct FName ChainName);
	bool RemovePostProcessChain(int32_t OldChain);
	int32_t AddPostProcessChain(class UPostProcessChain* NewChain, struct FName ChainName);
	class UMaterialEffect_X* GetEffect(struct FName EffectName);
	void TickPostProcess(float dt);
	void ToggleEffect(class UMaterialEffect_X* Effect, unsigned long bEnabled);
	void StopEffectNamed(struct FName EffectName);
	void StartEffectNamed(struct FName EffectName);
	void ToggleEffectNamed(struct FName EffectName, unsigned long bEnabled);
	void PrintDebugInfo(class UDebugDrawer* Drawer);
	class UUberPostProcessEffect* GetUberPostProcessEffect();
	class UPostProcessChain* GetPlayerChain();
	void Exit();
	void Init(class APlayerController_X* NewOwner);
};

// Class ProjectX.PrimaryAuthLoggedIn_TA
// 0x0008 (0x0060 - 0x0068)
class UPrimaryAuthLoggedIn_TA : public UObject
{
public:
	class UPsyNetConnection_X*                         PrimaryAuthedConnection;                       // 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PrimaryAuthLoggedIn_TA");
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_ReportCheater_X
// 0x0058 (0x00E8 - 0x0140)
class URPC_ReportCheater_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x00E8 (0x0048) [0x0000004000400000] (CPF_NeedCtorLink)
	struct FString                                     Reason;                                        // 0x0130 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_ReportCheater_X");
		}

		return uClassPointer;
	};

	class URPC_ReportCheater_X* SetReason(struct FString InReason);
	class URPC_ReportCheater_X* SetPlayerID(struct FUniqueNetId InPlayerId);
};

// Class ProjectX.PsyNetService_DuplicateLogin_X
// 0x0000 (0x0090 - 0x0090)
class UPsyNetService_DuplicateLogin_X : public UPsyNetClientService_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetService_DuplicateLogin_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetMetrics_X
// 0x0020 (0x0080 - 0x00A0)
class UPsyNetMetrics_X : public UMetricsGroup_X
{
public:
	TArray<struct FServiceMetricsData>                 ServiceData;                                   // 0x0080 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FServiceErrorData>                   ErrorData;                                     // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetMetrics_X");
		}

		return uClassPointer;
	};

	void ServiceErrors(TArray<struct FServiceErrorData> Errors);
	void ServiceCalls(TArray<struct FServiceMetricsData> Services);
	void HandleMapChange(struct FString M);
	void RecordServiceError(struct FString Service, class UError* Error);
	void RecordServiceCall(struct FString Service, float Latency);
};

// Class ProjectX.PsyNetService_AAS_X
// 0x0008 (0x0090 - 0x0098)
class UPsyNetService_AAS_X : public UPsyNetClientService_X
{
public:
	int32_t                                            AdtTime;                                       // 0x0090 (0x0004) [0x0000000000000000]               
	int32_t                                            OnlineHours;                                   // 0x0094 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetService_AAS_X");
		}

		return uClassPointer;
	};

	int32_t GetOnlineHours();
};

// Class ProjectX.PsyNetService_CreateHonorDuel_X
// 0x0098 (0x00B0 - 0x0148)
class UPsyNetService_CreateHonorDuel_X : public UPsyNetService_ReservationBase_X
{
public:
	int32_t                                            Playlist;                                      // 0x00B0 (0x0004) [0x0000000000000000]               
	struct FHonorDuelChallenge                         PlayerRoles;                                   // 0x00B8 (0x0090) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetService_CreateHonorDuel_X");
		}

		return uClassPointer;
	};

	struct FPsyNetBeaconReservation GetReservation();
};

// Class ProjectX.PsyNetService_Echo_X
// 0x0020 (0x0090 - 0x00B0)
class UPsyNetService_Echo_X : public UPsyNetClientService_X
{
public:
	struct FString                                     RequestString;                                 // 0x0090 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ResponseString;                                // 0x00A0 (0x0010) [0x0004000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetService_Echo_X");
		}

		return uClassPointer;
	};

	void Execute();
};

// Class ProjectX.PsyNetService_PersonaInfo_X
// 0x0090 (0x0090 - 0x0120)
class UPsyNetService_PersonaInfo_X : public UPsyNetClientService_X
{
public:
	struct FOnlinePersonaData                          FromPlayer;                                    // 0x0090 (0x0090) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetService_PersonaInfo_X");
		}

		return uClassPointer;
	};

	struct FOnlineFriend GetData();
};

// Class ProjectX.PsyNetService_FriendAcceptedRequest_X
// 0x0000 (0x0120 - 0x0120)
class UPsyNetService_FriendAcceptedRequest_X : public UPsyNetService_PersonaInfo_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetService_FriendAcceptedRequest_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetService_FriendStatusUpdate_X
// 0x0068 (0x0090 - 0x00F8)
class UPsyNetService_FriendStatusUpdate_X : public UPsyNetClientService_X
{
public:
	struct FPsyNetOnlineStatus                         FromPlayer;                                    // 0x0090 (0x0068) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetService_FriendStatusUpdate_X");
		}

		return uClassPointer;
	};

	struct FOnlineStatus GetData();
};

// Class ProjectX.PsyNetService_IncomingFriendRequest_X
// 0x0000 (0x0120 - 0x0120)
class UPsyNetService_IncomingFriendRequest_X : public UPsyNetService_PersonaInfo_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetService_IncomingFriendRequest_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetService_PlayerUnfriended_X
// 0x0048 (0x0090 - 0x00D8)
class UPsyNetService_PlayerUnfriended_X : public UPsyNetClientService_X
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x0090 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetService_PlayerUnfriended_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.Stopwatch
// 0x0004 (0x0070 - 0x0074)
class UStopwatch : public UComponent
{
public:
	float                                              StartTime;                                     // 0x0070 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.Stopwatch");
		}

		return uClassPointer;
	};

	float Elapsed();
	void Start();
};

// Class ProjectX.WebConfig_X
// 0x0008 (0x0078 - 0x0080)
class UWebConfig_X : public UOnlineConfig_X
{
public:
	unsigned long                                      bCacheWebImages : 1;                           // 0x0078 (0x0004) [0x0000000000004001] [0x00000001] (CPF_Edit | CPF_Config)
	unsigned long                                      bZipPsyNetStaticData : 1;                      // 0x0078 (0x0004) [0x0000000000004001] [0x00000002] (CPF_Edit | CPF_Config)
	float                                              PsyNetStaticDataCacheMinutes;                  // 0x007C (0x0004) [0x0000000000004001] (CPF_Edit | CPF_Config)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.WebConfig_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyNetStaticDataMetrics_X
// 0x0000 (0x0080 - 0x0080)
class UPsyNetStaticDataMetrics_X : public UMetricsGroup_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyNetStaticDataMetrics_X");
		}

		return uClassPointer;
	};

	void SyncDataTime(float Seconds);
};

// Class ProjectX.StaticDataError_X
// 0x0008 (0x0060 - 0x0068)
class UStaticDataError_X : public UObject
{
public:
	class UError*                                      Error;                                         // 0x0060 (0x0008) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.StaticDataError_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_FilterContent_X
// 0x0040 (0x00E8 - 0x0128)
class URPC_FilterContent_X : public URPC_X
{
public:
	TArray<struct FString>                             Content;                                       // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FString>                             FilteredContent;                               // 0x00F8 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     Callbacks;                                     // 0x0108 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FUniqueNetId>                        PlayerIDs;                                     // 0x0118 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_FilterContent_X");
		}

		return uClassPointer;
	};

	class URPC_FilterContent_X* AddComment(struct FString Comment, struct FScriptDelegate Callback, struct FUniqueNetId PlayerID);
};

// Class ProjectX.PsyTagErrors_X
// 0x0030 (0x0080 - 0x00B0)
class UPsyTagErrors_X : public UErrorList
{
public:
	class UErrorType*                                  PsyTagProfane;                                 // 0x0080 (0x0008) [0x0001000000000002] (CPF_Const)   
	class UErrorType*                                  PsyTagUnavailable;                             // 0x0088 (0x0008) [0x0001000000000002] (CPF_Const)   
	class UErrorType*                                  PsyTagInvalidCharacters;                       // 0x0090 (0x0008) [0x0001000000000002] (CPF_Const)   
	class UErrorType*                                  PsyTagInvalidWhitespace;                       // 0x0098 (0x0008) [0x0001000000000002] (CPF_Const)   
	class UErrorType*                                  PsyTagInvalidParameters;                       // 0x00A0 (0x0008) [0x0001000000000002] (CPF_Const)   
	class UErrorType*                                  PsyTagCrossPlatformDisabled;                   // 0x00A8 (0x0008) [0x0001000000000002] (CPF_Const)   
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyTagErrors_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.PsyTagSearchResult_X
// 0x0094 (0x0060 - 0x00F4)
class UPsyTagSearchResult_X : public UObject
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x0060 (0x0048) [0x0001000000400000] (CPF_NeedCtorLink)
	struct FString                                     PlayerName;                                    // 0x00A8 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	struct FPsyTag                                     PsyTag;                                        // 0x00B8 (0x0018) [0x0001000000400000] (CPF_NeedCtorLink)
	uint64_t                                           PsyTagLastUpdatedTime;                         // 0x00D0 (0x0008) [0x0001000000000000]               
	struct FString                                     PresenceState;                                 // 0x00D8 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	uint64_t                                           LastLoginTime;                                 // 0x00E8 (0x0008) [0x0001000000000000]               
	int32_t                                            NumFriendsInCommon;                            // 0x00F0 (0x0004) [0x0001000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.PsyTagSearchResult_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.ReservationsSettingUpMatchMessage_X
// 0x0000 (0x0060 - 0x0060)
class UReservationsSettingUpMatchMessage_X : public UBeaconMessage_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.ReservationsSettingUpMatchMessage_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_AddPlayerToRole_X
// 0x0004 (0x00E8 - 0x00EC)
class URPC_AddPlayerToRole_X : public URPC_X
{
public:
	int32_t                                            RoleID;                                        // 0x00E8 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_AddPlayerToRole_X");
		}

		return uClassPointer;
	};

	class URPC_AddPlayerToRole_X* SetRole(uint8_t Role);
};

// Class ProjectX.RPC_ClearClubInvites_X
// 0x0000 (0x00E8 - 0x00E8)
class URPC_ClearClubInvites_X : public URPC_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_ClearClubInvites_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_ClearFriendInvites_X
// 0x0000 (0x00E8 - 0x00E8)
class URPC_ClearFriendInvites_X : public URPC_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_ClearFriendInvites_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_FileStorage_GetFileDownloadUrl_X
// 0x0020 (0x00E8 - 0x0108)
class URPC_FileStorage_GetFileDownloadUrl_X : public URPC_X
{
public:
	struct FString                                     Path;                                          // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     URL;                                           // 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_FileStorage_GetFileDownloadUrl_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_FileStorage_GetFileUploadUrl_X
// 0x0030 (0x00E8 - 0x0118)
class URPC_FileStorage_GetFileUploadUrl_X : public URPC_X
{
public:
	struct FString                                     Path;                                          // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     ContentType;                                   // 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     URL;                                           // 0x0108 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_FileStorage_GetFileUploadUrl_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_GetAntiAddictionData_X
// 0x0050 (0x00E8 - 0x0138)
class URPC_GetAntiAddictionData_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x00E8 (0x0048) [0x0001004000400000] (CPF_NeedCtorLink)
	unsigned long                                      bUnderAge : 1;                                 // 0x0130 (0x0004) [0x0001004000002000] [0x00000001] (CPF_Transient)
	unsigned long                                      bShowMessage : 1;                              // 0x0130 (0x0004) [0x0001004000002000] [0x00000002] (CPF_Transient)
	int32_t                                            HoursPlayed;                                   // 0x0134 (0x0004) [0x0001004000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_GetAntiAddictionData_X");
		}

		return uClassPointer;
	};

	class URPC_GetAntiAddictionData_X* SetPlayerID(struct FUniqueNetId InPlayerId);
};

// Class ProjectX.RPC_GetGenericDataAll_X
// 0x0010 (0x00E8 - 0x00F8)
class URPC_GetGenericDataAll_X : public URPC_X
{
public:
	TArray<struct FGetGenericDataAllData>              GenericData;                                   // 0x00E8 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_GetGenericDataAll_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.RPC_GetPlayerTitles_X
// 0x0058 (0x00E8 - 0x0140)
class URPC_GetPlayerTitles_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x00E8 (0x0048) [0x0000004000400000] (CPF_NeedCtorLink)
	TArray<struct FString>                             Titles;                                        // 0x0130 (0x0010) [0x0000004000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_GetPlayerTitles_X");
		}

		return uClassPointer;
	};

	class URPC_GetPlayerTitles_X* SetPlayerID(struct FUniqueNetId InPlayerId);
};

// Class ProjectX.RPC_PartyChatMessage_X
// 0x0010 (0x00F8 - 0x0108)
class URPC_PartyChatMessage_X : public URPC_PartyBase_X
{
public:
	struct FString                                     Message;                                       // 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_PartyChatMessage_X");
		}

		return uClassPointer;
	};

	class URPC_PartyChatMessage_X* SetMessage(struct FString InMessage);
};

// Class ProjectX.RPC_RemovePlayerFromRole_X
// 0x0004 (0x00E8 - 0x00EC)
class URPC_RemovePlayerFromRole_X : public URPC_X
{
public:
	int32_t                                            RoleID;                                        // 0x00E8 (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_RemovePlayerFromRole_X");
		}

		return uClassPointer;
	};

	class URPC_RemovePlayerFromRole_X* SetRole(uint8_t Role);
};

// Class ProjectX.RPC_ReportLowFPS_X
// 0x0038 (0x00E8 - 0x0120)
class URPC_ReportLowFPS_X : public URPC_X
{
public:
	struct FString                                     IP;                                            // 0x00E8 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	int32_t                                            MachineId;                                     // 0x00F8 (0x0004) [0x0000004000000000]               
	uint64_t                                           ServerId;                                      // 0x0100 (0x0008) [0x0000004000000000]               
	struct FString                                     ServerName;                                    // 0x0108 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
	int32_t                                            NumHumans;                                     // 0x0118 (0x0004) [0x0000004000000000]               
	int32_t                                            NumBots;                                       // 0x011C (0x0004) [0x0000004000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_ReportLowFPS_X");
		}

		return uClassPointer;
	};

	class URPC_ReportLowFPS_X* SetNumBots(int32_t InNumBots);
	class URPC_ReportLowFPS_X* SetNumHumans(int32_t InNumHumans);
	class URPC_ReportLowFPS_X* SetServerName(struct FString InServerName);
	class URPC_ReportLowFPS_X* SetServerID(uint64_t InServerID);
	class URPC_ReportLowFPS_X* SetMachineID(int32_t InMachineID);
	class URPC_ReportLowFPS_X* SetIP(struct FString InIP);
};

// Class ProjectX.RPC_SearchPsyTag_X
// 0x0048 (0x00E8 - 0x0130)
class URPC_SearchPsyTag_X : public URPC_X
{
public:
	struct FString                                     PsyTagName;                                    // 0x00E8 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	int32_t                                            PsyTagCode;                                    // 0x00F8 (0x0004) [0x0001000000000000]               
	int32_t                                            PageIndex;                                     // 0x00FC (0x0004) [0x0001000000000000]               
	int32_t                                            PageSize;                                      // 0x0100 (0x0004) [0x0001000000000000]               
	struct FString                                     SortType;                                      // 0x0108 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
	int32_t                                            TotalRows;                                     // 0x0118 (0x0004) [0x0001000000002000] (CPF_Transient)
	TArray<class UPsyTagSearchResult_X*>               MatchedPlayers;                                // 0x0120 (0x0010) [0x0001000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_SearchPsyTag_X");
		}

		return uClassPointer;
	};

	class UErrorType* eventOverrideErrorType(class UErrorType* ErrorType);
	class URPC_SearchPsyTag_X* SetPage(int32_t InPage);
	class URPC_SearchPsyTag_X* SetTag(struct FString InName, int32_t InCode);
};

// Class ProjectX.RPC_SetClubMotD_X
// 0x0010 (0x0120 - 0x0130)
class URPC_SetClubMotD_X : public URPC_CreateClub_X
{
public:
	struct FString                                     Text;                                          // 0x0120 (0x0010) [0x0001000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_SetClubMotD_X");
		}

		return uClassPointer;
	};

	class URPC_SetClubMotD_X* SetText(struct FString InText);
};

// Class ProjectX.RPC_SetPlayerSkill_X
// 0x0010 (0x00E8 - 0x00F8)
class URPC_SetPlayerSkill_X : public URPC_X
{
public:
	int32_t                                            Playlist;                                      // 0x00E8 (0x0004) [0x0000004000000000]               
	float                                              Mu;                                            // 0x00EC (0x0004) [0x0000004000000000]               
	float                                              Sigma;                                         // 0x00F0 (0x0004) [0x0000004000000000]               
	int32_t                                            MatchesPlayed;                                 // 0x00F4 (0x0004) [0x0000004000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_SetPlayerSkill_X");
		}

		return uClassPointer;
	};

	class URPC_SetPlayerSkill_X* SetSigma(float InSigma);
	class URPC_SetPlayerSkill_X* SetMu(float InMu);
	class URPC_SetPlayerSkill_X* SetPlaylist(int32_t InPlaylist);
};

// Class ProjectX.RPC_SetPlayerSkillTier_X
// 0x000C (0x00E8 - 0x00F4)
class URPC_SetPlayerSkillTier_X : public URPC_X
{
public:
	int32_t                                            Playlist;                                      // 0x00E8 (0x0004) [0x0000004000000000]               
	int32_t                                            Tier;                                          // 0x00EC (0x0004) [0x0000004000000000]               
	int32_t                                            MatchesPlayed;                                 // 0x00F0 (0x0004) [0x0000004000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_SetPlayerSkillTier_X");
		}

		return uClassPointer;
	};

	class URPC_SetPlayerSkillTier_X* SetMatchesPlayed(int32_t InMatchesPlayed);
	class URPC_SetPlayerSkillTier_X* SetTier(int32_t InTier);
	class URPC_SetPlayerSkillTier_X* SetPlaylist(int32_t InPlaylist);
};

// Class ProjectX.RPC_SetRichPresence_X
// 0x0020 (0x00E8 - 0x0108)
class URPC_SetRichPresence_X : public URPC_X
{
public:
	struct FString                                     PresenceInfo;                                  // 0x00E8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     PresenceState;                                 // 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_SetRichPresence_X");
		}

		return uClassPointer;
	};

	class URPC_SetRichPresence_X* SetPresenceState(struct FString InState);
	class URPC_SetRichPresence_X* SetPresenceInfo(struct FString InInfo);
};

// Class ProjectX.RPC_SetSeasonReward_X
// 0x0008 (0x00E8 - 0x00F0)
class URPC_SetSeasonReward_X : public URPC_X
{
public:
	int32_t                                            SeasonLevel;                                   // 0x00E8 (0x0004) [0x0000000000000000]               
	int32_t                                            SeasonLevelWins;                               // 0x00EC (0x0004) [0x0000000000000000]               
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_SetSeasonReward_X");
		}

		return uClassPointer;
	};

	class URPC_SetSeasonReward_X* SetReward(int32_t Level, int32_t Wins);
};

// Class ProjectX.RPC_Test_X
// 0x0170 (0x00E8 - 0x0258)
class URPC_Test_X : public URPC_X
{
public:
	struct FString                                     TestParamLocalizedString;                      // 0x00E8 (0x0010) [0x0000000000408002] (CPF_Const | CPF_Localized | CPF_NeedCtorLink)
	struct FString                                     TestParamString;                               // 0x00F8 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FRPCTestParam                               TestParamStruct;                               // 0x0108 (0x0088) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<struct FRPCTestParam>                       TestParamStructs;                              // 0x0190 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FString                                     TestResultLocalizedString;                     // 0x01A0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FString                                     TestResultString;                              // 0x01B0 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	struct FRPCTestParam                               TestResultStruct;                              // 0x01C0 (0x0088) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
	TArray<struct FRPCTestParam>                       TestResultStructs;                             // 0x0248 (0x0010) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_Test_X");
		}

		return uClassPointer;
	};

	bool Check(unsigned long Assertion, struct FString Message);
	bool CheckParamArraysMatch(TArray<struct FRPCTestParam> A, TArray<struct FRPCTestParam> B, struct FString Message);
	bool CheckItemArraysMatch(TArray<struct FRPCTestItem> A, TArray<struct FRPCTestItem> B, struct FString Message);
	bool CheckStringArraysMatch(TArray<struct FString> A, TArray<struct FString> B, struct FString Message);
	bool CheckItemsMatch(struct FRPCTestItem A, struct FRPCTestItem B, struct FString Message);
	bool CheckParamsMatch(struct FRPCTestParam A, struct FRPCTestParam B, struct FString Message);
	bool ValidateResults();
	void eventOnComplete();
	TArray<struct FRPCTestParam> GetRandomTestParams();
	struct FRPCTestParam GetRandomTestParam();
	TArray<struct FRPCTestItem> GetRandomTestItems();
	struct FRPCTestItem GetRandomTestItem();
	void Init();
};

// Class ProjectX.TestsHelper_X
// 0x0000 (0x0060 - 0x0060)
class UTestsHelper_X : public UObject
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.TestsHelper_X");
		}

		return uClassPointer;
	};

	struct FString GetRandomUppercaseString();
	TArray<struct FString> GetRandomStringArray();
	struct FString GetRandomString();
};

// Class ProjectX.RPC_TestPlayerID_X
// 0x0090 (0x00E8 - 0x0178)
class URPC_TestPlayerID_X : public URPC_X
{
public:
	struct FUniqueNetId                                PlayerID;                                      // 0x00E8 (0x0048) [0x0000000000400000] (CPF_NeedCtorLink)
	struct FUniqueNetId                                ResponsePlayerID;                              // 0x0130 (0x0048) [0x0000000000402000] (CPF_Transient | CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_TestPlayerID_X");
		}

		return uClassPointer;
	};

	void OnSuccess();
	void Init();
};

// Class ProjectX.RPC_UpdateClub_X
// 0x0000 (0x0120 - 0x0120)
class URPC_UpdateClub_X : public URPC_CreateClub_X
{
public:
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.RPC_UpdateClub_X");
		}

		return uClassPointer;
	};

};

// Class ProjectX.SeqAct_SpawnArchetype_X
// 0x0040 (0x0160 - 0x01A0)
class USeqAct_SpawnArchetype_X : public USequenceAction
{
public:
	class AActor*                                      ActorArchetype;                                // 0x0160 (0x0008) [0x0000000000000001] (CPF_Edit)    
	struct FVector                                     Velocity;                                      // 0x0168 (0x000C) [0x0000000000000001] (CPF_Edit)    
	float                                              Speed;                                         // 0x0174 (0x0004) [0x0000000000000001] (CPF_Edit)    
	TArray<class AActor*>                              SpawnOwners;                                   // 0x0178 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	TArray<class AActor*>                              SpawnPoints;                                   // 0x0188 (0x0010) [0x0000000000400000] (CPF_NeedCtorLink)
	class AActor*                                      Spawned;                                       // 0x0198 (0x0008) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.SeqAct_SpawnArchetype_X");
		}

		return uClassPointer;
	};

	void Init(class AActor* SpawnedActor);
	void eventActivated();
};

// Class ProjectX.SkelControlBlendTargetComponent_X
// 0x000C (0x00A4 - 0x00B0)
class USkelControlBlendTargetComponent_X : public UActorComponent_X
{
public:
	struct FName                                       SkelControlName;                               // 0x00A8 (0x0008) [0x0000000000000001] (CPF_Edit)    
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.SkelControlBlendTargetComponent_X");
		}

		return uClassPointer;
	};

	void SetControlActiveInComponent(class USkeletalMeshComponent* SKC, unsigned long bActive);
	void SetControlActive(unsigned long bActive);
	void eventDetached();
	void eventAttached();
};

// Class ProjectX.SmoothDynamicValue_X
// 0x0010 (0x0084 - 0x0094)
class USmoothDynamicValue_X : public UDynamicValue_X
{
public:
	float                                              LerpUpSpeed;                                   // 0x0088 (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              LerpDownSpeed;                                 // 0x008C (0x0004) [0x0000000000000001] (CPF_Edit)    
	float                                              SmoothedCachedValue;                           // 0x0090 (0x0004) [0x0000000000002000] (CPF_Transient)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.SmoothDynamicValue_X");
		}

		return uClassPointer;
	};

	struct FString GetDebugValue();
	float GetValue();
	void Tick(float DeltaTime);
	void eventConstruct();
};

// Class ProjectX.UdpLanServer_X
// 0x0018 (0x0060 - 0x0078)
class UUdpLanServer_X : public UObject
{
public:
	class ULanBeacon_X*                                Beacon;                                        // 0x0060 (0x0008) [0x0000000004080009] (CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline)
	struct FString                                     MetaData;                                      // 0x0068 (0x0010) [0x0000004000400000] (CPF_NeedCtorLink)
public:
	static UClass* StaticClass()
	{
		static UClass* uClassPointer = nullptr;

		if (!uClassPointer)
		{
			uClassPointer = UObject::FindClass("Class ProjectX.UdpLanServer_X");
		}

		return uClassPointer;
	};

	void HandleLanQueryMessage(class UOnlineMessageComponent_X* Component, class ULanMessage_HostQuery_X* Query);
	void Destroy();
	class UAsyncTask* SetServerMetaData(struct FString InMetaData);
	void eventConstruct();
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
