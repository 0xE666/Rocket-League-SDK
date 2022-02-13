/*
#############################################################################################
# Rocket League (220128.59469.363257) SDK
# Generated with the UE3SDKGenerator v2.0.8
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_classes.cpp
# ========================================================================================= #
# Credits: TheFeckless, ItsBranK
# Links: www.github.com/ItsBranK/UE3SDKGenerator, www.twitter.com/ItsBranK
#############################################################################################
*/
#include "../SdkHeaders.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.RequestAuthTicket
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceSteamworks::RequestAuthTicket(struct FUniqueNetId PlayerID, struct FScriptDelegate Callback)
{
	static UFunction* uFnRequestAuthTicket = nullptr;

	if (!uFnRequestAuthTicket)
	{
		uFnRequestAuthTicket = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.RequestAuthTicket");
	}

	UOnlineAuthInterfaceSteamworks_execRequestAuthTicket_Params RequestAuthTicket_Params;
	memcpy_s(&RequestAuthTicket_Params.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&RequestAuthTicket_Params.Callback, 0x18, &Callback, 0x18);

	uFnRequestAuthTicket->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRequestAuthTicket, &RequestAuthTicket_Params, nullptr);

	uFnRequestAuthTicket->FunctionFlags |= 0x400;

	return RequestAuthTicket_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.RequiresAuthTicket
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineAuthInterfaceSteamworks::RequiresAuthTicket()
{
	static UFunction* uFnRequiresAuthTicket = nullptr;

	if (!uFnRequiresAuthTicket)
	{
		uFnRequiresAuthTicket = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.RequiresAuthTicket");
	}

	UOnlineAuthInterfaceSteamworks_execRequiresAuthTicket_Params RequiresAuthTicket_Params;

	this->ProcessEvent(uFnRequiresAuthTicket, &RequiresAuthTicket_Params, nullptr);

	return RequiresAuthTicket_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerAddr
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FIpAddr                 OutServerIP                    (CPF_Parm | CPF_OutParm)
// int32_t                        OutServerPort                  (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceSteamworks::GetServerAddr(struct FIpAddr& OutServerIP, int32_t& OutServerPort)
{
	static UFunction* uFnGetServerAddr = nullptr;

	if (!uFnGetServerAddr)
	{
		uFnGetServerAddr = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerAddr");
	}

	UOnlineAuthInterfaceSteamworks_execGetServerAddr_Params GetServerAddr_Params;
	memcpy_s(&GetServerAddr_Params.OutServerIP, 0x14, &OutServerIP, 0x14);
	memcpy_s(&GetServerAddr_Params.OutServerPort, 0x4, &OutServerPort, 0x4);

	uFnGetServerAddr->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetServerAddr, &GetServerAddr_Params, nullptr);

	uFnGetServerAddr->FunctionFlags |= 0x400;

	memcpy_s(&OutServerIP, 0x14, &GetServerAddr_Params.OutServerIP, 0x14);
	memcpy_s(&OutServerPort, 0x4, &GetServerAddr_Params.OutServerPort, 0x4);

	return GetServerAddr_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerUniqueId
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            OutServerUID                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceSteamworks::GetServerUniqueId(struct FUniqueNetId& OutServerUID)
{
	static UFunction* uFnGetServerUniqueId = nullptr;

	if (!uFnGetServerUniqueId)
	{
		uFnGetServerUniqueId = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerUniqueId");
	}

	UOnlineAuthInterfaceSteamworks_execGetServerUniqueId_Params GetServerUniqueId_Params;
	memcpy_s(&GetServerUniqueId_Params.OutServerUID, 0x48, &OutServerUID, 0x48);

	uFnGetServerUniqueId->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetServerUniqueId, &GetServerUniqueId_Params, nullptr);

	uFnGetServerUniqueId->FunctionFlags |= 0x400;

	memcpy_s(&OutServerUID, 0x48, &GetServerUniqueId_Params.OutServerUID, 0x48);

	return GetServerUniqueId_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyServerAuthSession
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ServerIP                       (CPF_Parm)
// int32_t                        AuthTicketUID                  (CPF_Parm)

bool UOnlineAuthInterfaceSteamworks::VerifyServerAuthSession(struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int32_t AuthTicketUID)
{
	static UFunction* uFnVerifyServerAuthSession = nullptr;

	if (!uFnVerifyServerAuthSession)
	{
		uFnVerifyServerAuthSession = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyServerAuthSession");
	}

	UOnlineAuthInterfaceSteamworks_execVerifyServerAuthSession_Params VerifyServerAuthSession_Params;
	memcpy_s(&VerifyServerAuthSession_Params.ServerUID, 0x48, &ServerUID, 0x48);
	memcpy_s(&VerifyServerAuthSession_Params.ServerIP, 0x14, &ServerIP, 0x14);
	memcpy_s(&VerifyServerAuthSession_Params.AuthTicketUID, 0x4, &AuthTicketUID, 0x4);

	uFnVerifyServerAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnVerifyServerAuthSession, &VerifyServerAuthSession_Params, nullptr);

	uFnVerifyServerAuthSession->FunctionFlags |= 0x400;

	return VerifyServerAuthSession_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateServerAuthSession
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ClientIP                       (CPF_Parm)
// int32_t                        ClientPort                     (CPF_Parm)
// int32_t                        OutAuthTicketUID               (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceSteamworks::CreateServerAuthSession(struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int32_t ClientPort, int32_t& OutAuthTicketUID)
{
	static UFunction* uFnCreateServerAuthSession = nullptr;

	if (!uFnCreateServerAuthSession)
	{
		uFnCreateServerAuthSession = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateServerAuthSession");
	}

	UOnlineAuthInterfaceSteamworks_execCreateServerAuthSession_Params CreateServerAuthSession_Params;
	memcpy_s(&CreateServerAuthSession_Params.ClientUID, 0x48, &ClientUID, 0x48);
	memcpy_s(&CreateServerAuthSession_Params.ClientIP, 0x14, &ClientIP, 0x14);
	memcpy_s(&CreateServerAuthSession_Params.ClientPort, 0x4, &ClientPort, 0x4);
	memcpy_s(&CreateServerAuthSession_Params.OutAuthTicketUID, 0x4, &OutAuthTicketUID, 0x4);

	uFnCreateServerAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCreateServerAuthSession, &CreateServerAuthSession_Params, nullptr);

	uFnCreateServerAuthSession->FunctionFlags |= 0x400;

	memcpy_s(&OutAuthTicketUID, 0x4, &CreateServerAuthSession_Params.OutAuthTicketUID, 0x4);

	return CreateServerAuthSession_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyClientAuthSession
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ClientIP                       (CPF_Parm)
// int32_t                        ClientPort                     (CPF_Parm)
// int32_t                        AuthTicketUID                  (CPF_Parm)

bool UOnlineAuthInterfaceSteamworks::VerifyClientAuthSession(struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int32_t ClientPort, int32_t AuthTicketUID)
{
	static UFunction* uFnVerifyClientAuthSession = nullptr;

	if (!uFnVerifyClientAuthSession)
	{
		uFnVerifyClientAuthSession = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyClientAuthSession");
	}

	UOnlineAuthInterfaceSteamworks_execVerifyClientAuthSession_Params VerifyClientAuthSession_Params;
	memcpy_s(&VerifyClientAuthSession_Params.ClientUID, 0x48, &ClientUID, 0x48);
	memcpy_s(&VerifyClientAuthSession_Params.ClientIP, 0x14, &ClientIP, 0x14);
	memcpy_s(&VerifyClientAuthSession_Params.ClientPort, 0x4, &ClientPort, 0x4);
	memcpy_s(&VerifyClientAuthSession_Params.AuthTicketUID, 0x4, &AuthTicketUID, 0x4);

	uFnVerifyClientAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnVerifyClientAuthSession, &VerifyClientAuthSession_Params, nullptr);

	uFnVerifyClientAuthSession->FunctionFlags |= 0x400;

	return VerifyClientAuthSession_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateClientAuthSession
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FIpAddr                 ServerIP                       (CPF_Parm)
// int32_t                        ServerPort                     (CPF_Parm)
// unsigned long                  bSecure                        (CPF_Parm)
// int32_t                        OutAuthTicketUID               (CPF_Parm | CPF_OutParm)

bool UOnlineAuthInterfaceSteamworks::CreateClientAuthSession(struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int32_t ServerPort, unsigned long bSecure, int32_t& OutAuthTicketUID)
{
	static UFunction* uFnCreateClientAuthSession = nullptr;

	if (!uFnCreateClientAuthSession)
	{
		uFnCreateClientAuthSession = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateClientAuthSession");
	}

	UOnlineAuthInterfaceSteamworks_execCreateClientAuthSession_Params CreateClientAuthSession_Params;
	memcpy_s(&CreateClientAuthSession_Params.ServerUID, 0x48, &ServerUID, 0x48);
	memcpy_s(&CreateClientAuthSession_Params.ServerIP, 0x14, &ServerIP, 0x14);
	memcpy_s(&CreateClientAuthSession_Params.ServerPort, 0x4, &ServerPort, 0x4);
	CreateClientAuthSession_Params.bSecure = bSecure;
	memcpy_s(&CreateClientAuthSession_Params.OutAuthTicketUID, 0x4, &OutAuthTicketUID, 0x4);

	uFnCreateClientAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCreateClientAuthSession, &CreateClientAuthSession_Params, nullptr);

	uFnCreateClientAuthSession->FunctionFlags |= 0x400;

	memcpy_s(&OutAuthTicketUID, 0x4, &CreateClientAuthSession_Params.OutAuthTicketUID, 0x4);

	return CreateClientAuthSession_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendServerAuthRequest
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            ServerUID                      (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceSteamworks::SendServerAuthRequest(struct FUniqueNetId ServerUID)
{
	static UFunction* uFnSendServerAuthRequest = nullptr;

	if (!uFnSendServerAuthRequest)
	{
		uFnSendServerAuthRequest = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendServerAuthRequest");
	}

	UOnlineAuthInterfaceSteamworks_execSendServerAuthRequest_Params SendServerAuthRequest_Params;
	memcpy_s(&SendServerAuthRequest_Params.ServerUID, 0x48, &ServerUID, 0x48);

	uFnSendServerAuthRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSendServerAuthRequest, &SendServerAuthRequest_Params, nullptr);

	uFnSendServerAuthRequest->FunctionFlags |= 0x400;

	return SendServerAuthRequest_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendClientAuthRequest
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// class UPlayer*                 ClientConnection               (CPF_Parm)
// struct FUniqueNetId            ClientUID                      (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineAuthInterfaceSteamworks::SendClientAuthRequest(class UPlayer* ClientConnection, struct FUniqueNetId ClientUID)
{
	static UFunction* uFnSendClientAuthRequest = nullptr;

	if (!uFnSendClientAuthRequest)
	{
		uFnSendClientAuthRequest = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendClientAuthRequest");
	}

	UOnlineAuthInterfaceSteamworks_execSendClientAuthRequest_Params SendClientAuthRequest_Params;
	memcpy_s(&SendClientAuthRequest_Params.ClientConnection, 0x8, &ClientConnection, 0x8);
	memcpy_s(&SendClientAuthRequest_Params.ClientUID, 0x48, &ClientUID, 0x48);

	uFnSendClientAuthRequest->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSendClientAuthRequest, &SendClientAuthRequest_Params, nullptr);

	uFnSendClientAuthRequest->FunctionFlags |= 0x400;

	return SendClientAuthRequest_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.UpdateWorkshopItemUploadProgress
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineCommunityContentInterfaceSteamworks::UpdateWorkshopItemUploadProgress()
{
	static UFunction* uFnUpdateWorkshopItemUploadProgress = nullptr;

	if (!uFnUpdateWorkshopItemUploadProgress)
	{
		uFnUpdateWorkshopItemUploadProgress = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.UpdateWorkshopItemUploadProgress");
	}

	UOnlineCommunityContentInterfaceSteamworks_execUpdateWorkshopItemUploadProgress_Params UpdateWorkshopItemUploadProgress_Params;

	uFnUpdateWorkshopItemUploadProgress->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUpdateWorkshopItemUploadProgress, &UpdateWorkshopItemUploadProgress_Params, nullptr);

	uFnUpdateWorkshopItemUploadProgress->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.DownloadAllWorkshopData
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::DownloadAllWorkshopData(struct FScriptDelegate Callback)
{
	static UFunction* uFnDownloadAllWorkshopData = nullptr;

	if (!uFnDownloadAllWorkshopData)
	{
		uFnDownloadAllWorkshopData = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.DownloadAllWorkshopData");
	}

	UOnlineCommunityContentInterfaceSteamworks_execDownloadAllWorkshopData_Params DownloadAllWorkshopData_Params;
	memcpy_s(&DownloadAllWorkshopData_Params.Callback, 0x18, &Callback, 0x18);

	uFnDownloadAllWorkshopData->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDownloadAllWorkshopData, &DownloadAllWorkshopData_Params, nullptr);

	uFnDownloadAllWorkshopData->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.CreateWorkshopItem
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineCommunityContentInterfaceSteamworks::CreateWorkshopItem()
{
	static UFunction* uFnCreateWorkshopItem = nullptr;

	if (!uFnCreateWorkshopItem)
	{
		uFnCreateWorkshopItem = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.CreateWorkshopItem");
	}

	UOnlineCommunityContentInterfaceSteamworks_execCreateWorkshopItem_Params CreateWorkshopItem_Params;

	uFnCreateWorkshopItem->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCreateWorkshopItem, &CreateWorkshopItem_Params, nullptr);

	uFnCreateWorkshopItem->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.RateContent
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// uint8_t                        PlayerNum                      (CPF_Parm)
// int32_t                        NewRating                      (CPF_Parm)
// struct FCommunityContentFile   FileToRate                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::RateContent(uint8_t PlayerNum, int32_t NewRating, struct FCommunityContentFile& FileToRate)
{
	static UFunction* uFnRateContent = nullptr;

	if (!uFnRateContent)
	{
		uFnRateContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.RateContent");
	}

	UOnlineCommunityContentInterfaceSteamworks_execRateContent_Params RateContent_Params;
	memcpy_s(&RateContent_Params.PlayerNum, 0x1, &PlayerNum, 0x1);
	memcpy_s(&RateContent_Params.NewRating, 0x4, &NewRating, 0x4);
	memcpy_s(&RateContent_Params.FileToRate, 0x90, &FileToRate, 0x90);

	this->ProcessEvent(uFnRateContent, &RateContent_Params, nullptr);

	memcpy_s(&FileToRate, 0x90, &RateContent_Params.FileToRate, 0x90);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearGetContentPayloadCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         GetContentPayloadCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::ClearGetContentPayloadCompleteDelegate(struct FScriptDelegate GetContentPayloadCompleteDelegate)
{
	static UFunction* uFnClearGetContentPayloadCompleteDelegate = nullptr;

	if (!uFnClearGetContentPayloadCompleteDelegate)
	{
		uFnClearGetContentPayloadCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearGetContentPayloadCompleteDelegate");
	}

	UOnlineCommunityContentInterfaceSteamworks_execClearGetContentPayloadCompleteDelegate_Params ClearGetContentPayloadCompleteDelegate_Params;
	memcpy_s(&ClearGetContentPayloadCompleteDelegate_Params.GetContentPayloadCompleteDelegate, 0x18, &GetContentPayloadCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearGetContentPayloadCompleteDelegate, &ClearGetContentPayloadCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddGetContentPayloadCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         GetContentPayloadCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::AddGetContentPayloadCompleteDelegate(struct FScriptDelegate GetContentPayloadCompleteDelegate)
{
	static UFunction* uFnAddGetContentPayloadCompleteDelegate = nullptr;

	if (!uFnAddGetContentPayloadCompleteDelegate)
	{
		uFnAddGetContentPayloadCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddGetContentPayloadCompleteDelegate");
	}

	UOnlineCommunityContentInterfaceSteamworks_execAddGetContentPayloadCompleteDelegate_Params AddGetContentPayloadCompleteDelegate_Params;
	memcpy_s(&AddGetContentPayloadCompleteDelegate_Params.GetContentPayloadCompleteDelegate, 0x18, &GetContentPayloadCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddGetContentPayloadCompleteDelegate, &AddGetContentPayloadCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnGetContentPayloadComplete
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FCommunityContentFile   FileDownloaded                 (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                Payload                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::OnGetContentPayloadComplete(unsigned long bWasSuccessful, struct FCommunityContentFile FileDownloaded, TArray<uint8_t>& Payload)
{
	static UFunction* uFnOnGetContentPayloadComplete = nullptr;

	if (!uFnOnGetContentPayloadComplete)
	{
		uFnOnGetContentPayloadComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnGetContentPayloadComplete");
	}

	UOnlineCommunityContentInterfaceSteamworks_execOnGetContentPayloadComplete_Params OnGetContentPayloadComplete_Params;
	OnGetContentPayloadComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnGetContentPayloadComplete_Params.FileDownloaded, 0x90, &FileDownloaded, 0x90);
	memcpy_s(&OnGetContentPayloadComplete_Params.Payload, 0x10, &Payload, 0x10);

	this->ProcessEvent(uFnOnGetContentPayloadComplete, &OnGetContentPayloadComplete_Params, nullptr);

	memcpy_s(&Payload, 0x10, &OnGetContentPayloadComplete_Params.Payload, 0x10);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetContentPayload
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        PlayerNum                      (CPF_Parm)
// struct FCommunityContentFile   FileDownloaded                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineCommunityContentInterfaceSteamworks::GetContentPayload(uint8_t PlayerNum, struct FCommunityContentFile& FileDownloaded)
{
	static UFunction* uFnGetContentPayload = nullptr;

	if (!uFnGetContentPayload)
	{
		uFnGetContentPayload = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetContentPayload");
	}

	UOnlineCommunityContentInterfaceSteamworks_execGetContentPayload_Params GetContentPayload_Params;
	memcpy_s(&GetContentPayload_Params.PlayerNum, 0x1, &PlayerNum, 0x1);
	memcpy_s(&GetContentPayload_Params.FileDownloaded, 0x90, &FileDownloaded, 0x90);

	this->ProcessEvent(uFnGetContentPayload, &GetContentPayload_Params, nullptr);

	memcpy_s(&FileDownloaded, 0x90, &GetContentPayload_Params.FileDownloaded, 0x90);

	return GetContentPayload_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearDownloadContentCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         DownloadContentCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::ClearDownloadContentCompleteDelegate(struct FScriptDelegate DownloadContentCompleteDelegate)
{
	static UFunction* uFnClearDownloadContentCompleteDelegate = nullptr;

	if (!uFnClearDownloadContentCompleteDelegate)
	{
		uFnClearDownloadContentCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearDownloadContentCompleteDelegate");
	}

	UOnlineCommunityContentInterfaceSteamworks_execClearDownloadContentCompleteDelegate_Params ClearDownloadContentCompleteDelegate_Params;
	memcpy_s(&ClearDownloadContentCompleteDelegate_Params.DownloadContentCompleteDelegate, 0x18, &DownloadContentCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearDownloadContentCompleteDelegate, &ClearDownloadContentCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddDownloadContentCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         DownloadContentCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::AddDownloadContentCompleteDelegate(struct FScriptDelegate DownloadContentCompleteDelegate)
{
	static UFunction* uFnAddDownloadContentCompleteDelegate = nullptr;

	if (!uFnAddDownloadContentCompleteDelegate)
	{
		uFnAddDownloadContentCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddDownloadContentCompleteDelegate");
	}

	UOnlineCommunityContentInterfaceSteamworks_execAddDownloadContentCompleteDelegate_Params AddDownloadContentCompleteDelegate_Params;
	memcpy_s(&AddDownloadContentCompleteDelegate_Params.DownloadContentCompleteDelegate, 0x18, &DownloadContentCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddDownloadContentCompleteDelegate, &AddDownloadContentCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnDownloadContentComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FCommunityContentFile   FileDownloaded                 (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                Payload                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::OnDownloadContentComplete(unsigned long bWasSuccessful, struct FCommunityContentFile FileDownloaded, TArray<uint8_t> Payload)
{
	static UFunction* uFnOnDownloadContentComplete = nullptr;

	if (!uFnOnDownloadContentComplete)
	{
		uFnOnDownloadContentComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnDownloadContentComplete");
	}

	UOnlineCommunityContentInterfaceSteamworks_execOnDownloadContentComplete_Params OnDownloadContentComplete_Params;
	OnDownloadContentComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDownloadContentComplete_Params.FileDownloaded, 0x90, &FileDownloaded, 0x90);
	memcpy_s(&OnDownloadContentComplete_Params.Payload, 0x10, &Payload, 0x10);

	this->ProcessEvent(uFnOnDownloadContentComplete, &OnDownloadContentComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.DownloadContent
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        PlayerNum                      (CPF_Parm)
// struct FCommunityContentFile   FileToDownload                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineCommunityContentInterfaceSteamworks::DownloadContent(uint8_t PlayerNum, struct FCommunityContentFile& FileToDownload)
{
	static UFunction* uFnDownloadContent = nullptr;

	if (!uFnDownloadContent)
	{
		uFnDownloadContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.DownloadContent");
	}

	UOnlineCommunityContentInterfaceSteamworks_execDownloadContent_Params DownloadContent_Params;
	memcpy_s(&DownloadContent_Params.PlayerNum, 0x1, &PlayerNum, 0x1);
	memcpy_s(&DownloadContent_Params.FileToDownload, 0x90, &FileToDownload, 0x90);

	this->ProcessEvent(uFnDownloadContent, &DownloadContent_Params, nullptr);

	memcpy_s(&FileToDownload, 0x90, &DownloadContent_Params.FileToDownload, 0x90);

	return DownloadContent_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearUploadContentCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UploadContentCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::ClearUploadContentCompleteDelegate(struct FScriptDelegate UploadContentCompleteDelegate)
{
	static UFunction* uFnClearUploadContentCompleteDelegate = nullptr;

	if (!uFnClearUploadContentCompleteDelegate)
	{
		uFnClearUploadContentCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearUploadContentCompleteDelegate");
	}

	UOnlineCommunityContentInterfaceSteamworks_execClearUploadContentCompleteDelegate_Params ClearUploadContentCompleteDelegate_Params;
	memcpy_s(&ClearUploadContentCompleteDelegate_Params.UploadContentCompleteDelegate, 0x18, &UploadContentCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearUploadContentCompleteDelegate, &ClearUploadContentCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddUploadContentCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UploadContentCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::AddUploadContentCompleteDelegate(struct FScriptDelegate UploadContentCompleteDelegate)
{
	static UFunction* uFnAddUploadContentCompleteDelegate = nullptr;

	if (!uFnAddUploadContentCompleteDelegate)
	{
		uFnAddUploadContentCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddUploadContentCompleteDelegate");
	}

	UOnlineCommunityContentInterfaceSteamworks_execAddUploadContentCompleteDelegate_Params AddUploadContentCompleteDelegate_Params;
	memcpy_s(&AddUploadContentCompleteDelegate_Params.UploadContentCompleteDelegate, 0x18, &UploadContentCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddUploadContentCompleteDelegate, &AddUploadContentCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnUploadContentComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FCommunityContentFile   UploadedFile                   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::OnUploadContentComplete(unsigned long bWasSuccessful, struct FCommunityContentFile UploadedFile)
{
	static UFunction* uFnOnUploadContentComplete = nullptr;

	if (!uFnOnUploadContentComplete)
	{
		uFnOnUploadContentComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnUploadContentComplete");
	}

	UOnlineCommunityContentInterfaceSteamworks_execOnUploadContentComplete_Params OnUploadContentComplete_Params;
	OnUploadContentComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnUploadContentComplete_Params.UploadedFile, 0x90, &UploadedFile, 0x90);

	this->ProcessEvent(uFnOnUploadContentComplete, &OnUploadContentComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.UploadContent
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        PlayerNum                      (CPF_Parm)
// TArray<uint8_t>                Payload                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// struct FCommunityContentMetadata MetaData                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineCommunityContentInterfaceSteamworks::UploadContent(uint8_t PlayerNum, TArray<uint8_t>& Payload, struct FCommunityContentMetadata& MetaData)
{
	static UFunction* uFnUploadContent = nullptr;

	if (!uFnUploadContent)
	{
		uFnUploadContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.UploadContent");
	}

	UOnlineCommunityContentInterfaceSteamworks_execUploadContent_Params UploadContent_Params;
	memcpy_s(&UploadContent_Params.PlayerNum, 0x1, &PlayerNum, 0x1);
	memcpy_s(&UploadContent_Params.Payload, 0x10, &Payload, 0x10);
	memcpy_s(&UploadContent_Params.MetaData, 0x38, &MetaData, 0x38);

	this->ProcessEvent(uFnUploadContent, &UploadContent_Params, nullptr);

	memcpy_s(&Payload, 0x10, &UploadContent_Params.Payload, 0x10);
	memcpy_s(&MetaData, 0x38, &UploadContent_Params.MetaData, 0x38);

	return UploadContent_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetFriendsContentList
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        PlayerNum                      (CPF_Parm)
// struct FOnlineFriend           Friend                         (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<struct FCommunityContentFile> ContentFiles                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineCommunityContentInterfaceSteamworks::GetFriendsContentList(uint8_t PlayerNum, struct FOnlineFriend& Friend, TArray<struct FCommunityContentFile>& ContentFiles)
{
	static UFunction* uFnGetFriendsContentList = nullptr;

	if (!uFnGetFriendsContentList)
	{
		uFnGetFriendsContentList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetFriendsContentList");
	}

	UOnlineCommunityContentInterfaceSteamworks_execGetFriendsContentList_Params GetFriendsContentList_Params;
	memcpy_s(&GetFriendsContentList_Params.PlayerNum, 0x1, &PlayerNum, 0x1);
	memcpy_s(&GetFriendsContentList_Params.Friend, 0x130, &Friend, 0x130);
	memcpy_s(&GetFriendsContentList_Params.ContentFiles, 0x10, &ContentFiles, 0x10);

	this->ProcessEvent(uFnGetFriendsContentList, &GetFriendsContentList_Params, nullptr);

	memcpy_s(&Friend, 0x130, &GetFriendsContentList_Params.Friend, 0x130);
	memcpy_s(&ContentFiles, 0x10, &GetFriendsContentList_Params.ContentFiles, 0x10);

	return GetFriendsContentList_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearReadFriendsContentListCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadFriendsContentListCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::ClearReadFriendsContentListCompleteDelegate(struct FScriptDelegate ReadFriendsContentListCompleteDelegate)
{
	static UFunction* uFnClearReadFriendsContentListCompleteDelegate = nullptr;

	if (!uFnClearReadFriendsContentListCompleteDelegate)
	{
		uFnClearReadFriendsContentListCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearReadFriendsContentListCompleteDelegate");
	}

	UOnlineCommunityContentInterfaceSteamworks_execClearReadFriendsContentListCompleteDelegate_Params ClearReadFriendsContentListCompleteDelegate_Params;
	memcpy_s(&ClearReadFriendsContentListCompleteDelegate_Params.ReadFriendsContentListCompleteDelegate, 0x18, &ReadFriendsContentListCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearReadFriendsContentListCompleteDelegate, &ClearReadFriendsContentListCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddReadFriendsContentListCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadFriendsContentListCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::AddReadFriendsContentListCompleteDelegate(struct FScriptDelegate ReadFriendsContentListCompleteDelegate)
{
	static UFunction* uFnAddReadFriendsContentListCompleteDelegate = nullptr;

	if (!uFnAddReadFriendsContentListCompleteDelegate)
	{
		uFnAddReadFriendsContentListCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddReadFriendsContentListCompleteDelegate");
	}

	UOnlineCommunityContentInterfaceSteamworks_execAddReadFriendsContentListCompleteDelegate_Params AddReadFriendsContentListCompleteDelegate_Params;
	memcpy_s(&AddReadFriendsContentListCompleteDelegate_Params.ReadFriendsContentListCompleteDelegate, 0x18, &ReadFriendsContentListCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddReadFriendsContentListCompleteDelegate, &AddReadFriendsContentListCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnReadFriendsContentListComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineCommunityContentInterfaceSteamworks::OnReadFriendsContentListComplete(unsigned long bWasSuccessful)
{
	static UFunction* uFnOnReadFriendsContentListComplete = nullptr;

	if (!uFnOnReadFriendsContentListComplete)
	{
		uFnOnReadFriendsContentListComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnReadFriendsContentListComplete");
	}

	UOnlineCommunityContentInterfaceSteamworks_execOnReadFriendsContentListComplete_Params OnReadFriendsContentListComplete_Params;
	OnReadFriendsContentListComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadFriendsContentListComplete, &OnReadFriendsContentListComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ReadFriendsContentList
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        PlayerNum                      (CPF_Parm)
// int32_t                        StartAt                        (CPF_OptionalParm | CPF_Parm)
// int32_t                        NumToRead                      (CPF_OptionalParm | CPF_Parm)
// TArray<struct FOnlineFriend>   Friends                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineCommunityContentInterfaceSteamworks::ReadFriendsContentList(uint8_t PlayerNum, int32_t StartAt, int32_t NumToRead, TArray<struct FOnlineFriend>& Friends)
{
	static UFunction* uFnReadFriendsContentList = nullptr;

	if (!uFnReadFriendsContentList)
	{
		uFnReadFriendsContentList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ReadFriendsContentList");
	}

	UOnlineCommunityContentInterfaceSteamworks_execReadFriendsContentList_Params ReadFriendsContentList_Params;
	memcpy_s(&ReadFriendsContentList_Params.PlayerNum, 0x1, &PlayerNum, 0x1);
	memcpy_s(&ReadFriendsContentList_Params.StartAt, 0x4, &StartAt, 0x4);
	memcpy_s(&ReadFriendsContentList_Params.NumToRead, 0x4, &NumToRead, 0x4);
	memcpy_s(&ReadFriendsContentList_Params.Friends, 0x10, &Friends, 0x10);

	this->ProcessEvent(uFnReadFriendsContentList, &ReadFriendsContentList_Params, nullptr);

	memcpy_s(&Friends, 0x10, &ReadFriendsContentList_Params.Friends, 0x10);

	return ReadFriendsContentList_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetContentList
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        PlayerNum                      (CPF_Parm)
// TArray<struct FCommunityContentFile> ContentFiles                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineCommunityContentInterfaceSteamworks::GetContentList(uint8_t PlayerNum, TArray<struct FCommunityContentFile>& ContentFiles)
{
	static UFunction* uFnGetContentList = nullptr;

	if (!uFnGetContentList)
	{
		uFnGetContentList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.GetContentList");
	}

	UOnlineCommunityContentInterfaceSteamworks_execGetContentList_Params GetContentList_Params;
	memcpy_s(&GetContentList_Params.PlayerNum, 0x1, &PlayerNum, 0x1);
	memcpy_s(&GetContentList_Params.ContentFiles, 0x10, &ContentFiles, 0x10);

	this->ProcessEvent(uFnGetContentList, &GetContentList_Params, nullptr);

	memcpy_s(&ContentFiles, 0x10, &GetContentList_Params.ContentFiles, 0x10);

	return GetContentList_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearReadContentListCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadContentListCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::ClearReadContentListCompleteDelegate(struct FScriptDelegate ReadContentListCompleteDelegate)
{
	static UFunction* uFnClearReadContentListCompleteDelegate = nullptr;

	if (!uFnClearReadContentListCompleteDelegate)
	{
		uFnClearReadContentListCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ClearReadContentListCompleteDelegate");
	}

	UOnlineCommunityContentInterfaceSteamworks_execClearReadContentListCompleteDelegate_Params ClearReadContentListCompleteDelegate_Params;
	memcpy_s(&ClearReadContentListCompleteDelegate_Params.ReadContentListCompleteDelegate, 0x18, &ReadContentListCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearReadContentListCompleteDelegate, &ClearReadContentListCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddReadContentListCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadContentListCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::AddReadContentListCompleteDelegate(struct FScriptDelegate ReadContentListCompleteDelegate)
{
	static UFunction* uFnAddReadContentListCompleteDelegate = nullptr;

	if (!uFnAddReadContentListCompleteDelegate)
	{
		uFnAddReadContentListCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.AddReadContentListCompleteDelegate");
	}

	UOnlineCommunityContentInterfaceSteamworks_execAddReadContentListCompleteDelegate_Params AddReadContentListCompleteDelegate_Params;
	memcpy_s(&AddReadContentListCompleteDelegate_Params.ReadContentListCompleteDelegate, 0x18, &ReadContentListCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddReadContentListCompleteDelegate, &AddReadContentListCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnReadContentListComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// TArray<struct FCommunityContentFile> ContentFiles                   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::OnReadContentListComplete(unsigned long bWasSuccessful, TArray<struct FCommunityContentFile> ContentFiles)
{
	static UFunction* uFnOnReadContentListComplete = nullptr;

	if (!uFnOnReadContentListComplete)
	{
		uFnOnReadContentListComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnReadContentListComplete");
	}

	UOnlineCommunityContentInterfaceSteamworks_execOnReadContentListComplete_Params OnReadContentListComplete_Params;
	OnReadContentListComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadContentListComplete_Params.ContentFiles, 0x10, &ContentFiles, 0x10);

	this->ProcessEvent(uFnOnReadContentListComplete, &OnReadContentListComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ReadContentList
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        PlayerNum                      (CPF_Parm)
// struct FUniqueNetId            NetId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Path                           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// int32_t                        StartAt                        (CPF_OptionalParm | CPF_Parm)
// int32_t                        NumToRead                      (CPF_OptionalParm | CPF_Parm)

bool UOnlineCommunityContentInterfaceSteamworks::ReadContentList(uint8_t PlayerNum, struct FUniqueNetId NetId, struct FString Path, int32_t StartAt, int32_t NumToRead)
{
	static UFunction* uFnReadContentList = nullptr;

	if (!uFnReadContentList)
	{
		uFnReadContentList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.ReadContentList");
	}

	UOnlineCommunityContentInterfaceSteamworks_execReadContentList_Params ReadContentList_Params;
	memcpy_s(&ReadContentList_Params.PlayerNum, 0x1, &PlayerNum, 0x1);
	memcpy_s(&ReadContentList_Params.NetId, 0x48, &NetId, 0x48);
	memcpy_s(&ReadContentList_Params.Path, 0x10, &Path, 0x10);
	memcpy_s(&ReadContentList_Params.StartAt, 0x4, &StartAt, 0x4);
	memcpy_s(&ReadContentList_Params.NumToRead, 0x4, &NumToRead, 0x4);

	this->ProcessEvent(uFnReadContentList, &ReadContentList_Params, nullptr);

	return ReadContentList_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.Exit
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineCommunityContentInterfaceSteamworks::Exit()
{
	static UFunction* uFnExit = nullptr;

	if (!uFnExit)
	{
		uFnExit = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.Exit");
	}

	UOnlineCommunityContentInterfaceSteamworks_execExit_Params Exit_Params;

	uFnExit->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnExit, &Exit_Params, nullptr);

	uFnExit->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.Init
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineCommunityContentInterfaceSteamworks::Init()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.Init");
	}

	UOnlineCommunityContentInterfaceSteamworks_execInit_Params Init_Params;

	uFnInit->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);

	uFnInit->FunctionFlags |= 0x400;

	return Init_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnDownloadedWorkshopData
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bSuccess                       (CPF_Parm)
// TArray<struct FDownloadedWorkshopData> Items                          (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineCommunityContentInterfaceSteamworks::OnDownloadedWorkshopData(unsigned long bSuccess, TArray<struct FDownloadedWorkshopData>& Items)
{
	static UFunction* uFnOnDownloadedWorkshopData = nullptr;

	if (!uFnOnDownloadedWorkshopData)
	{
		uFnOnDownloadedWorkshopData = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineCommunityContentInterfaceSteamworks.OnDownloadedWorkshopData");
	}

	UOnlineCommunityContentInterfaceSteamworks_execOnDownloadedWorkshopData_Params OnDownloadedWorkshopData_Params;
	OnDownloadedWorkshopData_Params.bSuccess = bSuccess;
	memcpy_s(&OnDownloadedWorkshopData_Params.Items, 0x10, &Items, 0x10);

	this->ProcessEvent(uFnOnDownloadedWorkshopData, &OnDownloadedWorkshopData_Params, nullptr);

	memcpy_s(&Items, 0x10, &OnDownloadedWorkshopData_Params.Items, 0x10);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.PrintDebugInfoNative
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UDebugDrawer*            Drawer                         (CPF_Parm)

void UOnlineGameInterfaceSteamworks::PrintDebugInfoNative(class UDebugDrawer* Drawer)
{
	static UFunction* uFnPrintDebugInfoNative = nullptr;

	if (!uFnPrintDebugInfoNative)
	{
		uFnPrintDebugInfoNative = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.PrintDebugInfoNative");
	}

	UOnlineGameInterfaceSteamworks_execPrintDebugInfoNative_Params PrintDebugInfoNative_Params;
	memcpy_s(&PrintDebugInfoNative_Params.Drawer, 0x8, &Drawer, 0x8);

	uFnPrintDebugInfoNative->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnPrintDebugInfoNative, &PrintDebugInfoNative_Params, nullptr);

	uFnPrintDebugInfoNative->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.PrintDebugInfo
// [0x400020102] (FUNC_RequiredAPI | FUNC_NetRequest | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// class UDebugDrawer*            Drawer                         (CPF_Parm)

void UOnlineGameInterfaceSteamworks::PrintDebugInfo(class UDebugDrawer* Drawer)
{
	static UFunction* uFnPrintDebugInfo = nullptr;

	if (!uFnPrintDebugInfo)
	{
		uFnPrintDebugInfo = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.PrintDebugInfo");
	}

	UOnlineGameInterfaceSteamworks_execPrintDebugInfo_Params PrintDebugInfo_Params;
	memcpy_s(&PrintDebugInfo_Params.Drawer, 0x8, &Drawer, 0x8);

	this->ProcessEvent(uFnPrintDebugInfo, &PrintDebugInfo_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        StartAt                        (CPF_Parm)
// int32_t                        NumberToQuery                  (CPF_Parm)

bool UOnlineGameInterfaceSteamworks::QueryNonAdvertisedData(int32_t StartAt, int32_t NumberToQuery)
{
	static UFunction* uFnQueryNonAdvertisedData = nullptr;

	if (!uFnQueryNonAdvertisedData)
	{
		uFnQueryNonAdvertisedData = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData");
	}

	UOnlineGameInterfaceSteamworks_execQueryNonAdvertisedData_Params QueryNonAdvertisedData_Params;
	memcpy_s(&QueryNonAdvertisedData_Params.StartAt, 0x4, &StartAt, 0x4);
	memcpy_s(&QueryNonAdvertisedData_Params.NumberToQuery, 0x4, &NumberToQuery, 0x4);

	this->ProcessEvent(uFnQueryNonAdvertisedData, &QueryNonAdvertisedData_Params, nullptr);

	return QueryNonAdvertisedData_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks::ClearUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate)
{
	static UFunction* uFnClearUnregisterPlayerCompleteDelegate = nullptr;

	if (!uFnClearUnregisterPlayerCompleteDelegate)
	{
		uFnClearUnregisterPlayerCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceSteamworks_execClearUnregisterPlayerCompleteDelegate_Params ClearUnregisterPlayerCompleteDelegate_Params;
	memcpy_s(&ClearUnregisterPlayerCompleteDelegate_Params.UnregisterPlayerCompleteDelegate, 0x18, &UnregisterPlayerCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearUnregisterPlayerCompleteDelegate, &ClearUnregisterPlayerCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks::AddUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate)
{
	static UFunction* uFnAddUnregisterPlayerCompleteDelegate = nullptr;

	if (!uFnAddUnregisterPlayerCompleteDelegate)
	{
		uFnAddUnregisterPlayerCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceSteamworks_execAddUnregisterPlayerCompleteDelegate_Params AddUnregisterPlayerCompleteDelegate_Params;
	memcpy_s(&AddUnregisterPlayerCompleteDelegate_Params.UnregisterPlayerCompleteDelegate, 0x18, &UnregisterPlayerCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddUnregisterPlayerCompleteDelegate, &AddUnregisterPlayerCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete
// [0x400120000] (FUNC_Public | FUNC_Delegate | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceSteamworks::OnUnregisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnUnregisterPlayerComplete = nullptr;

	if (!uFnOnUnregisterPlayerComplete)
	{
		uFnOnUnregisterPlayerComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete");
	}

	UOnlineGameInterfaceSteamworks_execOnUnregisterPlayerComplete_Params OnUnregisterPlayerComplete_Params;
	memcpy_s(&OnUnregisterPlayerComplete_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&OnUnregisterPlayerComplete_Params.PlayerID, 0x48, &PlayerID, 0x48);
	OnUnregisterPlayerComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnUnregisterPlayerComplete, &OnUnregisterPlayerComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineGameInterfaceSteamworks::UnregisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnUnregisterPlayer = nullptr;

	if (!uFnUnregisterPlayer)
	{
		uFnUnregisterPlayer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer");
	}

	UOnlineGameInterfaceSteamworks_execUnregisterPlayer_Params UnregisterPlayer_Params;
	memcpy_s(&UnregisterPlayer_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&UnregisterPlayer_Params.PlayerID, 0x48, &PlayerID, 0x48);

	uFnUnregisterPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUnregisterPlayer, &UnregisterPlayer_Params, nullptr);

	uFnUnregisterPlayer->FunctionFlags |= 0x400;

	return UnregisterPlayer_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks::ClearRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate)
{
	static UFunction* uFnClearRegisterPlayerCompleteDelegate = nullptr;

	if (!uFnClearRegisterPlayerCompleteDelegate)
	{
		uFnClearRegisterPlayerCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceSteamworks_execClearRegisterPlayerCompleteDelegate_Params ClearRegisterPlayerCompleteDelegate_Params;
	memcpy_s(&ClearRegisterPlayerCompleteDelegate_Params.RegisterPlayerCompleteDelegate, 0x18, &RegisterPlayerCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearRegisterPlayerCompleteDelegate, &ClearRegisterPlayerCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks::AddRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate)
{
	static UFunction* uFnAddRegisterPlayerCompleteDelegate = nullptr;

	if (!uFnAddRegisterPlayerCompleteDelegate)
	{
		uFnAddRegisterPlayerCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceSteamworks_execAddRegisterPlayerCompleteDelegate_Params AddRegisterPlayerCompleteDelegate_Params;
	memcpy_s(&AddRegisterPlayerCompleteDelegate_Params.RegisterPlayerCompleteDelegate, 0x18, &RegisterPlayerCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddRegisterPlayerCompleteDelegate, &AddRegisterPlayerCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete
// [0x400120000] (FUNC_Public | FUNC_Delegate | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceSteamworks::OnRegisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnRegisterPlayerComplete = nullptr;

	if (!uFnOnRegisterPlayerComplete)
	{
		uFnOnRegisterPlayerComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete");
	}

	UOnlineGameInterfaceSteamworks_execOnRegisterPlayerComplete_Params OnRegisterPlayerComplete_Params;
	memcpy_s(&OnRegisterPlayerComplete_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&OnRegisterPlayerComplete_Params.PlayerID, 0x48, &PlayerID, 0x48);
	OnRegisterPlayerComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnRegisterPlayerComplete, &OnRegisterPlayerComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasInvited                    (CPF_Parm)

bool UOnlineGameInterfaceSteamworks::RegisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited)
{
	static UFunction* uFnRegisterPlayer = nullptr;

	if (!uFnRegisterPlayer)
	{
		uFnRegisterPlayer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer");
	}

	UOnlineGameInterfaceSteamworks_execRegisterPlayer_Params RegisterPlayer_Params;
	memcpy_s(&RegisterPlayer_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&RegisterPlayer_Params.PlayerID, 0x48, &PlayerID, 0x48);
	RegisterPlayer_Params.bWasInvited = bWasInvited;

	uFnRegisterPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRegisterPlayer, &RegisterPlayer_Params, nullptr);

	uFnRegisterPlayer->FunctionFlags |= 0x400;

	return RegisterPlayer_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceSteamworks::AcceptGameInvite(uint8_t LocalUserNum, struct FName SessionName)
{
	static UFunction* uFnAcceptGameInvite = nullptr;

	if (!uFnAcceptGameInvite)
	{
		uFnAcceptGameInvite = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite");
	}

	UOnlineGameInterfaceSteamworks_execAcceptGameInvite_Params AcceptGameInvite_Params;
	memcpy_s(&AcceptGameInvite_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AcceptGameInvite_Params.SessionName, 0x8, &SessionName, 0x8);

	uFnAcceptGameInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAcceptGameInvite, &AcceptGameInvite_Params, nullptr);

	uFnAcceptGameInvite->FunctionFlags |= 0x400;

	return AcceptGameInvite_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted
// [0x400520000] (FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// struct FString                 ErrorString                    (CPF_Parm | CPF_NeedCtorLink)
// struct FOnlineGameSearchResult InviteResult                   (CPF_Const | CPF_Parm | CPF_OutParm)

void UOnlineGameInterfaceSteamworks::OnGameInviteAccepted(struct FString ErrorString, struct FOnlineGameSearchResult& InviteResult)
{
	static UFunction* uFnOnGameInviteAccepted = nullptr;

	if (!uFnOnGameInviteAccepted)
	{
		uFnOnGameInviteAccepted = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted");
	}

	UOnlineGameInterfaceSteamworks_execOnGameInviteAccepted_Params OnGameInviteAccepted_Params;
	memcpy_s(&OnGameInviteAccepted_Params.ErrorString, 0x10, &ErrorString, 0x10);
	memcpy_s(&OnGameInviteAccepted_Params.InviteResult, 0x10, &InviteResult, 0x10);

	this->ProcessEvent(uFnOnGameInviteAccepted, &OnGameInviteAccepted_Params, nullptr);

	memcpy_s(&InviteResult, 0x10, &OnGameInviteAccepted_Params.InviteResult, 0x10);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame
// [0x400024400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// class UOnlineGameSettings*     UpdatedGameSettings            (CPF_Parm)
// unsigned long                  bShouldRefreshOnlineData       (CPF_OptionalParm | CPF_Parm)

bool UOnlineGameInterfaceSteamworks::UpdateOnlineGame(struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData)
{
	static UFunction* uFnUpdateOnlineGame = nullptr;

	if (!uFnUpdateOnlineGame)
	{
		uFnUpdateOnlineGame = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame");
	}

	UOnlineGameInterfaceSteamworks_execUpdateOnlineGame_Params UpdateOnlineGame_Params;
	memcpy_s(&UpdateOnlineGame_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&UpdateOnlineGame_Params.UpdatedGameSettings, 0x8, &UpdatedGameSettings, 0x8);
	UpdateOnlineGame_Params.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	uFnUpdateOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUpdateOnlineGame, &UpdateOnlineGame_Params, nullptr);

	uFnUpdateOnlineGame->FunctionFlags |= 0x400;

	return UpdateOnlineGame_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.ClearUnregisterPlayerCompleteDelegate
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks_PsyNet::ClearUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate)
{
	static UFunction* uFnClearUnregisterPlayerCompleteDelegate = nullptr;

	if (!uFnClearUnregisterPlayerCompleteDelegate)
	{
		uFnClearUnregisterPlayerCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.ClearUnregisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceSteamworks_PsyNet_execClearUnregisterPlayerCompleteDelegate_Params ClearUnregisterPlayerCompleteDelegate_Params;
	memcpy_s(&ClearUnregisterPlayerCompleteDelegate_Params.UnregisterPlayerCompleteDelegate, 0x18, &UnregisterPlayerCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearUnregisterPlayerCompleteDelegate, &ClearUnregisterPlayerCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AddUnregisterPlayerCompleteDelegate
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks_PsyNet::AddUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate)
{
	static UFunction* uFnAddUnregisterPlayerCompleteDelegate = nullptr;

	if (!uFnAddUnregisterPlayerCompleteDelegate)
	{
		uFnAddUnregisterPlayerCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AddUnregisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceSteamworks_PsyNet_execAddUnregisterPlayerCompleteDelegate_Params AddUnregisterPlayerCompleteDelegate_Params;
	memcpy_s(&AddUnregisterPlayerCompleteDelegate_Params.UnregisterPlayerCompleteDelegate, 0x18, &UnregisterPlayerCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddUnregisterPlayerCompleteDelegate, &AddUnregisterPlayerCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.OnUnregisterPlayerComplete
// [0x400120000] (FUNC_Public | FUNC_Delegate | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceSteamworks_PsyNet::OnUnregisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnUnregisterPlayerComplete = nullptr;

	if (!uFnOnUnregisterPlayerComplete)
	{
		uFnOnUnregisterPlayerComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.OnUnregisterPlayerComplete");
	}

	UOnlineGameInterfaceSteamworks_PsyNet_execOnUnregisterPlayerComplete_Params OnUnregisterPlayerComplete_Params;
	memcpy_s(&OnUnregisterPlayerComplete_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&OnUnregisterPlayerComplete_Params.PlayerID, 0x48, &PlayerID, 0x48);
	OnUnregisterPlayerComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnUnregisterPlayerComplete, &OnUnregisterPlayerComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.UnregisterPlayer
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineGameInterfaceSteamworks_PsyNet::UnregisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnUnregisterPlayer = nullptr;

	if (!uFnUnregisterPlayer)
	{
		uFnUnregisterPlayer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.UnregisterPlayer");
	}

	UOnlineGameInterfaceSteamworks_PsyNet_execUnregisterPlayer_Params UnregisterPlayer_Params;
	memcpy_s(&UnregisterPlayer_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&UnregisterPlayer_Params.PlayerID, 0x48, &PlayerID, 0x48);

	uFnUnregisterPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUnregisterPlayer, &UnregisterPlayer_Params, nullptr);

	uFnUnregisterPlayer->FunctionFlags |= 0x400;

	return UnregisterPlayer_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.ClearRegisterPlayerCompleteDelegate
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks_PsyNet::ClearRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate)
{
	static UFunction* uFnClearRegisterPlayerCompleteDelegate = nullptr;

	if (!uFnClearRegisterPlayerCompleteDelegate)
	{
		uFnClearRegisterPlayerCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.ClearRegisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceSteamworks_PsyNet_execClearRegisterPlayerCompleteDelegate_Params ClearRegisterPlayerCompleteDelegate_Params;
	memcpy_s(&ClearRegisterPlayerCompleteDelegate_Params.RegisterPlayerCompleteDelegate, 0x18, &RegisterPlayerCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearRegisterPlayerCompleteDelegate, &ClearRegisterPlayerCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AddRegisterPlayerCompleteDelegate
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineGameInterfaceSteamworks_PsyNet::AddRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate)
{
	static UFunction* uFnAddRegisterPlayerCompleteDelegate = nullptr;

	if (!uFnAddRegisterPlayerCompleteDelegate)
	{
		uFnAddRegisterPlayerCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AddRegisterPlayerCompleteDelegate");
	}

	UOnlineGameInterfaceSteamworks_PsyNet_execAddRegisterPlayerCompleteDelegate_Params AddRegisterPlayerCompleteDelegate_Params;
	memcpy_s(&AddRegisterPlayerCompleteDelegate_Params.RegisterPlayerCompleteDelegate, 0x18, &RegisterPlayerCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddRegisterPlayerCompleteDelegate, &AddRegisterPlayerCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.OnRegisterPlayerComplete
// [0x400120000] (FUNC_Public | FUNC_Delegate | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineGameInterfaceSteamworks_PsyNet::OnRegisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnRegisterPlayerComplete = nullptr;

	if (!uFnOnRegisterPlayerComplete)
	{
		uFnOnRegisterPlayerComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.OnRegisterPlayerComplete");
	}

	UOnlineGameInterfaceSteamworks_PsyNet_execOnRegisterPlayerComplete_Params OnRegisterPlayerComplete_Params;
	memcpy_s(&OnRegisterPlayerComplete_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&OnRegisterPlayerComplete_Params.PlayerID, 0x48, &PlayerID, 0x48);
	OnRegisterPlayerComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnRegisterPlayerComplete, &OnRegisterPlayerComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.RegisterPlayer
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasInvited                    (CPF_Parm)

bool UOnlineGameInterfaceSteamworks_PsyNet::RegisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited)
{
	static UFunction* uFnRegisterPlayer = nullptr;

	if (!uFnRegisterPlayer)
	{
		uFnRegisterPlayer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.RegisterPlayer");
	}

	UOnlineGameInterfaceSteamworks_PsyNet_execRegisterPlayer_Params RegisterPlayer_Params;
	memcpy_s(&RegisterPlayer_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&RegisterPlayer_Params.PlayerID, 0x48, &PlayerID, 0x48);
	RegisterPlayer_Params.bWasInvited = bWasInvited;

	uFnRegisterPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRegisterPlayer, &RegisterPlayer_Params, nullptr);

	uFnRegisterPlayer->FunctionFlags |= 0x400;

	return RegisterPlayer_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.QueryNonAdvertisedData
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        StartAt                        (CPF_Parm)
// int32_t                        NumberToQuery                  (CPF_Parm)

bool UOnlineGameInterfaceSteamworks_PsyNet::QueryNonAdvertisedData(int32_t StartAt, int32_t NumberToQuery)
{
	static UFunction* uFnQueryNonAdvertisedData = nullptr;

	if (!uFnQueryNonAdvertisedData)
	{
		uFnQueryNonAdvertisedData = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.QueryNonAdvertisedData");
	}

	UOnlineGameInterfaceSteamworks_PsyNet_execQueryNonAdvertisedData_Params QueryNonAdvertisedData_Params;
	memcpy_s(&QueryNonAdvertisedData_Params.StartAt, 0x4, &StartAt, 0x4);
	memcpy_s(&QueryNonAdvertisedData_Params.NumberToQuery, 0x4, &NumberToQuery, 0x4);

	this->ProcessEvent(uFnQueryNonAdvertisedData, &QueryNonAdvertisedData_Params, nullptr);

	return QueryNonAdvertisedData_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AcceptGameInvite
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FName                   SessionName                    (CPF_Parm)

bool UOnlineGameInterfaceSteamworks_PsyNet::AcceptGameInvite(uint8_t LocalUserNum, struct FName SessionName)
{
	static UFunction* uFnAcceptGameInvite = nullptr;

	if (!uFnAcceptGameInvite)
	{
		uFnAcceptGameInvite = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.AcceptGameInvite");
	}

	UOnlineGameInterfaceSteamworks_PsyNet_execAcceptGameInvite_Params AcceptGameInvite_Params;
	memcpy_s(&AcceptGameInvite_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AcceptGameInvite_Params.SessionName, 0x8, &SessionName, 0x8);

	this->ProcessEvent(uFnAcceptGameInvite, &AcceptGameInvite_Params, nullptr);

	return AcceptGameInvite_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.UpdateOnlineGame
// [0x400024000] (FUNC_NetMulticast | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// class UOnlineGameSettings*     UpdatedGameSettings            (CPF_Parm)
// unsigned long                  bShouldRefreshOnlineData       (CPF_OptionalParm | CPF_Parm)

bool UOnlineGameInterfaceSteamworks_PsyNet::UpdateOnlineGame(struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData)
{
	static UFunction* uFnUpdateOnlineGame = nullptr;

	if (!uFnUpdateOnlineGame)
	{
		uFnUpdateOnlineGame = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.UpdateOnlineGame");
	}

	UOnlineGameInterfaceSteamworks_PsyNet_execUpdateOnlineGame_Params UpdateOnlineGame_Params;
	memcpy_s(&UpdateOnlineGame_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&UpdateOnlineGame_Params.UpdatedGameSettings, 0x8, &UpdatedGameSettings, 0x8);
	UpdateOnlineGame_Params.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	this->ProcessEvent(uFnUpdateOnlineGame, &UpdateOnlineGame_Params, nullptr);

	return UpdateOnlineGame_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.SetFriendJoinLocation
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            JoinablePlayerID               (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 ServerAddress                  (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        Visibility                     (CPF_Parm)

void UOnlineGameInterfaceSteamworks_PsyNet::SetFriendJoinLocation(struct FUniqueNetId JoinablePlayerID, struct FString ServerAddress, uint8_t Visibility)
{
	static UFunction* uFnSetFriendJoinLocation = nullptr;

	if (!uFnSetFriendJoinLocation)
	{
		uFnSetFriendJoinLocation = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.SetFriendJoinLocation");
	}

	UOnlineGameInterfaceSteamworks_PsyNet_execSetFriendJoinLocation_Params SetFriendJoinLocation_Params;
	memcpy_s(&SetFriendJoinLocation_Params.JoinablePlayerID, 0x48, &JoinablePlayerID, 0x48);
	memcpy_s(&SetFriendJoinLocation_Params.ServerAddress, 0x10, &ServerAddress, 0x10);
	memcpy_s(&SetFriendJoinLocation_Params.Visibility, 0x1, &Visibility, 0x1);

	uFnSetFriendJoinLocation->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetFriendJoinLocation, &SetFriendJoinLocation_Params, nullptr);

	uFnSetFriendJoinLocation->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.KickPlayer
// [0x400420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        Reason                         (CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            PlayerID                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::KickPlayer(uint8_t Reason, struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnKickPlayer = nullptr;

	if (!uFnKickPlayer)
	{
		uFnKickPlayer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.KickPlayer");
	}

	UOnlineLobbyInterfaceSteamworks_execKickPlayer_Params KickPlayer_Params;
	memcpy_s(&KickPlayer_Params.Reason, 0x1, &Reason, 0x1);
	memcpy_s(&KickPlayer_Params.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&KickPlayer_Params.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(uFnKickPlayer, &KickPlayer_Params, nullptr);

	memcpy_s(&LobbyId, 0x10, &KickPlayer_Params.LobbyId, 0x10);
	memcpy_s(&PlayerID, 0x48, &KickPlayer_Params.PlayerID, 0x48);

	return KickPlayer_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyFromCommandline
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  bMarkAsJoined                  (CPF_OptionalParm | CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceSteamworks::GetLobbyFromCommandline(unsigned long bMarkAsJoined, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* uFnGetLobbyFromCommandline = nullptr;

	if (!uFnGetLobbyFromCommandline)
	{
		uFnGetLobbyFromCommandline = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyFromCommandline");
	}

	UOnlineLobbyInterfaceSteamworks_execGetLobbyFromCommandline_Params GetLobbyFromCommandline_Params;
	GetLobbyFromCommandline_Params.bMarkAsJoined = bMarkAsJoined;
	memcpy_s(&GetLobbyFromCommandline_Params.LobbyId, 0x10, &LobbyId, 0x10);

	uFnGetLobbyFromCommandline->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetLobbyFromCommandline, &GetLobbyFromCommandline_Params, nullptr);

	uFnGetLobbyFromCommandline->FunctionFlags |= 0x400;

	memcpy_s(&LobbyId, 0x10, &GetLobbyFromCommandline_Params.LobbyId, 0x10);

	return GetLobbyFromCommandline_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ShowInviteUI
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Const | CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceSteamworks::ShowInviteUI(uint8_t LocalUserNum, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* uFnShowInviteUI = nullptr;

	if (!uFnShowInviteUI)
	{
		uFnShowInviteUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.ShowInviteUI");
	}

	UOnlineLobbyInterfaceSteamworks_execShowInviteUI_Params ShowInviteUI_Params;
	memcpy_s(&ShowInviteUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ShowInviteUI_Params.LobbyId, 0x10, &LobbyId, 0x10);

	uFnShowInviteUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnShowInviteUI, &ShowInviteUI_Params, nullptr);

	uFnShowInviteUI->FunctionFlags |= 0x400;

	memcpy_s(&LobbyId, 0x10, &ShowInviteUI_Params.LobbyId, 0x10);

	return ShowInviteUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.InviteToLobby
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            PlayerID                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::InviteToLobby(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnInviteToLobby = nullptr;

	if (!uFnInviteToLobby)
	{
		uFnInviteToLobby = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.InviteToLobby");
	}

	UOnlineLobbyInterfaceSteamworks_execInviteToLobby_Params InviteToLobby_Params;
	memcpy_s(&InviteToLobby_Params.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&InviteToLobby_Params.PlayerID, 0x48, &PlayerID, 0x48);

	uFnInviteToLobby->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnInviteToLobby, &InviteToLobby_Params, nullptr);

	uFnInviteToLobby->FunctionFlags |= 0x400;

	memcpy_s(&LobbyId, 0x10, &InviteToLobby_Params.LobbyId, 0x10);
	memcpy_s(&PlayerID, 0x48, &InviteToLobby_Params.PlayerID, 0x48);

	return InviteToLobby_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.CanInviteToLobby
// [0x400420002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            PlayerID                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::CanInviteToLobby(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnCanInviteToLobby = nullptr;

	if (!uFnCanInviteToLobby)
	{
		uFnCanInviteToLobby = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.CanInviteToLobby");
	}

	UOnlineLobbyInterfaceSteamworks_execCanInviteToLobby_Params CanInviteToLobby_Params;
	memcpy_s(&CanInviteToLobby_Params.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&CanInviteToLobby_Params.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(uFnCanInviteToLobby, &CanInviteToLobby_Params, nullptr);

	memcpy_s(&LobbyId, 0x10, &CanInviteToLobby_Params.LobbyId, 0x10);
	memcpy_s(&PlayerID, 0x48, &CanInviteToLobby_Params.PlayerID, 0x48);

	return CanInviteToLobby_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyOwner
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            NewOwner                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::SetLobbyOwner(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& NewOwner)
{
	static UFunction* uFnSetLobbyOwner = nullptr;

	if (!uFnSetLobbyOwner)
	{
		uFnSetLobbyOwner = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyOwner");
	}

	UOnlineLobbyInterfaceSteamworks_execSetLobbyOwner_Params SetLobbyOwner_Params;
	memcpy_s(&SetLobbyOwner_Params.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&SetLobbyOwner_Params.NewOwner, 0x48, &NewOwner, 0x48);

	uFnSetLobbyOwner->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetLobbyOwner, &SetLobbyOwner_Params, nullptr);

	uFnSetLobbyOwner->FunctionFlags |= 0x400;

	memcpy_s(&LobbyId, 0x10, &SetLobbyOwner_Params.LobbyId, 0x10);
	memcpy_s(&NewOwner, 0x48, &SetLobbyOwner_Params.NewOwner, 0x48);

	return SetLobbyOwner_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyLock
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  bLocked                        (CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceSteamworks::SetLobbyLock(unsigned long bLocked, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* uFnSetLobbyLock = nullptr;

	if (!uFnSetLobbyLock)
	{
		uFnSetLobbyLock = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyLock");
	}

	UOnlineLobbyInterfaceSteamworks_execSetLobbyLock_Params SetLobbyLock_Params;
	SetLobbyLock_Params.bLocked = bLocked;
	memcpy_s(&SetLobbyLock_Params.LobbyId, 0x10, &LobbyId, 0x10);

	uFnSetLobbyLock->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetLobbyLock, &SetLobbyLock_Params, nullptr);

	uFnSetLobbyLock->FunctionFlags |= 0x400;

	memcpy_s(&LobbyId, 0x10, &SetLobbyLock_Params.LobbyId, 0x10);

	return SetLobbyLock_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyType
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        Type                           (CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceSteamworks::SetLobbyType(uint8_t Type, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* uFnSetLobbyType = nullptr;

	if (!uFnSetLobbyType)
	{
		uFnSetLobbyType = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyType");
	}

	UOnlineLobbyInterfaceSteamworks_execSetLobbyType_Params SetLobbyType_Params;
	memcpy_s(&SetLobbyType_Params.Type, 0x1, &Type, 0x1);
	memcpy_s(&SetLobbyType_Params.LobbyId, 0x10, &LobbyId, 0x10);

	uFnSetLobbyType->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetLobbyType, &SetLobbyType_Params, nullptr);

	uFnSetLobbyType->FunctionFlags |= 0x400;

	memcpy_s(&LobbyId, 0x10, &SetLobbyType_Params.LobbyId, 0x10);

	return SetLobbyType_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyServer
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 ServerIP                       (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            ServerUID                      (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::SetLobbyServer(struct FString ServerIP, struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& ServerUID)
{
	static UFunction* uFnSetLobbyServer = nullptr;

	if (!uFnSetLobbyServer)
	{
		uFnSetLobbyServer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyServer");
	}

	UOnlineLobbyInterfaceSteamworks_execSetLobbyServer_Params SetLobbyServer_Params;
	memcpy_s(&SetLobbyServer_Params.ServerIP, 0x10, &ServerIP, 0x10);
	memcpy_s(&SetLobbyServer_Params.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&SetLobbyServer_Params.ServerUID, 0x48, &ServerUID, 0x48);

	uFnSetLobbyServer->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetLobbyServer, &SetLobbyServer_Params, nullptr);

	uFnSetLobbyServer->FunctionFlags |= 0x400;

	memcpy_s(&LobbyId, 0x10, &SetLobbyServer_Params.LobbyId, 0x10);
	memcpy_s(&ServerUID, 0x48, &SetLobbyServer_Params.ServerUID, 0x48);

	return SetLobbyServer_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.RemoveLobbySetting
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Key                            (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceSteamworks::RemoveLobbySetting(struct FString Key, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* uFnRemoveLobbySetting = nullptr;

	if (!uFnRemoveLobbySetting)
	{
		uFnRemoveLobbySetting = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.RemoveLobbySetting");
	}

	UOnlineLobbyInterfaceSteamworks_execRemoveLobbySetting_Params RemoveLobbySetting_Params;
	memcpy_s(&RemoveLobbySetting_Params.Key, 0x10, &Key, 0x10);
	memcpy_s(&RemoveLobbySetting_Params.LobbyId, 0x10, &LobbyId, 0x10);

	uFnRemoveLobbySetting->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRemoveLobbySetting, &RemoveLobbySetting_Params, nullptr);

	uFnRemoveLobbySetting->FunctionFlags |= 0x400;

	memcpy_s(&LobbyId, 0x10, &RemoveLobbySetting_Params.LobbyId, 0x10);

	return RemoveLobbySetting_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbySetting
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Key                            (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Value                          (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceSteamworks::SetLobbySetting(struct FString Key, struct FString Value, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* uFnSetLobbySetting = nullptr;

	if (!uFnSetLobbySetting)
	{
		uFnSetLobbySetting = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbySetting");
	}

	UOnlineLobbyInterfaceSteamworks_execSetLobbySetting_Params SetLobbySetting_Params;
	memcpy_s(&SetLobbySetting_Params.Key, 0x10, &Key, 0x10);
	memcpy_s(&SetLobbySetting_Params.Value, 0x10, &Value, 0x10);
	memcpy_s(&SetLobbySetting_Params.LobbyId, 0x10, &LobbyId, 0x10);

	uFnSetLobbySetting->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetLobbySetting, &SetLobbySetting_Params, nullptr);

	uFnSetLobbySetting->FunctionFlags |= 0x400;

	memcpy_s(&LobbyId, 0x10, &SetLobbySetting_Params.LobbyId, 0x10);

	return SetLobbySetting_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyAdmin
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// struct FUniqueNetId            AdminId                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::GetLobbyAdmin(struct FUniqueLobbyId& LobbyId, struct FUniqueNetId& AdminId)
{
	static UFunction* uFnGetLobbyAdmin = nullptr;

	if (!uFnGetLobbyAdmin)
	{
		uFnGetLobbyAdmin = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.GetLobbyAdmin");
	}

	UOnlineLobbyInterfaceSteamworks_execGetLobbyAdmin_Params GetLobbyAdmin_Params;
	memcpy_s(&GetLobbyAdmin_Params.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&GetLobbyAdmin_Params.AdminId, 0x48, &AdminId, 0x48);

	uFnGetLobbyAdmin->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetLobbyAdmin, &GetLobbyAdmin_Params, nullptr);

	uFnGetLobbyAdmin->FunctionFlags |= 0x400;

	memcpy_s(&LobbyId, 0x10, &GetLobbyAdmin_Params.LobbyId, 0x10);
	memcpy_s(&AdminId, 0x48, &GetLobbyAdmin_Params.AdminId, 0x48);

	return GetLobbyAdmin_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyKicked
// [0x00520001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        AdminIndex                     (CPF_Parm)
// struct FActiveLobbyInfo        Lobby                          (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineLobbyInterfaceSteamworks::OnLobbyKicked(int32_t AdminIndex, struct FActiveLobbyInfo& Lobby)
{
	static UFunction* uFnOnLobbyKicked = nullptr;

	if (!uFnOnLobbyKicked)
	{
		uFnOnLobbyKicked = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.OnLobbyKicked");
	}

	UOnlineLobbyInterfaceSteamworks_execOnLobbyKicked_Params OnLobbyKicked_Params;
	memcpy_s(&OnLobbyKicked_Params.AdminIndex, 0x4, &AdminIndex, 0x4);
	memcpy_s(&OnLobbyKicked_Params.Lobby, 0x30, &Lobby, 0x30);

	this->ProcessEvent(uFnOnLobbyKicked, &OnLobbyKicked_Params, nullptr);

	memcpy_s(&Lobby, 0x30, &OnLobbyKicked_Params.Lobby, 0x30);
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SendLobbyBinaryData
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)
// TArray<uint8_t>                Data                           (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::SendLobbyBinaryData(struct FUniqueLobbyId& LobbyId, TArray<uint8_t>& Data)
{
	static UFunction* uFnSendLobbyBinaryData = nullptr;

	if (!uFnSendLobbyBinaryData)
	{
		uFnSendLobbyBinaryData = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SendLobbyBinaryData");
	}

	UOnlineLobbyInterfaceSteamworks_execSendLobbyBinaryData_Params SendLobbyBinaryData_Params;
	memcpy_s(&SendLobbyBinaryData_Params.LobbyId, 0x10, &LobbyId, 0x10);
	memcpy_s(&SendLobbyBinaryData_Params.Data, 0x10, &Data, 0x10);

	uFnSendLobbyBinaryData->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSendLobbyBinaryData, &SendLobbyBinaryData_Params, nullptr);

	uFnSendLobbyBinaryData->FunctionFlags |= 0x400;

	memcpy_s(&LobbyId, 0x10, &SendLobbyBinaryData_Params.LobbyId, 0x10);
	memcpy_s(&Data, 0x10, &SendLobbyBinaryData_Params.Data, 0x10);

	return SendLobbyBinaryData_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyUserSetting
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Key                            (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Value                          (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceSteamworks::SetLobbyUserSetting(struct FString Key, struct FString Value, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* uFnSetLobbyUserSetting = nullptr;

	if (!uFnSetLobbyUserSetting)
	{
		uFnSetLobbyUserSetting = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.SetLobbyUserSetting");
	}

	UOnlineLobbyInterfaceSteamworks_execSetLobbyUserSetting_Params SetLobbyUserSetting_Params;
	memcpy_s(&SetLobbyUserSetting_Params.Key, 0x10, &Key, 0x10);
	memcpy_s(&SetLobbyUserSetting_Params.Value, 0x10, &Value, 0x10);
	memcpy_s(&SetLobbyUserSetting_Params.LobbyId, 0x10, &LobbyId, 0x10);

	uFnSetLobbyUserSetting->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetLobbyUserSetting, &SetLobbyUserSetting_Params, nullptr);

	uFnSetLobbyUserSetting->FunctionFlags |= 0x400;

	memcpy_s(&LobbyId, 0x10, &SetLobbyUserSetting_Params.LobbyId, 0x10);

	return SetLobbyUserSetting_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.LeaveLobby
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceSteamworks::LeaveLobby(struct FUniqueLobbyId& LobbyId)
{
	static UFunction* uFnLeaveLobby = nullptr;

	if (!uFnLeaveLobby)
	{
		uFnLeaveLobby = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.LeaveLobby");
	}

	UOnlineLobbyInterfaceSteamworks_execLeaveLobby_Params LeaveLobby_Params;
	memcpy_s(&LeaveLobby_Params.LobbyId, 0x10, &LobbyId, 0x10);

	uFnLeaveLobby->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnLeaveLobby, &LeaveLobby_Params, nullptr);

	uFnLeaveLobby->FunctionFlags |= 0x400;

	memcpy_s(&LobbyId, 0x10, &LeaveLobby_Params.LobbyId, 0x10);

	return LeaveLobby_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.JoinLobby
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        LocalPlayerNum                 (CPF_Parm)
// struct FUniqueLobbyId          LobbyId                        (CPF_Const | CPF_Parm | CPF_OutParm)

bool UOnlineLobbyInterfaceSteamworks::JoinLobby(int32_t LocalPlayerNum, struct FUniqueLobbyId& LobbyId)
{
	static UFunction* uFnJoinLobby = nullptr;

	if (!uFnJoinLobby)
	{
		uFnJoinLobby = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.JoinLobby");
	}

	UOnlineLobbyInterfaceSteamworks_execJoinLobby_Params JoinLobby_Params;
	memcpy_s(&JoinLobby_Params.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);
	memcpy_s(&JoinLobby_Params.LobbyId, 0x10, &LobbyId, 0x10);

	uFnJoinLobby->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnJoinLobby, &JoinLobby_Params, nullptr);

	uFnJoinLobby->FunctionFlags |= 0x400;

	memcpy_s(&LobbyId, 0x10, &JoinLobby_Params.LobbyId, 0x10);

	return JoinLobby_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.UpdateFoundLobbies
// [0x400024400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueLobbyId          LobbyId                        (CPF_OptionalParm | CPF_Parm)

bool UOnlineLobbyInterfaceSteamworks::UpdateFoundLobbies(struct FUniqueLobbyId LobbyId)
{
	static UFunction* uFnUpdateFoundLobbies = nullptr;

	if (!uFnUpdateFoundLobbies)
	{
		uFnUpdateFoundLobbies = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.UpdateFoundLobbies");
	}

	UOnlineLobbyInterfaceSteamworks_execUpdateFoundLobbies_Params UpdateFoundLobbies_Params;
	memcpy_s(&UpdateFoundLobbies_Params.LobbyId, 0x10, &LobbyId, 0x10);

	uFnUpdateFoundLobbies->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUpdateFoundLobbies, &UpdateFoundLobbies_Params, nullptr);

	uFnUpdateFoundLobbies->FunctionFlags |= 0x400;

	return UpdateFoundLobbies_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.FindLobbies
// [0x400024400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        MaxResults                     (CPF_OptionalParm | CPF_Parm)
// TArray<struct FLobbyFilter>    Filters                        (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FLobbySortFilter> SortFilters                    (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// int32_t                        MinSlots                       (CPF_OptionalParm | CPF_Parm)
// uint8_t                        Distance                       (CPF_OptionalParm | CPF_Parm)

bool UOnlineLobbyInterfaceSteamworks::FindLobbies(int32_t MaxResults, TArray<struct FLobbyFilter> Filters, TArray<struct FLobbySortFilter> SortFilters, int32_t MinSlots, uint8_t Distance)
{
	static UFunction* uFnFindLobbies = nullptr;

	if (!uFnFindLobbies)
	{
		uFnFindLobbies = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.FindLobbies");
	}

	UOnlineLobbyInterfaceSteamworks_execFindLobbies_Params FindLobbies_Params;
	memcpy_s(&FindLobbies_Params.MaxResults, 0x4, &MaxResults, 0x4);
	memcpy_s(&FindLobbies_Params.Filters, 0x10, &Filters, 0x10);
	memcpy_s(&FindLobbies_Params.SortFilters, 0x10, &SortFilters, 0x10);
	memcpy_s(&FindLobbies_Params.MinSlots, 0x4, &MinSlots, 0x4);
	memcpy_s(&FindLobbies_Params.Distance, 0x1, &Distance, 0x1);

	uFnFindLobbies->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnFindLobbies, &FindLobbies_Params, nullptr);

	uFnFindLobbies->FunctionFlags |= 0x400;

	return FindLobbies_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.CreateLobby
// [0x400024400] (FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        LocalPlayerNum                 (CPF_Parm)
// int32_t                        MaxPlayers                     (CPF_Parm)
// uint8_t                        Type                           (CPF_OptionalParm | CPF_Parm)
// TArray<struct FLobbyMetaData>  InitialSettings                (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineLobbyInterfaceSteamworks::CreateLobby(int32_t LocalPlayerNum, int32_t MaxPlayers, uint8_t Type, TArray<struct FLobbyMetaData> InitialSettings)
{
	static UFunction* uFnCreateLobby = nullptr;

	if (!uFnCreateLobby)
	{
		uFnCreateLobby = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks.CreateLobby");
	}

	UOnlineLobbyInterfaceSteamworks_execCreateLobby_Params CreateLobby_Params;
	memcpy_s(&CreateLobby_Params.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);
	memcpy_s(&CreateLobby_Params.MaxPlayers, 0x4, &MaxPlayers, 0x4);
	memcpy_s(&CreateLobby_Params.Type, 0x1, &Type, 0x1);
	memcpy_s(&CreateLobby_Params.InitialSettings, 0x10, &InitialSettings, 0x10);

	uFnCreateLobby->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCreateLobby, &CreateLobby_Params, nullptr);

	uFnCreateLobby->FunctionFlags |= 0x400;

	return CreateLobby_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetBlockList
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FOnlineFriend>   OutBlockList                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::GetBlockList(uint8_t LocalUserNum, TArray<struct FOnlineFriend>& OutBlockList)
{
	static UFunction* uFnGetBlockList = nullptr;

	if (!uFnGetBlockList)
	{
		uFnGetBlockList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetBlockList");
	}

	UOnlineSubsystemSteamworks_execGetBlockList_Params GetBlockList_Params;
	memcpy_s(&GetBlockList_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&GetBlockList_Params.OutBlockList, 0x10, &OutBlockList, 0x10);

	this->ProcessEvent(uFnGetBlockList, &GetBlockList_Params, nullptr);

	memcpy_s(&OutBlockList, 0x10, &GetBlockList_Params.OutBlockList, 0x10);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddBlockListUpdatedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         Delegate                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddBlockListUpdatedDelegate(uint8_t LocalUserNum, struct FScriptDelegate Delegate)
{
	static UFunction* uFnAddBlockListUpdatedDelegate = nullptr;

	if (!uFnAddBlockListUpdatedDelegate)
	{
		uFnAddBlockListUpdatedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddBlockListUpdatedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddBlockListUpdatedDelegate_Params AddBlockListUpdatedDelegate_Params;
	memcpy_s(&AddBlockListUpdatedDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddBlockListUpdatedDelegate_Params.Delegate, 0x18, &Delegate, 0x18);

	this->ProcessEvent(uFnAddBlockListUpdatedDelegate, &AddBlockListUpdatedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnBlockListUpdated
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnBlockListUpdated(uint8_t LocalUserNum)
{
	static UFunction* uFnOnBlockListUpdated = nullptr;

	if (!uFnOnBlockListUpdated)
	{
		uFnOnBlockListUpdated = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnBlockListUpdated");
	}

	UOnlineSubsystemSteamworks_execOnBlockListUpdated_Params OnBlockListUpdated_Params;
	memcpy_s(&OnBlockListUpdated_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnOnBlockListUpdated, &OnBlockListUpdated_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EpicIDToPlatformID
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            EpicAccountId                  (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        TargetPlatform                 (CPF_Parm)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::EpicIDToPlatformID(struct FUniqueNetId EpicAccountId, uint8_t TargetPlatform, struct FScriptDelegate Callback)
{
	static UFunction* uFnEpicIDToPlatformID = nullptr;

	if (!uFnEpicIDToPlatformID)
	{
		uFnEpicIDToPlatformID = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EpicIDToPlatformID");
	}

	UOnlineSubsystemSteamworks_execEpicIDToPlatformID_Params EpicIDToPlatformID_Params;
	memcpy_s(&EpicIDToPlatformID_Params.EpicAccountId, 0x48, &EpicAccountId, 0x48);
	memcpy_s(&EpicIDToPlatformID_Params.TargetPlatform, 0x1, &TargetPlatform, 0x1);
	memcpy_s(&EpicIDToPlatformID_Params.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(uFnEpicIDToPlatformID, &EpicIDToPlatformID_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EpicIDToPlatformIDCallback
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PlatformAccountId              (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Error                          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::EpicIDToPlatformIDCallback(struct FUniqueNetId PlatformAccountId, struct FString Error)
{
	static UFunction* uFnEpicIDToPlatformIDCallback = nullptr;

	if (!uFnEpicIDToPlatformIDCallback)
	{
		uFnEpicIDToPlatformIDCallback = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EpicIDToPlatformIDCallback");
	}

	UOnlineSubsystemSteamworks_execEpicIDToPlatformIDCallback_Params EpicIDToPlatformIDCallback_Params;
	memcpy_s(&EpicIDToPlatformIDCallback_Params.PlatformAccountId, 0x48, &PlatformAccountId, 0x48);
	memcpy_s(&EpicIDToPlatformIDCallback_Params.Error, 0x10, &Error, 0x10);

	this->ProcessEvent(uFnEpicIDToPlatformIDCallback, &EpicIDToPlatformIDCallback_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetEpicAccountId
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FUniqueNetId            PlatformId                     (CPF_Parm | CPF_NeedCtorLink)

struct FUniqueNetId UOnlineSubsystemSteamworks::GetEpicAccountId(struct FUniqueNetId PlatformId)
{
	static UFunction* uFnGetEpicAccountId = nullptr;

	if (!uFnGetEpicAccountId)
	{
		uFnGetEpicAccountId = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetEpicAccountId");
	}

	UOnlineSubsystemSteamworks_execGetEpicAccountId_Params GetEpicAccountId_Params;
	memcpy_s(&GetEpicAccountId_Params.PlatformId, 0x48, &PlatformId, 0x48);

	this->ProcessEvent(uFnGetEpicAccountId, &GetEpicAccountId_Params, nullptr);

	return GetEpicAccountId_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RefreshNetworkErrorToggle
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::RefreshNetworkErrorToggle()
{
	static UFunction* uFnRefreshNetworkErrorToggle = nullptr;

	if (!uFnRefreshNetworkErrorToggle)
	{
		uFnRefreshNetworkErrorToggle = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RefreshNetworkErrorToggle");
	}

	UOnlineSubsystemSteamworks_execRefreshNetworkErrorToggle_Params RefreshNetworkErrorToggle_Params;

	this->ProcessEvent(uFnRefreshNetworkErrorToggle, &RefreshNetworkErrorToggle_Params, nullptr);

	return RefreshNetworkErrorToggle_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.TriggerScreenshot
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::TriggerScreenshot()
{
	static UFunction* uFnTriggerScreenshot = nullptr;

	if (!uFnTriggerScreenshot)
	{
		uFnTriggerScreenshot = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.TriggerScreenshot");
	}

	UOnlineSubsystemSteamworks_execTriggerScreenshot_Params TriggerScreenshot_Params;

	uFnTriggerScreenshot->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnTriggerScreenshot, &TriggerScreenshot_Params, nullptr);

	uFnTriggerScreenshot->FunctionFlags |= 0x400;

	return TriggerScreenshot_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerConnectionStatusChanged
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        LocalPlayerNum                 (CPF_Parm)
// unsigned long                  bConnected                     (CPF_Parm)

void UOnlineSubsystemSteamworks::OnControllerConnectionStatusChanged(int32_t LocalPlayerNum, unsigned long bConnected)
{
	static UFunction* uFnOnControllerConnectionStatusChanged = nullptr;

	if (!uFnOnControllerConnectionStatusChanged)
	{
		uFnOnControllerConnectionStatusChanged = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerConnectionStatusChanged");
	}

	UOnlineSubsystemSteamworks_execOnControllerConnectionStatusChanged_Params OnControllerConnectionStatusChanged_Params;
	memcpy_s(&OnControllerConnectionStatusChanged_Params.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);
	OnControllerConnectionStatusChanged_Params.bConnected = bConnected;

	uFnOnControllerConnectionStatusChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnOnControllerConnectionStatusChanged, &OnControllerConnectionStatusChanged_Params, nullptr);

	uFnOnControllerConnectionStatusChanged->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerInputAPIChanged
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        LocalPlayerNum                 (CPF_Parm)
// uint8_t                        InputAPI                       (CPF_Parm)

void UOnlineSubsystemSteamworks::OnControllerInputAPIChanged(int32_t LocalPlayerNum, uint8_t InputAPI)
{
	static UFunction* uFnOnControllerInputAPIChanged = nullptr;

	if (!uFnOnControllerInputAPIChanged)
	{
		uFnOnControllerInputAPIChanged = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerInputAPIChanged");
	}

	UOnlineSubsystemSteamworks_execOnControllerInputAPIChanged_Params OnControllerInputAPIChanged_Params;
	memcpy_s(&OnControllerInputAPIChanged_Params.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);
	memcpy_s(&OnControllerInputAPIChanged_Params.InputAPI, 0x1, &InputAPI, 0x1);

	uFnOnControllerInputAPIChanged->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnOnControllerInputAPIChanged, &OnControllerInputAPIChanged_Params, nullptr);

	uFnOnControllerInputAPIChanged->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetControllerPlatform
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        LocalPlayerNum                 (CPF_Parm)

uint8_t UOnlineSubsystemSteamworks::GetControllerPlatform(int32_t LocalPlayerNum)
{
	static UFunction* uFnGetControllerPlatform = nullptr;

	if (!uFnGetControllerPlatform)
	{
		uFnGetControllerPlatform = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetControllerPlatform");
	}

	UOnlineSubsystemSteamworks_execGetControllerPlatform_Params GetControllerPlatform_Params;
	memcpy_s(&GetControllerPlatform_Params.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);

	uFnGetControllerPlatform->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetControllerPlatform, &GetControllerPlatform_Params, nullptr);

	uFnGetControllerPlatform->FunctionFlags |= 0x400;

	return GetControllerPlatform_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetControllerID
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        LocalPlayerNum                 (CPF_Parm)

int32_t UOnlineSubsystemSteamworks::GetControllerID(int32_t LocalPlayerNum)
{
	static UFunction* uFnGetControllerID = nullptr;

	if (!uFnGetControllerID)
	{
		uFnGetControllerID = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetControllerID");
	}

	UOnlineSubsystemSteamworks_execGetControllerID_Params GetControllerID_Params;
	memcpy_s(&GetControllerID_Params.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);

	uFnGetControllerID->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetControllerID, &GetControllerID_Params, nullptr);

	uFnGetControllerID->FunctionFlags |= 0x400;

	return GetControllerID_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetConnectedControllerNames
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<struct FName>           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<struct FName> UOnlineSubsystemSteamworks::GetConnectedControllerNames()
{
	static UFunction* uFnGetConnectedControllerNames = nullptr;

	if (!uFnGetConnectedControllerNames)
	{
		uFnGetConnectedControllerNames = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetConnectedControllerNames");
	}

	UOnlineSubsystemSteamworks_execGetConnectedControllerNames_Params GetConnectedControllerNames_Params;

	uFnGetConnectedControllerNames->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetConnectedControllerNames, &GetConnectedControllerNames_Params, nullptr);

	uFnGetConnectedControllerNames->FunctionFlags |= 0x400;

	return GetConnectedControllerNames_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLocalPlayerRemoved
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        LocalPlayerNum                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLocalPlayerRemoved(int32_t LocalPlayerNum)
{
	static UFunction* uFnOnLocalPlayerRemoved = nullptr;

	if (!uFnOnLocalPlayerRemoved)
	{
		uFnOnLocalPlayerRemoved = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLocalPlayerRemoved");
	}

	UOnlineSubsystemSteamworks_execOnLocalPlayerRemoved_Params OnLocalPlayerRemoved_Params;
	memcpy_s(&OnLocalPlayerRemoved_Params.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);

	uFnOnLocalPlayerRemoved->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnOnLocalPlayerRemoved, &OnLocalPlayerRemoved_Params, nullptr);

	uFnOnLocalPlayerRemoved->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterController
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        LocalPlayerNum                 (CPF_Parm)

void UOnlineSubsystemSteamworks::UnregisterController(int32_t LocalPlayerNum)
{
	static UFunction* uFnUnregisterController = nullptr;

	if (!uFnUnregisterController)
	{
		uFnUnregisterController = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterController");
	}

	UOnlineSubsystemSteamworks_execUnregisterController_Params UnregisterController_Params;
	memcpy_s(&UnregisterController_Params.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);

	uFnUnregisterController->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUnregisterController, &UnregisterController_Params, nullptr);

	uFnUnregisterController->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterController
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        LocalPlayerNum                 (CPF_Parm)
// int32_t                        ControllerId                   (CPF_OptionalParm | CPF_Parm)

void UOnlineSubsystemSteamworks::RegisterController(int32_t LocalPlayerNum, int32_t ControllerId)
{
	static UFunction* uFnRegisterController = nullptr;

	if (!uFnRegisterController)
	{
		uFnRegisterController = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterController");
	}

	UOnlineSubsystemSteamworks_execRegisterController_Params RegisterController_Params;
	memcpy_s(&RegisterController_Params.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);
	memcpy_s(&RegisterController_Params.ControllerId, 0x4, &ControllerId, 0x4);

	uFnRegisterController->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRegisterController, &RegisterController_Params, nullptr);

	uFnRegisterController->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanRegisterController
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        LocalPlayerNum                 (CPF_Parm)

bool UOnlineSubsystemSteamworks::CanRegisterController(int32_t LocalPlayerNum)
{
	static UFunction* uFnCanRegisterController = nullptr;

	if (!uFnCanRegisterController)
	{
		uFnCanRegisterController = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanRegisterController");
	}

	UOnlineSubsystemSteamworks_execCanRegisterController_Params CanRegisterController_Params;
	memcpy_s(&CanRegisterController_Params.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);

	uFnCanRegisterController->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCanRegisterController, &CanRegisterController_Params, nullptr);

	uFnCanRegisterController->FunctionFlags |= 0x400;

	return CanRegisterController_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowBindings
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowBindings(int32_t ControllerId)
{
	static UFunction* uFnShowBindings = nullptr;

	if (!uFnShowBindings)
	{
		uFnShowBindings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowBindings");
	}

	UOnlineSubsystemSteamworks_execShowBindings_Params ShowBindings_Params;
	memcpy_s(&ShowBindings_Params.ControllerId, 0x4, &ControllerId, 0x4);

	uFnShowBindings->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnShowBindings, &ShowBindings_Params, nullptr);

	uFnShowBindings->FunctionFlags |= 0x400;

	return ShowBindings_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetControllerLayout
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// int32_t                        ControllerId                   (CPF_Parm)
// struct FName                   LayoutName                     (CPF_Parm)

void UOnlineSubsystemSteamworks::SetControllerLayout(int32_t ControllerId, struct FName LayoutName)
{
	static UFunction* uFnSetControllerLayout = nullptr;

	if (!uFnSetControllerLayout)
	{
		uFnSetControllerLayout = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetControllerLayout");
	}

	UOnlineSubsystemSteamworks_execSetControllerLayout_Params SetControllerLayout_Params;
	memcpy_s(&SetControllerLayout_Params.ControllerId, 0x4, &ControllerId, 0x4);
	memcpy_s(&SetControllerLayout_Params.LayoutName, 0x8, &LayoutName, 0x8);

	uFnSetControllerLayout->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetControllerLayout, &SetControllerLayout_Params, nullptr);

	uFnSetControllerLayout->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetInputAPI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        TargetAPI                      (CPF_Parm)

void UOnlineSubsystemSteamworks::SetInputAPI(uint8_t TargetAPI)
{
	static UFunction* uFnSetInputAPI = nullptr;

	if (!uFnSetInputAPI)
	{
		uFnSetInputAPI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetInputAPI");
	}

	UOnlineSubsystemSteamworks_execSetInputAPI_Params SetInputAPI_Params;
	memcpy_s(&SetInputAPI_Params.TargetAPI, 0x1, &TargetAPI, 0x1);

	uFnSetInputAPI->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetInputAPI, &SetInputAPI_Params, nullptr);

	uFnSetInputAPI->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetActiveDiscDLC
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<struct FName>           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<struct FName> UOnlineSubsystemSteamworks::GetActiveDiscDLC()
{
	static UFunction* uFnGetActiveDiscDLC = nullptr;

	if (!uFnGetActiveDiscDLC)
	{
		uFnGetActiveDiscDLC = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetActiveDiscDLC");
	}

	UOnlineSubsystemSteamworks_execGetActiveDiscDLC_Params GetActiveDiscDLC_Params;

	this->ProcessEvent(uFnGetActiveDiscDLC, &GetActiveDiscDLC_Params, nullptr);

	return GetActiveDiscDLC_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineSubscriptionRequirement
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bRequiresOnlineSubscription    (CPF_Parm)

void UOnlineSubsystemSteamworks::SetOnlineSubscriptionRequirement(unsigned long bRequiresOnlineSubscription)
{
	static UFunction* uFnSetOnlineSubscriptionRequirement = nullptr;

	if (!uFnSetOnlineSubscriptionRequirement)
	{
		uFnSetOnlineSubscriptionRequirement = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineSubscriptionRequirement");
	}

	UOnlineSubsystemSteamworks_execSetOnlineSubscriptionRequirement_Params SetOnlineSubscriptionRequirement_Params;
	SetOnlineSubscriptionRequirement_Params.bRequiresOnlineSubscription = bRequiresOnlineSubscription;

	this->ProcessEvent(uFnSetOnlineSubscriptionRequirement, &SetOnlineSubscriptionRequirement_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleGamepadConnectionStatusChanged
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGameViewportClient*     GVC                            (CPF_Parm)
// int32_t                        LocalPlayerNum                 (CPF_Parm)
// unsigned long                  bConnected                     (CPF_Parm)

void UOnlineSubsystemSteamworks::HandleGamepadConnectionStatusChanged(class UGameViewportClient* GVC, int32_t LocalPlayerNum, unsigned long bConnected)
{
	static UFunction* uFnHandleGamepadConnectionStatusChanged = nullptr;

	if (!uFnHandleGamepadConnectionStatusChanged)
	{
		uFnHandleGamepadConnectionStatusChanged = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleGamepadConnectionStatusChanged");
	}

	UOnlineSubsystemSteamworks_execHandleGamepadConnectionStatusChanged_Params HandleGamepadConnectionStatusChanged_Params;
	memcpy_s(&HandleGamepadConnectionStatusChanged_Params.GVC, 0x8, &GVC, 0x8);
	memcpy_s(&HandleGamepadConnectionStatusChanged_Params.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);
	HandleGamepadConnectionStatusChanged_Params.bConnected = bConnected;

	this->ProcessEvent(uFnHandleGamepadConnectionStatusChanged, &HandleGamepadConnectionStatusChanged_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleGamepadInputAPIChanged
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UGameViewportClient*     GVC                            (CPF_Parm)
// int32_t                        LocalPlayerNum                 (CPF_Parm)
// uint8_t                        InputAPI                       (CPF_Parm)

void UOnlineSubsystemSteamworks::HandleGamepadInputAPIChanged(class UGameViewportClient* GVC, int32_t LocalPlayerNum, uint8_t InputAPI)
{
	static UFunction* uFnHandleGamepadInputAPIChanged = nullptr;

	if (!uFnHandleGamepadInputAPIChanged)
	{
		uFnHandleGamepadInputAPIChanged = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleGamepadInputAPIChanged");
	}

	UOnlineSubsystemSteamworks_execHandleGamepadInputAPIChanged_Params HandleGamepadInputAPIChanged_Params;
	memcpy_s(&HandleGamepadInputAPIChanged_Params.GVC, 0x8, &GVC, 0x8);
	memcpy_s(&HandleGamepadInputAPIChanged_Params.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);
	memcpy_s(&HandleGamepadInputAPIChanged_Params.InputAPI, 0x1, &InputAPI, 0x1);

	this->ProcessEvent(uFnHandleGamepadInputAPIChanged, &HandleGamepadInputAPIChanged_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearInputAPIChangedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InputAPIChangedDelegate        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearInputAPIChangedDelegate(struct FScriptDelegate InputAPIChangedDelegate)
{
	static UFunction* uFnClearInputAPIChangedDelegate = nullptr;

	if (!uFnClearInputAPIChangedDelegate)
	{
		uFnClearInputAPIChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearInputAPIChangedDelegate");
	}

	UOnlineSubsystemSteamworks_execClearInputAPIChangedDelegate_Params ClearInputAPIChangedDelegate_Params;
	memcpy_s(&ClearInputAPIChangedDelegate_Params.InputAPIChangedDelegate, 0x18, &InputAPIChangedDelegate, 0x18);

	this->ProcessEvent(uFnClearInputAPIChangedDelegate, &ClearInputAPIChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddInputAPIChangedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InputAPIChangedDelegate        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddInputAPIChangedDelegate(struct FScriptDelegate InputAPIChangedDelegate)
{
	static UFunction* uFnAddInputAPIChangedDelegate = nullptr;

	if (!uFnAddInputAPIChangedDelegate)
	{
		uFnAddInputAPIChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddInputAPIChangedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddInputAPIChangedDelegate_Params AddInputAPIChangedDelegate_Params;
	memcpy_s(&AddInputAPIChangedDelegate_Params.InputAPIChangedDelegate, 0x18, &InputAPIChangedDelegate, 0x18);

	this->ProcessEvent(uFnAddInputAPIChangedDelegate, &AddInputAPIChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnregisteredControllerDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UnregisteredControllerDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUnregisteredControllerDelegate(struct FScriptDelegate UnregisteredControllerDelegate)
{
	static UFunction* uFnClearUnregisteredControllerDelegate = nullptr;

	if (!uFnClearUnregisteredControllerDelegate)
	{
		uFnClearUnregisteredControllerDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnregisteredControllerDelegate");
	}

	UOnlineSubsystemSteamworks_execClearUnregisteredControllerDelegate_Params ClearUnregisteredControllerDelegate_Params;
	memcpy_s(&ClearUnregisteredControllerDelegate_Params.UnregisteredControllerDelegate, 0x18, &UnregisteredControllerDelegate, 0x18);

	this->ProcessEvent(uFnClearUnregisteredControllerDelegate, &ClearUnregisteredControllerDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisteredControllerDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisteredControllerDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearRegisteredControllerDelegate(struct FScriptDelegate RegisteredControllerDelegate)
{
	static UFunction* uFnClearRegisteredControllerDelegate = nullptr;

	if (!uFnClearRegisteredControllerDelegate)
	{
		uFnClearRegisteredControllerDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisteredControllerDelegate");
	}

	UOnlineSubsystemSteamworks_execClearRegisteredControllerDelegate_Params ClearRegisteredControllerDelegate_Params;
	memcpy_s(&ClearRegisteredControllerDelegate_Params.RegisteredControllerDelegate, 0x18, &RegisteredControllerDelegate, 0x18);

	this->ProcessEvent(uFnClearRegisteredControllerDelegate, &ClearRegisteredControllerDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnregisteredControllerDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UnregisteredControllerDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUnregisteredControllerDelegate(struct FScriptDelegate UnregisteredControllerDelegate)
{
	static UFunction* uFnAddUnregisteredControllerDelegate = nullptr;

	if (!uFnAddUnregisteredControllerDelegate)
	{
		uFnAddUnregisteredControllerDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnregisteredControllerDelegate");
	}

	UOnlineSubsystemSteamworks_execAddUnregisteredControllerDelegate_Params AddUnregisteredControllerDelegate_Params;
	memcpy_s(&AddUnregisteredControllerDelegate_Params.UnregisteredControllerDelegate, 0x18, &UnregisteredControllerDelegate, 0x18);

	this->ProcessEvent(uFnAddUnregisteredControllerDelegate, &AddUnregisteredControllerDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisteredControllerDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisteredControllerDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddRegisteredControllerDelegate(struct FScriptDelegate RegisteredControllerDelegate)
{
	static UFunction* uFnAddRegisteredControllerDelegate = nullptr;

	if (!uFnAddRegisteredControllerDelegate)
	{
		uFnAddRegisteredControllerDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisteredControllerDelegate");
	}

	UOnlineSubsystemSteamworks_execAddRegisteredControllerDelegate_Params AddRegisteredControllerDelegate_Params;
	memcpy_s(&AddRegisteredControllerDelegate_Params.RegisteredControllerDelegate, 0x18, &RegisteredControllerDelegate, 0x18);

	this->ProcessEvent(uFnAddRegisteredControllerDelegate, &AddRegisteredControllerDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnInputAPIChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        TargetAPI                      (CPF_Parm)

void UOnlineSubsystemSteamworks::OnInputAPIChanged(uint8_t TargetAPI)
{
	static UFunction* uFnOnInputAPIChanged = nullptr;

	if (!uFnOnInputAPIChanged)
	{
		uFnOnInputAPIChanged = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnInputAPIChanged");
	}

	UOnlineSubsystemSteamworks_execOnInputAPIChanged_Params OnInputAPIChanged_Params;
	memcpy_s(&OnInputAPIChanged_Params.TargetAPI, 0x1, &TargetAPI, 0x1);

	this->ProcessEvent(uFnOnInputAPIChanged, &OnInputAPIChanged_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnregisteredController
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int32_t                        LocalPlayerNum                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnUnregisteredController(int32_t LocalPlayerNum)
{
	static UFunction* uFnOnUnregisteredController = nullptr;

	if (!uFnOnUnregisteredController)
	{
		uFnOnUnregisteredController = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnregisteredController");
	}

	UOnlineSubsystemSteamworks_execOnUnregisteredController_Params OnUnregisteredController_Params;
	memcpy_s(&OnUnregisteredController_Params.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);

	this->ProcessEvent(uFnOnUnregisteredController, &OnUnregisteredController_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisteredController
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int32_t                        LocalPlayerNum                 (CPF_Parm)
// int32_t                        ControllerId                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnRegisteredController(int32_t LocalPlayerNum, int32_t ControllerId)
{
	static UFunction* uFnOnRegisteredController = nullptr;

	if (!uFnOnRegisteredController)
	{
		uFnOnRegisteredController = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisteredController");
	}

	UOnlineSubsystemSteamworks_execOnRegisteredController_Params OnRegisteredController_Params;
	memcpy_s(&OnRegisteredController_Params.LocalPlayerNum, 0x4, &LocalPlayerNum, 0x4);
	memcpy_s(&OnRegisteredController_Params.ControllerId, 0x4, &ControllerId, 0x4);

	this->ProcessEvent(uFnOnRegisteredController, &OnRegisteredController_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasIncomingFriendInvite
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            InviteFrom                     (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::HasIncomingFriendInvite(uint8_t LocalUserNum, struct FUniqueNetId InviteFrom)
{
	static UFunction* uFnHasIncomingFriendInvite = nullptr;

	if (!uFnHasIncomingFriendInvite)
	{
		uFnHasIncomingFriendInvite = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasIncomingFriendInvite");
	}

	UOnlineSubsystemSteamworks_execHasIncomingFriendInvite_Params HasIncomingFriendInvite_Params;
	memcpy_s(&HasIncomingFriendInvite_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&HasIncomingFriendInvite_Params.InviteFrom, 0x48, &InviteFrom, 0x48);

	this->ProcessEvent(uFnHasIncomingFriendInvite, &HasIncomingFriendInvite_Params, nullptr);

	return HasIncomingFriendInvite_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasFriendsFunctionality
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::HasFriendsFunctionality()
{
	static UFunction* uFnHasFriendsFunctionality = nullptr;

	if (!uFnHasFriendsFunctionality)
	{
		uFnHasFriendsFunctionality = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasFriendsFunctionality");
	}

	UOnlineSubsystemSteamworks_execHasFriendsFunctionality_Params HasFriendsFunctionality_Params;

	this->ProcessEvent(uFnHasFriendsFunctionality, &HasFriendsFunctionality_Params, nullptr);

	return HasFriendsFunctionality_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanSendOfflinePartyInvite
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::CanSendOfflinePartyInvite(struct FUniqueNetId PlayerID)
{
	static UFunction* uFnCanSendOfflinePartyInvite = nullptr;

	if (!uFnCanSendOfflinePartyInvite)
	{
		uFnCanSendOfflinePartyInvite = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanSendOfflinePartyInvite");
	}

	UOnlineSubsystemSteamworks_execCanSendOfflinePartyInvite_Params CanSendOfflinePartyInvite_Params;
	memcpy_s(&CanSendOfflinePartyInvite_Params.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(uFnCanSendOfflinePartyInvite, &CanSendOfflinePartyInvite_Params, nullptr);

	return CanSendOfflinePartyInvite_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckParentalControlInfo
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  bShowUi                        (CPF_Parm)

bool UOnlineSubsystemSteamworks::CheckParentalControlInfo(unsigned long bShowUi)
{
	static UFunction* uFnCheckParentalControlInfo = nullptr;

	if (!uFnCheckParentalControlInfo)
	{
		uFnCheckParentalControlInfo = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckParentalControlInfo");
	}

	UOnlineSubsystemSteamworks_execCheckParentalControlInfo_Params CheckParentalControlInfo_Params;
	CheckParentalControlInfo_Params.bShowUi = bShowUi;

	this->ProcessEvent(uFnCheckParentalControlInfo, &CheckParentalControlInfo_Params, nullptr);

	return CheckParentalControlInfo_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RecordPlayersRecentlyMetKeys
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FFriendHistoryKey> PlayerKeys                     (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::RecordPlayersRecentlyMetKeys(uint8_t LocalUserNum, TArray<struct FFriendHistoryKey> PlayerKeys)
{
	static UFunction* uFnRecordPlayersRecentlyMetKeys = nullptr;

	if (!uFnRecordPlayersRecentlyMetKeys)
	{
		uFnRecordPlayersRecentlyMetKeys = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RecordPlayersRecentlyMetKeys");
	}

	UOnlineSubsystemSteamworks_execRecordPlayersRecentlyMetKeys_Params RecordPlayersRecentlyMetKeys_Params;
	memcpy_s(&RecordPlayersRecentlyMetKeys_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&RecordPlayersRecentlyMetKeys_Params.PlayerKeys, 0x10, &PlayerKeys, 0x10);

	this->ProcessEvent(uFnRecordPlayersRecentlyMetKeys, &RecordPlayersRecentlyMetKeys_Params, nullptr);

	return RecordPlayersRecentlyMetKeys_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayHistoryRegistrationKey
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// TArray<uint8_t>                Key                            (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetPlayHistoryRegistrationKey(TArray<uint8_t>& Key)
{
	static UFunction* uFnGetPlayHistoryRegistrationKey = nullptr;

	if (!uFnGetPlayHistoryRegistrationKey)
	{
		uFnGetPlayHistoryRegistrationKey = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayHistoryRegistrationKey");
	}

	UOnlineSubsystemSteamworks_execGetPlayHistoryRegistrationKey_Params GetPlayHistoryRegistrationKey_Params;
	memcpy_s(&GetPlayHistoryRegistrationKey_Params.Key, 0x10, &Key, 0x10);

	this->ProcessEvent(uFnGetPlayHistoryRegistrationKey, &GetPlayHistoryRegistrationKey_Params, nullptr);

	memcpy_s(&Key, 0x10, &GetPlayHistoryRegistrationKey_Params.Key, 0x10);

	return GetPlayHistoryRegistrationKey_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsOriginalAppOwner
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::IsOriginalAppOwner()
{
	static UFunction* uFnIsOriginalAppOwner = nullptr;

	if (!uFnIsOriginalAppOwner)
	{
		uFnIsOriginalAppOwner = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsOriginalAppOwner");
	}

	UOnlineSubsystemSteamworks_execIsOriginalAppOwner_Params IsOriginalAppOwner_Params;

	uFnIsOriginalAppOwner->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsOriginalAppOwner, &IsOriginalAppOwner_Params, nullptr);

	uFnIsOriginalAppOwner->FunctionFlags |= 0x400;

	return IsOriginalAppOwner_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateSessionStatusFromPlayers
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        CurrentPlayerCount             (CPF_Parm)
// int32_t                        numBotPlayers                  (CPF_Parm)

void UOnlineSubsystemSteamworks::UpdateSessionStatusFromPlayers(int32_t CurrentPlayerCount, int32_t numBotPlayers)
{
	static UFunction* uFnUpdateSessionStatusFromPlayers = nullptr;

	if (!uFnUpdateSessionStatusFromPlayers)
	{
		uFnUpdateSessionStatusFromPlayers = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateSessionStatusFromPlayers");
	}

	UOnlineSubsystemSteamworks_execUpdateSessionStatusFromPlayers_Params UpdateSessionStatusFromPlayers_Params;
	memcpy_s(&UpdateSessionStatusFromPlayers_Params.CurrentPlayerCount, 0x4, &CurrentPlayerCount, 0x4);
	memcpy_s(&UpdateSessionStatusFromPlayers_Params.numBotPlayers, 0x4, &numBotPlayers, 0x4);

	this->ProcessEvent(uFnUpdateSessionStatusFromPlayers, &UpdateSessionStatusFromPlayers_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsAchievementUnlocked
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        AchievementId                  (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsAchievementUnlocked(uint8_t LocalUserNum, int32_t AchievementId)
{
	static UFunction* uFnIsAchievementUnlocked = nullptr;

	if (!uFnIsAchievementUnlocked)
	{
		uFnIsAchievementUnlocked = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsAchievementUnlocked");
	}

	UOnlineSubsystemSteamworks_execIsAchievementUnlocked_Params IsAchievementUnlocked_Params;
	memcpy_s(&IsAchievementUnlocked_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&IsAchievementUnlocked_Params.AchievementId, 0x4, &AchievementId, 0x4);

	this->ProcessEvent(uFnIsAchievementUnlocked, &IsAchievementUnlocked_Params, nullptr);

	return IsAchievementUnlocked_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateGameProgress
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalPlayerNum                 (CPF_Parm)
// float                          Progress                       (CPF_Parm)

void UOnlineSubsystemSteamworks::UpdateGameProgress(uint8_t LocalPlayerNum, float Progress)
{
	static UFunction* uFnUpdateGameProgress = nullptr;

	if (!uFnUpdateGameProgress)
	{
		uFnUpdateGameProgress = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateGameProgress");
	}

	UOnlineSubsystemSteamworks_execUpdateGameProgress_Params UpdateGameProgress_Params;
	memcpy_s(&UpdateGameProgress_Params.LocalPlayerNum, 0x1, &LocalPlayerNum, 0x1);
	memcpy_s(&UpdateGameProgress_Params.Progress, 0x4, &Progress, 0x4);

	this->ProcessEvent(uFnUpdateGameProgress, &UpdateGameProgress_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FinishOnlineGameSession
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// struct FString                 ServerId                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::FinishOnlineGameSession(struct FString ServerId)
{
	static UFunction* uFnFinishOnlineGameSession = nullptr;

	if (!uFnFinishOnlineGameSession)
	{
		uFnFinishOnlineGameSession = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FinishOnlineGameSession");
	}

	UOnlineSubsystemSteamworks_execFinishOnlineGameSession_Params FinishOnlineGameSession_Params;
	memcpy_s(&FinishOnlineGameSession_Params.ServerId, 0x10, &ServerId, 0x10);

	this->ProcessEvent(uFnFinishOnlineGameSession, &FinishOnlineGameSession_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartOnlineGameSession
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// struct FString                 ServerId                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::StartOnlineGameSession(struct FString ServerId)
{
	static UFunction* uFnStartOnlineGameSession = nullptr;

	if (!uFnStartOnlineGameSession)
	{
		uFnStartOnlineGameSession = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartOnlineGameSession");
	}

	UOnlineSubsystemSteamworks_execStartOnlineGameSession_Params StartOnlineGameSession_Params;
	memcpy_s(&StartOnlineGameSession_Params.ServerId, 0x10, &ServerId, 0x10);

	this->ProcessEvent(uFnStartOnlineGameSession, &StartOnlineGameSession_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSystemUserControllerPairingChangedDelegate
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         PairingChangeDelegate          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearSystemUserControllerPairingChangedDelegate(struct FScriptDelegate PairingChangeDelegate)
{
	static UFunction* uFnClearSystemUserControllerPairingChangedDelegate = nullptr;

	if (!uFnClearSystemUserControllerPairingChangedDelegate)
	{
		uFnClearSystemUserControllerPairingChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSystemUserControllerPairingChangedDelegate");
	}

	UOnlineSubsystemSteamworks_execClearSystemUserControllerPairingChangedDelegate_Params ClearSystemUserControllerPairingChangedDelegate_Params;
	memcpy_s(&ClearSystemUserControllerPairingChangedDelegate_Params.PairingChangeDelegate, 0x18, &PairingChangeDelegate, 0x18);

	this->ProcessEvent(uFnClearSystemUserControllerPairingChangedDelegate, &ClearSystemUserControllerPairingChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSystemUserControllerPairingChangedDelegate
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         PairingChangeDelegate          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddSystemUserControllerPairingChangedDelegate(struct FScriptDelegate PairingChangeDelegate)
{
	static UFunction* uFnAddSystemUserControllerPairingChangedDelegate = nullptr;

	if (!uFnAddSystemUserControllerPairingChangedDelegate)
	{
		uFnAddSystemUserControllerPairingChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSystemUserControllerPairingChangedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddSystemUserControllerPairingChangedDelegate_Params AddSystemUserControllerPairingChangedDelegate_Params;
	memcpy_s(&AddSystemUserControllerPairingChangedDelegate_Params.PairingChangeDelegate, 0x18, &PairingChangeDelegate, 0x18);

	this->ProcessEvent(uFnAddSystemUserControllerPairingChangedDelegate, &AddSystemUserControllerPairingChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSystemUserControllerPairingChanged
// [0x400120000] (FUNC_Public | FUNC_Delegate | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// int32_t                        NewLocalUserNum                (CPF_Parm)
// int32_t                        PreviousLocalUserNum           (CPF_Parm)

void UOnlineSubsystemSteamworks::OnSystemUserControllerPairingChanged(int32_t NewLocalUserNum, int32_t PreviousLocalUserNum)
{
	static UFunction* uFnOnSystemUserControllerPairingChanged = nullptr;

	if (!uFnOnSystemUserControllerPairingChanged)
	{
		uFnOnSystemUserControllerPairingChanged = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSystemUserControllerPairingChanged");
	}

	UOnlineSubsystemSteamworks_execOnSystemUserControllerPairingChanged_Params OnSystemUserControllerPairingChanged_Params;
	memcpy_s(&OnSystemUserControllerPairingChanged_Params.NewLocalUserNum, 0x4, &NewLocalUserNum, 0x4);
	memcpy_s(&OnSystemUserControllerPairingChanged_Params.PreviousLocalUserNum, 0x4, &PreviousLocalUserNum, 0x4);

	this->ProcessEvent(uFnOnSystemUserControllerPairingChanged, &OnSystemUserControllerPairingChanged_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAccountPickerInput
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::ClearAccountPickerInput()
{
	static UFunction* uFnClearAccountPickerInput = nullptr;

	if (!uFnClearAccountPickerInput)
	{
		uFnClearAccountPickerInput = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAccountPickerInput");
	}

	UOnlineSubsystemSteamworks_execClearAccountPickerInput_Params ClearAccountPickerInput_Params;

	this->ProcessEvent(uFnClearAccountPickerInput, &ClearAccountPickerInput_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LookForAccountPickerInput
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::LookForAccountPickerInput()
{
	static UFunction* uFnLookForAccountPickerInput = nullptr;

	if (!uFnLookForAccountPickerInput)
	{
		uFnLookForAccountPickerInput = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LookForAccountPickerInput");
	}

	UOnlineSubsystemSteamworks_execLookForAccountPickerInput_Params LookForAccountPickerInput_Params;

	this->ProcessEvent(uFnLookForAccountPickerInput, &LookForAccountPickerInput_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerToSession
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ControllerId                   (CPF_Parm)

void UOnlineSubsystemSteamworks::AddPlayerToSession(uint8_t ControllerId)
{
	static UFunction* uFnAddPlayerToSession = nullptr;

	if (!uFnAddPlayerToSession)
	{
		uFnAddPlayerToSession = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerToSession");
	}

	UOnlineSubsystemSteamworks_execAddPlayerToSession_Params AddPlayerToSession_Params;
	memcpy_s(&AddPlayerToSession_Params.ControllerId, 0x1, &ControllerId, 0x1);

	this->ProcessEvent(uFnAddPlayerToSession, &AddPlayerToSession_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPrimaryPlayer
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::ClearPrimaryPlayer()
{
	static UFunction* uFnClearPrimaryPlayer = nullptr;

	if (!uFnClearPrimaryPlayer)
	{
		uFnClearPrimaryPlayer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPrimaryPlayer");
	}

	UOnlineSubsystemSteamworks_execClearPrimaryPlayer_Params ClearPrimaryPlayer_Params;

	this->ProcessEvent(uFnClearPrimaryPlayer, &ClearPrimaryPlayer_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveUserAssociation
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ControllerId                   (CPF_Parm)

void UOnlineSubsystemSteamworks::RemoveUserAssociation(uint8_t ControllerId)
{
	static UFunction* uFnRemoveUserAssociation = nullptr;

	if (!uFnRemoveUserAssociation)
	{
		uFnRemoveUserAssociation = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveUserAssociation");
	}

	UOnlineSubsystemSteamworks_execRemoveUserAssociation_Params RemoveUserAssociation_Params;
	memcpy_s(&RemoveUserAssociation_Params.ControllerId, 0x1, &ControllerId, 0x1);

	this->ProcessEvent(uFnRemoveUserAssociation, &RemoveUserAssociation_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MapEnd
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::MapEnd()
{
	static UFunction* uFnMapEnd = nullptr;

	if (!uFnMapEnd)
	{
		uFnMapEnd = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MapEnd");
	}

	UOnlineSubsystemSteamworks_execMapEnd_Params MapEnd_Params;

	this->ProcessEvent(uFnMapEnd, &MapEnd_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MapStart
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::MapStart()
{
	static UFunction* uFnMapStart = nullptr;

	if (!uFnMapStart)
	{
		uFnMapStart = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MapStart");
	}

	UOnlineSubsystemSteamworks_execMapStart_Params MapStart_Params;

	this->ProcessEvent(uFnMapStart, &MapStart_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineMatchEnd
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::OnlineMatchEnd()
{
	static UFunction* uFnOnlineMatchEnd = nullptr;

	if (!uFnOnlineMatchEnd)
	{
		uFnOnlineMatchEnd = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineMatchEnd");
	}

	UOnlineSubsystemSteamworks_execOnlineMatchEnd_Params OnlineMatchEnd_Params;

	this->ProcessEvent(uFnOnlineMatchEnd, &OnlineMatchEnd_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineMatchStart
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// struct FString                 MapName                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnlineMatchStart(struct FString MapName)
{
	static UFunction* uFnOnlineMatchStart = nullptr;

	if (!uFnOnlineMatchStart)
	{
		uFnOnlineMatchStart = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineMatchStart");
	}

	UOnlineSubsystemSteamworks_execOnlineMatchStart_Params OnlineMatchStart_Params;
	memcpy_s(&OnlineMatchStart_Params.MapName, 0x10, &MapName, 0x10);

	this->ProcessEvent(uFnOnlineMatchStart, &OnlineMatchStart_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionDifficultyLevel
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// int32_t                        DifficultyLevel                (CPF_Parm)

void UOnlineSubsystemSteamworks::SetSessionDifficultyLevel(int32_t DifficultyLevel)
{
	static UFunction* uFnSetSessionDifficultyLevel = nullptr;

	if (!uFnSetSessionDifficultyLevel)
	{
		uFnSetSessionDifficultyLevel = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionDifficultyLevel");
	}

	UOnlineSubsystemSteamworks_execSetSessionDifficultyLevel_Params SetSessionDifficultyLevel_Params;
	memcpy_s(&SetSessionDifficultyLevel_Params.DifficultyLevel, 0x4, &DifficultyLevel, 0x4);

	this->ProcessEvent(uFnSetSessionDifficultyLevel, &SetSessionDifficultyLevel_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionGameplayModeName
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// struct FName                   GameplayModeName               (CPF_Parm)

void UOnlineSubsystemSteamworks::SetSessionGameplayModeName(struct FName GameplayModeName)
{
	static UFunction* uFnSetSessionGameplayModeName = nullptr;

	if (!uFnSetSessionGameplayModeName)
	{
		uFnSetSessionGameplayModeName = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionGameplayModeName");
	}

	UOnlineSubsystemSteamworks_execSetSessionGameplayModeName_Params SetSessionGameplayModeName_Params;
	memcpy_s(&SetSessionGameplayModeName_Params.GameplayModeName, 0x8, &GameplayModeName, 0x8);

	this->ProcessEvent(uFnSetSessionGameplayModeName, &SetSessionGameplayModeName_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionGameplayMode
// [0x400020000] (FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// int32_t                        GameplayMode                   (CPF_Parm)

void UOnlineSubsystemSteamworks::SetSessionGameplayMode(int32_t GameplayMode)
{
	static UFunction* uFnSetSessionGameplayMode = nullptr;

	if (!uFnSetSessionGameplayMode)
	{
		uFnSetSessionGameplayMode = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSessionGameplayMode");
	}

	UOnlineSubsystemSteamworks_execSetSessionGameplayMode_Params SetSessionGameplayMode_Params;
	memcpy_s(&SetSessionGameplayMode_Params.GameplayMode, 0x4, &GameplayMode, 0x4);

	this->ProcessEvent(uFnSetSessionGameplayMode, &SetSessionGameplayMode_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSyncedAchievements
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<bool>                   ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

TArray<bool> UOnlineSubsystemSteamworks::GetSyncedAchievements(uint8_t LocalUserNum)
{
	static UFunction* uFnGetSyncedAchievements = nullptr;

	if (!uFnGetSyncedAchievements)
	{
		uFnGetSyncedAchievements = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSyncedAchievements");
	}

	UOnlineSubsystemSteamworks_execGetSyncedAchievements_Params GetSyncedAchievements_Params;
	memcpy_s(&GetSyncedAchievements_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnGetSyncedAchievements, &GetSyncedAchievements_Params, nullptr);

	return GetSyncedAchievements_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetPlayedWith
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PlayerNetId                    (CPF_Const | CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::SetPlayedWith(struct FUniqueNetId PlayerNetId)
{
	static UFunction* uFnSetPlayedWith = nullptr;

	if (!uFnSetPlayedWith)
	{
		uFnSetPlayedWith = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetPlayedWith");
	}

	UOnlineSubsystemSteamworks_execSetPlayedWith_Params SetPlayedWith_Params;
	memcpy_s(&SetPlayedWith_Params.PlayerNetId, 0x48, &PlayerNetId, 0x48);

	uFnSetPlayedWith->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetPlayedWith, &SetPlayedWith_Params, nullptr);

	uFnSetPlayedWith->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleBootMessage
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::HandleBootMessage()
{
	static UFunction* uFnHandleBootMessage = nullptr;

	if (!uFnHandleBootMessage)
	{
		uFnHandleBootMessage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleBootMessage");
	}

	UOnlineSubsystemSteamworks_execHandleBootMessage_Params HandleBootMessage_Params;

	uFnHandleBootMessage->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnHandleBootMessage, &HandleBootMessage_Params, nullptr);

	uFnHandleBootMessage->FunctionFlags |= 0x400;

	return HandleBootMessage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearErrorDialogClosedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearErrorDialogClosedDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearErrorDialogClosedDelegate = nullptr;

	if (!uFnClearErrorDialogClosedDelegate)
	{
		uFnClearErrorDialogClosedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearErrorDialogClosedDelegate");
	}

	UOnlineSubsystemSteamworks_execClearErrorDialogClosedDelegate_Params ClearErrorDialogClosedDelegate_Params;
	memcpy_s(&ClearErrorDialogClosedDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnClearErrorDialogClosedDelegate, &ClearErrorDialogClosedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddErrorDialogClosedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddErrorDialogClosedDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddErrorDialogClosedDelegate = nullptr;

	if (!uFnAddErrorDialogClosedDelegate)
	{
		uFnAddErrorDialogClosedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddErrorDialogClosedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddErrorDialogClosedDelegate_Params AddErrorDialogClosedDelegate_Params;
	memcpy_s(&AddErrorDialogClosedDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnAddErrorDialogClosedDelegate, &AddErrorDialogClosedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnErrorDialogClosed
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int32_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnErrorDialogClosed(int32_t LocalUserNum)
{
	static UFunction* uFnOnErrorDialogClosed = nullptr;

	if (!uFnOnErrorDialogClosed)
	{
		uFnOnErrorDialogClosed = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnErrorDialogClosed");
	}

	UOnlineSubsystemSteamworks_execOnErrorDialogClosed_Params OnErrorDialogClosed_Params;
	memcpy_s(&OnErrorDialogClosed_Params.LocalUserNum, 0x4, &LocalUserNum, 0x4);

	this->ProcessEvent(uFnOnErrorDialogClosed, &OnErrorDialogClosed_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCloseKickPlayerDialogDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearCloseKickPlayerDialogDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearCloseKickPlayerDialogDelegate = nullptr;

	if (!uFnClearCloseKickPlayerDialogDelegate)
	{
		uFnClearCloseKickPlayerDialogDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCloseKickPlayerDialogDelegate");
	}

	UOnlineSubsystemSteamworks_execClearCloseKickPlayerDialogDelegate_Params ClearCloseKickPlayerDialogDelegate_Params;
	memcpy_s(&ClearCloseKickPlayerDialogDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnClearCloseKickPlayerDialogDelegate, &ClearCloseKickPlayerDialogDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCloseKickPlayerDialogDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddCloseKickPlayerDialogDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddCloseKickPlayerDialogDelegate = nullptr;

	if (!uFnAddCloseKickPlayerDialogDelegate)
	{
		uFnAddCloseKickPlayerDialogDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCloseKickPlayerDialogDelegate");
	}

	UOnlineSubsystemSteamworks_execAddCloseKickPlayerDialogDelegate_Params AddCloseKickPlayerDialogDelegate_Params;
	memcpy_s(&AddCloseKickPlayerDialogDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnAddCloseKickPlayerDialogDelegate, &AddCloseKickPlayerDialogDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCloseKickPlayerDialog
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::OnCloseKickPlayerDialog()
{
	static UFunction* uFnOnCloseKickPlayerDialog = nullptr;

	if (!uFnOnCloseKickPlayerDialog)
	{
		uFnOnCloseKickPlayerDialog = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCloseKickPlayerDialog");
	}

	UOnlineSubsystemSteamworks_execOnCloseKickPlayerDialog_Params OnCloseKickPlayerDialog_Params;

	this->ProcessEvent(uFnOnCloseKickPlayerDialog, &OnCloseKickPlayerDialog_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCommerceDialogClosedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearCommerceDialogClosedDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearCommerceDialogClosedDelegate = nullptr;

	if (!uFnClearCommerceDialogClosedDelegate)
	{
		uFnClearCommerceDialogClosedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCommerceDialogClosedDelegate");
	}

	UOnlineSubsystemSteamworks_execClearCommerceDialogClosedDelegate_Params ClearCommerceDialogClosedDelegate_Params;
	memcpy_s(&ClearCommerceDialogClosedDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnClearCommerceDialogClosedDelegate, &ClearCommerceDialogClosedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCommerceDialogClosedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddCommerceDialogClosedDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddCommerceDialogClosedDelegate = nullptr;

	if (!uFnAddCommerceDialogClosedDelegate)
	{
		uFnAddCommerceDialogClosedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCommerceDialogClosedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddCommerceDialogClosedDelegate_Params AddCommerceDialogClosedDelegate_Params;
	memcpy_s(&AddCommerceDialogClosedDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnAddCommerceDialogClosedDelegate, &AddCommerceDialogClosedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCommerceDialogClosed
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::OnCommerceDialogClosed()
{
	static UFunction* uFnOnCommerceDialogClosed = nullptr;

	if (!uFnOnCommerceDialogClosed)
	{
		uFnOnCommerceDialogClosed = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCommerceDialogClosed");
	}

	UOnlineSubsystemSteamworks_execOnCommerceDialogClosed_Params OnCommerceDialogClosed_Params;

	this->ProcessEvent(uFnOnCommerceDialogClosed, &OnCommerceDialogClosed_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WordFilterSanitizeString
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Comment                        (CPF_Const | CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         SanitizeDelegate               (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            PlayerID                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WordFilterSanitizeString(struct FString Comment, struct FScriptDelegate SanitizeDelegate, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnWordFilterSanitizeString = nullptr;

	if (!uFnWordFilterSanitizeString)
	{
		uFnWordFilterSanitizeString = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WordFilterSanitizeString");
	}

	UOnlineSubsystemSteamworks_execWordFilterSanitizeString_Params WordFilterSanitizeString_Params;
	memcpy_s(&WordFilterSanitizeString_Params.Comment, 0x10, &Comment, 0x10);
	memcpy_s(&WordFilterSanitizeString_Params.SanitizeDelegate, 0x18, &SanitizeDelegate, 0x18);
	memcpy_s(&WordFilterSanitizeString_Params.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(uFnWordFilterSanitizeString, &WordFilterSanitizeString_Params, nullptr);

	return WordFilterSanitizeString_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveCanPlayOnlineChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::RemoveCanPlayOnlineChangedDelegate(struct FScriptDelegate Callback)
{
	static UFunction* uFnRemoveCanPlayOnlineChangedDelegate = nullptr;

	if (!uFnRemoveCanPlayOnlineChangedDelegate)
	{
		uFnRemoveCanPlayOnlineChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveCanPlayOnlineChangedDelegate");
	}

	UOnlineSubsystemSteamworks_execRemoveCanPlayOnlineChangedDelegate_Params RemoveCanPlayOnlineChangedDelegate_Params;
	memcpy_s(&RemoveCanPlayOnlineChangedDelegate_Params.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(uFnRemoveCanPlayOnlineChangedDelegate, &RemoveCanPlayOnlineChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCanPlayOnlineChangedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddCanPlayOnlineChangedDelegate(struct FScriptDelegate Callback)
{
	static UFunction* uFnAddCanPlayOnlineChangedDelegate = nullptr;

	if (!uFnAddCanPlayOnlineChangedDelegate)
	{
		uFnAddCanPlayOnlineChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCanPlayOnlineChangedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddCanPlayOnlineChangedDelegate_Params AddCanPlayOnlineChangedDelegate_Params;
	memcpy_s(&AddCanPlayOnlineChangedDelegate_Params.Callback, 0x18, &Callback, 0x18);

	this->ProcessEvent(uFnAddCanPlayOnlineChangedDelegate, &AddCanPlayOnlineChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RecordPlayersRecentlyMet
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FString                 GameDescription                (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FUniqueNetId>    Players                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::RecordPlayersRecentlyMet(uint8_t LocalUserNum, struct FString GameDescription, TArray<struct FUniqueNetId>& Players)
{
	static UFunction* uFnRecordPlayersRecentlyMet = nullptr;

	if (!uFnRecordPlayersRecentlyMet)
	{
		uFnRecordPlayersRecentlyMet = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RecordPlayersRecentlyMet");
	}

	UOnlineSubsystemSteamworks_execRecordPlayersRecentlyMet_Params RecordPlayersRecentlyMet_Params;
	memcpy_s(&RecordPlayersRecentlyMet_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&RecordPlayersRecentlyMet_Params.GameDescription, 0x10, &GameDescription, 0x10);
	memcpy_s(&RecordPlayersRecentlyMet_Params.Players, 0x10, &Players, 0x10);

	this->ProcessEvent(uFnRecordPlayersRecentlyMet, &RecordPlayersRecentlyMet_Params, nullptr);

	memcpy_s(&Players, 0x10, &RecordPlayersRecentlyMet_Params.Players, 0x10);

	return RecordPlayersRecentlyMet_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSaveDataNoSpaceDialogCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearSaveDataNoSpaceDialogCompleteDelegate(struct FScriptDelegate DeviceDelegate)
{
	static UFunction* uFnClearSaveDataNoSpaceDialogCompleteDelegate = nullptr;

	if (!uFnClearSaveDataNoSpaceDialogCompleteDelegate)
	{
		uFnClearSaveDataNoSpaceDialogCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSaveDataNoSpaceDialogCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearSaveDataNoSpaceDialogCompleteDelegate_Params ClearSaveDataNoSpaceDialogCompleteDelegate_Params;
	memcpy_s(&ClearSaveDataNoSpaceDialogCompleteDelegate_Params.DeviceDelegate, 0x18, &DeviceDelegate, 0x18);

	this->ProcessEvent(uFnClearSaveDataNoSpaceDialogCompleteDelegate, &ClearSaveDataNoSpaceDialogCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSaveDataNoSpaceDialogCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddSaveDataNoSpaceDialogCompleteDelegate(struct FScriptDelegate DeviceDelegate)
{
	static UFunction* uFnAddSaveDataNoSpaceDialogCompleteDelegate = nullptr;

	if (!uFnAddSaveDataNoSpaceDialogCompleteDelegate)
	{
		uFnAddSaveDataNoSpaceDialogCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSaveDataNoSpaceDialogCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddSaveDataNoSpaceDialogCompleteDelegate_Params AddSaveDataNoSpaceDialogCompleteDelegate_Params;
	memcpy_s(&AddSaveDataNoSpaceDialogCompleteDelegate_Params.DeviceDelegate, 0x18, &DeviceDelegate, 0x18);

	this->ProcessEvent(uFnAddSaveDataNoSpaceDialogCompleteDelegate, &AddSaveDataNoSpaceDialogCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSaveDataNoSpaceDialogComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bContinueWithoutSave           (CPF_Parm)

void UOnlineSubsystemSteamworks::OnSaveDataNoSpaceDialogComplete(unsigned long bContinueWithoutSave)
{
	static UFunction* uFnOnSaveDataNoSpaceDialogComplete = nullptr;

	if (!uFnOnSaveDataNoSpaceDialogComplete)
	{
		uFnOnSaveDataNoSpaceDialogComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSaveDataNoSpaceDialogComplete");
	}

	UOnlineSubsystemSteamworks_execOnSaveDataNoSpaceDialogComplete_Params OnSaveDataNoSpaceDialogComplete_Params;
	OnSaveDataNoSpaceDialogComplete_Params.bContinueWithoutSave = bContinueWithoutSave;

	this->ProcessEvent(uFnOnSaveDataNoSpaceDialogComplete, &OnSaveDataNoSpaceDialogComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockedDLCChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUnlockedDLCChangeDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnClearUnlockedDLCChangeDelegate = nullptr;

	if (!uFnClearUnlockedDLCChangeDelegate)
	{
		uFnClearUnlockedDLCChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockedDLCChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearUnlockedDLCChangeDelegate_Params ClearUnlockedDLCChangeDelegate_Params;
	memcpy_s(&ClearUnlockedDLCChangeDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnClearUnlockedDLCChangeDelegate, &ClearUnlockedDLCChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockedDLCChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InDelegate                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUnlockedDLCChangeDelegate(struct FScriptDelegate InDelegate)
{
	static UFunction* uFnAddUnlockedDLCChangeDelegate = nullptr;

	if (!uFnAddUnlockedDLCChangeDelegate)
	{
		uFnAddUnlockedDLCChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockedDLCChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddUnlockedDLCChangeDelegate_Params AddUnlockedDLCChangeDelegate_Params;
	memcpy_s(&AddUnlockedDLCChangeDelegate_Params.InDelegate, 0x18, &InDelegate, 0x18);

	this->ProcessEvent(uFnAddUnlockedDLCChangeDelegate, &AddUnlockedDLCChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUnlockedDLC
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// TArray<struct FName>           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

TArray<struct FName> UOnlineSubsystemSteamworks::GetUnlockedDLC()
{
	static UFunction* uFnGetUnlockedDLC = nullptr;

	if (!uFnGetUnlockedDLC)
	{
		uFnGetUnlockedDLC = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUnlockedDLC");
	}

	UOnlineSubsystemSteamworks_execGetUnlockedDLC_Params GetUnlockedDLC_Params;

	this->ProcessEvent(uFnGetUnlockedDLC, &GetUnlockedDLC_Params, nullptr);

	return GetUnlockedDLC_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockedDLCChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::OnUnlockedDLCChange()
{
	static UFunction* uFnOnUnlockedDLCChange = nullptr;

	if (!uFnOnUnlockedDLCChange)
	{
		uFnOnUnlockedDLCChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockedDLCChange");
	}

	UOnlineSubsystemSteamworks_execOnUnlockedDLCChange_Params OnUnlockedDLCChange_Params;

	this->ProcessEvent(uFnOnUnlockedDLCChange, &OnUnlockedDLCChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetOverlayEnabled
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::GetOverlayEnabled()
{
	static UFunction* uFnGetOverlayEnabled = nullptr;

	if (!uFnGetOverlayEnabled)
	{
		uFnGetOverlayEnabled = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetOverlayEnabled");
	}

	UOnlineSubsystemSteamworks_execGetOverlayEnabled_Params GetOverlayEnabled_Params;

	uFnGetOverlayEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetOverlayEnabled, &GetOverlayEnabled_Params, nullptr);

	uFnGetOverlayEnabled->FunctionFlags |= 0x400;

	return GetOverlayEnabled_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDLCPurchaseTime
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   AppName                        (CPF_Parm)

int32_t UOnlineSubsystemSteamworks::GetDLCPurchaseTime(struct FName AppName)
{
	static UFunction* uFnGetDLCPurchaseTime = nullptr;

	if (!uFnGetDLCPurchaseTime)
	{
		uFnGetDLCPurchaseTime = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDLCPurchaseTime");
	}

	UOnlineSubsystemSteamworks_execGetDLCPurchaseTime_Params GetDLCPurchaseTime_Params;
	memcpy_s(&GetDLCPurchaseTime_Params.AppName, 0x8, &AppName, 0x8);

	uFnGetDLCPurchaseTime->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetDLCPurchaseTime, &GetDLCPurchaseTime_Params, nullptr);

	uFnGetDLCPurchaseTime->FunctionFlags |= 0x400;

	return GetDLCPurchaseTime_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleGetUserInfoComplete
// [0x00040003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_AllFlags)
// Parameter info:
// struct FName                   NewCurrency                    (CPF_Parm)
// struct FString                 NewCountry                     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::HandleGetUserInfoComplete(struct FName NewCurrency, struct FString NewCountry)
{
	static UFunction* uFnHandleGetUserInfoComplete = nullptr;

	if (!uFnHandleGetUserInfoComplete)
	{
		uFnHandleGetUserInfoComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HandleGetUserInfoComplete");
	}

	UOnlineSubsystemSteamworks_execHandleGetUserInfoComplete_Params HandleGetUserInfoComplete_Params;
	memcpy_s(&HandleGetUserInfoComplete_Params.NewCurrency, 0x8, &NewCurrency, 0x8);
	memcpy_s(&HandleGetUserInfoComplete_Params.NewCountry, 0x10, &NewCountry, 0x10);

	this->ProcessEvent(uFnHandleGetUserInfoComplete, &HandleGetUserInfoComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerCountry
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::GetPlayerCountry(uint8_t LocalUserNum)
{
	static UFunction* uFnGetPlayerCountry = nullptr;

	if (!uFnGetPlayerCountry)
	{
		uFnGetPlayerCountry = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerCountry");
	}

	UOnlineSubsystemSteamworks_execGetPlayerCountry_Params GetPlayerCountry_Params;
	memcpy_s(&GetPlayerCountry_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnGetPlayerCountry, &GetPlayerCountry_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerLanguage
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

struct FString UOnlineSubsystemSteamworks::GetPlayerLanguage(uint8_t LocalUserNum)
{
	static UFunction* uFnGetPlayerLanguage = nullptr;

	if (!uFnGetPlayerLanguage)
	{
		uFnGetPlayerLanguage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerLanguage");
	}

	UOnlineSubsystemSteamworks_execGetPlayerLanguage_Params GetPlayerLanguage_Params;
	memcpy_s(&GetPlayerLanguage_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	uFnGetPlayerLanguage->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetPlayerLanguage, &GetPlayerLanguage_Params, nullptr);

	uFnGetPlayerLanguage->FunctionFlags |= 0x400;

	return GetPlayerLanguage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerCountryDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadPlayerCountryDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadPlayerCountryDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadPlayerCountryDelegate)
{
	static UFunction* uFnClearReadPlayerCountryDelegate = nullptr;

	if (!uFnClearReadPlayerCountryDelegate)
	{
		uFnClearReadPlayerCountryDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerCountryDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadPlayerCountryDelegate_Params ClearReadPlayerCountryDelegate_Params;
	memcpy_s(&ClearReadPlayerCountryDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearReadPlayerCountryDelegate_Params.ReadPlayerCountryDelegate, 0x18, &ReadPlayerCountryDelegate, 0x18);

	this->ProcessEvent(uFnClearReadPlayerCountryDelegate, &ClearReadPlayerCountryDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerCountryDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadPlayerCountryDelegate      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadPlayerCountryDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadPlayerCountryDelegate)
{
	static UFunction* uFnAddReadPlayerCountryDelegate = nullptr;

	if (!uFnAddReadPlayerCountryDelegate)
	{
		uFnAddReadPlayerCountryDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerCountryDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadPlayerCountryDelegate_Params AddReadPlayerCountryDelegate_Params;
	memcpy_s(&AddReadPlayerCountryDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddReadPlayerCountryDelegate_Params.ReadPlayerCountryDelegate, 0x18, &ReadPlayerCountryDelegate, 0x18);

	this->ProcessEvent(uFnAddReadPlayerCountryDelegate, &AddReadPlayerCountryDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AnyPlayerChatRestricted
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::AnyPlayerChatRestricted()
{
	static UFunction* uFnAnyPlayerChatRestricted = nullptr;

	if (!uFnAnyPlayerChatRestricted)
	{
		uFnAnyPlayerChatRestricted = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AnyPlayerChatRestricted");
	}

	UOnlineSubsystemSteamworks_execAnyPlayerChatRestricted_Params AnyPlayerChatRestricted_Params;

	uFnAnyPlayerChatRestricted->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAnyPlayerChatRestricted, &AnyPlayerChatRestricted_Params, nullptr);

	uFnAnyPlayerChatRestricted->FunctionFlags |= 0x400;

	return AnyPlayerChatRestricted_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.InitializeTrophyAPI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::InitializeTrophyAPI()
{
	static UFunction* uFnInitializeTrophyAPI = nullptr;

	if (!uFnInitializeTrophyAPI)
	{
		uFnInitializeTrophyAPI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.InitializeTrophyAPI");
	}

	UOnlineSubsystemSteamworks_execInitializeTrophyAPI_Params InitializeTrophyAPI_Params;

	this->ProcessEvent(uFnInitializeTrophyAPI, &InitializeTrophyAPI_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForItems
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FString>         Targets                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OpenStoreForItems(uint8_t LocalUserNum, TArray<struct FString> Targets)
{
	static UFunction* uFnOpenStoreForItems = nullptr;

	if (!uFnOpenStoreForItems)
	{
		uFnOpenStoreForItems = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForItems");
	}

	UOnlineSubsystemSteamworks_execOpenStoreForItems_Params OpenStoreForItems_Params;
	memcpy_s(&OpenStoreForItems_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&OpenStoreForItems_Params.Targets, 0x10, &Targets, 0x10);

	uFnOpenStoreForItems->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnOpenStoreForItems, &OpenStoreForItems_Params, nullptr);

	uFnOpenStoreForItems->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForDLC
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FName                   DLC                            (CPF_Parm)

void UOnlineSubsystemSteamworks::OpenStoreForDLC(uint8_t LocalUserNum, struct FName DLC)
{
	static UFunction* uFnOpenStoreForDLC = nullptr;

	if (!uFnOpenStoreForDLC)
	{
		uFnOpenStoreForDLC = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForDLC");
	}

	UOnlineSubsystemSteamworks_execOpenStoreForDLC_Params OpenStoreForDLC_Params;
	memcpy_s(&OpenStoreForDLC_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&OpenStoreForDLC_Params.DLC, 0x8, &DLC, 0x8);

	uFnOpenStoreForDLC->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnOpenStoreForDLC, &OpenStoreForDLC_Params, nullptr);

	uFnOpenStoreForDLC->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForItemsAsync
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FString>         Targets                        (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         OnStorePurchaseCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OpenStoreForItemsAsync(uint8_t LocalUserNum, TArray<struct FString> Targets, struct FScriptDelegate OnStorePurchaseCompleteDelegate)
{
	static UFunction* uFnOpenStoreForItemsAsync = nullptr;

	if (!uFnOpenStoreForItemsAsync)
	{
		uFnOpenStoreForItemsAsync = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenStoreForItemsAsync");
	}

	UOnlineSubsystemSteamworks_execOpenStoreForItemsAsync_Params OpenStoreForItemsAsync_Params;
	memcpy_s(&OpenStoreForItemsAsync_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&OpenStoreForItemsAsync_Params.Targets, 0x10, &Targets, 0x10);
	memcpy_s(&OpenStoreForItemsAsync_Params.OnStorePurchaseCompleteDelegate, 0x18, &OnStorePurchaseCompleteDelegate, 0x18);

	this->ProcessEvent(uFnOpenStoreForItemsAsync, &OpenStoreForItemsAsync_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorePurchaseCompleteDelegate
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::OnStorePurchaseCompleteDelegate()
{
	static UFunction* uFnOnStorePurchaseCompleteDelegate = nullptr;

	if (!uFnOnStorePurchaseCompleteDelegate)
	{
		uFnOnStorePurchaseCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorePurchaseCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execOnStorePurchaseCompleteDelegate_Params OnStorePurchaseCompleteDelegate_Params;

	this->ProcessEvent(uFnOnStorePurchaseCompleteDelegate, &OnStorePurchaseCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenErrorDialog
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint8_t                        ErrorCode                      (CPF_Parm)

void UOnlineSubsystemSteamworks::OpenErrorDialog(uint8_t LocalUserNum, uint8_t ErrorCode)
{
	static UFunction* uFnOpenErrorDialog = nullptr;

	if (!uFnOpenErrorDialog)
	{
		uFnOpenErrorDialog = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenErrorDialog");
	}

	UOnlineSubsystemSteamworks_execOpenErrorDialog_Params OpenErrorDialog_Params;
	memcpy_s(&OpenErrorDialog_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&OpenErrorDialog_Params.ErrorCode, 0x1, &ErrorCode, 0x1);

	this->ProcessEvent(uFnOpenErrorDialog, &OpenErrorDialog_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenPS4DisplayMode
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint8_t                        DisplayMode                    (CPF_Parm)
// TArray<struct FString>         Targets                        (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// int32_t                        ServiceLabel                   (CPF_OptionalParm | CPF_Parm)

void UOnlineSubsystemSteamworks::OpenPS4DisplayMode(uint8_t LocalUserNum, uint8_t DisplayMode, TArray<struct FString> Targets, int32_t ServiceLabel)
{
	static UFunction* uFnOpenPS4DisplayMode = nullptr;

	if (!uFnOpenPS4DisplayMode)
	{
		uFnOpenPS4DisplayMode = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OpenPS4DisplayMode");
	}

	UOnlineSubsystemSteamworks_execOpenPS4DisplayMode_Params OpenPS4DisplayMode_Params;
	memcpy_s(&OpenPS4DisplayMode_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&OpenPS4DisplayMode_Params.DisplayMode, 0x1, &DisplayMode, 0x1);
	memcpy_s(&OpenPS4DisplayMode_Params.Targets, 0x10, &Targets, 0x10);
	memcpy_s(&OpenPS4DisplayMode_Params.ServiceLabel, 0x4, &ServiceLabel, 0x4);

	this->ProcessEvent(uFnOpenPS4DisplayMode, &OpenPS4DisplayMode_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetControllerColor
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ControllerId                   (CPF_Parm)

void UOnlineSubsystemSteamworks::ResetControllerColor(int32_t ControllerId)
{
	static UFunction* uFnResetControllerColor = nullptr;

	if (!uFnResetControllerColor)
	{
		uFnResetControllerColor = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetControllerColor");
	}

	UOnlineSubsystemSteamworks_execResetControllerColor_Params ResetControllerColor_Params;
	memcpy_s(&ResetControllerColor_Params.ControllerId, 0x4, &ControllerId, 0x4);

	this->ProcessEvent(uFnResetControllerColor, &ResetControllerColor_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetControllerColor
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// int32_t                        ControllerId                   (CPF_Parm)
// struct FColor                  NewColor                       (CPF_Parm)

void UOnlineSubsystemSteamworks::SetControllerColor(int32_t ControllerId, struct FColor NewColor)
{
	static UFunction* uFnSetControllerColor = nullptr;

	if (!uFnSetControllerColor)
	{
		uFnSetControllerColor = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetControllerColor");
	}

	UOnlineSubsystemSteamworks_execSetControllerColor_Params SetControllerColor_Params;
	memcpy_s(&SetControllerColor_Params.ControllerId, 0x4, &ControllerId, 0x4);
	memcpy_s(&SetControllerColor_Params.NewColor, 0x4, &NewColor, 0x4);

	this->ProcessEvent(uFnSetControllerColor, &SetControllerColor_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddInGamePost
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 InPostID                       (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FString>         StringReplaceList              (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::AddInGamePost(struct FString InPostID, uint8_t LocalUserNum, TArray<struct FString> StringReplaceList)
{
	static UFunction* uFnAddInGamePost = nullptr;

	if (!uFnAddInGamePost)
	{
		uFnAddInGamePost = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddInGamePost");
	}

	UOnlineSubsystemSteamworks_execAddInGamePost_Params AddInGamePost_Params;
	memcpy_s(&AddInGamePost_Params.InPostID, 0x10, &InPostID, 0x10);
	memcpy_s(&AddInGamePost_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddInGamePost_Params.StringReplaceList, 0x10, &StringReplaceList, 0x10);

	this->ProcessEvent(uFnAddInGamePost, &AddInGamePost_Params, nullptr);

	return AddInGamePost_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsEnabled
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::IsEnabled()
{
	static UFunction* uFnIsEnabled = nullptr;

	if (!uFnIsEnabled)
	{
		uFnIsEnabled = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsEnabled");
	}

	UOnlineSubsystemSteamworks_execIsEnabled_Params IsEnabled_Params;

	uFnIsEnabled->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsEnabled, &IsEnabled_Params, nullptr);

	uFnIsEnabled->FunctionFlags |= 0x400;

	return IsEnabled_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRichPresence
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FString                 PresenceString                 (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 GameDataString                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::SetRichPresence(uint8_t LocalUserNum, struct FString PresenceString, struct FString GameDataString)
{
	static UFunction* uFnSetRichPresence = nullptr;

	if (!uFnSetRichPresence)
	{
		uFnSetRichPresence = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRichPresence");
	}

	UOnlineSubsystemSteamworks_execSetRichPresence_Params SetRichPresence_Params;
	memcpy_s(&SetRichPresence_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&SetRichPresence_Params.PresenceString, 0x10, &PresenceString, 0x10);
	memcpy_s(&SetRichPresence_Params.GameDataString, 0x10, &GameDataString, 0x10);

	uFnSetRichPresence->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetRichPresence, &SetRichPresence_Params, nullptr);

	uFnSetRichPresence->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAllDelegates
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::ClearAllDelegates()
{
	static UFunction* uFnClearAllDelegates = nullptr;

	if (!uFnClearAllDelegates)
	{
		uFnClearAllDelegates = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAllDelegates");
	}

	UOnlineSubsystemSteamworks_execClearAllDelegates_Params ClearAllDelegates_Params;

	this->ProcessEvent(uFnClearAllDelegates, &ClearAllDelegates_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSharedFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         WriteSharedFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWriteSharedFileCompleteDelegate(struct FScriptDelegate WriteSharedFileCompleteDelegate)
{
	static UFunction* uFnClearWriteSharedFileCompleteDelegate = nullptr;

	if (!uFnClearWriteSharedFileCompleteDelegate)
	{
		uFnClearWriteSharedFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSharedFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearWriteSharedFileCompleteDelegate_Params ClearWriteSharedFileCompleteDelegate_Params;
	memcpy_s(&ClearWriteSharedFileCompleteDelegate_Params.WriteSharedFileCompleteDelegate, 0x18, &WriteSharedFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearWriteSharedFileCompleteDelegate, &ClearWriteSharedFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSharedFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         WriteSharedFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWriteSharedFileCompleteDelegate(struct FScriptDelegate WriteSharedFileCompleteDelegate)
{
	static UFunction* uFnAddWriteSharedFileCompleteDelegate = nullptr;

	if (!uFnAddWriteSharedFileCompleteDelegate)
	{
		uFnAddWriteSharedFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSharedFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddWriteSharedFileCompleteDelegate_Params AddWriteSharedFileCompleteDelegate_Params;
	memcpy_s(&AddWriteSharedFileCompleteDelegate_Params.WriteSharedFileCompleteDelegate, 0x18, &WriteSharedFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddWriteSharedFileCompleteDelegate, &AddWriteSharedFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSharedFile
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                Contents                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WriteSharedFile(struct FString UserId, struct FString Filename, TArray<uint8_t>& Contents)
{
	static UFunction* uFnWriteSharedFile = nullptr;

	if (!uFnWriteSharedFile)
	{
		uFnWriteSharedFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSharedFile");
	}

	UOnlineSubsystemSteamworks_execWriteSharedFile_Params WriteSharedFile_Params;
	memcpy_s(&WriteSharedFile_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&WriteSharedFile_Params.Filename, 0x10, &Filename, 0x10);
	memcpy_s(&WriteSharedFile_Params.Contents, 0x10, &Contents, 0x10);

	uFnWriteSharedFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnWriteSharedFile, &WriteSharedFile_Params, nullptr);

	uFnWriteSharedFile->FunctionFlags |= 0x400;

	memcpy_s(&Contents, 0x10, &WriteSharedFile_Params.Contents, 0x10);

	return WriteSharedFile_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSharedFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SharedHandle                   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnWriteSharedFileComplete(unsigned long bWasSuccessful, struct FString UserId, struct FString Filename, struct FString SharedHandle)
{
	static UFunction* uFnOnWriteSharedFileComplete = nullptr;

	if (!uFnOnWriteSharedFileComplete)
	{
		uFnOnWriteSharedFileComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSharedFileComplete");
	}

	UOnlineSubsystemSteamworks_execOnWriteSharedFileComplete_Params OnWriteSharedFileComplete_Params;
	OnWriteSharedFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnWriteSharedFileComplete_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&OnWriteSharedFileComplete_Params.Filename, 0x10, &Filename, 0x10);
	memcpy_s(&OnWriteSharedFileComplete_Params.SharedHandle, 0x10, &SharedHandle, 0x10);

	this->ProcessEvent(uFnOnWriteSharedFileComplete, &OnWriteSharedFileComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSharedFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadSharedFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadSharedFileCompleteDelegate(struct FScriptDelegate ReadSharedFileCompleteDelegate)
{
	static UFunction* uFnClearReadSharedFileCompleteDelegate = nullptr;

	if (!uFnClearReadSharedFileCompleteDelegate)
	{
		uFnClearReadSharedFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSharedFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadSharedFileCompleteDelegate_Params ClearReadSharedFileCompleteDelegate_Params;
	memcpy_s(&ClearReadSharedFileCompleteDelegate_Params.ReadSharedFileCompleteDelegate, 0x18, &ReadSharedFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearReadSharedFileCompleteDelegate, &ClearReadSharedFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSharedFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadSharedFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadSharedFileCompleteDelegate(struct FScriptDelegate ReadSharedFileCompleteDelegate)
{
	static UFunction* uFnAddReadSharedFileCompleteDelegate = nullptr;

	if (!uFnAddReadSharedFileCompleteDelegate)
	{
		uFnAddReadSharedFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSharedFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadSharedFileCompleteDelegate_Params AddReadSharedFileCompleteDelegate_Params;
	memcpy_s(&AddReadSharedFileCompleteDelegate_Params.ReadSharedFileCompleteDelegate, 0x18, &ReadSharedFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddReadSharedFileCompleteDelegate, &AddReadSharedFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSharedFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 SharedHandle                   (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ReadSharedFile(struct FString SharedHandle)
{
	static UFunction* uFnReadSharedFile = nullptr;

	if (!uFnReadSharedFile)
	{
		uFnReadSharedFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSharedFile");
	}

	UOnlineSubsystemSteamworks_execReadSharedFile_Params ReadSharedFile_Params;
	memcpy_s(&ReadSharedFile_Params.SharedHandle, 0x10, &SharedHandle, 0x10);

	uFnReadSharedFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReadSharedFile, &ReadSharedFile_Params, nullptr);

	uFnReadSharedFile->FunctionFlags |= 0x400;

	return ReadSharedFile_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSharedFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 SharedHandle                   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReadSharedFileComplete(unsigned long bWasSuccessful, struct FString SharedHandle)
{
	static UFunction* uFnOnReadSharedFileComplete = nullptr;

	if (!uFnOnReadSharedFileComplete)
	{
		uFnOnReadSharedFileComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSharedFileComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadSharedFileComplete_Params OnReadSharedFileComplete_Params;
	OnReadSharedFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadSharedFileComplete_Params.SharedHandle, 0x10, &SharedHandle, 0x10);

	this->ProcessEvent(uFnOnReadSharedFileComplete, &OnReadSharedFileComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 SharedHandle                   (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ClearSharedFile(struct FString SharedHandle)
{
	static UFunction* uFnClearSharedFile = nullptr;

	if (!uFnClearSharedFile)
	{
		uFnClearSharedFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFile");
	}

	UOnlineSubsystemSteamworks_execClearSharedFile_Params ClearSharedFile_Params;
	memcpy_s(&ClearSharedFile_Params.SharedHandle, 0x10, &SharedHandle, 0x10);

	uFnClearSharedFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnClearSharedFile, &ClearSharedFile_Params, nullptr);

	uFnClearSharedFile->FunctionFlags |= 0x400;

	return ClearSharedFile_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFiles
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ClearSharedFiles()
{
	static UFunction* uFnClearSharedFiles = nullptr;

	if (!uFnClearSharedFiles)
	{
		uFnClearSharedFiles = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSharedFiles");
	}

	UOnlineSubsystemSteamworks_execClearSharedFiles_Params ClearSharedFiles_Params;

	uFnClearSharedFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnClearSharedFiles, &ClearSharedFiles_Params, nullptr);

	uFnClearSharedFiles->FunctionFlags |= 0x400;

	return ClearSharedFiles_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSharedFileContents
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 SharedHandle                   (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetSharedFileContents(struct FString SharedHandle, TArray<uint8_t>& FileContents)
{
	static UFunction* uFnGetSharedFileContents = nullptr;

	if (!uFnGetSharedFileContents)
	{
		uFnGetSharedFileContents = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSharedFileContents");
	}

	UOnlineSubsystemSteamworks_execGetSharedFileContents_Params GetSharedFileContents_Params;
	memcpy_s(&GetSharedFileContents_Params.SharedHandle, 0x10, &SharedHandle, 0x10);
	memcpy_s(&GetSharedFileContents_Params.FileContents, 0x10, &FileContents, 0x10);

	uFnGetSharedFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetSharedFileContents, &GetSharedFileContents_Params, nullptr);

	uFnGetSharedFileContents->FunctionFlags |= 0x400;

	memcpy_s(&FileContents, 0x10, &GetSharedFileContents_Params.FileContents, 0x10);

	return GetSharedFileContents_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeleteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearDeleteUserFileCompleteDelegate(struct FScriptDelegate DeleteUserFileCompleteDelegate)
{
	static UFunction* uFnClearDeleteUserFileCompleteDelegate = nullptr;

	if (!uFnClearDeleteUserFileCompleteDelegate)
	{
		uFnClearDeleteUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeleteUserFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearDeleteUserFileCompleteDelegate_Params ClearDeleteUserFileCompleteDelegate_Params;
	memcpy_s(&ClearDeleteUserFileCompleteDelegate_Params.DeleteUserFileCompleteDelegate, 0x18, &DeleteUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearDeleteUserFileCompleteDelegate, &ClearDeleteUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeleteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         DeleteUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddDeleteUserFileCompleteDelegate(struct FScriptDelegate DeleteUserFileCompleteDelegate)
{
	static UFunction* uFnAddDeleteUserFileCompleteDelegate = nullptr;

	if (!uFnAddDeleteUserFileCompleteDelegate)
	{
		uFnAddDeleteUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeleteUserFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddDeleteUserFileCompleteDelegate_Params AddDeleteUserFileCompleteDelegate_Params;
	memcpy_s(&AddDeleteUserFileCompleteDelegate_Params.DeleteUserFileCompleteDelegate, 0x18, &DeleteUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddDeleteUserFileCompleteDelegate, &AddDeleteUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteUserFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bShouldCloudDelete             (CPF_Parm)
// unsigned long                  bShouldLocallyDelete           (CPF_Parm)

bool UOnlineSubsystemSteamworks::DeleteUserFile(struct FString UserId, struct FString Filename, unsigned long bShouldCloudDelete, unsigned long bShouldLocallyDelete)
{
	static UFunction* uFnDeleteUserFile = nullptr;

	if (!uFnDeleteUserFile)
	{
		uFnDeleteUserFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteUserFile");
	}

	UOnlineSubsystemSteamworks_execDeleteUserFile_Params DeleteUserFile_Params;
	memcpy_s(&DeleteUserFile_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&DeleteUserFile_Params.Filename, 0x10, &Filename, 0x10);
	DeleteUserFile_Params.bShouldCloudDelete = bShouldCloudDelete;
	DeleteUserFile_Params.bShouldLocallyDelete = bShouldLocallyDelete;

	uFnDeleteUserFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDeleteUserFile, &DeleteUserFile_Params, nullptr);

	uFnDeleteUserFile->FunctionFlags |= 0x400;

	return DeleteUserFile_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeleteUserFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnDeleteUserFileComplete(unsigned long bWasSuccessful, struct FString UserId, struct FString Filename)
{
	static UFunction* uFnOnDeleteUserFileComplete = nullptr;

	if (!uFnOnDeleteUserFileComplete)
	{
		uFnOnDeleteUserFileComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeleteUserFileComplete");
	}

	UOnlineSubsystemSteamworks_execOnDeleteUserFileComplete_Params OnDeleteUserFileComplete_Params;
	OnDeleteUserFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnDeleteUserFileComplete_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&OnDeleteUserFileComplete_Params.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(uFnOnDeleteUserFileComplete, &OnDeleteUserFileComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWriteUserFileCompleteDelegate(struct FScriptDelegate WriteUserFileCompleteDelegate)
{
	static UFunction* uFnClearWriteUserFileCompleteDelegate = nullptr;

	if (!uFnClearWriteUserFileCompleteDelegate)
	{
		uFnClearWriteUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteUserFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearWriteUserFileCompleteDelegate_Params ClearWriteUserFileCompleteDelegate_Params;
	memcpy_s(&ClearWriteUserFileCompleteDelegate_Params.WriteUserFileCompleteDelegate, 0x18, &WriteUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearWriteUserFileCompleteDelegate, &ClearWriteUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         WriteUserFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWriteUserFileCompleteDelegate(struct FScriptDelegate WriteUserFileCompleteDelegate)
{
	static UFunction* uFnAddWriteUserFileCompleteDelegate = nullptr;

	if (!uFnAddWriteUserFileCompleteDelegate)
	{
		uFnAddWriteUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteUserFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddWriteUserFileCompleteDelegate_Params AddWriteUserFileCompleteDelegate_Params;
	memcpy_s(&AddWriteUserFileCompleteDelegate_Params.WriteUserFileCompleteDelegate, 0x18, &WriteUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddWriteUserFileCompleteDelegate, &AddWriteUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFile
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                FileContents                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WriteUserFile(struct FString UserId, struct FString Filename, TArray<uint8_t>& FileContents)
{
	static UFunction* uFnWriteUserFile = nullptr;

	if (!uFnWriteUserFile)
	{
		uFnWriteUserFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFile");
	}

	UOnlineSubsystemSteamworks_execWriteUserFile_Params WriteUserFile_Params;
	memcpy_s(&WriteUserFile_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&WriteUserFile_Params.Filename, 0x10, &Filename, 0x10);
	memcpy_s(&WriteUserFile_Params.FileContents, 0x10, &FileContents, 0x10);

	uFnWriteUserFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnWriteUserFile, &WriteUserFile_Params, nullptr);

	uFnWriteUserFile->FunctionFlags |= 0x400;

	memcpy_s(&FileContents, 0x10, &WriteUserFile_Params.FileContents, 0x10);

	return WriteUserFile_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteUserFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnWriteUserFileComplete(unsigned long bWasSuccessful, struct FString UserId, struct FString Filename)
{
	static UFunction* uFnOnWriteUserFileComplete = nullptr;

	if (!uFnOnWriteUserFileComplete)
	{
		uFnOnWriteUserFileComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteUserFileComplete");
	}

	UOnlineSubsystemSteamworks_execOnWriteUserFileComplete_Params OnWriteUserFileComplete_Params;
	OnWriteUserFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnWriteUserFileComplete_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&OnWriteUserFileComplete_Params.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(uFnOnWriteUserFileComplete, &OnWriteUserFileComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadUserFileCompleteDelegate(struct FScriptDelegate ReadUserFileCompleteDelegate)
{
	static UFunction* uFnClearReadUserFileCompleteDelegate = nullptr;

	if (!uFnClearReadUserFileCompleteDelegate)
	{
		uFnClearReadUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadUserFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadUserFileCompleteDelegate_Params ClearReadUserFileCompleteDelegate_Params;
	memcpy_s(&ClearReadUserFileCompleteDelegate_Params.ReadUserFileCompleteDelegate, 0x18, &ReadUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearReadUserFileCompleteDelegate, &ClearReadUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadUserFileCompleteDelegate   (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadUserFileCompleteDelegate(struct FScriptDelegate ReadUserFileCompleteDelegate)
{
	static UFunction* uFnAddReadUserFileCompleteDelegate = nullptr;

	if (!uFnAddReadUserFileCompleteDelegate)
	{
		uFnAddReadUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadUserFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadUserFileCompleteDelegate_Params AddReadUserFileCompleteDelegate_Params;
	memcpy_s(&AddReadUserFileCompleteDelegate_Params.ReadUserFileCompleteDelegate, 0x18, &ReadUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddReadUserFileCompleteDelegate, &AddReadUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadUserFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ReadUserFile(struct FString UserId, struct FString Filename)
{
	static UFunction* uFnReadUserFile = nullptr;

	if (!uFnReadUserFile)
	{
		uFnReadUserFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadUserFile");
	}

	UOnlineSubsystemSteamworks_execReadUserFile_Params ReadUserFile_Params;
	memcpy_s(&ReadUserFile_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&ReadUserFile_Params.Filename, 0x10, &Filename, 0x10);

	uFnReadUserFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReadUserFile, &ReadUserFile_Params, nullptr);

	uFnReadUserFile->FunctionFlags |= 0x400;

	return ReadUserFile_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadUserFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReadUserFileComplete(unsigned long bWasSuccessful, struct FString UserId, struct FString Filename)
{
	static UFunction* uFnOnReadUserFileComplete = nullptr;

	if (!uFnOnReadUserFileComplete)
	{
		uFnOnReadUserFileComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadUserFileComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadUserFileComplete_Params OnReadUserFileComplete_Params;
	OnReadUserFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadUserFileComplete_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&OnReadUserFileComplete_Params.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(uFnOnReadUserFileComplete, &OnReadUserFileComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserFileList
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FEmsFile>        UserFiles                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::GetUserFileList(struct FString UserId, TArray<struct FEmsFile>& UserFiles)
{
	static UFunction* uFnGetUserFileList = nullptr;

	if (!uFnGetUserFileList)
	{
		uFnGetUserFileList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserFileList");
	}

	UOnlineSubsystemSteamworks_execGetUserFileList_Params GetUserFileList_Params;
	memcpy_s(&GetUserFileList_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&GetUserFileList_Params.UserFiles, 0x10, &UserFiles, 0x10);

	uFnGetUserFileList->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetUserFileList, &GetUserFileList_Params, nullptr);

	uFnGetUserFileList->FunctionFlags |= 0x400;

	memcpy_s(&UserFiles, 0x10, &GetUserFileList_Params.UserFiles, 0x10);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearEnumerateUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearEnumerateUserFileCompleteDelegate(struct FScriptDelegate EnumerateUserFileCompleteDelegate)
{
	static UFunction* uFnClearEnumerateUserFileCompleteDelegate = nullptr;

	if (!uFnClearEnumerateUserFileCompleteDelegate)
	{
		uFnClearEnumerateUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearEnumerateUserFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearEnumerateUserFileCompleteDelegate_Params ClearEnumerateUserFileCompleteDelegate_Params;
	memcpy_s(&ClearEnumerateUserFileCompleteDelegate_Params.EnumerateUserFileCompleteDelegate, 0x18, &EnumerateUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearEnumerateUserFileCompleteDelegate, &ClearEnumerateUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddEnumerateUserFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         EnumerateUserFileCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddEnumerateUserFileCompleteDelegate(struct FScriptDelegate EnumerateUserFileCompleteDelegate)
{
	static UFunction* uFnAddEnumerateUserFileCompleteDelegate = nullptr;

	if (!uFnAddEnumerateUserFileCompleteDelegate)
	{
		uFnAddEnumerateUserFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddEnumerateUserFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddEnumerateUserFileCompleteDelegate_Params AddEnumerateUserFileCompleteDelegate_Params;
	memcpy_s(&AddEnumerateUserFileCompleteDelegate_Params.EnumerateUserFileCompleteDelegate, 0x18, &EnumerateUserFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddEnumerateUserFileCompleteDelegate, &AddEnumerateUserFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateUserFiles
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::EnumerateUserFiles(struct FString UserId)
{
	static UFunction* uFnEnumerateUserFiles = nullptr;

	if (!uFnEnumerateUserFiles)
	{
		uFnEnumerateUserFiles = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateUserFiles");
	}

	UOnlineSubsystemSteamworks_execEnumerateUserFiles_Params EnumerateUserFiles_Params;
	memcpy_s(&EnumerateUserFiles_Params.UserId, 0x10, &UserId, 0x10);

	uFnEnumerateUserFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnEnumerateUserFiles, &EnumerateUserFiles_Params, nullptr);

	uFnEnumerateUserFiles->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnEnumerateUserFilesComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnEnumerateUserFilesComplete(unsigned long bWasSuccessful, struct FString UserId)
{
	static UFunction* uFnOnEnumerateUserFilesComplete = nullptr;

	if (!uFnOnEnumerateUserFilesComplete)
	{
		uFnOnEnumerateUserFilesComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnEnumerateUserFilesComplete");
	}

	UOnlineSubsystemSteamworks_execOnEnumerateUserFilesComplete_Params OnEnumerateUserFilesComplete_Params;
	OnEnumerateUserFilesComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnEnumerateUserFilesComplete_Params.UserId, 0x10, &UserId, 0x10);

	this->ProcessEvent(uFnOnEnumerateUserFilesComplete, &OnEnumerateUserFilesComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ClearFile(struct FString UserId, struct FString Filename)
{
	static UFunction* uFnClearFile = nullptr;

	if (!uFnClearFile)
	{
		uFnClearFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFile");
	}

	UOnlineSubsystemSteamworks_execClearFile_Params ClearFile_Params;
	memcpy_s(&ClearFile_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&ClearFile_Params.Filename, 0x10, &Filename, 0x10);

	uFnClearFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnClearFile, &ClearFile_Params, nullptr);

	uFnClearFile->FunctionFlags |= 0x400;

	return ClearFile_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFiles
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ClearFiles(struct FString UserId)
{
	static UFunction* uFnClearFiles = nullptr;

	if (!uFnClearFiles)
	{
		uFnClearFiles = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFiles");
	}

	UOnlineSubsystemSteamworks_execClearFiles_Params ClearFiles_Params;
	memcpy_s(&ClearFiles_Params.UserId, 0x10, &UserId, 0x10);

	uFnClearFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnClearFiles, &ClearFiles_Params, nullptr);

	uFnClearFiles->FunctionFlags |= 0x400;

	return ClearFiles_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFileContents
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetFileContents(struct FString UserId, struct FString Filename, TArray<uint8_t>& FileContents)
{
	static UFunction* uFnGetFileContents = nullptr;

	if (!uFnGetFileContents)
	{
		uFnGetFileContents = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFileContents");
	}

	UOnlineSubsystemSteamworks_execGetFileContents_Params GetFileContents_Params;
	memcpy_s(&GetFileContents_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&GetFileContents_Params.Filename, 0x10, &Filename, 0x10);
	memcpy_s(&GetFileContents_Params.FileContents, 0x10, &FileContents, 0x10);

	uFnGetFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetFileContents, &GetFileContents_Params, nullptr);

	uFnGetFileContents->FunctionFlags |= 0x400;

	memcpy_s(&FileContents, 0x10, &GetFileContents_Params.FileContents, 0x10);

	return GetFileContents_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFileInternal
// [0x00440401] (FUNC_Final | FUNC_Native | FUNC_Private | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 UserId                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                FileContents                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WriteUserFileInternal(struct FString UserId, struct FString Filename, TArray<uint8_t>& FileContents)
{
	static UFunction* uFnWriteUserFileInternal = nullptr;

	if (!uFnWriteUserFileInternal)
	{
		uFnWriteUserFileInternal = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteUserFileInternal");
	}

	UOnlineSubsystemSteamworks_execWriteUserFileInternal_Params WriteUserFileInternal_Params;
	memcpy_s(&WriteUserFileInternal_Params.UserId, 0x10, &UserId, 0x10);
	memcpy_s(&WriteUserFileInternal_Params.Filename, 0x10, &Filename, 0x10);
	memcpy_s(&WriteUserFileInternal_Params.FileContents, 0x10, &FileContents, 0x10);

	uFnWriteUserFileInternal->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnWriteUserFileInternal, &WriteUserFileInternal_Params, nullptr);

	uFnWriteUserFileInternal->FunctionFlags |= 0x400;

	memcpy_s(&FileContents, 0x10, &WriteUserFileInternal_Params.FileContents, 0x10);

	return WriteUserFileInternal_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetVoiceReceiveVolume
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// float                          VoiceVolume                    (CPF_Parm)

bool UOnlineSubsystemSteamworks::SetVoiceReceiveVolume(float VoiceVolume)
{
	static UFunction* uFnSetVoiceReceiveVolume = nullptr;

	if (!uFnSetVoiceReceiveVolume)
	{
		uFnSetVoiceReceiveVolume = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetVoiceReceiveVolume");
	}

	UOnlineSubsystemSteamworks_execSetVoiceReceiveVolume_Params SetVoiceReceiveVolume_Params;
	memcpy_s(&SetVoiceReceiveVolume_Params.VoiceVolume, 0x4, &VoiceVolume, 0x4);

	uFnSetVoiceReceiveVolume->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetVoiceReceiveVolume, &SetVoiceReceiveVolume_Params, nullptr);

	uFnSetVoiceReceiveVolume->FunctionFlags |= 0x400;

	return SetVoiceReceiveVolume_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendJoinURL
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            FriendUID                      (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 ServerURL                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// struct FString                 ServerUID                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetFriendJoinURL(struct FUniqueNetId FriendUID, struct FString& ServerURL, struct FString& ServerUID)
{
	static UFunction* uFnGetFriendJoinURL = nullptr;

	if (!uFnGetFriendJoinURL)
	{
		uFnGetFriendJoinURL = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendJoinURL");
	}

	UOnlineSubsystemSteamworks_execGetFriendJoinURL_Params GetFriendJoinURL_Params;
	memcpy_s(&GetFriendJoinURL_Params.FriendUID, 0x48, &FriendUID, 0x48);
	memcpy_s(&GetFriendJoinURL_Params.ServerURL, 0x10, &ServerURL, 0x10);
	memcpy_s(&GetFriendJoinURL_Params.ServerUID, 0x10, &ServerUID, 0x10);

	uFnGetFriendJoinURL->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetFriendJoinURL, &GetFriendJoinURL_Params, nullptr);

	uFnGetFriendJoinURL->FunctionFlags |= 0x400;

	memcpy_s(&ServerURL, 0x10, &GetFriendJoinURL_Params.ServerURL, 0x10);
	memcpy_s(&ServerUID, 0x10, &GetFriendJoinURL_Params.ServerUID, 0x10);

	return GetFriendJoinURL_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCommandlineJoinURL
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  bMarkAsJoined                  (CPF_Parm)
// struct FString                 ServerURL                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// struct FString                 ServerUID                      (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetCommandlineJoinURL(unsigned long bMarkAsJoined, struct FString& ServerURL, struct FString& ServerUID)
{
	static UFunction* uFnGetCommandlineJoinURL = nullptr;

	if (!uFnGetCommandlineJoinURL)
	{
		uFnGetCommandlineJoinURL = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCommandlineJoinURL");
	}

	UOnlineSubsystemSteamworks_execGetCommandlineJoinURL_Params GetCommandlineJoinURL_Params;
	GetCommandlineJoinURL_Params.bMarkAsJoined = bMarkAsJoined;
	memcpy_s(&GetCommandlineJoinURL_Params.ServerURL, 0x10, &ServerURL, 0x10);
	memcpy_s(&GetCommandlineJoinURL_Params.ServerUID, 0x10, &ServerUID, 0x10);

	uFnGetCommandlineJoinURL->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetCommandlineJoinURL, &GetCommandlineJoinURL_Params, nullptr);

	uFnGetCommandlineJoinURL->FunctionFlags |= 0x400;

	memcpy_s(&ServerURL, 0x10, &GetCommandlineJoinURL_Params.ServerURL, 0x10);
	memcpy_s(&ServerUID, 0x10, &GetCommandlineJoinURL_Params.ServerUID, 0x10);

	return GetCommandlineJoinURL_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 UIDString                      (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            OutUID                         (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::Int64ToUniqueNetId(struct FString UIDString, struct FUniqueNetId& OutUID)
{
	static UFunction* uFnInt64ToUniqueNetId = nullptr;

	if (!uFnInt64ToUniqueNetId)
	{
		uFnInt64ToUniqueNetId = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId");
	}

	UOnlineSubsystemSteamworks_execInt64ToUniqueNetId_Params Int64ToUniqueNetId_Params;
	memcpy_s(&Int64ToUniqueNetId_Params.UIDString, 0x10, &UIDString, 0x10);
	memcpy_s(&Int64ToUniqueNetId_Params.OutUID, 0x48, &OutUID, 0x48);

	uFnInt64ToUniqueNetId->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnInt64ToUniqueNetId, &Int64ToUniqueNetId_Params, nullptr);

	uFnInt64ToUniqueNetId->FunctionFlags |= 0x400;

	memcpy_s(&OutUID, 0x48, &Int64ToUniqueNetId_Params.OutUID, 0x48);

	return Int64ToUniqueNetId_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FUniqueNetId            Uid                            (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::UniqueNetIdToInt64(struct FUniqueNetId& Uid)
{
	static UFunction* uFnUniqueNetIdToInt64 = nullptr;

	if (!uFnUniqueNetIdToInt64)
	{
		uFnUniqueNetIdToInt64 = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64");
	}

	UOnlineSubsystemSteamworks_execUniqueNetIdToInt64_Params UniqueNetIdToInt64_Params;
	memcpy_s(&UniqueNetIdToInt64_Params.Uid, 0x48, &Uid, 0x48);

	uFnUniqueNetIdToInt64->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUniqueNetIdToInt64, &UniqueNetIdToInt64_Params, nullptr);

	uFnUniqueNetIdToInt64->FunctionFlags |= 0x400;

	memcpy_s(&Uid, 0x48, &UniqueNetIdToInt64_Params.Uid, 0x48);

	return UniqueNetIdToInt64_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NotifyVOIPPlaybackFinished
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UAudioComponent*         VOIPAudioComponent             (CPF_Parm | CPF_EditInline)

void UOnlineSubsystemSteamworks::NotifyVOIPPlaybackFinished(class UAudioComponent* VOIPAudioComponent)
{
	static UFunction* uFnNotifyVOIPPlaybackFinished = nullptr;

	if (!uFnNotifyVOIPPlaybackFinished)
	{
		uFnNotifyVOIPPlaybackFinished = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NotifyVOIPPlaybackFinished");
	}

	UOnlineSubsystemSteamworks_execNotifyVOIPPlaybackFinished_Params NotifyVOIPPlaybackFinished_Params;
	memcpy_s(&NotifyVOIPPlaybackFinished_Params.VOIPAudioComponent, 0x8, &VOIPAudioComponent, 0x8);

	uFnNotifyVOIPPlaybackFinished->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnNotifyVOIPPlaybackFinished, &NotifyVOIPPlaybackFinished_Params, nullptr);

	uFnNotifyVOIPPlaybackFinished->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnVOIPPlaybackFinished
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UAudioComponent*         AC                             (CPF_Parm | CPF_EditInline)

void UOnlineSubsystemSteamworks::OnVOIPPlaybackFinished(class UAudioComponent* AC)
{
	static UFunction* uFnOnVOIPPlaybackFinished = nullptr;

	if (!uFnOnVOIPPlaybackFinished)
	{
		uFnOnVOIPPlaybackFinished = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnVOIPPlaybackFinished");
	}

	UOnlineSubsystemSteamworks_execOnVOIPPlaybackFinished_Params OnVOIPPlaybackFinished_Params;
	memcpy_s(&OnVOIPPlaybackFinished_Params.AC, 0x8, &AC, 0x8);

	this->ProcessEvent(uFnOnVOIPPlaybackFinished, &OnVOIPPlaybackFinished_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FString                 SubURL                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            PlayerUID                      (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowProfileUI(uint8_t LocalUserNum, struct FString SubURL, struct FUniqueNetId PlayerUID)
{
	static UFunction* uFnShowProfileUI = nullptr;

	if (!uFnShowProfileUI)
	{
		uFnShowProfileUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI");
	}

	UOnlineSubsystemSteamworks_execShowProfileUI_Params ShowProfileUI_Params;
	memcpy_s(&ShowProfileUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ShowProfileUI_Params.SubURL, 0x10, &SubURL, 0x10);
	memcpy_s(&ShowProfileUI_Params.PlayerUID, 0x48, &PlayerUID, 0x48);

	uFnShowProfileUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnShowProfileUI, &ShowProfileUI_Params, nullptr);

	uFnShowProfileUI->FunctionFlags |= 0x400;

	return ShowProfileUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FUniqueNetId            Uid                            (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::UniqueNetIdToPlayerName(struct FUniqueNetId& Uid)
{
	static UFunction* uFnUniqueNetIdToPlayerName = nullptr;

	if (!uFnUniqueNetIdToPlayerName)
	{
		uFnUniqueNetIdToPlayerName = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName");
	}

	UOnlineSubsystemSteamworks_execUniqueNetIdToPlayerName_Params UniqueNetIdToPlayerName_Params;
	memcpy_s(&UniqueNetIdToPlayerName_Params.Uid, 0x48, &Uid, 0x48);

	uFnUniqueNetIdToPlayerName->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUniqueNetIdToPlayerName, &UniqueNetIdToPlayerName_Params, nullptr);

	uFnUniqueNetIdToPlayerName->FunctionFlags |= 0x400;

	memcpy_s(&Uid, 0x48, &UniqueNetIdToPlayerName_Params.Uid, 0x48);

	return UniqueNetIdToPlayerName_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        AchievementId                  (CPF_Parm)
// int32_t                        ProgressCount                  (CPF_Parm)
// int32_t                        MaxProgress                    (CPF_Parm)

bool UOnlineSubsystemSteamworks::DisplayAchievementProgress(int32_t AchievementId, int32_t ProgressCount, int32_t MaxProgress)
{
	static UFunction* uFnDisplayAchievementProgress = nullptr;

	if (!uFnDisplayAchievementProgress)
	{
		uFnDisplayAchievementProgress = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress");
	}

	UOnlineSubsystemSteamworks_execDisplayAchievementProgress_Params DisplayAchievementProgress_Params;
	memcpy_s(&DisplayAchievementProgress_Params.AchievementId, 0x4, &AchievementId, 0x4);
	memcpy_s(&DisplayAchievementProgress_Params.ProgressCount, 0x4, &ProgressCount, 0x4);
	memcpy_s(&DisplayAchievementProgress_Params.MaxProgress, 0x4, &MaxProgress, 0x4);

	uFnDisplayAchievementProgress->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDisplayAchievementProgress, &DisplayAchievementProgress_Params, nullptr);

	uFnDisplayAchievementProgress->FunctionFlags |= 0x400;

	return DisplayAchievementProgress_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 LeaderboardName                (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        SortType                       (CPF_Parm)
// uint8_t                        DisplayFormat                  (CPF_Parm)

bool UOnlineSubsystemSteamworks::CreateLeaderboard(struct FString LeaderboardName, uint8_t SortType, uint8_t DisplayFormat)
{
	static UFunction* uFnCreateLeaderboard = nullptr;

	if (!uFnCreateLeaderboard)
	{
		uFnCreateLeaderboard = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard");
	}

	UOnlineSubsystemSteamworks_execCreateLeaderboard_Params CreateLeaderboard_Params;
	memcpy_s(&CreateLeaderboard_Params.LeaderboardName, 0x10, &LeaderboardName, 0x10);
	memcpy_s(&CreateLeaderboard_Params.SortType, 0x1, &SortType, 0x1);
	memcpy_s(&CreateLeaderboard_Params.DisplayFormat, 0x1, &DisplayFormat, 0x1);

	uFnCreateLeaderboard->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCreateLeaderboard, &CreateLeaderboard_Params, nullptr);

	uFnCreateLeaderboard->FunctionFlags |= 0x400;

	return CreateLeaderboard_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats
// [0x400020400] (FUNC_Native | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// unsigned long                  bResetAchievements             (CPF_Parm)

bool UOnlineSubsystemSteamworks::ResetStats(unsigned long bResetAchievements)
{
	static UFunction* uFnResetStats = nullptr;

	if (!uFnResetStats)
	{
		uFnResetStats = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats");
	}

	UOnlineSubsystemSteamworks_execResetStats_Params ResetStats_Params;
	ResetStats_Params.bResetAchievements = bResetAchievements;

	uFnResetStats->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnResetStats, &ResetStats_Params, nullptr);

	uFnResetStats->FunctionFlags |= 0x400;

	return ResetStats_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FString                 MessageTitle                   (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 NonEditableMessage             (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 EditableMessage                (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FUniqueNetId>    Recipients                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowCustomMessageUI(uint8_t LocalUserNum, struct FString MessageTitle, struct FString NonEditableMessage, struct FString EditableMessage, TArray<struct FUniqueNetId>& Recipients)
{
	static UFunction* uFnShowCustomMessageUI = nullptr;

	if (!uFnShowCustomMessageUI)
	{
		uFnShowCustomMessageUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI");
	}

	UOnlineSubsystemSteamworks_execShowCustomMessageUI_Params ShowCustomMessageUI_Params;
	memcpy_s(&ShowCustomMessageUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ShowCustomMessageUI_Params.MessageTitle, 0x10, &MessageTitle, 0x10);
	memcpy_s(&ShowCustomMessageUI_Params.NonEditableMessage, 0x10, &NonEditableMessage, 0x10);
	memcpy_s(&ShowCustomMessageUI_Params.EditableMessage, 0x10, &EditableMessage, 0x10);
	memcpy_s(&ShowCustomMessageUI_Params.Recipients, 0x10, &Recipients, 0x10);

	this->ProcessEvent(uFnShowCustomMessageUI, &ShowCustomMessageUI_Params, nullptr);

	memcpy_s(&Recipients, 0x10, &ShowCustomMessageUI_Params.Recipients, 0x10);

	return ShowCustomMessageUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)

void UOnlineSubsystemSteamworks::ClearCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId)
{
	static UFunction* uFnClearCrossTitleProfileSettings = nullptr;

	if (!uFnClearCrossTitleProfileSettings)
	{
		uFnClearCrossTitleProfileSettings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings");
	}

	UOnlineSubsystemSteamworks_execClearCrossTitleProfileSettings_Params ClearCrossTitleProfileSettings_Params;
	memcpy_s(&ClearCrossTitleProfileSettings_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearCrossTitleProfileSettings_Params.TitleId, 0x4, &TitleId, 0x4);

	this->ProcessEvent(uFnClearCrossTitleProfileSettings, &ClearCrossTitleProfileSettings_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UOnlineProfileSettings*  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)

class UOnlineProfileSettings* UOnlineSubsystemSteamworks::GetCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId)
{
	static UFunction* uFnGetCrossTitleProfileSettings = nullptr;

	if (!uFnGetCrossTitleProfileSettings)
	{
		uFnGetCrossTitleProfileSettings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings");
	}

	UOnlineSubsystemSteamworks_execGetCrossTitleProfileSettings_Params GetCrossTitleProfileSettings_Params;
	memcpy_s(&GetCrossTitleProfileSettings_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&GetCrossTitleProfileSettings_Params.TitleId, 0x4, &TitleId, 0x4);

	this->ProcessEvent(uFnGetCrossTitleProfileSettings, &GetCrossTitleProfileSettings_Params, nullptr);

	return GetCrossTitleProfileSettings_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadCrossTitleProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate)
{
	static UFunction* uFnClearReadCrossTitleProfileSettingsCompleteDelegate = nullptr;

	if (!uFnClearReadCrossTitleProfileSettingsCompleteDelegate)
	{
		uFnClearReadCrossTitleProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadCrossTitleProfileSettingsCompleteDelegate_Params ClearReadCrossTitleProfileSettingsCompleteDelegate_Params;
	memcpy_s(&ClearReadCrossTitleProfileSettingsCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearReadCrossTitleProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate, 0x18, &ReadProfileSettingsCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearReadCrossTitleProfileSettingsCompleteDelegate, &ClearReadCrossTitleProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadCrossTitleProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate)
{
	static UFunction* uFnAddReadCrossTitleProfileSettingsCompleteDelegate = nullptr;

	if (!uFnAddReadCrossTitleProfileSettingsCompleteDelegate)
	{
		uFnAddReadCrossTitleProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadCrossTitleProfileSettingsCompleteDelegate_Params AddReadCrossTitleProfileSettingsCompleteDelegate_Params;
	memcpy_s(&AddReadCrossTitleProfileSettingsCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddReadCrossTitleProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate, 0x18, &ReadProfileSettingsCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddReadCrossTitleProfileSettingsCompleteDelegate, &AddReadCrossTitleProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadCrossTitleProfileSettingsComplete(uint8_t LocalUserNum, int32_t TitleId, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnReadCrossTitleProfileSettingsComplete = nullptr;

	if (!uFnOnReadCrossTitleProfileSettingsComplete)
	{
		uFnOnReadCrossTitleProfileSettingsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadCrossTitleProfileSettingsComplete_Params OnReadCrossTitleProfileSettingsComplete_Params;
	memcpy_s(&OnReadCrossTitleProfileSettingsComplete_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&OnReadCrossTitleProfileSettingsComplete_Params.TitleId, 0x4, &TitleId, 0x4);
	OnReadCrossTitleProfileSettingsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadCrossTitleProfileSettingsComplete, &OnReadCrossTitleProfileSettingsComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_Parm)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadCrossTitleProfileSettings(uint8_t LocalUserNum, int32_t TitleId, class UOnlineProfileSettings* ProfileSettings)
{
	static UFunction* uFnReadCrossTitleProfileSettings = nullptr;

	if (!uFnReadCrossTitleProfileSettings)
	{
		uFnReadCrossTitleProfileSettings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings");
	}

	UOnlineSubsystemSteamworks_execReadCrossTitleProfileSettings_Params ReadCrossTitleProfileSettings_Params;
	memcpy_s(&ReadCrossTitleProfileSettings_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ReadCrossTitleProfileSettings_Params.TitleId, 0x4, &TitleId, 0x4);
	memcpy_s(&ReadCrossTitleProfileSettings_Params.ProfileSettings, 0x8, &ProfileSettings, 0x8);

	this->ProcessEvent(uFnReadCrossTitleProfileSettings, &ReadCrossTitleProfileSettings_Params, nullptr);

	return ReadCrossTitleProfileSettings_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// TArray<struct FSteamPlayerClanData> Results                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::GetSteamClanData(TArray<struct FSteamPlayerClanData>& Results)
{
	static UFunction* uFnGetSteamClanData = nullptr;

	if (!uFnGetSteamClanData)
	{
		uFnGetSteamClanData = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData");
	}

	UOnlineSubsystemSteamworks_execGetSteamClanData_Params GetSteamClanData_Params;
	memcpy_s(&GetSteamClanData_Params.Results, 0x10, &Results, 0x10);

	uFnGetSteamClanData->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetSteamClanData, &GetSteamClanData_Params, nullptr);

	uFnGetSteamClanData->FunctionFlags |= 0x400;

	memcpy_s(&Results, 0x10, &GetSteamClanData_Params.Results, 0x10);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearGetNumberOfCurrentPlayersCompleteDelegate(struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate)
{
	static UFunction* uFnClearGetNumberOfCurrentPlayersCompleteDelegate = nullptr;

	if (!uFnClearGetNumberOfCurrentPlayersCompleteDelegate)
	{
		uFnClearGetNumberOfCurrentPlayersCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearGetNumberOfCurrentPlayersCompleteDelegate_Params ClearGetNumberOfCurrentPlayersCompleteDelegate_Params;
	memcpy_s(&ClearGetNumberOfCurrentPlayersCompleteDelegate_Params.GetNumberOfCurrentPlayersCompleteDelegate, 0x18, &GetNumberOfCurrentPlayersCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearGetNumberOfCurrentPlayersCompleteDelegate, &ClearGetNumberOfCurrentPlayersCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddGetNumberOfCurrentPlayersCompleteDelegate(struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate)
{
	static UFunction* uFnAddGetNumberOfCurrentPlayersCompleteDelegate = nullptr;

	if (!uFnAddGetNumberOfCurrentPlayersCompleteDelegate)
	{
		uFnAddGetNumberOfCurrentPlayersCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddGetNumberOfCurrentPlayersCompleteDelegate_Params AddGetNumberOfCurrentPlayersCompleteDelegate_Params;
	memcpy_s(&AddGetNumberOfCurrentPlayersCompleteDelegate_Params.GetNumberOfCurrentPlayersCompleteDelegate, 0x18, &GetNumberOfCurrentPlayersCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddGetNumberOfCurrentPlayersCompleteDelegate, &AddGetNumberOfCurrentPlayersCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int32_t                        TotalPlayers                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnGetNumberOfCurrentPlayersComplete(int32_t TotalPlayers)
{
	static UFunction* uFnOnGetNumberOfCurrentPlayersComplete = nullptr;

	if (!uFnOnGetNumberOfCurrentPlayersComplete)
	{
		uFnOnGetNumberOfCurrentPlayersComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete");
	}

	UOnlineSubsystemSteamworks_execOnGetNumberOfCurrentPlayersComplete_Params OnGetNumberOfCurrentPlayersComplete_Params;
	memcpy_s(&OnGetNumberOfCurrentPlayersComplete_Params.TotalPlayers, 0x4, &TotalPlayers, 0x4);

	this->ProcessEvent(uFnOnGetNumberOfCurrentPlayersComplete, &OnGetNumberOfCurrentPlayersComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::GetNumberOfCurrentPlayers()
{
	static UFunction* uFnGetNumberOfCurrentPlayers = nullptr;

	if (!uFnGetNumberOfCurrentPlayers)
	{
		uFnGetNumberOfCurrentPlayers = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers");
	}

	UOnlineSubsystemSteamworks_execGetNumberOfCurrentPlayers_Params GetNumberOfCurrentPlayers_Params;

	uFnGetNumberOfCurrentPlayers->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetNumberOfCurrentPlayers, &GetNumberOfCurrentPlayers_Params, nullptr);

	uFnGetNumberOfCurrentPlayers->FunctionFlags |= 0x400;

	return GetNumberOfCurrentPlayers_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatars
// [0x400420400] (FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        Size                           (CPF_Parm)
// struct FScriptDelegate         ReadOnlineAvatarCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FUniqueNetId>    PlayerNetIds                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ReadOnlineAvatars(uint8_t Size, struct FScriptDelegate ReadOnlineAvatarCompleteDelegate, TArray<struct FUniqueNetId>& PlayerNetIds)
{
	static UFunction* uFnReadOnlineAvatars = nullptr;

	if (!uFnReadOnlineAvatars)
	{
		uFnReadOnlineAvatars = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatars");
	}

	UOnlineSubsystemSteamworks_execReadOnlineAvatars_Params ReadOnlineAvatars_Params;
	memcpy_s(&ReadOnlineAvatars_Params.Size, 0x1, &Size, 0x1);
	memcpy_s(&ReadOnlineAvatars_Params.ReadOnlineAvatarCompleteDelegate, 0x18, &ReadOnlineAvatarCompleteDelegate, 0x18);
	memcpy_s(&ReadOnlineAvatars_Params.PlayerNetIds, 0x10, &PlayerNetIds, 0x10);

	uFnReadOnlineAvatars->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReadOnlineAvatars, &ReadOnlineAvatars_Params, nullptr);

	uFnReadOnlineAvatars->FunctionFlags |= 0x400;

	memcpy_s(&PlayerNetIds, 0x10, &ReadOnlineAvatars_Params.PlayerNetIds, 0x10);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FString                 Title                          (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Description                    (CPF_Parm | CPF_NeedCtorLink)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowCustomPlayersUI(uint8_t LocalUserNum, struct FString Title, struct FString Description, TArray<struct FUniqueNetId>& Players)
{
	static UFunction* uFnShowCustomPlayersUI = nullptr;

	if (!uFnShowCustomPlayersUI)
	{
		uFnShowCustomPlayersUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI");
	}

	UOnlineSubsystemSteamworks_execShowCustomPlayersUI_Params ShowCustomPlayersUI_Params;
	memcpy_s(&ShowCustomPlayersUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ShowCustomPlayersUI_Params.Title, 0x10, &Title, 0x10);
	memcpy_s(&ShowCustomPlayersUI_Params.Description, 0x10, &Description, 0x10);
	memcpy_s(&ShowCustomPlayersUI_Params.Players, 0x10, &Players, 0x10);

	uFnShowCustomPlayersUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnShowCustomPlayersUI, &ShowCustomPlayersUI_Params, nullptr);

	uFnShowCustomPlayersUI->FunctionFlags |= 0x400;

	memcpy_s(&Players, 0x10, &ShowCustomPlayersUI_Params.Players, 0x10);

	return ShowCustomPlayersUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_OptionalParm | CPF_Parm)
// TArray<struct FAchievementDetails> Achievements                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

uint8_t UOnlineSubsystemSteamworks::GetAchievements(uint8_t LocalUserNum, int32_t TitleId, TArray<struct FAchievementDetails>& Achievements)
{
	static UFunction* uFnGetAchievements = nullptr;

	if (!uFnGetAchievements)
	{
		uFnGetAchievements = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements");
	}

	UOnlineSubsystemSteamworks_execGetAchievements_Params GetAchievements_Params;
	memcpy_s(&GetAchievements_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&GetAchievements_Params.TitleId, 0x4, &TitleId, 0x4);
	memcpy_s(&GetAchievements_Params.Achievements, 0x10, &Achievements, 0x10);

	uFnGetAchievements->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetAchievements, &GetAchievements_Params, nullptr);

	uFnGetAchievements->FunctionFlags |= 0x400;

	memcpy_s(&Achievements, 0x10, &GetAchievements_Params.Achievements, 0x10);

	return GetAchievements_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadAchievementsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadAchievementsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate)
{
	static UFunction* uFnClearReadAchievementsCompleteDelegate = nullptr;

	if (!uFnClearReadAchievementsCompleteDelegate)
	{
		uFnClearReadAchievementsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadAchievementsCompleteDelegate_Params ClearReadAchievementsCompleteDelegate_Params;
	memcpy_s(&ClearReadAchievementsCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearReadAchievementsCompleteDelegate_Params.ReadAchievementsCompleteDelegate, 0x18, &ReadAchievementsCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearReadAchievementsCompleteDelegate, &ClearReadAchievementsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadAchievementsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadAchievementsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate)
{
	static UFunction* uFnAddReadAchievementsCompleteDelegate = nullptr;

	if (!uFnAddReadAchievementsCompleteDelegate)
	{
		uFnAddReadAchievementsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadAchievementsCompleteDelegate_Params AddReadAchievementsCompleteDelegate_Params;
	memcpy_s(&AddReadAchievementsCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddReadAchievementsCompleteDelegate_Params.ReadAchievementsCompleteDelegate, 0x18, &ReadAchievementsCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddReadAchievementsCompleteDelegate, &AddReadAchievementsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int32_t                        TitleId                        (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadAchievementsComplete(int32_t TitleId)
{
	static UFunction* uFnOnReadAchievementsComplete = nullptr;

	if (!uFnOnReadAchievementsComplete)
	{
		uFnOnReadAchievementsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadAchievementsComplete_Params OnReadAchievementsComplete_Params;
	memcpy_s(&OnReadAchievementsComplete_Params.TitleId, 0x4, &TitleId, 0x4);

	this->ProcessEvent(uFnOnReadAchievementsComplete, &OnReadAchievementsComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        TitleId                        (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bShouldReadText                (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bShouldReadImages              (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadAchievements(uint8_t LocalUserNum, int32_t TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages)
{
	static UFunction* uFnReadAchievements = nullptr;

	if (!uFnReadAchievements)
	{
		uFnReadAchievements = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements");
	}

	UOnlineSubsystemSteamworks_execReadAchievements_Params ReadAchievements_Params;
	memcpy_s(&ReadAchievements_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ReadAchievements_Params.TitleId, 0x4, &TitleId, 0x4);
	ReadAchievements_Params.bShouldReadText = bShouldReadText;
	ReadAchievements_Params.bShouldReadImages = bShouldReadImages;

	uFnReadAchievements->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReadAchievements, &ReadAchievements_Params, nullptr);

	uFnReadAchievements->FunctionFlags |= 0x400;

	return ReadAchievements_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowPlayersUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowPlayersUI = nullptr;

	if (!uFnShowPlayersUI)
	{
		uFnShowPlayersUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI");
	}

	UOnlineSubsystemSteamworks_execShowPlayersUI_Params ShowPlayersUI_Params;
	memcpy_s(&ShowPlayersUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	uFnShowPlayersUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnShowPlayersUI, &ShowPlayersUI_Params, nullptr);

	uFnShowPlayersUI->FunctionFlags |= 0x400;

	return ShowPlayersUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowFriendsInviteUI(uint8_t LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnShowFriendsInviteUI = nullptr;

	if (!uFnShowFriendsInviteUI)
	{
		uFnShowFriendsInviteUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI");
	}

	UOnlineSubsystemSteamworks_execShowFriendsInviteUI_Params ShowFriendsInviteUI_Params;
	memcpy_s(&ShowFriendsInviteUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ShowFriendsInviteUI_Params.PlayerID, 0x48, &PlayerID, 0x48);

	uFnShowFriendsInviteUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnShowFriendsInviteUI, &ShowFriendsInviteUI_Params, nullptr);

	uFnShowFriendsInviteUI->FunctionFlags |= 0x400;

	return ShowFriendsInviteUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowFriendsUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowFriendsUI = nullptr;

	if (!uFnShowFriendsUI)
	{
		uFnShowFriendsUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI");
	}

	UOnlineSubsystemSteamworks_execShowFriendsUI_Params ShowFriendsUI_Params;
	memcpy_s(&ShowFriendsUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	uFnShowFriendsUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnShowFriendsUI, &ShowFriendsUI_Params, nullptr);

	uFnShowFriendsUI->FunctionFlags |= 0x400;

	return ShowFriendsUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ProfileDataChangedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearProfileDataChangedDelegate(uint8_t LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate)
{
	static UFunction* uFnClearProfileDataChangedDelegate = nullptr;

	if (!uFnClearProfileDataChangedDelegate)
	{
		uFnClearProfileDataChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate");
	}

	UOnlineSubsystemSteamworks_execClearProfileDataChangedDelegate_Params ClearProfileDataChangedDelegate_Params;
	memcpy_s(&ClearProfileDataChangedDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearProfileDataChangedDelegate_Params.ProfileDataChangedDelegate, 0x18, &ProfileDataChangedDelegate, 0x18);

	this->ProcessEvent(uFnClearProfileDataChangedDelegate, &ClearProfileDataChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ProfileDataChangedDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddProfileDataChangedDelegate(uint8_t LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate)
{
	static UFunction* uFnAddProfileDataChangedDelegate = nullptr;

	if (!uFnAddProfileDataChangedDelegate)
	{
		uFnAddProfileDataChangedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddProfileDataChangedDelegate_Params AddProfileDataChangedDelegate_Params;
	memcpy_s(&AddProfileDataChangedDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddProfileDataChangedDelegate_Params.ProfileDataChangedDelegate, 0x18, &ProfileDataChangedDelegate, 0x18);

	this->ProcessEvent(uFnAddProfileDataChangedDelegate, &AddProfileDataChangedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::OnProfileDataChanged()
{
	static UFunction* uFnOnProfileDataChanged = nullptr;

	if (!uFnOnProfileDataChanged)
	{
		uFnOnProfileDataChanged = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged");
	}

	UOnlineSubsystemSteamworks_execOnProfileDataChanged_Params OnProfileDataChanged_Params;

	this->ProcessEvent(uFnOnProfileDataChanged, &OnProfileDataChanged_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        PictureId                      (CPF_Parm)

bool UOnlineSubsystemSteamworks::UnlockGamerPicture(uint8_t LocalUserNum, int32_t PictureId)
{
	static UFunction* uFnUnlockGamerPicture = nullptr;

	if (!uFnUnlockGamerPicture)
	{
		uFnUnlockGamerPicture = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture");
	}

	UOnlineSubsystemSteamworks_execUnlockGamerPicture_Params UnlockGamerPicture_Params;
	memcpy_s(&UnlockGamerPicture_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&UnlockGamerPicture_Params.PictureId, 0x4, &PictureId, 0x4);

	this->ProcessEvent(uFnUnlockGamerPicture, &UnlockGamerPicture_Params, nullptr);

	return UnlockGamerPicture_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         UnlockAchievementCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUnlockAchievementCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate)
{
	static UFunction* uFnClearUnlockAchievementCompleteDelegate = nullptr;

	if (!uFnClearUnlockAchievementCompleteDelegate)
	{
		uFnClearUnlockAchievementCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearUnlockAchievementCompleteDelegate_Params ClearUnlockAchievementCompleteDelegate_Params;
	memcpy_s(&ClearUnlockAchievementCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearUnlockAchievementCompleteDelegate_Params.UnlockAchievementCompleteDelegate, 0x18, &UnlockAchievementCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearUnlockAchievementCompleteDelegate, &ClearUnlockAchievementCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         UnlockAchievementCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUnlockAchievementCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate)
{
	static UFunction* uFnAddUnlockAchievementCompleteDelegate = nullptr;

	if (!uFnAddUnlockAchievementCompleteDelegate)
	{
		uFnAddUnlockAchievementCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddUnlockAchievementCompleteDelegate_Params AddUnlockAchievementCompleteDelegate_Params;
	memcpy_s(&AddUnlockAchievementCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddUnlockAchievementCompleteDelegate_Params.UnlockAchievementCompleteDelegate, 0x18, &UnlockAchievementCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddUnlockAchievementCompleteDelegate, &AddUnlockAchievementCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnUnlockAchievementComplete(unsigned long bWasSuccessful)
{
	static UFunction* uFnOnUnlockAchievementComplete = nullptr;

	if (!uFnOnUnlockAchievementComplete)
	{
		uFnOnUnlockAchievementComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete");
	}

	UOnlineSubsystemSteamworks_execOnUnlockAchievementComplete_Params OnUnlockAchievementComplete_Params;
	OnUnlockAchievementComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnUnlockAchievementComplete, &OnUnlockAchievementComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        AchievementId                  (CPF_Parm)
// float                          PercentComplete                (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::UnlockAchievement(uint8_t LocalUserNum, int32_t AchievementId, float PercentComplete)
{
	static UFunction* uFnUnlockAchievement = nullptr;

	if (!uFnUnlockAchievement)
	{
		uFnUnlockAchievement = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement");
	}

	UOnlineSubsystemSteamworks_execUnlockAchievement_Params UnlockAchievement_Params;
	memcpy_s(&UnlockAchievement_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&UnlockAchievement_Params.AchievementId, 0x4, &AchievementId, 0x4);
	memcpy_s(&UnlockAchievement_Params.PercentComplete, 0x4, &PercentComplete, 0x4);

	uFnUnlockAchievement->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUnlockAchievement, &UnlockAchievement_Params, nullptr);

	uFnUnlockAchievement->FunctionFlags |= 0x400;

	return UnlockAchievement_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateStat
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FName                   StatName                       (CPF_Parm)
// int32_t                        Points                         (CPF_Parm)

bool UOnlineSubsystemSteamworks::UpdateStat(uint8_t LocalUserNum, struct FName StatName, int32_t Points)
{
	static UFunction* uFnUpdateStat = nullptr;

	if (!uFnUpdateStat)
	{
		uFnUpdateStat = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UpdateStat");
	}

	UOnlineSubsystemSteamworks_execUpdateStat_Params UpdateStat_Params;
	memcpy_s(&UpdateStat_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&UpdateStat_Params.StatName, 0x8, &StatName, 0x8);
	memcpy_s(&UpdateStat_Params.Points, 0x4, &Points, 0x4);

	this->ProcessEvent(uFnUpdateStat, &UpdateStat_Params, nullptr);

	return UpdateStat_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        DeviceID                       (CPF_Parm)
// int32_t                        SizeNeeded                     (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::IsDeviceValid(int32_t DeviceID, int32_t SizeNeeded)
{
	static UFunction* uFnIsDeviceValid = nullptr;

	if (!uFnIsDeviceValid)
	{
		uFnIsDeviceValid = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid");
	}

	UOnlineSubsystemSteamworks_execIsDeviceValid_Params IsDeviceValid_Params;
	memcpy_s(&IsDeviceValid_Params.DeviceID, 0x4, &DeviceID, 0x4);
	memcpy_s(&IsDeviceValid_Params.SizeNeeded, 0x4, &SizeNeeded, 0x4);

	this->ProcessEvent(uFnIsDeviceValid, &IsDeviceValid_Params, nullptr);

	return IsDeviceValid_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// int32_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FString                 DeviceName                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

int32_t UOnlineSubsystemSteamworks::GetDeviceSelectionResults(uint8_t LocalUserNum, struct FString& DeviceName)
{
	static UFunction* uFnGetDeviceSelectionResults = nullptr;

	if (!uFnGetDeviceSelectionResults)
	{
		uFnGetDeviceSelectionResults = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults");
	}

	UOnlineSubsystemSteamworks_execGetDeviceSelectionResults_Params GetDeviceSelectionResults_Params;
	memcpy_s(&GetDeviceSelectionResults_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&GetDeviceSelectionResults_Params.DeviceName, 0x10, &DeviceName, 0x10);

	this->ProcessEvent(uFnGetDeviceSelectionResults, &GetDeviceSelectionResults_Params, nullptr);

	memcpy_s(&DeviceName, 0x10, &GetDeviceSelectionResults_Params.DeviceName, 0x10);

	return GetDeviceSelectionResults_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearDeviceSelectionDoneDelegate(uint8_t LocalUserNum, struct FScriptDelegate DeviceDelegate)
{
	static UFunction* uFnClearDeviceSelectionDoneDelegate = nullptr;

	if (!uFnClearDeviceSelectionDoneDelegate)
	{
		uFnClearDeviceSelectionDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate");
	}

	UOnlineSubsystemSteamworks_execClearDeviceSelectionDoneDelegate_Params ClearDeviceSelectionDoneDelegate_Params;
	memcpy_s(&ClearDeviceSelectionDoneDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearDeviceSelectionDoneDelegate_Params.DeviceDelegate, 0x18, &DeviceDelegate, 0x18);

	this->ProcessEvent(uFnClearDeviceSelectionDoneDelegate, &ClearDeviceSelectionDoneDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         DeviceDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddDeviceSelectionDoneDelegate(uint8_t LocalUserNum, struct FScriptDelegate DeviceDelegate)
{
	static UFunction* uFnAddDeviceSelectionDoneDelegate = nullptr;

	if (!uFnAddDeviceSelectionDoneDelegate)
	{
		uFnAddDeviceSelectionDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate");
	}

	UOnlineSubsystemSteamworks_execAddDeviceSelectionDoneDelegate_Params AddDeviceSelectionDoneDelegate_Params;
	memcpy_s(&AddDeviceSelectionDoneDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddDeviceSelectionDoneDelegate_Params.DeviceDelegate, 0x18, &DeviceDelegate, 0x18);

	this->ProcessEvent(uFnAddDeviceSelectionDoneDelegate, &AddDeviceSelectionDoneDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnDeviceSelectionComplete(unsigned long bWasSuccessful)
{
	static UFunction* uFnOnDeviceSelectionComplete = nullptr;

	if (!uFnOnDeviceSelectionComplete)
	{
		uFnOnDeviceSelectionComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete");
	}

	UOnlineSubsystemSteamworks_execOnDeviceSelectionComplete_Params OnDeviceSelectionComplete_Params;
	OnDeviceSelectionComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnDeviceSelectionComplete, &OnDeviceSelectionComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        SizeNeeded                     (CPF_Parm)
// unsigned long                  bManageStorage                 (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowDeviceSelectionUI(uint8_t LocalUserNum, int32_t SizeNeeded, unsigned long bManageStorage)
{
	static UFunction* uFnShowDeviceSelectionUI = nullptr;

	if (!uFnShowDeviceSelectionUI)
	{
		uFnShowDeviceSelectionUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI");
	}

	UOnlineSubsystemSteamworks_execShowDeviceSelectionUI_Params ShowDeviceSelectionUI_Params;
	memcpy_s(&ShowDeviceSelectionUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ShowDeviceSelectionUI_Params.SizeNeeded, 0x4, &SizeNeeded, 0x4);
	ShowDeviceSelectionUI_Params.bManageStorage = bManageStorage;

	this->ProcessEvent(uFnShowDeviceSelectionUI, &ShowDeviceSelectionUI_Params, nullptr);

	return ShowDeviceSelectionUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        CategoryMask                   (CPF_OptionalParm | CPF_Parm)
// int32_t                        OfferId                        (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowContentMarketplaceUI(uint8_t LocalUserNum, int32_t CategoryMask, int32_t OfferId)
{
	static UFunction* uFnShowContentMarketplaceUI = nullptr;

	if (!uFnShowContentMarketplaceUI)
	{
		uFnShowContentMarketplaceUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI");
	}

	UOnlineSubsystemSteamworks_execShowContentMarketplaceUI_Params ShowContentMarketplaceUI_Params;
	memcpy_s(&ShowContentMarketplaceUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ShowContentMarketplaceUI_Params.CategoryMask, 0x4, &CategoryMask, 0x4);
	memcpy_s(&ShowContentMarketplaceUI_Params.OfferId, 0x4, &OfferId, 0x4);

	uFnShowContentMarketplaceUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnShowContentMarketplaceUI, &ShowContentMarketplaceUI_Params, nullptr);

	uFnShowContentMarketplaceUI->FunctionFlags |= 0x400;

	return ShowContentMarketplaceUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FString                 InviteText                     (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowInviteUI(uint8_t LocalUserNum, struct FString InviteText)
{
	static UFunction* uFnShowInviteUI = nullptr;

	if (!uFnShowInviteUI)
	{
		uFnShowInviteUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI");
	}

	UOnlineSubsystemSteamworks_execShowInviteUI_Params ShowInviteUI_Params;
	memcpy_s(&ShowInviteUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ShowInviteUI_Params.InviteText, 0x10, &InviteText, 0x10);

	uFnShowInviteUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnShowInviteUI, &ShowInviteUI_Params, nullptr);

	uFnShowInviteUI->FunctionFlags |= 0x400;

	return ShowInviteUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowAchievementsUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowAchievementsUI = nullptr;

	if (!uFnShowAchievementsUI)
	{
		uFnShowAchievementsUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI");
	}

	UOnlineSubsystemSteamworks_execShowAchievementsUI_Params ShowAchievementsUI_Params;
	memcpy_s(&ShowAchievementsUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	uFnShowAchievementsUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnShowAchievementsUI, &ShowAchievementsUI_Params, nullptr);

	uFnShowAchievementsUI->FunctionFlags |= 0x400;

	return ShowAchievementsUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowMessagesUI(uint8_t LocalUserNum)
{
	static UFunction* uFnShowMessagesUI = nullptr;

	if (!uFnShowMessagesUI)
	{
		uFnShowMessagesUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI");
	}

	UOnlineSubsystemSteamworks_execShowMessagesUI_Params ShowMessagesUI_Params;
	memcpy_s(&ShowMessagesUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	uFnShowMessagesUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnShowMessagesUI, &ShowMessagesUI_Params, nullptr);

	uFnShowMessagesUI->FunctionFlags |= 0x400;

	return ShowMessagesUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            UniqueId                       (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// struct FString                 PlayerName                     (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowGamerCardUI(uint8_t LocalUserNum, struct FUniqueNetId UniqueId, struct FString PlayerName)
{
	static UFunction* uFnShowGamerCardUI = nullptr;

	if (!uFnShowGamerCardUI)
	{
		uFnShowGamerCardUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI");
	}

	UOnlineSubsystemSteamworks_execShowGamerCardUI_Params ShowGamerCardUI_Params;
	memcpy_s(&ShowGamerCardUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ShowGamerCardUI_Params.UniqueId, 0x48, &UniqueId, 0x48);
	memcpy_s(&ShowGamerCardUI_Params.PlayerName, 0x10, &PlayerName, 0x10);

	uFnShowGamerCardUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnShowGamerCardUI, &ShowGamerCardUI_Params, nullptr);

	uFnShowGamerCardUI->FunctionFlags |= 0x400;

	return ShowGamerCardUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ShowFeedbackUI(uint8_t LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnShowFeedbackUI = nullptr;

	if (!uFnShowFeedbackUI)
	{
		uFnShowFeedbackUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI");
	}

	UOnlineSubsystemSteamworks_execShowFeedbackUI_Params ShowFeedbackUI_Params;
	memcpy_s(&ShowFeedbackUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ShowFeedbackUI_Params.PlayerID, 0x48, &PlayerID, 0x48);

	uFnShowFeedbackUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnShowFeedbackUI, &ShowFeedbackUI_Params, nullptr);

	uFnShowFeedbackUI->FunctionFlags |= 0x400;

	return ShowFeedbackUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        MessageIndex                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::DeleteMessage(uint8_t LocalUserNum, int32_t MessageIndex)
{
	static UFunction* uFnDeleteMessage = nullptr;

	if (!uFnDeleteMessage)
	{
		uFnDeleteMessage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage");
	}

	UOnlineSubsystemSteamworks_execDeleteMessage_Params DeleteMessage_Params;
	memcpy_s(&DeleteMessage_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&DeleteMessage_Params.MessageIndex, 0x4, &MessageIndex, 0x4);

	this->ProcessEvent(uFnDeleteMessage, &DeleteMessage_Params, nullptr);

	return DeleteMessage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::UnmuteAll(uint8_t LocalUserNum)
{
	static UFunction* uFnUnmuteAll = nullptr;

	if (!uFnUnmuteAll)
	{
		uFnUnmuteAll = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll");
	}

	UOnlineSubsystemSteamworks_execUnmuteAll_Params UnmuteAll_Params;
	memcpy_s(&UnmuteAll_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnUnmuteAll, &UnmuteAll_Params, nullptr);

	return UnmuteAll_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAllowFriends                  (CPF_Parm)

bool UOnlineSubsystemSteamworks::MuteAll(uint8_t LocalUserNum, unsigned long bAllowFriends)
{
	static UFunction* uFnMuteAll = nullptr;

	if (!uFnMuteAll)
	{
		uFnMuteAll = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll");
	}

	UOnlineSubsystemSteamworks_execMuteAll_Params MuteAll_Params;
	memcpy_s(&MuteAll_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	MuteAll_Params.bAllowFriends = bAllowFriends;

	this->ProcessEvent(uFnMuteAll, &MuteAll_Params, nullptr);

	return MuteAll_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 ClientStatGuid                 (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::RegisterStatGuid(struct FUniqueNetId PlayerID, struct FString& ClientStatGuid)
{
	static UFunction* uFnRegisterStatGuid = nullptr;

	if (!uFnRegisterStatGuid)
	{
		uFnRegisterStatGuid = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid");
	}

	UOnlineSubsystemSteamworks_execRegisterStatGuid_Params RegisterStatGuid_Params;
	memcpy_s(&RegisterStatGuid_Params.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&RegisterStatGuid_Params.ClientStatGuid, 0x10, &ClientStatGuid, 0x10);

	this->ProcessEvent(uFnRegisterStatGuid, &RegisterStatGuid_Params, nullptr);

	memcpy_s(&ClientStatGuid, 0x10, &RegisterStatGuid_Params.ClientStatGuid, 0x10);

	return RegisterStatGuid_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::GetClientStatGuid()
{
	static UFunction* uFnGetClientStatGuid = nullptr;

	if (!uFnGetClientStatGuid)
	{
		uFnGetClientStatGuid = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid");
	}

	UOnlineSubsystemSteamworks_execGetClientStatGuid_Params GetClientStatGuid_Params;

	this->ProcessEvent(uFnGetClientStatGuid, &GetClientStatGuid_Params, nullptr);

	return GetClientStatGuid_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearRegisterHostStatGuidCompleteDelegateDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate)
{
	static UFunction* uFnClearRegisterHostStatGuidCompleteDelegateDelegate = nullptr;

	if (!uFnClearRegisterHostStatGuidCompleteDelegateDelegate)
	{
		uFnClearRegisterHostStatGuidCompleteDelegateDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate");
	}

	UOnlineSubsystemSteamworks_execClearRegisterHostStatGuidCompleteDelegateDelegate_Params ClearRegisterHostStatGuidCompleteDelegateDelegate_Params;
	memcpy_s(&ClearRegisterHostStatGuidCompleteDelegateDelegate_Params.RegisterHostStatGuidCompleteDelegate, 0x18, &RegisterHostStatGuidCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearRegisterHostStatGuidCompleteDelegateDelegate, &ClearRegisterHostStatGuidCompleteDelegateDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddRegisterHostStatGuidCompleteDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate)
{
	static UFunction* uFnAddRegisterHostStatGuidCompleteDelegate = nullptr;

	if (!uFnAddRegisterHostStatGuidCompleteDelegate)
	{
		uFnAddRegisterHostStatGuidCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddRegisterHostStatGuidCompleteDelegate_Params AddRegisterHostStatGuidCompleteDelegate_Params;
	memcpy_s(&AddRegisterHostStatGuidCompleteDelegate_Params.RegisterHostStatGuidCompleteDelegate, 0x18, &RegisterHostStatGuidCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddRegisterHostStatGuidCompleteDelegate, &AddRegisterHostStatGuidCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnRegisterHostStatGuidComplete(unsigned long bWasSuccessful)
{
	static UFunction* uFnOnRegisterHostStatGuidComplete = nullptr;

	if (!uFnOnRegisterHostStatGuidComplete)
	{
		uFnOnRegisterHostStatGuidComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete");
	}

	UOnlineSubsystemSteamworks_execOnRegisterHostStatGuidComplete_Params OnRegisterHostStatGuidComplete_Params;
	OnRegisterHostStatGuidComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnRegisterHostStatGuidComplete, &OnRegisterHostStatGuidComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid
// [0x00420001] (FUNC_Final | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 HostStatGuid                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::RegisterHostStatGuid(struct FString& HostStatGuid)
{
	static UFunction* uFnRegisterHostStatGuid = nullptr;

	if (!uFnRegisterHostStatGuid)
	{
		uFnRegisterHostStatGuid = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid");
	}

	UOnlineSubsystemSteamworks_execRegisterHostStatGuid_Params RegisterHostStatGuid_Params;
	memcpy_s(&RegisterHostStatGuid_Params.HostStatGuid, 0x10, &HostStatGuid, 0x10);

	this->ProcessEvent(uFnRegisterHostStatGuid, &RegisterHostStatGuid_Params, nullptr);

	memcpy_s(&HostStatGuid, 0x10, &RegisterHostStatGuid_Params.HostStatGuid, 0x10);

	return RegisterHostStatGuid_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::GetHostStatGuid()
{
	static UFunction* uFnGetHostStatGuid = nullptr;

	if (!uFnGetHostStatGuid)
	{
		uFnGetHostStatGuid = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid");
	}

	UOnlineSubsystemSteamworks_execGetHostStatGuid_Params GetHostStatGuid_Params;

	this->ProcessEvent(uFnGetHostStatGuid, &GetHostStatGuid_Params, nullptr);

	return GetHostStatGuid_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         MessageDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendMessageReceivedDelegate(uint8_t LocalUserNum, struct FScriptDelegate MessageDelegate)
{
	static UFunction* uFnClearFriendMessageReceivedDelegate = nullptr;

	if (!uFnClearFriendMessageReceivedDelegate)
	{
		uFnClearFriendMessageReceivedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate");
	}

	UOnlineSubsystemSteamworks_execClearFriendMessageReceivedDelegate_Params ClearFriendMessageReceivedDelegate_Params;
	memcpy_s(&ClearFriendMessageReceivedDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearFriendMessageReceivedDelegate_Params.MessageDelegate, 0x18, &MessageDelegate, 0x18);

	this->ProcessEvent(uFnClearFriendMessageReceivedDelegate, &ClearFriendMessageReceivedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         MessageDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendMessageReceivedDelegate(uint8_t LocalUserNum, struct FScriptDelegate MessageDelegate)
{
	static UFunction* uFnAddFriendMessageReceivedDelegate = nullptr;

	if (!uFnAddFriendMessageReceivedDelegate)
	{
		uFnAddFriendMessageReceivedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddFriendMessageReceivedDelegate_Params AddFriendMessageReceivedDelegate_Params;
	memcpy_s(&AddFriendMessageReceivedDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddFriendMessageReceivedDelegate_Params.MessageDelegate, 0x18, &MessageDelegate, 0x18);

	this->ProcessEvent(uFnAddFriendMessageReceivedDelegate, &AddFriendMessageReceivedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            SendingPlayer                  (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 SendingNick                    (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Message                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnFriendMessageReceived(uint8_t LocalUserNum, struct FUniqueNetId SendingPlayer, struct FString SendingNick, struct FString Message)
{
	static UFunction* uFnOnFriendMessageReceived = nullptr;

	if (!uFnOnFriendMessageReceived)
	{
		uFnOnFriendMessageReceived = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived");
	}

	UOnlineSubsystemSteamworks_execOnFriendMessageReceived_Params OnFriendMessageReceived_Params;
	memcpy_s(&OnFriendMessageReceived_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&OnFriendMessageReceived_Params.SendingPlayer, 0x48, &SendingPlayer, 0x48);
	memcpy_s(&OnFriendMessageReceived_Params.SendingNick, 0x10, &SendingNick, 0x10);
	memcpy_s(&OnFriendMessageReceived_Params.Message, 0x10, &Message, 0x10);

	this->ProcessEvent(uFnOnFriendMessageReceived, &OnFriendMessageReceived_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FOnlineFriendMessage> FriendMessages                 (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::GetFriendMessages(uint8_t LocalUserNum, TArray<struct FOnlineFriendMessage>& FriendMessages)
{
	static UFunction* uFnGetFriendMessages = nullptr;

	if (!uFnGetFriendMessages)
	{
		uFnGetFriendMessages = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages");
	}

	UOnlineSubsystemSteamworks_execGetFriendMessages_Params GetFriendMessages_Params;
	memcpy_s(&GetFriendMessages_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&GetFriendMessages_Params.FriendMessages, 0x10, &FriendMessages, 0x10);

	this->ProcessEvent(uFnGetFriendMessages, &GetFriendMessages_Params, nullptr);

	memcpy_s(&FriendMessages, 0x10, &GetFriendMessages_Params.FriendMessages, 0x10);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearJoinFriendGameCompleteDelegate(struct FScriptDelegate JoinFriendGameCompleteDelegate)
{
	static UFunction* uFnClearJoinFriendGameCompleteDelegate = nullptr;

	if (!uFnClearJoinFriendGameCompleteDelegate)
	{
		uFnClearJoinFriendGameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearJoinFriendGameCompleteDelegate_Params ClearJoinFriendGameCompleteDelegate_Params;
	memcpy_s(&ClearJoinFriendGameCompleteDelegate_Params.JoinFriendGameCompleteDelegate, 0x18, &JoinFriendGameCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearJoinFriendGameCompleteDelegate, &ClearJoinFriendGameCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddJoinFriendGameCompleteDelegate(struct FScriptDelegate JoinFriendGameCompleteDelegate)
{
	static UFunction* uFnAddJoinFriendGameCompleteDelegate = nullptr;

	if (!uFnAddJoinFriendGameCompleteDelegate)
	{
		uFnAddJoinFriendGameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddJoinFriendGameCompleteDelegate_Params AddJoinFriendGameCompleteDelegate_Params;
	memcpy_s(&AddJoinFriendGameCompleteDelegate_Params.JoinFriendGameCompleteDelegate, 0x18, &JoinFriendGameCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddJoinFriendGameCompleteDelegate, &AddJoinFriendGameCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnJoinFriendGameComplete(unsigned long bWasSuccessful)
{
	static UFunction* uFnOnJoinFriendGameComplete = nullptr;

	if (!uFnOnJoinFriendGameComplete)
	{
		uFnOnJoinFriendGameComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete");
	}

	UOnlineSubsystemSteamworks_execOnJoinFriendGameComplete_Params OnJoinFriendGameComplete_Params;
	OnJoinFriendGameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnJoinFriendGameComplete, &OnJoinFriendGameComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            Friend                         (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::JoinFriendGame(uint8_t LocalUserNum, struct FUniqueNetId Friend)
{
	static UFunction* uFnJoinFriendGame = nullptr;

	if (!uFnJoinFriendGame)
	{
		uFnJoinFriendGame = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame");
	}

	UOnlineSubsystemSteamworks_execJoinFriendGame_Params JoinFriendGame_Params;
	memcpy_s(&JoinFriendGame_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&JoinFriendGame_Params.Friend, 0x48, &Friend, 0x48);

	uFnJoinFriendGame->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnJoinFriendGame, &JoinFriendGame_Params, nullptr);

	uFnJoinFriendGame->FunctionFlags |= 0x400;

	return JoinFriendGame_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReceivedGameInviteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate)
{
	static UFunction* uFnClearReceivedGameInviteDelegate = nullptr;

	if (!uFnClearReceivedGameInviteDelegate)
	{
		uFnClearReceivedGameInviteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReceivedGameInviteDelegate_Params ClearReceivedGameInviteDelegate_Params;
	memcpy_s(&ClearReceivedGameInviteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearReceivedGameInviteDelegate_Params.ReceivedGameInviteDelegate, 0x18, &ReceivedGameInviteDelegate, 0x18);

	this->ProcessEvent(uFnClearReceivedGameInviteDelegate, &ClearReceivedGameInviteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReceivedGameInviteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate)
{
	static UFunction* uFnAddReceivedGameInviteDelegate = nullptr;

	if (!uFnAddReceivedGameInviteDelegate)
	{
		uFnAddReceivedGameInviteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReceivedGameInviteDelegate_Params AddReceivedGameInviteDelegate_Params;
	memcpy_s(&AddReceivedGameInviteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddReceivedGameInviteDelegate_Params.ReceivedGameInviteDelegate, 0x18, &ReceivedGameInviteDelegate, 0x18);

	this->ProcessEvent(uFnAddReceivedGameInviteDelegate, &AddReceivedGameInviteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FString                 InviterName                    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReceivedGameInvite(uint8_t LocalUserNum, struct FString InviterName)
{
	static UFunction* uFnOnReceivedGameInvite = nullptr;

	if (!uFnOnReceivedGameInvite)
	{
		uFnOnReceivedGameInvite = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite");
	}

	UOnlineSubsystemSteamworks_execOnReceivedGameInvite_Params OnReceivedGameInvite_Params;
	memcpy_s(&OnReceivedGameInvite_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&OnReceivedGameInvite_Params.InviterName, 0x10, &InviterName, 0x10);

	this->ProcessEvent(uFnOnReceivedGameInvite, &OnReceivedGameInvite_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FUniqueNetId>    Friends                        (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Text                           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::SendGameInviteToFriends(uint8_t LocalUserNum, TArray<struct FUniqueNetId> Friends, struct FString Text)
{
	static UFunction* uFnSendGameInviteToFriends = nullptr;

	if (!uFnSendGameInviteToFriends)
	{
		uFnSendGameInviteToFriends = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends");
	}

	UOnlineSubsystemSteamworks_execSendGameInviteToFriends_Params SendGameInviteToFriends_Params;
	memcpy_s(&SendGameInviteToFriends_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&SendGameInviteToFriends_Params.Friends, 0x10, &Friends, 0x10);
	memcpy_s(&SendGameInviteToFriends_Params.Text, 0x10, &Text, 0x10);

	uFnSendGameInviteToFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSendGameInviteToFriends, &SendGameInviteToFriends_Params, nullptr);

	uFnSendGameInviteToFriends->FunctionFlags |= 0x400;

	return SendGameInviteToFriends_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            Friend                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Text                           (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::SendGameInviteToFriend(uint8_t LocalUserNum, struct FUniqueNetId Friend, struct FString Text)
{
	static UFunction* uFnSendGameInviteToFriend = nullptr;

	if (!uFnSendGameInviteToFriend)
	{
		uFnSendGameInviteToFriend = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend");
	}

	UOnlineSubsystemSteamworks_execSendGameInviteToFriend_Params SendGameInviteToFriend_Params;
	memcpy_s(&SendGameInviteToFriend_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&SendGameInviteToFriend_Params.Friend, 0x48, &Friend, 0x48);
	memcpy_s(&SendGameInviteToFriend_Params.Text, 0x10, &Text, 0x10);

	uFnSendGameInviteToFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSendGameInviteToFriend, &SendGameInviteToFriend_Params, nullptr);

	uFnSendGameInviteToFriend->FunctionFlags |= 0x400;

	return SendGameInviteToFriend_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            Friend                         (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Message                        (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::SendMessageToFriend(uint8_t LocalUserNum, struct FUniqueNetId Friend, struct FString Message)
{
	static UFunction* uFnSendMessageToFriend = nullptr;

	if (!uFnSendMessageToFriend)
	{
		uFnSendMessageToFriend = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend");
	}

	UOnlineSubsystemSteamworks_execSendMessageToFriend_Params SendMessageToFriend_Params;
	memcpy_s(&SendMessageToFriend_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&SendMessageToFriend_Params.Friend, 0x48, &Friend, 0x48);
	memcpy_s(&SendMessageToFriend_Params.Message, 0x10, &Message, 0x10);

	uFnSendMessageToFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSendMessageToFriend, &SendMessageToFriend_Params, nullptr);

	uFnSendMessageToFriend->FunctionFlags |= 0x400;

	return SendMessageToFriend_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteCanceledDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendInviteCanceledDelegate(uint8_t LocalUserNum, struct FScriptDelegate InviteDelegate)
{
	static UFunction* uFnClearFriendInviteCanceledDelegate = nullptr;

	if (!uFnClearFriendInviteCanceledDelegate)
	{
		uFnClearFriendInviteCanceledDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteCanceledDelegate");
	}

	UOnlineSubsystemSteamworks_execClearFriendInviteCanceledDelegate_Params ClearFriendInviteCanceledDelegate_Params;
	memcpy_s(&ClearFriendInviteCanceledDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearFriendInviteCanceledDelegate_Params.InviteDelegate, 0x18, &InviteDelegate, 0x18);

	this->ProcessEvent(uFnClearFriendInviteCanceledDelegate, &ClearFriendInviteCanceledDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteCanceledDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendInviteCanceledDelegate(uint8_t LocalUserNum, struct FScriptDelegate InviteDelegate)
{
	static UFunction* uFnAddFriendInviteCanceledDelegate = nullptr;

	if (!uFnAddFriendInviteCanceledDelegate)
	{
		uFnAddFriendInviteCanceledDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteCanceledDelegate");
	}

	UOnlineSubsystemSteamworks_execAddFriendInviteCanceledDelegate_Params AddFriendInviteCanceledDelegate_Params;
	memcpy_s(&AddFriendInviteCanceledDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddFriendInviteCanceledDelegate_Params.InviteDelegate, 0x18, &InviteDelegate, 0x18);

	this->ProcessEvent(uFnAddFriendInviteCanceledDelegate, &AddFriendInviteCanceledDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteCanceled
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            CanceledUserId                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnFriendInviteCanceled(uint8_t LocalUserNum, struct FUniqueNetId CanceledUserId)
{
	static UFunction* uFnOnFriendInviteCanceled = nullptr;

	if (!uFnOnFriendInviteCanceled)
	{
		uFnOnFriendInviteCanceled = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteCanceled");
	}

	UOnlineSubsystemSteamworks_execOnFriendInviteCanceled_Params OnFriendInviteCanceled_Params;
	memcpy_s(&OnFriendInviteCanceled_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&OnFriendInviteCanceled_Params.CanceledUserId, 0x48, &CanceledUserId, 0x48);

	this->ProcessEvent(uFnOnFriendInviteCanceled, &OnFriendInviteCanceled_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendInviteReceivedDelegate(uint8_t LocalUserNum, struct FScriptDelegate InviteDelegate)
{
	static UFunction* uFnClearFriendInviteReceivedDelegate = nullptr;

	if (!uFnClearFriendInviteReceivedDelegate)
	{
		uFnClearFriendInviteReceivedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate");
	}

	UOnlineSubsystemSteamworks_execClearFriendInviteReceivedDelegate_Params ClearFriendInviteReceivedDelegate_Params;
	memcpy_s(&ClearFriendInviteReceivedDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearFriendInviteReceivedDelegate_Params.InviteDelegate, 0x18, &InviteDelegate, 0x18);

	this->ProcessEvent(uFnClearFriendInviteReceivedDelegate, &ClearFriendInviteReceivedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         InviteDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendInviteReceivedDelegate(uint8_t LocalUserNum, struct FScriptDelegate InviteDelegate)
{
	static UFunction* uFnAddFriendInviteReceivedDelegate = nullptr;

	if (!uFnAddFriendInviteReceivedDelegate)
	{
		uFnAddFriendInviteReceivedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddFriendInviteReceivedDelegate_Params AddFriendInviteReceivedDelegate_Params;
	memcpy_s(&AddFriendInviteReceivedDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddFriendInviteReceivedDelegate_Params.InviteDelegate, 0x18, &InviteDelegate, 0x18);

	this->ProcessEvent(uFnAddFriendInviteReceivedDelegate, &AddFriendInviteReceivedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            RequestingPlayer               (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 RequestingNick                 (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Message                        (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnFriendInviteReceived(uint8_t LocalUserNum, struct FUniqueNetId RequestingPlayer, struct FString RequestingNick, struct FString Message)
{
	static UFunction* uFnOnFriendInviteReceived = nullptr;

	if (!uFnOnFriendInviteReceived)
	{
		uFnOnFriendInviteReceived = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived");
	}

	UOnlineSubsystemSteamworks_execOnFriendInviteReceived_Params OnFriendInviteReceived_Params;
	memcpy_s(&OnFriendInviteReceived_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&OnFriendInviteReceived_Params.RequestingPlayer, 0x48, &RequestingPlayer, 0x48);
	memcpy_s(&OnFriendInviteReceived_Params.RequestingNick, 0x10, &RequestingNick, 0x10);
	memcpy_s(&OnFriendInviteReceived_Params.Message, 0x10, &Message, 0x10);

	this->ProcessEvent(uFnOnFriendInviteReceived, &OnFriendInviteReceived_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            RequestingPlayer               (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::DenyFriendInvite(uint8_t LocalUserNum, struct FUniqueNetId RequestingPlayer)
{
	static UFunction* uFnDenyFriendInvite = nullptr;

	if (!uFnDenyFriendInvite)
	{
		uFnDenyFriendInvite = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite");
	}

	UOnlineSubsystemSteamworks_execDenyFriendInvite_Params DenyFriendInvite_Params;
	memcpy_s(&DenyFriendInvite_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&DenyFriendInvite_Params.RequestingPlayer, 0x48, &RequestingPlayer, 0x48);

	uFnDenyFriendInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnDenyFriendInvite, &DenyFriendInvite_Params, nullptr);

	uFnDenyFriendInvite->FunctionFlags |= 0x400;

	return DenyFriendInvite_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDenyFriendInviteCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearDenyFriendInviteCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnClearDenyFriendInviteCompleteDelegate = nullptr;

	if (!uFnClearDenyFriendInviteCompleteDelegate)
	{
		uFnClearDenyFriendInviteCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDenyFriendInviteCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearDenyFriendInviteCompleteDelegate_Params ClearDenyFriendInviteCompleteDelegate_Params;
	memcpy_s(&ClearDenyFriendInviteCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearDenyFriendInviteCompleteDelegate_Params.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(uFnClearDenyFriendInviteCompleteDelegate, &ClearDenyFriendInviteCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDenyFriendInviteCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddDenyFriendInviteCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnAddDenyFriendInviteCompleteDelegate = nullptr;

	if (!uFnAddDenyFriendInviteCompleteDelegate)
	{
		uFnAddDenyFriendInviteCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDenyFriendInviteCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddDenyFriendInviteCompleteDelegate_Params AddDenyFriendInviteCompleteDelegate_Params;
	memcpy_s(&AddDenyFriendInviteCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddDenyFriendInviteCompleteDelegate_Params.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(uFnAddDenyFriendInviteCompleteDelegate, &AddDenyFriendInviteCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDenyFriendInviteComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            FriendId                       (CPF_Parm | CPF_NeedCtorLink)
// class UError*                  Error                          (CPF_Const | CPF_Parm)

void UOnlineSubsystemSteamworks::OnDenyFriendInviteComplete(struct FUniqueNetId FriendId, class UError* Error)
{
	static UFunction* uFnOnDenyFriendInviteComplete = nullptr;

	if (!uFnOnDenyFriendInviteComplete)
	{
		uFnOnDenyFriendInviteComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDenyFriendInviteComplete");
	}

	UOnlineSubsystemSteamworks_execOnDenyFriendInviteComplete_Params OnDenyFriendInviteComplete_Params;
	memcpy_s(&OnDenyFriendInviteComplete_Params.FriendId, 0x48, &FriendId, 0x48);
	memcpy_s(&OnDenyFriendInviteComplete_Params.Error, 0x8, &Error, 0x8);

	this->ProcessEvent(uFnOnDenyFriendInviteComplete, &OnDenyFriendInviteComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            RequestingPlayer               (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::AcceptFriendInvite(uint8_t LocalUserNum, struct FUniqueNetId RequestingPlayer)
{
	static UFunction* uFnAcceptFriendInvite = nullptr;

	if (!uFnAcceptFriendInvite)
	{
		uFnAcceptFriendInvite = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite");
	}

	UOnlineSubsystemSteamworks_execAcceptFriendInvite_Params AcceptFriendInvite_Params;
	memcpy_s(&AcceptFriendInvite_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AcceptFriendInvite_Params.RequestingPlayer, 0x48, &RequestingPlayer, 0x48);

	uFnAcceptFriendInvite->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAcceptFriendInvite, &AcceptFriendInvite_Params, nullptr);

	uFnAcceptFriendInvite->FunctionFlags |= 0x400;

	return AcceptFriendInvite_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAcceptFriendInviteCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearAcceptFriendInviteCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnClearAcceptFriendInviteCompleteDelegate = nullptr;

	if (!uFnClearAcceptFriendInviteCompleteDelegate)
	{
		uFnClearAcceptFriendInviteCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAcceptFriendInviteCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearAcceptFriendInviteCompleteDelegate_Params ClearAcceptFriendInviteCompleteDelegate_Params;
	memcpy_s(&ClearAcceptFriendInviteCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearAcceptFriendInviteCompleteDelegate_Params.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(uFnClearAcceptFriendInviteCompleteDelegate, &ClearAcceptFriendInviteCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAcceptFriendInviteCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddAcceptFriendInviteCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnAddAcceptFriendInviteCompleteDelegate = nullptr;

	if (!uFnAddAcceptFriendInviteCompleteDelegate)
	{
		uFnAddAcceptFriendInviteCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAcceptFriendInviteCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddAcceptFriendInviteCompleteDelegate_Params AddAcceptFriendInviteCompleteDelegate_Params;
	memcpy_s(&AddAcceptFriendInviteCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddAcceptFriendInviteCompleteDelegate_Params.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(uFnAddAcceptFriendInviteCompleteDelegate, &AddAcceptFriendInviteCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAcceptFriendInviteComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            FriendId                       (CPF_Parm | CPF_NeedCtorLink)
// class UError*                  Error                          (CPF_Const | CPF_Parm)

void UOnlineSubsystemSteamworks::OnAcceptFriendInviteComplete(struct FUniqueNetId FriendId, class UError* Error)
{
	static UFunction* uFnOnAcceptFriendInviteComplete = nullptr;

	if (!uFnOnAcceptFriendInviteComplete)
	{
		uFnOnAcceptFriendInviteComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAcceptFriendInviteComplete");
	}

	UOnlineSubsystemSteamworks_execOnAcceptFriendInviteComplete_Params OnAcceptFriendInviteComplete_Params;
	memcpy_s(&OnAcceptFriendInviteComplete_Params.FriendId, 0x48, &FriendId, 0x48);
	memcpy_s(&OnAcceptFriendInviteComplete_Params.Error, 0x8, &Error, 0x8);

	this->ProcessEvent(uFnOnAcceptFriendInviteComplete, &OnAcceptFriendInviteComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            FormerFriend                   (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::RemoveFriend(uint8_t LocalUserNum, struct FUniqueNetId FormerFriend)
{
	static UFunction* uFnRemoveFriend = nullptr;

	if (!uFnRemoveFriend)
	{
		uFnRemoveFriend = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend");
	}

	UOnlineSubsystemSteamworks_execRemoveFriend_Params RemoveFriend_Params;
	memcpy_s(&RemoveFriend_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&RemoveFriend_Params.FormerFriend, 0x48, &FormerFriend, 0x48);

	uFnRemoveFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRemoveFriend, &RemoveFriend_Params, nullptr);

	uFnRemoveFriend->FunctionFlags |= 0x400;

	return RemoveFriend_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRemoveFriendCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RemoveFriendDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearRemoveFriendCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RemoveFriendDelegate)
{
	static UFunction* uFnClearRemoveFriendCompleteDelegate = nullptr;

	if (!uFnClearRemoveFriendCompleteDelegate)
	{
		uFnClearRemoveFriendCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRemoveFriendCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearRemoveFriendCompleteDelegate_Params ClearRemoveFriendCompleteDelegate_Params;
	memcpy_s(&ClearRemoveFriendCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearRemoveFriendCompleteDelegate_Params.RemoveFriendDelegate, 0x18, &RemoveFriendDelegate, 0x18);

	this->ProcessEvent(uFnClearRemoveFriendCompleteDelegate, &ClearRemoveFriendCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRemoveFriendCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RemoveFriendDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddRemoveFriendCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RemoveFriendDelegate)
{
	static UFunction* uFnAddRemoveFriendCompleteDelegate = nullptr;

	if (!uFnAddRemoveFriendCompleteDelegate)
	{
		uFnAddRemoveFriendCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRemoveFriendCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddRemoveFriendCompleteDelegate_Params AddRemoveFriendCompleteDelegate_Params;
	memcpy_s(&AddRemoveFriendCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddRemoveFriendCompleteDelegate_Params.RemoveFriendDelegate, 0x18, &RemoveFriendDelegate, 0x18);

	this->ProcessEvent(uFnAddRemoveFriendCompleteDelegate, &AddRemoveFriendCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRemoveFriendComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FUniqueNetId            RemovedID                      (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnRemoveFriendComplete(unsigned long bWasSuccessful, struct FUniqueNetId RemovedID)
{
	static UFunction* uFnOnRemoveFriendComplete = nullptr;

	if (!uFnOnRemoveFriendComplete)
	{
		uFnOnRemoveFriendComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRemoveFriendComplete");
	}

	UOnlineSubsystemSteamworks_execOnRemoveFriendComplete_Params OnRemoveFriendComplete_Params;
	OnRemoveFriendComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnRemoveFriendComplete_Params.RemovedID, 0x48, &RemovedID, 0x48);

	this->ProcessEvent(uFnOnRemoveFriendComplete, &OnRemoveFriendComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearAddFriendByNameCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnClearAddFriendByNameCompleteDelegate = nullptr;

	if (!uFnClearAddFriendByNameCompleteDelegate)
	{
		uFnClearAddFriendByNameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearAddFriendByNameCompleteDelegate_Params ClearAddFriendByNameCompleteDelegate_Params;
	memcpy_s(&ClearAddFriendByNameCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearAddFriendByNameCompleteDelegate_Params.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(uFnClearAddFriendByNameCompleteDelegate, &ClearAddFriendByNameCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddAddFriendByNameCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnAddAddFriendByNameCompleteDelegate = nullptr;

	if (!uFnAddAddFriendByNameCompleteDelegate)
	{
		uFnAddAddFriendByNameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddAddFriendByNameCompleteDelegate_Params AddAddFriendByNameCompleteDelegate_Params;
	memcpy_s(&AddAddFriendByNameCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddAddFriendByNameCompleteDelegate_Params.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(uFnAddAddFriendByNameCompleteDelegate, &AddAddFriendByNameCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnAddFriendByNameComplete(unsigned long bWasSuccessful)
{
	static UFunction* uFnOnAddFriendByNameComplete = nullptr;

	if (!uFnOnAddFriendByNameComplete)
	{
		uFnOnAddFriendByNameComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete");
	}

	UOnlineSubsystemSteamworks_execOnAddFriendByNameComplete_Params OnAddFriendByNameComplete_Params;
	OnAddFriendByNameComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnAddFriendByNameComplete, &OnAddFriendByNameComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FString                 FriendName                     (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Message                        (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::AddFriendByName(uint8_t LocalUserNum, struct FString FriendName, struct FString Message)
{
	static UFunction* uFnAddFriendByName = nullptr;

	if (!uFnAddFriendByName)
	{
		uFnAddFriendByName = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName");
	}

	UOnlineSubsystemSteamworks_execAddFriendByName_Params AddFriendByName_Params;
	memcpy_s(&AddFriendByName_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddFriendByName_Params.FriendName, 0x10, &FriendName, 0x10);
	memcpy_s(&AddFriendByName_Params.Message, 0x10, &Message, 0x10);

	uFnAddFriendByName->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAddFriendByName, &AddFriendByName_Params, nullptr);

	uFnAddFriendByName->FunctionFlags |= 0x400;

	return AddFriendByName_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueryUserByDisplayName
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FString                 DisplayName                    (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::QueryUserByDisplayName(uint8_t LocalUserNum, struct FString DisplayName)
{
	static UFunction* uFnQueryUserByDisplayName = nullptr;

	if (!uFnQueryUserByDisplayName)
	{
		uFnQueryUserByDisplayName = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueryUserByDisplayName");
	}

	UOnlineSubsystemSteamworks_execQueryUserByDisplayName_Params QueryUserByDisplayName_Params;
	memcpy_s(&QueryUserByDisplayName_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&QueryUserByDisplayName_Params.DisplayName, 0x10, &DisplayName, 0x10);

	this->ProcessEvent(uFnQueryUserByDisplayName, &QueryUserByDisplayName_Params, nullptr);

	return QueryUserByDisplayName_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearQueryUserByDisplayNameCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         QueryDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearQueryUserByDisplayNameCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate QueryDelegate)
{
	static UFunction* uFnClearQueryUserByDisplayNameCompleteDelegate = nullptr;

	if (!uFnClearQueryUserByDisplayNameCompleteDelegate)
	{
		uFnClearQueryUserByDisplayNameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearQueryUserByDisplayNameCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearQueryUserByDisplayNameCompleteDelegate_Params ClearQueryUserByDisplayNameCompleteDelegate_Params;
	memcpy_s(&ClearQueryUserByDisplayNameCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearQueryUserByDisplayNameCompleteDelegate_Params.QueryDelegate, 0x18, &QueryDelegate, 0x18);

	this->ProcessEvent(uFnClearQueryUserByDisplayNameCompleteDelegate, &ClearQueryUserByDisplayNameCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddQueryUserByDisplayNameCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         QueryDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddQueryUserByDisplayNameCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate QueryDelegate)
{
	static UFunction* uFnAddQueryUserByDisplayNameCompleteDelegate = nullptr;

	if (!uFnAddQueryUserByDisplayNameCompleteDelegate)
	{
		uFnAddQueryUserByDisplayNameCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddQueryUserByDisplayNameCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddQueryUserByDisplayNameCompleteDelegate_Params AddQueryUserByDisplayNameCompleteDelegate_Params;
	memcpy_s(&AddQueryUserByDisplayNameCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddQueryUserByDisplayNameCompleteDelegate_Params.QueryDelegate, 0x18, &QueryDelegate, 0x18);

	this->ProcessEvent(uFnAddQueryUserByDisplayNameCompleteDelegate, &AddQueryUserByDisplayNameCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnQueryUserByDisplayName
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 QueriedDisplayName             (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            UserId                         (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnQueryUserByDisplayName(unsigned long bWasSuccessful, struct FString QueriedDisplayName, struct FUniqueNetId UserId)
{
	static UFunction* uFnOnQueryUserByDisplayName = nullptr;

	if (!uFnOnQueryUserByDisplayName)
	{
		uFnOnQueryUserByDisplayName = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnQueryUserByDisplayName");
	}

	UOnlineSubsystemSteamworks_execOnQueryUserByDisplayName_Params OnQueryUserByDisplayName_Params;
	OnQueryUserByDisplayName_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnQueryUserByDisplayName_Params.QueriedDisplayName, 0x10, &QueriedDisplayName, 0x10);
	memcpy_s(&OnQueryUserByDisplayName_Params.UserId, 0x48, &UserId, 0x48);

	this->ProcessEvent(uFnOnQueryUserByDisplayName, &OnQueryUserByDisplayName_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            NewFriend                      (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Message                        (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::AddFriend(uint8_t LocalUserNum, struct FUniqueNetId NewFriend, struct FString Message)
{
	static UFunction* uFnAddFriend = nullptr;

	if (!uFnAddFriend)
	{
		uFnAddFriend = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend");
	}

	UOnlineSubsystemSteamworks_execAddFriend_Params AddFriend_Params;
	memcpy_s(&AddFriend_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddFriend_Params.NewFriend, 0x48, &NewFriend, 0x48);
	memcpy_s(&AddFriend_Params.Message, 0x10, &Message, 0x10);

	uFnAddFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAddFriend, &AddFriend_Params, nullptr);

	uFnAddFriend->FunctionFlags |= 0x400;

	return AddFriend_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearAddFriendCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnClearAddFriendCompleteDelegate = nullptr;

	if (!uFnClearAddFriendCompleteDelegate)
	{
		uFnClearAddFriendCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearAddFriendCompleteDelegate_Params ClearAddFriendCompleteDelegate_Params;
	memcpy_s(&ClearAddFriendCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearAddFriendCompleteDelegate_Params.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(uFnClearAddFriendCompleteDelegate, &ClearAddFriendCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddAddFriendCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendDelegate)
{
	static UFunction* uFnAddAddFriendCompleteDelegate = nullptr;

	if (!uFnAddAddFriendCompleteDelegate)
	{
		uFnAddAddFriendCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddAddFriendCompleteDelegate_Params AddAddFriendCompleteDelegate_Params;
	memcpy_s(&AddAddFriendCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddAddFriendCompleteDelegate_Params.FriendDelegate, 0x18, &FriendDelegate, 0x18);

	this->ProcessEvent(uFnAddAddFriendCompleteDelegate, &AddAddFriendCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            NewFriendId                    (CPF_Parm | CPF_NeedCtorLink)
// class UError*                  Error                          (CPF_Const | CPF_Parm)

void UOnlineSubsystemSteamworks::OnAddFriendComplete(struct FUniqueNetId NewFriendId, class UError* Error)
{
	static UFunction* uFnOnAddFriendComplete = nullptr;

	if (!uFnOnAddFriendComplete)
	{
		uFnOnAddFriendComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendComplete");
	}

	UOnlineSubsystemSteamworks_execOnAddFriendComplete_Params OnAddFriendComplete_Params;
	memcpy_s(&OnAddFriendComplete_Params.NewFriendId, 0x48, &NewFriendId, 0x48);
	memcpy_s(&OnAddFriendComplete_Params.Error, 0x8, &Error, 0x8);

	this->ProcessEvent(uFnOnAddFriendComplete, &OnAddFriendComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        bWasCanceled                   (CPF_Parm | CPF_OutParm)

struct FString UOnlineSubsystemSteamworks::GetKeyboardInputResults(uint8_t& bWasCanceled)
{
	static UFunction* uFnGetKeyboardInputResults = nullptr;

	if (!uFnGetKeyboardInputResults)
	{
		uFnGetKeyboardInputResults = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults");
	}

	UOnlineSubsystemSteamworks_execGetKeyboardInputResults_Params GetKeyboardInputResults_Params;
	memcpy_s(&GetKeyboardInputResults_Params.bWasCanceled, 0x1, &bWasCanceled, 0x1);

	this->ProcessEvent(uFnGetKeyboardInputResults, &GetKeyboardInputResults_Params, nullptr);

	memcpy_s(&bWasCanceled, 0x1, &GetKeyboardInputResults_Params.bWasCanceled, 0x1);

	return GetKeyboardInputResults_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InputDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearKeyboardInputDoneDelegate(struct FScriptDelegate InputDelegate)
{
	static UFunction* uFnClearKeyboardInputDoneDelegate = nullptr;

	if (!uFnClearKeyboardInputDoneDelegate)
	{
		uFnClearKeyboardInputDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate");
	}

	UOnlineSubsystemSteamworks_execClearKeyboardInputDoneDelegate_Params ClearKeyboardInputDoneDelegate_Params;
	memcpy_s(&ClearKeyboardInputDoneDelegate_Params.InputDelegate, 0x18, &InputDelegate, 0x18);

	this->ProcessEvent(uFnClearKeyboardInputDoneDelegate, &ClearKeyboardInputDoneDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         InputDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddKeyboardInputDoneDelegate(struct FScriptDelegate InputDelegate)
{
	static UFunction* uFnAddKeyboardInputDoneDelegate = nullptr;

	if (!uFnAddKeyboardInputDoneDelegate)
	{
		uFnAddKeyboardInputDoneDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate");
	}

	UOnlineSubsystemSteamworks_execAddKeyboardInputDoneDelegate_Params AddKeyboardInputDoneDelegate_Params;
	memcpy_s(&AddKeyboardInputDoneDelegate_Params.InputDelegate, 0x18, &InputDelegate, 0x18);

	this->ProcessEvent(uFnAddKeyboardInputDoneDelegate, &AddKeyboardInputDoneDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnKeyboardInputComplete(unsigned long bWasSuccessful)
{
	static UFunction* uFnOnKeyboardInputComplete = nullptr;

	if (!uFnOnKeyboardInputComplete)
	{
		uFnOnKeyboardInputComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete");
	}

	UOnlineSubsystemSteamworks_execOnKeyboardInputComplete_Params OnKeyboardInputComplete_Params;
	OnKeyboardInputComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnKeyboardInputComplete, &OnKeyboardInputComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HideKeyboardUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::HideKeyboardUI(uint8_t LocalUserNum)
{
	static UFunction* uFnHideKeyboardUI = nullptr;

	if (!uFnHideKeyboardUI)
	{
		uFnHideKeyboardUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HideKeyboardUI");
	}

	UOnlineSubsystemSteamworks_execHideKeyboardUI_Params HideKeyboardUI_Params;
	memcpy_s(&HideKeyboardUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnHideKeyboardUI, &HideKeyboardUI_Params, nullptr);

	return HideKeyboardUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FString                 TitleText                      (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 DescriptionText                (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bIsPassword                    (CPF_OptionalParm | CPF_Parm)
// unsigned long                  bShouldValidate                (CPF_OptionalParm | CPF_Parm)
// struct FString                 DefaultText                    (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// int32_t                        MaxResultLength                (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowKeyboardUI(uint8_t LocalUserNum, struct FString TitleText, struct FString DescriptionText, unsigned long bIsPassword, unsigned long bShouldValidate, struct FString DefaultText, int32_t MaxResultLength)
{
	static UFunction* uFnShowKeyboardUI = nullptr;

	if (!uFnShowKeyboardUI)
	{
		uFnShowKeyboardUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI");
	}

	UOnlineSubsystemSteamworks_execShowKeyboardUI_Params ShowKeyboardUI_Params;
	memcpy_s(&ShowKeyboardUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ShowKeyboardUI_Params.TitleText, 0x10, &TitleText, 0x10);
	memcpy_s(&ShowKeyboardUI_Params.DescriptionText, 0x10, &DescriptionText, 0x10);
	ShowKeyboardUI_Params.bIsPassword = bIsPassword;
	ShowKeyboardUI_Params.bShouldValidate = bShouldValidate;
	memcpy_s(&ShowKeyboardUI_Params.DefaultText, 0x10, &DefaultText, 0x10);
	memcpy_s(&ShowKeyboardUI_Params.MaxResultLength, 0x4, &MaxResultLength, 0x4);

	uFnShowKeyboardUI->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnShowKeyboardUI, &ShowKeyboardUI_Params, nullptr);

	uFnShowKeyboardUI->FunctionFlags |= 0x400;

	return ShowKeyboardUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        StatusId                       (CPF_Parm)
// TArray<struct FLocalizedStringSetting> LocalizedStringSettings        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<struct FSettingsProperty> Properties                     (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::SetOnlineStatus(uint8_t LocalUserNum, int32_t StatusId, TArray<struct FLocalizedStringSetting>& LocalizedStringSettings, TArray<struct FSettingsProperty>& Properties)
{
	static UFunction* uFnSetOnlineStatus = nullptr;

	if (!uFnSetOnlineStatus)
	{
		uFnSetOnlineStatus = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus");
	}

	UOnlineSubsystemSteamworks_execSetOnlineStatus_Params SetOnlineStatus_Params;
	memcpy_s(&SetOnlineStatus_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&SetOnlineStatus_Params.StatusId, 0x4, &StatusId, 0x4);
	memcpy_s(&SetOnlineStatus_Params.LocalizedStringSettings, 0x10, &LocalizedStringSettings, 0x10);
	memcpy_s(&SetOnlineStatus_Params.Properties, 0x10, &Properties, 0x10);

	uFnSetOnlineStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetOnlineStatus, &SetOnlineStatus_Params, nullptr);

	uFnSetOnlineStatus->FunctionFlags |= 0x400;

	memcpy_s(&LocalizedStringSettings, 0x10, &SetOnlineStatus_Params.LocalizedStringSettings, 0x10);
	memcpy_s(&Properties, 0x10, &SetOnlineStatus_Params.Properties, 0x10);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

uint8_t UOnlineSubsystemSteamworks::GetTitleFileState(struct FString Filename)
{
	static UFunction* uFnGetTitleFileState = nullptr;

	if (!uFnGetTitleFileState)
	{
		uFnGetTitleFileState = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState");
	}

	UOnlineSubsystemSteamworks_execGetTitleFileState_Params GetTitleFileState_Params;
	memcpy_s(&GetTitleFileState_Params.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(uFnGetTitleFileState, &GetTitleFileState_Params, nullptr);

	return GetTitleFileState_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)
// TArray<uint8_t>                FileContents                   (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetTitleFileContents(struct FString Filename, TArray<uint8_t>& FileContents)
{
	static UFunction* uFnGetTitleFileContents = nullptr;

	if (!uFnGetTitleFileContents)
	{
		uFnGetTitleFileContents = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents");
	}

	UOnlineSubsystemSteamworks_execGetTitleFileContents_Params GetTitleFileContents_Params;
	memcpy_s(&GetTitleFileContents_Params.Filename, 0x10, &Filename, 0x10);
	memcpy_s(&GetTitleFileContents_Params.FileContents, 0x10, &FileContents, 0x10);

	uFnGetTitleFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetTitleFileContents, &GetTitleFileContents_Params, nullptr);

	uFnGetTitleFileContents->FunctionFlags |= 0x400;

	memcpy_s(&FileContents, 0x10, &GetTitleFileContents_Params.FileContents, 0x10);

	return GetTitleFileContents_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadTitleFileCompleteDelegate(struct FScriptDelegate ReadTitleFileCompleteDelegate)
{
	static UFunction* uFnClearReadTitleFileCompleteDelegate = nullptr;

	if (!uFnClearReadTitleFileCompleteDelegate)
	{
		uFnClearReadTitleFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadTitleFileCompleteDelegate_Params ClearReadTitleFileCompleteDelegate_Params;
	memcpy_s(&ClearReadTitleFileCompleteDelegate_Params.ReadTitleFileCompleteDelegate, 0x18, &ReadTitleFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearReadTitleFileCompleteDelegate, &ClearReadTitleFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadTitleFileCompleteDelegate(struct FScriptDelegate ReadTitleFileCompleteDelegate)
{
	static UFunction* uFnAddReadTitleFileCompleteDelegate = nullptr;

	if (!uFnAddReadTitleFileCompleteDelegate)
	{
		uFnAddReadTitleFileCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadTitleFileCompleteDelegate_Params AddReadTitleFileCompleteDelegate_Params;
	memcpy_s(&AddReadTitleFileCompleteDelegate_Params.ReadTitleFileCompleteDelegate, 0x18, &ReadTitleFileCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddReadTitleFileCompleteDelegate, &AddReadTitleFileCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 FileToRead                     (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ReadTitleFile(struct FString FileToRead)
{
	static UFunction* uFnReadTitleFile = nullptr;

	if (!uFnReadTitleFile)
	{
		uFnReadTitleFile = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile");
	}

	UOnlineSubsystemSteamworks_execReadTitleFile_Params ReadTitleFile_Params;
	memcpy_s(&ReadTitleFile_Params.FileToRead, 0x10, &FileToRead, 0x10);

	uFnReadTitleFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReadTitleFile, &ReadTitleFile_Params, nullptr);

	uFnReadTitleFile->FunctionFlags |= 0x400;

	return ReadTitleFile_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)
// struct FString                 Filename                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReadTitleFileComplete(unsigned long bWasSuccessful, struct FString Filename)
{
	static UFunction* uFnOnReadTitleFileComplete = nullptr;

	if (!uFnOnReadTitleFileComplete)
	{
		uFnOnReadTitleFileComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadTitleFileComplete_Params OnReadTitleFileComplete_Params;
	OnReadTitleFileComplete_Params.bWasSuccessful = bWasSuccessful;
	memcpy_s(&OnReadTitleFileComplete_Params.Filename, 0x10, &Filename, 0x10);

	this->ProcessEvent(uFnOnReadTitleFileComplete, &OnReadTitleFileComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearStorageDeviceChangeDelegate(struct FScriptDelegate StorageDeviceChangeDelegate)
{
	static UFunction* uFnClearStorageDeviceChangeDelegate = nullptr;

	if (!uFnClearStorageDeviceChangeDelegate)
	{
		uFnClearStorageDeviceChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearStorageDeviceChangeDelegate_Params ClearStorageDeviceChangeDelegate_Params;
	memcpy_s(&ClearStorageDeviceChangeDelegate_Params.StorageDeviceChangeDelegate, 0x18, &StorageDeviceChangeDelegate, 0x18);

	this->ProcessEvent(uFnClearStorageDeviceChangeDelegate, &ClearStorageDeviceChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddStorageDeviceChangeDelegate(struct FScriptDelegate StorageDeviceChangeDelegate)
{
	static UFunction* uFnAddStorageDeviceChangeDelegate = nullptr;

	if (!uFnAddStorageDeviceChangeDelegate)
	{
		uFnAddStorageDeviceChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddStorageDeviceChangeDelegate_Params AddStorageDeviceChangeDelegate_Params;
	memcpy_s(&AddStorageDeviceChangeDelegate_Params.StorageDeviceChangeDelegate, 0x18, &StorageDeviceChangeDelegate, 0x18);

	this->ProcessEvent(uFnAddStorageDeviceChangeDelegate, &AddStorageDeviceChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::OnStorageDeviceChange()
{
	static UFunction* uFnOnStorageDeviceChange = nullptr;

	if (!uFnOnStorageDeviceChange)
	{
		uFnOnStorageDeviceChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange");
	}

	UOnlineSubsystemSteamworks_execOnStorageDeviceChange_Params OnStorageDeviceChange_Params;

	this->ProcessEvent(uFnOnStorageDeviceChange, &OnStorageDeviceChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

uint8_t UOnlineSubsystemSteamworks::GetNATType()
{
	static UFunction* uFnGetNATType = nullptr;

	if (!uFnGetNATType)
	{
		uFnGetNATType = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType");
	}

	UOnlineSubsystemSteamworks_execGetNATType_Params GetNATType_Params;

	uFnGetNATType->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetNATType, &GetNATType_Params, nullptr);

	uFnGetNATType->FunctionFlags |= 0x400;

	return GetNATType_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ConnectionStatusDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearConnectionStatusChangeDelegate(struct FScriptDelegate ConnectionStatusDelegate)
{
	static UFunction* uFnClearConnectionStatusChangeDelegate = nullptr;

	if (!uFnClearConnectionStatusChangeDelegate)
	{
		uFnClearConnectionStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearConnectionStatusChangeDelegate_Params ClearConnectionStatusChangeDelegate_Params;
	memcpy_s(&ClearConnectionStatusChangeDelegate_Params.ConnectionStatusDelegate, 0x18, &ConnectionStatusDelegate, 0x18);

	this->ProcessEvent(uFnClearConnectionStatusChangeDelegate, &ClearConnectionStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ConnectionStatusDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddConnectionStatusChangeDelegate(struct FScriptDelegate ConnectionStatusDelegate)
{
	static UFunction* uFnAddConnectionStatusChangeDelegate = nullptr;

	if (!uFnAddConnectionStatusChangeDelegate)
	{
		uFnAddConnectionStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddConnectionStatusChangeDelegate_Params AddConnectionStatusChangeDelegate_Params;
	memcpy_s(&AddConnectionStatusChangeDelegate_Params.ConnectionStatusDelegate, 0x18, &ConnectionStatusDelegate, 0x18);

	this->ProcessEvent(uFnAddConnectionStatusChangeDelegate, &AddConnectionStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ConnectionStatus               (CPF_Parm)

void UOnlineSubsystemSteamworks::OnConnectionStatusChange(uint8_t ConnectionStatus)
{
	static UFunction* uFnOnConnectionStatusChange = nullptr;

	if (!uFnOnConnectionStatusChange)
	{
		uFnOnConnectionStatusChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange");
	}

	UOnlineSubsystemSteamworks_execOnConnectionStatusChange_Params OnConnectionStatusChange_Params;
	memcpy_s(&OnConnectionStatusChange_Params.ConnectionStatus, 0x1, &ConnectionStatus, 0x1);

	this->ProcessEvent(uFnOnConnectionStatusChange, &OnConnectionStatusChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCurrentConnectionStatus
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

uint8_t UOnlineSubsystemSteamworks::GetCurrentConnectionStatus()
{
	static UFunction* uFnGetCurrentConnectionStatus = nullptr;

	if (!uFnGetCurrentConnectionStatus)
	{
		uFnGetCurrentConnectionStatus = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCurrentConnectionStatus");
	}

	UOnlineSubsystemSteamworks_execGetCurrentConnectionStatus_Params GetCurrentConnectionStatus_Params;

	this->ProcessEvent(uFnGetCurrentConnectionStatus, &GetCurrentConnectionStatus_Params, nullptr);

	return GetCurrentConnectionStatus_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// int32_t                        ControllerId                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsControllerConnected(int32_t ControllerId)
{
	static UFunction* uFnIsControllerConnected = nullptr;

	if (!uFnIsControllerConnected)
	{
		uFnIsControllerConnected = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected");
	}

	UOnlineSubsystemSteamworks_execIsControllerConnected_Params IsControllerConnected_Params;
	memcpy_s(&IsControllerConnected_Params.ControllerId, 0x4, &ControllerId, 0x4);

	this->ProcessEvent(uFnIsControllerConnected, &IsControllerConnected_Params, nullptr);

	return IsControllerConnected_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserRestoredDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UserRestoredDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUserRestoredDelegate(struct FScriptDelegate UserRestoredDelegate)
{
	static UFunction* uFnClearUserRestoredDelegate = nullptr;

	if (!uFnClearUserRestoredDelegate)
	{
		uFnClearUserRestoredDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserRestoredDelegate");
	}

	UOnlineSubsystemSteamworks_execClearUserRestoredDelegate_Params ClearUserRestoredDelegate_Params;
	memcpy_s(&ClearUserRestoredDelegate_Params.UserRestoredDelegate, 0x18, &UserRestoredDelegate, 0x18);

	this->ProcessEvent(uFnClearUserRestoredDelegate, &ClearUserRestoredDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserRestoredDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UserRestoredDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUserRestoredDelegate(struct FScriptDelegate UserRestoredDelegate)
{
	static UFunction* uFnAddUserRestoredDelegate = nullptr;

	if (!uFnAddUserRestoredDelegate)
	{
		uFnAddUserRestoredDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserRestoredDelegate");
	}

	UOnlineSubsystemSteamworks_execAddUserRestoredDelegate_Params AddUserRestoredDelegate_Params;
	memcpy_s(&AddUserRestoredDelegate_Params.UserRestoredDelegate, 0x18, &UserRestoredDelegate, 0x18);

	this->ProcessEvent(uFnAddUserRestoredDelegate, &AddUserRestoredDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserRestored
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ControllerId                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnUserRestored(uint8_t ControllerId)
{
	static UFunction* uFnOnUserRestored = nullptr;

	if (!uFnOnUserRestored)
	{
		uFnOnUserRestored = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserRestored");
	}

	UOnlineSubsystemSteamworks_execOnUserRestored_Params OnUserRestored_Params;
	memcpy_s(&OnUserRestored_Params.ControllerId, 0x1, &ControllerId, 0x1);

	this->ProcessEvent(uFnOnUserRestored, &OnUserRestored_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserOrphanedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UserOrphanedDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUserOrphanedDelegate(struct FScriptDelegate UserOrphanedDelegate)
{
	static UFunction* uFnClearUserOrphanedDelegate = nullptr;

	if (!uFnClearUserOrphanedDelegate)
	{
		uFnClearUserOrphanedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserOrphanedDelegate");
	}

	UOnlineSubsystemSteamworks_execClearUserOrphanedDelegate_Params ClearUserOrphanedDelegate_Params;
	memcpy_s(&ClearUserOrphanedDelegate_Params.UserOrphanedDelegate, 0x18, &UserOrphanedDelegate, 0x18);

	this->ProcessEvent(uFnClearUserOrphanedDelegate, &ClearUserOrphanedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserOrphanedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UserOrphanedDelegate           (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUserOrphanedDelegate(struct FScriptDelegate UserOrphanedDelegate)
{
	static UFunction* uFnAddUserOrphanedDelegate = nullptr;

	if (!uFnAddUserOrphanedDelegate)
	{
		uFnAddUserOrphanedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserOrphanedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddUserOrphanedDelegate_Params AddUserOrphanedDelegate_Params;
	memcpy_s(&AddUserOrphanedDelegate_Params.UserOrphanedDelegate, 0x18, &UserOrphanedDelegate, 0x18);

	this->ProcessEvent(uFnAddUserOrphanedDelegate, &AddUserOrphanedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserOrphaned
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ControllerId                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnUserOrphaned(uint8_t ControllerId)
{
	static UFunction* uFnOnUserOrphaned = nullptr;

	if (!uFnOnUserOrphaned)
	{
		uFnOnUserOrphaned = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserOrphaned");
	}

	UOnlineSubsystemSteamworks_execOnUserOrphaned_Params OnUserOrphaned_Params;
	memcpy_s(&OnUserOrphaned_Params.ControllerId, 0x1, &ControllerId, 0x1);

	this->ProcessEvent(uFnOnUserOrphaned, &OnUserOrphaned_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ControllerChangeDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearControllerChangeDelegate(struct FScriptDelegate ControllerChangeDelegate)
{
	static UFunction* uFnClearControllerChangeDelegate = nullptr;

	if (!uFnClearControllerChangeDelegate)
	{
		uFnClearControllerChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearControllerChangeDelegate_Params ClearControllerChangeDelegate_Params;
	memcpy_s(&ClearControllerChangeDelegate_Params.ControllerChangeDelegate, 0x18, &ControllerChangeDelegate, 0x18);

	this->ProcessEvent(uFnClearControllerChangeDelegate, &ClearControllerChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ControllerChangeDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddControllerChangeDelegate(struct FScriptDelegate ControllerChangeDelegate)
{
	static UFunction* uFnAddControllerChangeDelegate = nullptr;

	if (!uFnAddControllerChangeDelegate)
	{
		uFnAddControllerChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddControllerChangeDelegate_Params AddControllerChangeDelegate_Params;
	memcpy_s(&AddControllerChangeDelegate_Params.ControllerChangeDelegate, 0x18, &ControllerChangeDelegate, 0x18);

	this->ProcessEvent(uFnAddControllerChangeDelegate, &AddControllerChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// int32_t                        ControllerId                   (CPF_Parm)
// unsigned long                  bIsConnected                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnControllerChange(int32_t ControllerId, unsigned long bIsConnected)
{
	static UFunction* uFnOnControllerChange = nullptr;

	if (!uFnOnControllerChange)
	{
		uFnOnControllerChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange");
	}

	UOnlineSubsystemSteamworks_execOnControllerChange_Params OnControllerChange_Params;
	memcpy_s(&OnControllerChange_Params.ControllerId, 0x4, &ControllerId, 0x4);
	OnControllerChange_Params.bIsConnected = bIsConnected;

	this->ProcessEvent(uFnOnControllerChange, &OnControllerChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        NewPos                         (CPF_Parm)

void UOnlineSubsystemSteamworks::SetNetworkNotificationPosition(uint8_t NewPos)
{
	static UFunction* uFnSetNetworkNotificationPosition = nullptr;

	if (!uFnSetNetworkNotificationPosition)
	{
		uFnSetNetworkNotificationPosition = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition");
	}

	UOnlineSubsystemSteamworks_execSetNetworkNotificationPosition_Params SetNetworkNotificationPosition_Params;
	memcpy_s(&SetNetworkNotificationPosition_Params.NewPos, 0x1, &NewPos, 0x1);

	uFnSetNetworkNotificationPosition->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetNetworkNotificationPosition, &SetNetworkNotificationPosition_Params, nullptr);

	uFnSetNetworkNotificationPosition->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

uint8_t UOnlineSubsystemSteamworks::GetNetworkNotificationPosition()
{
	static UFunction* uFnGetNetworkNotificationPosition = nullptr;

	if (!uFnGetNetworkNotificationPosition)
	{
		uFnGetNetworkNotificationPosition = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition");
	}

	UOnlineSubsystemSteamworks_execGetNetworkNotificationPosition_Params GetNetworkNotificationPosition_Params;

	this->ProcessEvent(uFnGetNetworkNotificationPosition, &GetNetworkNotificationPosition_Params, nullptr);

	return GetNetworkNotificationPosition_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ExternalUIDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearExternalUIChangeDelegate(struct FScriptDelegate ExternalUIDelegate)
{
	static UFunction* uFnClearExternalUIChangeDelegate = nullptr;

	if (!uFnClearExternalUIChangeDelegate)
	{
		uFnClearExternalUIChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearExternalUIChangeDelegate_Params ClearExternalUIChangeDelegate_Params;
	memcpy_s(&ClearExternalUIChangeDelegate_Params.ExternalUIDelegate, 0x18, &ExternalUIDelegate, 0x18);

	this->ProcessEvent(uFnClearExternalUIChangeDelegate, &ClearExternalUIChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ExternalUIDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddExternalUIChangeDelegate(struct FScriptDelegate ExternalUIDelegate)
{
	static UFunction* uFnAddExternalUIChangeDelegate = nullptr;

	if (!uFnAddExternalUIChangeDelegate)
	{
		uFnAddExternalUIChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddExternalUIChangeDelegate_Params AddExternalUIChangeDelegate_Params;
	memcpy_s(&AddExternalUIChangeDelegate_Params.ExternalUIDelegate, 0x18, &ExternalUIDelegate, 0x18);

	this->ProcessEvent(uFnAddExternalUIChangeDelegate, &AddExternalUIChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bIsOpening                     (CPF_Parm)

void UOnlineSubsystemSteamworks::OnExternalUIChange(unsigned long bIsOpening)
{
	static UFunction* uFnOnExternalUIChange = nullptr;

	if (!uFnOnExternalUIChange)
	{
		uFnOnExternalUIChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange");
	}

	UOnlineSubsystemSteamworks_execOnExternalUIChange_Params OnExternalUIChange_Params;
	OnExternalUIChange_Params.bIsOpening = bIsOpening;

	this->ProcessEvent(uFnOnExternalUIChange, &OnExternalUIChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LinkStatusDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLinkStatusChangeDelegate(struct FScriptDelegate LinkStatusDelegate)
{
	static UFunction* uFnClearLinkStatusChangeDelegate = nullptr;

	if (!uFnClearLinkStatusChangeDelegate)
	{
		uFnClearLinkStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearLinkStatusChangeDelegate_Params ClearLinkStatusChangeDelegate_Params;
	memcpy_s(&ClearLinkStatusChangeDelegate_Params.LinkStatusDelegate, 0x18, &LinkStatusDelegate, 0x18);

	this->ProcessEvent(uFnClearLinkStatusChangeDelegate, &ClearLinkStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LinkStatusDelegate             (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLinkStatusChangeDelegate(struct FScriptDelegate LinkStatusDelegate)
{
	static UFunction* uFnAddLinkStatusChangeDelegate = nullptr;

	if (!uFnAddLinkStatusChangeDelegate)
	{
		uFnAddLinkStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddLinkStatusChangeDelegate_Params AddLinkStatusChangeDelegate_Params;
	memcpy_s(&AddLinkStatusChangeDelegate_Params.LinkStatusDelegate, 0x18, &LinkStatusDelegate, 0x18);

	this->ProcessEvent(uFnAddLinkStatusChangeDelegate, &AddLinkStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bIsConnected                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLinkStatusChange(unsigned long bIsConnected)
{
	static UFunction* uFnOnLinkStatusChange = nullptr;

	if (!uFnOnLinkStatusChange)
	{
		uFnOnLinkStatusChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange");
	}

	UOnlineSubsystemSteamworks_execOnLinkStatusChange_Params OnLinkStatusChange_Params;
	OnLinkStatusChange_Params.bIsConnected = bIsConnected;

	this->ProcessEvent(uFnOnLinkStatusChange, &OnLinkStatusChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::HasLinkConnection()
{
	static UFunction* uFnHasLinkConnection = nullptr;

	if (!uFnHasLinkConnection)
	{
		uFnHasLinkConnection = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection");
	}

	UOnlineSubsystemSteamworks_execHasLinkConnection_Params HasLinkConnection_Params;

	uFnHasLinkConnection->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnHasLinkConnection, &HasLinkConnection_Params, nullptr);

	uFnHasLinkConnection->FunctionFlags |= 0x400;

	return HasLinkConnection_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex
// [0x400020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// int32_t                        UserIndex                      (CPF_Parm)

struct FString UOnlineSubsystemSteamworks::eventGetPlayerNicknameFromIndex(int32_t UserIndex)
{
	static UFunction* uFnGetPlayerNicknameFromIndex = nullptr;

	if (!uFnGetPlayerNicknameFromIndex)
	{
		uFnGetPlayerNicknameFromIndex = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex");
	}

	UOnlineSubsystemSteamworks_eventGetPlayerNicknameFromIndex_Params GetPlayerNicknameFromIndex_Params;
	memcpy_s(&GetPlayerNicknameFromIndex_Params.UserIndex, 0x4, &UserIndex, 0x4);

	this->ProcessEvent(uFnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Params, nullptr);

	return GetPlayerNicknameFromIndex_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// int32_t                        LeaderboardId                  (CPF_Parm)
// TArray<struct FOnlinePlayerScore> PlayerScores                   (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::WriteOnlinePlayerScores(struct FName SessionName, int32_t LeaderboardId, TArray<struct FOnlinePlayerScore>& PlayerScores)
{
	static UFunction* uFnWriteOnlinePlayerScores = nullptr;

	if (!uFnWriteOnlinePlayerScores)
	{
		uFnWriteOnlinePlayerScores = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores");
	}

	UOnlineSubsystemSteamworks_execWriteOnlinePlayerScores_Params WriteOnlinePlayerScores_Params;
	memcpy_s(&WriteOnlinePlayerScores_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&WriteOnlinePlayerScores_Params.LeaderboardId, 0x4, &LeaderboardId, 0x4);
	memcpy_s(&WriteOnlinePlayerScores_Params.PlayerScores, 0x10, &PlayerScores, 0x10);

	uFnWriteOnlinePlayerScores->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnWriteOnlinePlayerScores, &WriteOnlinePlayerScores_Params, nullptr);

	uFnWriteOnlinePlayerScores->FunctionFlags |= 0x400;

	memcpy_s(&PlayerScores, 0x10, &WriteOnlinePlayerScores_Params.PlayerScores, 0x10);

	return WriteOnlinePlayerScores_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFlushOnlineStatsCompleteDelegate(struct FScriptDelegate FlushOnlineStatsCompleteDelegate)
{
	static UFunction* uFnClearFlushOnlineStatsCompleteDelegate = nullptr;

	if (!uFnClearFlushOnlineStatsCompleteDelegate)
	{
		uFnClearFlushOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearFlushOnlineStatsCompleteDelegate_Params ClearFlushOnlineStatsCompleteDelegate_Params;
	memcpy_s(&ClearFlushOnlineStatsCompleteDelegate_Params.FlushOnlineStatsCompleteDelegate, 0x18, &FlushOnlineStatsCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearFlushOnlineStatsCompleteDelegate, &ClearFlushOnlineStatsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFlushOnlineStatsCompleteDelegate(struct FScriptDelegate FlushOnlineStatsCompleteDelegate)
{
	static UFunction* uFnAddFlushOnlineStatsCompleteDelegate = nullptr;

	if (!uFnAddFlushOnlineStatsCompleteDelegate)
	{
		uFnAddFlushOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddFlushOnlineStatsCompleteDelegate_Params AddFlushOnlineStatsCompleteDelegate_Params;
	memcpy_s(&AddFlushOnlineStatsCompleteDelegate_Params.FlushOnlineStatsCompleteDelegate, 0x18, &FlushOnlineStatsCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddFlushOnlineStatsCompleteDelegate, &AddFlushOnlineStatsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FName                   SessionName                    (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnFlushOnlineStatsComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnFlushOnlineStatsComplete = nullptr;

	if (!uFnOnFlushOnlineStatsComplete)
	{
		uFnOnFlushOnlineStatsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete");
	}

	UOnlineSubsystemSteamworks_execOnFlushOnlineStatsComplete_Params OnFlushOnlineStatsComplete_Params;
	memcpy_s(&OnFlushOnlineStatsComplete_Params.SessionName, 0x8, &SessionName, 0x8);
	OnFlushOnlineStatsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnFlushOnlineStatsComplete, &OnFlushOnlineStatsComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)

bool UOnlineSubsystemSteamworks::FlushOnlineStats(struct FName SessionName)
{
	static UFunction* uFnFlushOnlineStats = nullptr;

	if (!uFnFlushOnlineStats)
	{
		uFnFlushOnlineStats = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats");
	}

	UOnlineSubsystemSteamworks_execFlushOnlineStats_Params FlushOnlineStats_Params;
	memcpy_s(&FlushOnlineStats_Params.SessionName, 0x8, &SessionName, 0x8);

	uFnFlushOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnFlushOnlineStats, &FlushOnlineStats_Params, nullptr);

	uFnFlushOnlineStats->FunctionFlags |= 0x400;

	return FlushOnlineStats_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   SessionName                    (CPF_Parm)
// struct FUniqueNetId            Player                         (CPF_Parm | CPF_NeedCtorLink)
// class UOnlineStatsWrite*       StatsWrite                     (CPF_Parm)

bool UOnlineSubsystemSteamworks::WriteOnlineStats(struct FName SessionName, struct FUniqueNetId Player, class UOnlineStatsWrite* StatsWrite)
{
	static UFunction* uFnWriteOnlineStats = nullptr;

	if (!uFnWriteOnlineStats)
	{
		uFnWriteOnlineStats = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats");
	}

	UOnlineSubsystemSteamworks_execWriteOnlineStats_Params WriteOnlineStats_Params;
	memcpy_s(&WriteOnlineStats_Params.SessionName, 0x8, &SessionName, 0x8);
	memcpy_s(&WriteOnlineStats_Params.Player, 0x48, &Player, 0x48);
	memcpy_s(&WriteOnlineStats_Params.StatsWrite, 0x8, &StatsWrite, 0x8);

	uFnWriteOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnWriteOnlineStats, &WriteOnlineStats_Params, nullptr);

	uFnWriteOnlineStats->FunctionFlags |= 0x400;

	return WriteOnlineStats_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)

void UOnlineSubsystemSteamworks::FreeStats(class UOnlineStatsRead* StatsRead)
{
	static UFunction* uFnFreeStats = nullptr;

	if (!uFnFreeStats)
	{
		uFnFreeStats = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats");
	}

	UOnlineSubsystemSteamworks_execFreeStats_Params FreeStats_Params;
	memcpy_s(&FreeStats_Params.StatsRead, 0x8, &StatsRead, 0x8);

	uFnFreeStats->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnFreeStats, &FreeStats_Params, nullptr);

	uFnFreeStats->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate)
{
	static UFunction* uFnClearReadOnlineStatsCompleteDelegate = nullptr;

	if (!uFnClearReadOnlineStatsCompleteDelegate)
	{
		uFnClearReadOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadOnlineStatsCompleteDelegate_Params ClearReadOnlineStatsCompleteDelegate_Params;
	memcpy_s(&ClearReadOnlineStatsCompleteDelegate_Params.ReadOnlineStatsCompleteDelegate, 0x18, &ReadOnlineStatsCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearReadOnlineStatsCompleteDelegate, &ClearReadOnlineStatsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate)
{
	static UFunction* uFnAddReadOnlineStatsCompleteDelegate = nullptr;

	if (!uFnAddReadOnlineStatsCompleteDelegate)
	{
		uFnAddReadOnlineStatsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadOnlineStatsCompleteDelegate_Params AddReadOnlineStatsCompleteDelegate_Params;
	memcpy_s(&AddReadOnlineStatsCompleteDelegate_Params.ReadOnlineStatsCompleteDelegate, 0x18, &ReadOnlineStatsCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddReadOnlineStatsCompleteDelegate, &AddReadOnlineStatsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadOnlineStatsComplete(unsigned long bWasSuccessful)
{
	static UFunction* uFnOnReadOnlineStatsComplete = nullptr;

	if (!uFnOnReadOnlineStatsComplete)
	{
		uFnOnReadOnlineStatsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadOnlineStatsComplete_Params OnReadOnlineStatsComplete_Params;
	OnReadOnlineStatsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadOnlineStatsComplete, &OnReadOnlineStatsComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// int32_t                        NumRows                        (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadOnlineStatsByRankAroundPlayer(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead, int32_t NumRows)
{
	static UFunction* uFnReadOnlineStatsByRankAroundPlayer = nullptr;

	if (!uFnReadOnlineStatsByRankAroundPlayer)
	{
		uFnReadOnlineStatsByRankAroundPlayer = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer");
	}

	UOnlineSubsystemSteamworks_execReadOnlineStatsByRankAroundPlayer_Params ReadOnlineStatsByRankAroundPlayer_Params;
	memcpy_s(&ReadOnlineStatsByRankAroundPlayer_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ReadOnlineStatsByRankAroundPlayer_Params.StatsRead, 0x8, &StatsRead, 0x8);
	memcpy_s(&ReadOnlineStatsByRankAroundPlayer_Params.NumRows, 0x4, &NumRows, 0x4);

	uFnReadOnlineStatsByRankAroundPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReadOnlineStatsByRankAroundPlayer, &ReadOnlineStatsByRankAroundPlayer_Params, nullptr);

	uFnReadOnlineStatsByRankAroundPlayer->FunctionFlags |= 0x400;

	return ReadOnlineStatsByRankAroundPlayer_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// int32_t                        StartIndex                     (CPF_OptionalParm | CPF_Parm)
// int32_t                        NumToRead                      (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadOnlineStatsByRank(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead, int32_t StartIndex, int32_t NumToRead)
{
	static UFunction* uFnReadOnlineStatsByRank = nullptr;

	if (!uFnReadOnlineStatsByRank)
	{
		uFnReadOnlineStatsByRank = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank");
	}

	UOnlineSubsystemSteamworks_execReadOnlineStatsByRank_Params ReadOnlineStatsByRank_Params;
	memcpy_s(&ReadOnlineStatsByRank_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ReadOnlineStatsByRank_Params.StatsRead, 0x8, &StatsRead, 0x8);
	memcpy_s(&ReadOnlineStatsByRank_Params.StartIndex, 0x4, &StartIndex, 0x4);
	memcpy_s(&ReadOnlineStatsByRank_Params.NumToRead, 0x4, &NumToRead, 0x4);

	uFnReadOnlineStatsByRank->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReadOnlineStatsByRank, &ReadOnlineStatsByRank_Params, nullptr);

	uFnReadOnlineStatsByRank->FunctionFlags |= 0x400;

	return ReadOnlineStatsByRank_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadOnlineStatsForFriends(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead)
{
	static UFunction* uFnReadOnlineStatsForFriends = nullptr;

	if (!uFnReadOnlineStatsForFriends)
	{
		uFnReadOnlineStatsForFriends = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends");
	}

	UOnlineSubsystemSteamworks_execReadOnlineStatsForFriends_Params ReadOnlineStatsForFriends_Params;
	memcpy_s(&ReadOnlineStatsForFriends_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ReadOnlineStatsForFriends_Params.StatsRead, 0x8, &StatsRead, 0x8);

	uFnReadOnlineStatsForFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReadOnlineStatsForFriends, &ReadOnlineStatsForFriends_Params, nullptr);

	uFnReadOnlineStatsForFriends->FunctionFlags |= 0x400;

	return ReadOnlineStatsForFriends_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineStatsRead*        StatsRead                      (CPF_Parm)
// TArray<struct FUniqueNetId>    Players                        (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::ReadOnlineStats(uint8_t LocalUserNum, class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>& Players)
{
	static UFunction* uFnReadOnlineStats = nullptr;

	if (!uFnReadOnlineStats)
	{
		uFnReadOnlineStats = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats");
	}

	UOnlineSubsystemSteamworks_execReadOnlineStats_Params ReadOnlineStats_Params;
	memcpy_s(&ReadOnlineStats_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ReadOnlineStats_Params.StatsRead, 0x8, &StatsRead, 0x8);
	memcpy_s(&ReadOnlineStats_Params.Players, 0x10, &Players, 0x10);

	uFnReadOnlineStats->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReadOnlineStats, &ReadOnlineStats_Params, nullptr);

	uFnReadOnlineStats->FunctionFlags |= 0x400;

	memcpy_s(&Players, 0x10, &ReadOnlineStats_Params.Players, 0x10);

	return ReadOnlineStats_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class USpeechRecognition*      SpeechRecogObj                 (CPF_Parm)

bool UOnlineSubsystemSteamworks::SetSpeechRecognitionObject(uint8_t LocalUserNum, class USpeechRecognition* SpeechRecogObj)
{
	static UFunction* uFnSetSpeechRecognitionObject = nullptr;

	if (!uFnSetSpeechRecognitionObject)
	{
		uFnSetSpeechRecognitionObject = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject");
	}

	UOnlineSubsystemSteamworks_execSetSpeechRecognitionObject_Params SetSpeechRecognitionObject_Params;
	memcpy_s(&SetSpeechRecognitionObject_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&SetSpeechRecognitionObject_Params.SpeechRecogObj, 0x8, &SpeechRecogObj, 0x8);

	uFnSetSpeechRecognitionObject->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetSpeechRecognitionObject, &SetSpeechRecognitionObject_Params, nullptr);

	uFnSetSpeechRecognitionObject->FunctionFlags |= 0x400;

	return SetSpeechRecognitionObject_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        VocabularyId                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::SelectVocabulary(uint8_t LocalUserNum, int32_t VocabularyId)
{
	static UFunction* uFnSelectVocabulary = nullptr;

	if (!uFnSelectVocabulary)
	{
		uFnSelectVocabulary = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary");
	}

	UOnlineSubsystemSteamworks_execSelectVocabulary_Params SelectVocabulary_Params;
	memcpy_s(&SelectVocabulary_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&SelectVocabulary_Params.VocabularyId, 0x4, &VocabularyId, 0x4);

	uFnSelectVocabulary->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSelectVocabulary, &SelectVocabulary_Params, nullptr);

	uFnSelectVocabulary->FunctionFlags |= 0x400;

	return SelectVocabulary_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RecognitionDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearRecognitionCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RecognitionDelegate)
{
	static UFunction* uFnClearRecognitionCompleteDelegate = nullptr;

	if (!uFnClearRecognitionCompleteDelegate)
	{
		uFnClearRecognitionCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearRecognitionCompleteDelegate_Params ClearRecognitionCompleteDelegate_Params;
	memcpy_s(&ClearRecognitionCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearRecognitionCompleteDelegate_Params.RecognitionDelegate, 0x18, &RecognitionDelegate, 0x18);

	this->ProcessEvent(uFnClearRecognitionCompleteDelegate, &ClearRecognitionCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         RecognitionDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddRecognitionCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate RecognitionDelegate)
{
	static UFunction* uFnAddRecognitionCompleteDelegate = nullptr;

	if (!uFnAddRecognitionCompleteDelegate)
	{
		uFnAddRecognitionCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddRecognitionCompleteDelegate_Params AddRecognitionCompleteDelegate_Params;
	memcpy_s(&AddRecognitionCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddRecognitionCompleteDelegate_Params.RecognitionDelegate, 0x18, &RecognitionDelegate, 0x18);

	this->ProcessEvent(uFnAddRecognitionCompleteDelegate, &AddRecognitionCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::OnRecognitionComplete()
{
	static UFunction* uFnOnRecognitionComplete = nullptr;

	if (!uFnOnRecognitionComplete)
	{
		uFnOnRecognitionComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete");
	}

	UOnlineSubsystemSteamworks_execOnRecognitionComplete_Params OnRecognitionComplete_Params;

	this->ProcessEvent(uFnOnRecognitionComplete, &OnRecognitionComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FSpeechRecognizedWord> Words                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetRecognitionResults(uint8_t LocalUserNum, TArray<struct FSpeechRecognizedWord>& Words)
{
	static UFunction* uFnGetRecognitionResults = nullptr;

	if (!uFnGetRecognitionResults)
	{
		uFnGetRecognitionResults = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults");
	}

	UOnlineSubsystemSteamworks_execGetRecognitionResults_Params GetRecognitionResults_Params;
	memcpy_s(&GetRecognitionResults_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&GetRecognitionResults_Params.Words, 0x10, &Words, 0x10);

	uFnGetRecognitionResults->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetRecognitionResults, &GetRecognitionResults_Params, nullptr);

	uFnGetRecognitionResults->FunctionFlags |= 0x400;

	memcpy_s(&Words, 0x10, &GetRecognitionResults_Params.Words, 0x10);

	return GetRecognitionResults_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::StopSpeechRecognition(uint8_t LocalUserNum)
{
	static UFunction* uFnStopSpeechRecognition = nullptr;

	if (!uFnStopSpeechRecognition)
	{
		uFnStopSpeechRecognition = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition");
	}

	UOnlineSubsystemSteamworks_execStopSpeechRecognition_Params StopSpeechRecognition_Params;
	memcpy_s(&StopSpeechRecognition_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	uFnStopSpeechRecognition->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnStopSpeechRecognition, &StopSpeechRecognition_Params, nullptr);

	uFnStopSpeechRecognition->FunctionFlags |= 0x400;

	return StopSpeechRecognition_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::StartSpeechRecognition(uint8_t LocalUserNum)
{
	static UFunction* uFnStartSpeechRecognition = nullptr;

	if (!uFnStartSpeechRecognition)
	{
		uFnStartSpeechRecognition = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition");
	}

	UOnlineSubsystemSteamworks_execStartSpeechRecognition_Params StartSpeechRecognition_Params;
	memcpy_s(&StartSpeechRecognition_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	uFnStartSpeechRecognition->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnStartSpeechRecognition, &StartSpeechRecognition_Params, nullptr);

	uFnStartSpeechRecognition->FunctionFlags |= 0x400;

	return StartSpeechRecognition_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::StopNetworkedVoice(uint8_t LocalUserNum)
{
	static UFunction* uFnStopNetworkedVoice = nullptr;

	if (!uFnStopNetworkedVoice)
	{
		uFnStopNetworkedVoice = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice");
	}

	UOnlineSubsystemSteamworks_execStopNetworkedVoice_Params StopNetworkedVoice_Params;
	memcpy_s(&StopNetworkedVoice_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	uFnStopNetworkedVoice->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnStopNetworkedVoice, &StopNetworkedVoice_Params, nullptr);

	uFnStopNetworkedVoice->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::StartNetworkedVoice(uint8_t LocalUserNum)
{
	static UFunction* uFnStartNetworkedVoice = nullptr;

	if (!uFnStartNetworkedVoice)
	{
		uFnStartNetworkedVoice = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice");
	}

	UOnlineSubsystemSteamworks_execStartNetworkedVoice_Params StartNetworkedVoice_Params;
	memcpy_s(&StartNetworkedVoice_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	uFnStartNetworkedVoice->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnStartNetworkedVoice, &StartNetworkedVoice_Params, nullptr);

	uFnStartNetworkedVoice->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         TalkerDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate)
{
	static UFunction* uFnClearPlayerTalkingDelegate = nullptr;

	if (!uFnClearPlayerTalkingDelegate)
	{
		uFnClearPlayerTalkingDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegate");
	}

	UOnlineSubsystemSteamworks_execClearPlayerTalkingDelegate_Params ClearPlayerTalkingDelegate_Params;
	memcpy_s(&ClearPlayerTalkingDelegate_Params.TalkerDelegate, 0x18, &TalkerDelegate, 0x18);

	this->ProcessEvent(uFnClearPlayerTalkingDelegate, &ClearPlayerTalkingDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerTalkingDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         TalkerDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate)
{
	static UFunction* uFnAddPlayerTalkingDelegate = nullptr;

	if (!uFnAddPlayerTalkingDelegate)
	{
		uFnAddPlayerTalkingDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerTalkingDelegate");
	}

	UOnlineSubsystemSteamworks_execAddPlayerTalkingDelegate_Params AddPlayerTalkingDelegate_Params;
	memcpy_s(&AddPlayerTalkingDelegate_Params.TalkerDelegate, 0x18, &TalkerDelegate, 0x18);

	this->ProcessEvent(uFnAddPlayerTalkingDelegate, &AddPlayerTalkingDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            Player                         (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bIsTalking                     (CPF_Parm)

void UOnlineSubsystemSteamworks::OnPlayerTalkingStateChange(struct FUniqueNetId Player, unsigned long bIsTalking)
{
	static UFunction* uFnOnPlayerTalkingStateChange = nullptr;

	if (!uFnOnPlayerTalkingStateChange)
	{
		uFnOnPlayerTalkingStateChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange");
	}

	UOnlineSubsystemSteamworks_execOnPlayerTalkingStateChange_Params OnPlayerTalkingStateChange_Params;
	memcpy_s(&OnPlayerTalkingStateChange_Params.Player, 0x48, &Player, 0x48);
	OnPlayerTalkingStateChange_Params.bIsTalking = bIsTalking;

	this->ProcessEvent(uFnOnPlayerTalkingStateChange, &OnPlayerTalkingStateChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bIsSystemWide                  (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::UnmuteRemoteTalker(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide)
{
	static UFunction* uFnUnmuteRemoteTalker = nullptr;

	if (!uFnUnmuteRemoteTalker)
	{
		uFnUnmuteRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker");
	}

	UOnlineSubsystemSteamworks_execUnmuteRemoteTalker_Params UnmuteRemoteTalker_Params;
	memcpy_s(&UnmuteRemoteTalker_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&UnmuteRemoteTalker_Params.PlayerID, 0x48, &PlayerID, 0x48);
	UnmuteRemoteTalker_Params.bIsSystemWide = bIsSystemWide;

	uFnUnmuteRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUnmuteRemoteTalker, &UnmuteRemoteTalker_Params, nullptr);

	uFnUnmuteRemoteTalker->FunctionFlags |= 0x400;

	return UnmuteRemoteTalker_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bIsSystemWide                  (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::MuteRemoteTalker(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide)
{
	static UFunction* uFnMuteRemoteTalker = nullptr;

	if (!uFnMuteRemoteTalker)
	{
		uFnMuteRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker");
	}

	UOnlineSubsystemSteamworks_execMuteRemoteTalker_Params MuteRemoteTalker_Params;
	memcpy_s(&MuteRemoteTalker_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&MuteRemoteTalker_Params.PlayerID, 0x48, &PlayerID, 0x48);
	MuteRemoteTalker_Params.bIsSystemWide = bIsSystemWide;

	uFnMuteRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnMuteRemoteTalker, &MuteRemoteTalker_Params, nullptr);

	uFnMuteRemoteTalker->FunctionFlags |= 0x400;

	return MuteRemoteTalker_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Priority                       (CPF_Parm)

bool UOnlineSubsystemSteamworks::SetRemoteTalkerPriority(uint8_t LocalUserNum, struct FUniqueNetId PlayerID, int32_t Priority)
{
	static UFunction* uFnSetRemoteTalkerPriority = nullptr;

	if (!uFnSetRemoteTalkerPriority)
	{
		uFnSetRemoteTalkerPriority = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority");
	}

	UOnlineSubsystemSteamworks_execSetRemoteTalkerPriority_Params SetRemoteTalkerPriority_Params;
	memcpy_s(&SetRemoteTalkerPriority_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&SetRemoteTalkerPriority_Params.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&SetRemoteTalkerPriority_Params.Priority, 0x4, &Priority, 0x4);

	uFnSetRemoteTalkerPriority->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnSetRemoteTalkerPriority, &SetRemoteTalkerPriority_Params, nullptr);

	uFnSetRemoteTalkerPriority->FunctionFlags |= 0x400;

	return SetRemoteTalkerPriority_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsHeadsetPresent(uint8_t LocalUserNum)
{
	static UFunction* uFnIsHeadsetPresent = nullptr;

	if (!uFnIsHeadsetPresent)
	{
		uFnIsHeadsetPresent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent");
	}

	UOnlineSubsystemSteamworks_execIsHeadsetPresent_Params IsHeadsetPresent_Params;
	memcpy_s(&IsHeadsetPresent_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	uFnIsHeadsetPresent->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsHeadsetPresent, &IsHeadsetPresent_Params, nullptr);

	uFnIsHeadsetPresent->FunctionFlags |= 0x400;

	return IsHeadsetPresent_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::IsRemotePlayerTalking(struct FUniqueNetId PlayerID)
{
	static UFunction* uFnIsRemotePlayerTalking = nullptr;

	if (!uFnIsRemotePlayerTalking)
	{
		uFnIsRemotePlayerTalking = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking");
	}

	UOnlineSubsystemSteamworks_execIsRemotePlayerTalking_Params IsRemotePlayerTalking_Params;
	memcpy_s(&IsRemotePlayerTalking_Params.PlayerID, 0x48, &PlayerID, 0x48);

	uFnIsRemotePlayerTalking->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsRemotePlayerTalking, &IsRemotePlayerTalking_Params, nullptr);

	uFnIsRemotePlayerTalking->FunctionFlags |= 0x400;

	return IsRemotePlayerTalking_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsLocalPlayerTalking(uint8_t LocalUserNum)
{
	static UFunction* uFnIsLocalPlayerTalking = nullptr;

	if (!uFnIsLocalPlayerTalking)
	{
		uFnIsLocalPlayerTalking = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking");
	}

	UOnlineSubsystemSteamworks_execIsLocalPlayerTalking_Params IsLocalPlayerTalking_Params;
	memcpy_s(&IsLocalPlayerTalking_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	uFnIsLocalPlayerTalking->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsLocalPlayerTalking, &IsLocalPlayerTalking_Params, nullptr);

	uFnIsLocalPlayerTalking->FunctionFlags |= 0x400;

	return IsLocalPlayerTalking_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::UnregisterRemoteTalker(struct FUniqueNetId PlayerID)
{
	static UFunction* uFnUnregisterRemoteTalker = nullptr;

	if (!uFnUnregisterRemoteTalker)
	{
		uFnUnregisterRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker");
	}

	UOnlineSubsystemSteamworks_execUnregisterRemoteTalker_Params UnregisterRemoteTalker_Params;
	memcpy_s(&UnregisterRemoteTalker_Params.PlayerID, 0x48, &PlayerID, 0x48);

	uFnUnregisterRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUnregisterRemoteTalker, &UnregisterRemoteTalker_Params, nullptr);

	uFnUnregisterRemoteTalker->FunctionFlags |= 0x400;

	return UnregisterRemoteTalker_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::RegisterRemoteTalker(struct FUniqueNetId PlayerID)
{
	static UFunction* uFnRegisterRemoteTalker = nullptr;

	if (!uFnRegisterRemoteTalker)
	{
		uFnRegisterRemoteTalker = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker");
	}

	UOnlineSubsystemSteamworks_execRegisterRemoteTalker_Params RegisterRemoteTalker_Params;
	memcpy_s(&RegisterRemoteTalker_Params.PlayerID, 0x48, &PlayerID, 0x48);

	uFnRegisterRemoteTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRegisterRemoteTalker, &RegisterRemoteTalker_Params, nullptr);

	uFnRegisterRemoteTalker->FunctionFlags |= 0x400;

	return RegisterRemoteTalker_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::UnregisterLocalTalker(uint8_t LocalUserNum)
{
	static UFunction* uFnUnregisterLocalTalker = nullptr;

	if (!uFnUnregisterLocalTalker)
	{
		uFnUnregisterLocalTalker = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker");
	}

	UOnlineSubsystemSteamworks_execUnregisterLocalTalker_Params UnregisterLocalTalker_Params;
	memcpy_s(&UnregisterLocalTalker_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	uFnUnregisterLocalTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnUnregisterLocalTalker, &UnregisterLocalTalker_Params, nullptr);

	uFnUnregisterLocalTalker->FunctionFlags |= 0x400;

	return UnregisterLocalTalker_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::RegisterLocalTalker(uint8_t LocalUserNum)
{
	static UFunction* uFnRegisterLocalTalker = nullptr;

	if (!uFnRegisterLocalTalker)
	{
		uFnRegisterLocalTalker = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker");
	}

	UOnlineSubsystemSteamworks_execRegisterLocalTalker_Params RegisterLocalTalker_Params;
	memcpy_s(&RegisterLocalTalker_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	uFnRegisterLocalTalker->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnRegisterLocalTalker, &RegisterLocalTalker_Params, nullptr);

	uFnRegisterLocalTalker->FunctionFlags |= 0x400;

	return RegisterLocalTalker_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        Count                          (CPF_OptionalParm | CPF_Parm)
// int32_t                        StartingAt                     (CPF_OptionalParm | CPF_Parm)
// TArray<struct FOnlineFriend>   Friends                        (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

uint8_t UOnlineSubsystemSteamworks::GetFriendsList(uint8_t LocalUserNum, int32_t Count, int32_t StartingAt, TArray<struct FOnlineFriend>& Friends)
{
	static UFunction* uFnGetFriendsList = nullptr;

	if (!uFnGetFriendsList)
	{
		uFnGetFriendsList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList");
	}

	UOnlineSubsystemSteamworks_execGetFriendsList_Params GetFriendsList_Params;
	memcpy_s(&GetFriendsList_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&GetFriendsList_Params.Count, 0x4, &Count, 0x4);
	memcpy_s(&GetFriendsList_Params.StartingAt, 0x4, &StartingAt, 0x4);
	memcpy_s(&GetFriendsList_Params.Friends, 0x10, &Friends, 0x10);

	uFnGetFriendsList->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetFriendsList, &GetFriendsList_Params, nullptr);

	uFnGetFriendsList->FunctionFlags |= 0x400;

	memcpy_s(&Friends, 0x10, &GetFriendsList_Params.Friends, 0x10);

	return GetFriendsList_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadFriendsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate)
{
	static UFunction* uFnClearReadFriendsCompleteDelegate = nullptr;

	if (!uFnClearReadFriendsCompleteDelegate)
	{
		uFnClearReadFriendsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadFriendsCompleteDelegate_Params ClearReadFriendsCompleteDelegate_Params;
	memcpy_s(&ClearReadFriendsCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearReadFriendsCompleteDelegate_Params.ReadFriendsCompleteDelegate, 0x18, &ReadFriendsCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearReadFriendsCompleteDelegate, &ClearReadFriendsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadFriendsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate)
{
	static UFunction* uFnAddReadFriendsCompleteDelegate = nullptr;

	if (!uFnAddReadFriendsCompleteDelegate)
	{
		uFnAddReadFriendsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadFriendsCompleteDelegate_Params AddReadFriendsCompleteDelegate_Params;
	memcpy_s(&AddReadFriendsCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddReadFriendsCompleteDelegate_Params.ReadFriendsCompleteDelegate, 0x18, &ReadFriendsCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddReadFriendsCompleteDelegate, &AddReadFriendsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadFriendsComplete(unsigned long bWasSuccessful)
{
	static UFunction* uFnOnReadFriendsComplete = nullptr;

	if (!uFnOnReadFriendsComplete)
	{
		uFnOnReadFriendsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadFriendsComplete_Params OnReadFriendsComplete_Params;
	OnReadFriendsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadFriendsComplete, &OnReadFriendsComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// int32_t                        Count                          (CPF_OptionalParm | CPF_Parm)
// int32_t                        StartingAt                     (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadFriendsList(uint8_t LocalUserNum, int32_t Count, int32_t StartingAt)
{
	static UFunction* uFnReadFriendsList = nullptr;

	if (!uFnReadFriendsList)
	{
		uFnReadFriendsList = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList");
	}

	UOnlineSubsystemSteamworks_execReadFriendsList_Params ReadFriendsList_Params;
	memcpy_s(&ReadFriendsList_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ReadFriendsList_Params.Count, 0x4, &Count, 0x4);
	memcpy_s(&ReadFriendsList_Params.StartingAt, 0x4, &StartingAt, 0x4);

	uFnReadFriendsList->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReadFriendsList, &ReadFriendsList_Params, nullptr);

	uFnReadFriendsList->FunctionFlags |= 0x400;

	return ReadFriendsList_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWritePlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate)
{
	static UFunction* uFnClearWritePlayerStorageCompleteDelegate = nullptr;

	if (!uFnClearWritePlayerStorageCompleteDelegate)
	{
		uFnClearWritePlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearWritePlayerStorageCompleteDelegate_Params ClearWritePlayerStorageCompleteDelegate_Params;
	memcpy_s(&ClearWritePlayerStorageCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearWritePlayerStorageCompleteDelegate_Params.WritePlayerStorageCompleteDelegate, 0x18, &WritePlayerStorageCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearWritePlayerStorageCompleteDelegate, &ClearWritePlayerStorageCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWritePlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate)
{
	static UFunction* uFnAddWritePlayerStorageCompleteDelegate = nullptr;

	if (!uFnAddWritePlayerStorageCompleteDelegate)
	{
		uFnAddWritePlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddWritePlayerStorageCompleteDelegate_Params AddWritePlayerStorageCompleteDelegate_Params;
	memcpy_s(&AddWritePlayerStorageCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddWritePlayerStorageCompleteDelegate_Params.WritePlayerStorageCompleteDelegate, 0x18, &WritePlayerStorageCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddWritePlayerStorageCompleteDelegate, &AddWritePlayerStorageCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnWritePlayerStorageComplete(uint8_t LocalUserNum, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnWritePlayerStorageComplete = nullptr;

	if (!uFnOnWritePlayerStorageComplete)
	{
		uFnOnWritePlayerStorageComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete");
	}

	UOnlineSubsystemSteamworks_execOnWritePlayerStorageComplete_Params OnWritePlayerStorageComplete_Params;
	memcpy_s(&OnWritePlayerStorageComplete_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	OnWritePlayerStorageComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnWritePlayerStorageComplete, &OnWritePlayerStorageComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)
// int32_t                        DeviceID                       (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::WritePlayerStorage(uint8_t LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int32_t DeviceID)
{
	static UFunction* uFnWritePlayerStorage = nullptr;

	if (!uFnWritePlayerStorage)
	{
		uFnWritePlayerStorage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage");
	}

	UOnlineSubsystemSteamworks_execWritePlayerStorage_Params WritePlayerStorage_Params;
	memcpy_s(&WritePlayerStorage_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&WritePlayerStorage_Params.PlayerStorage, 0x8, &PlayerStorage, 0x8);
	memcpy_s(&WritePlayerStorage_Params.DeviceID, 0x4, &DeviceID, 0x4);

	this->ProcessEvent(uFnWritePlayerStorage, &WritePlayerStorage_Params, nullptr);

	return WritePlayerStorage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UOnlinePlayerStorage*    ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class UOnlinePlayerStorage* UOnlineSubsystemSteamworks::GetPlayerStorage(uint8_t LocalUserNum)
{
	static UFunction* uFnGetPlayerStorage = nullptr;

	if (!uFnGetPlayerStorage)
	{
		uFnGetPlayerStorage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage");
	}

	UOnlineSubsystemSteamworks_execGetPlayerStorage_Params GetPlayerStorage_Params;
	memcpy_s(&GetPlayerStorage_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnGetPlayerStorage, &GetPlayerStorage_Params, nullptr);

	return GetPlayerStorage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            NetId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageForNetIdCompleteDelegate(struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate)
{
	static UFunction* uFnClearReadPlayerStorageForNetIdCompleteDelegate = nullptr;

	if (!uFnClearReadPlayerStorageForNetIdCompleteDelegate)
	{
		uFnClearReadPlayerStorageForNetIdCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadPlayerStorageForNetIdCompleteDelegate_Params ClearReadPlayerStorageForNetIdCompleteDelegate_Params;
	memcpy_s(&ClearReadPlayerStorageForNetIdCompleteDelegate_Params.NetId, 0x48, &NetId, 0x48);
	memcpy_s(&ClearReadPlayerStorageForNetIdCompleteDelegate_Params.ReadPlayerStorageForNetIdCompleteDelegate, 0x18, &ReadPlayerStorageForNetIdCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearReadPlayerStorageForNetIdCompleteDelegate, &ClearReadPlayerStorageForNetIdCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            NetId                          (CPF_Parm | CPF_NeedCtorLink)
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadPlayerStorageForNetIdCompleteDelegate(struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate)
{
	static UFunction* uFnAddReadPlayerStorageForNetIdCompleteDelegate = nullptr;

	if (!uFnAddReadPlayerStorageForNetIdCompleteDelegate)
	{
		uFnAddReadPlayerStorageForNetIdCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadPlayerStorageForNetIdCompleteDelegate_Params AddReadPlayerStorageForNetIdCompleteDelegate_Params;
	memcpy_s(&AddReadPlayerStorageForNetIdCompleteDelegate_Params.NetId, 0x48, &NetId, 0x48);
	memcpy_s(&AddReadPlayerStorageForNetIdCompleteDelegate_Params.ReadPlayerStorageForNetIdCompleteDelegate, 0x18, &ReadPlayerStorageForNetIdCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddReadPlayerStorageForNetIdCompleteDelegate, &AddReadPlayerStorageForNetIdCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            NetId                          (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadPlayerStorageForNetIdComplete(struct FUniqueNetId NetId, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnReadPlayerStorageForNetIdComplete = nullptr;

	if (!uFnOnReadPlayerStorageForNetIdComplete)
	{
		uFnOnReadPlayerStorageForNetIdComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadPlayerStorageForNetIdComplete_Params OnReadPlayerStorageForNetIdComplete_Params;
	memcpy_s(&OnReadPlayerStorageForNetIdComplete_Params.NetId, 0x48, &NetId, 0x48);
	OnReadPlayerStorageForNetIdComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadPlayerStorageForNetIdComplete, &OnReadPlayerStorageForNetIdComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            NetId                          (CPF_Parm | CPF_NeedCtorLink)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadPlayerStorageForNetId(uint8_t LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage)
{
	static UFunction* uFnReadPlayerStorageForNetId = nullptr;

	if (!uFnReadPlayerStorageForNetId)
	{
		uFnReadPlayerStorageForNetId = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId");
	}

	UOnlineSubsystemSteamworks_execReadPlayerStorageForNetId_Params ReadPlayerStorageForNetId_Params;
	memcpy_s(&ReadPlayerStorageForNetId_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ReadPlayerStorageForNetId_Params.NetId, 0x48, &NetId, 0x48);
	memcpy_s(&ReadPlayerStorageForNetId_Params.PlayerStorage, 0x8, &PlayerStorage, 0x8);

	this->ProcessEvent(uFnReadPlayerStorageForNetId, &ReadPlayerStorageForNetId_Params, nullptr);

	return ReadPlayerStorageForNetId_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate)
{
	static UFunction* uFnClearReadPlayerStorageCompleteDelegate = nullptr;

	if (!uFnClearReadPlayerStorageCompleteDelegate)
	{
		uFnClearReadPlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadPlayerStorageCompleteDelegate_Params ClearReadPlayerStorageCompleteDelegate_Params;
	memcpy_s(&ClearReadPlayerStorageCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearReadPlayerStorageCompleteDelegate_Params.ReadPlayerStorageCompleteDelegate, 0x18, &ReadPlayerStorageCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearReadPlayerStorageCompleteDelegate, &ClearReadPlayerStorageCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadPlayerStorageCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate)
{
	static UFunction* uFnAddReadPlayerStorageCompleteDelegate = nullptr;

	if (!uFnAddReadPlayerStorageCompleteDelegate)
	{
		uFnAddReadPlayerStorageCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadPlayerStorageCompleteDelegate_Params AddReadPlayerStorageCompleteDelegate_Params;
	memcpy_s(&AddReadPlayerStorageCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddReadPlayerStorageCompleteDelegate_Params.ReadPlayerStorageCompleteDelegate, 0x18, &ReadPlayerStorageCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddReadPlayerStorageCompleteDelegate, &AddReadPlayerStorageCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadPlayerStorageComplete(uint8_t LocalUserNum, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnReadPlayerStorageComplete = nullptr;

	if (!uFnOnReadPlayerStorageComplete)
	{
		uFnOnReadPlayerStorageComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadPlayerStorageComplete_Params OnReadPlayerStorageComplete_Params;
	memcpy_s(&OnReadPlayerStorageComplete_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	OnReadPlayerStorageComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadPlayerStorageComplete, &OnReadPlayerStorageComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (CPF_Parm)
// int32_t                        DeviceID                       (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadPlayerStorage(uint8_t LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int32_t DeviceID)
{
	static UFunction* uFnReadPlayerStorage = nullptr;

	if (!uFnReadPlayerStorage)
	{
		uFnReadPlayerStorage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage");
	}

	UOnlineSubsystemSteamworks_execReadPlayerStorage_Params ReadPlayerStorage_Params;
	memcpy_s(&ReadPlayerStorage_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ReadPlayerStorage_Params.PlayerStorage, 0x8, &PlayerStorage, 0x8);
	memcpy_s(&ReadPlayerStorage_Params.DeviceID, 0x4, &DeviceID, 0x4);

	this->ProcessEvent(uFnReadPlayerStorage, &ReadPlayerStorage_Params, nullptr);

	return ReadPlayerStorage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWriteProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate)
{
	static UFunction* uFnClearWriteProfileSettingsCompleteDelegate = nullptr;

	if (!uFnClearWriteProfileSettingsCompleteDelegate)
	{
		uFnClearWriteProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearWriteProfileSettingsCompleteDelegate_Params ClearWriteProfileSettingsCompleteDelegate_Params;
	memcpy_s(&ClearWriteProfileSettingsCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearWriteProfileSettingsCompleteDelegate_Params.WriteProfileSettingsCompleteDelegate, 0x18, &WriteProfileSettingsCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearWriteProfileSettingsCompleteDelegate, &ClearWriteProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWriteProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate)
{
	static UFunction* uFnAddWriteProfileSettingsCompleteDelegate = nullptr;

	if (!uFnAddWriteProfileSettingsCompleteDelegate)
	{
		uFnAddWriteProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddWriteProfileSettingsCompleteDelegate_Params AddWriteProfileSettingsCompleteDelegate_Params;
	memcpy_s(&AddWriteProfileSettingsCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddWriteProfileSettingsCompleteDelegate_Params.WriteProfileSettingsCompleteDelegate, 0x18, &WriteProfileSettingsCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddWriteProfileSettingsCompleteDelegate, &AddWriteProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnWriteProfileSettingsComplete(uint8_t LocalUserNum, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnWriteProfileSettingsComplete = nullptr;

	if (!uFnOnWriteProfileSettingsComplete)
	{
		uFnOnWriteProfileSettingsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete");
	}

	UOnlineSubsystemSteamworks_execOnWriteProfileSettingsComplete_Params OnWriteProfileSettingsComplete_Params;
	memcpy_s(&OnWriteProfileSettingsComplete_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	OnWriteProfileSettingsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnWriteProfileSettingsComplete, &OnWriteProfileSettingsComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)

bool UOnlineSubsystemSteamworks::WriteProfileSettings(uint8_t LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static UFunction* uFnWriteProfileSettings = nullptr;

	if (!uFnWriteProfileSettings)
	{
		uFnWriteProfileSettings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings");
	}

	UOnlineSubsystemSteamworks_execWriteProfileSettings_Params WriteProfileSettings_Params;
	memcpy_s(&WriteProfileSettings_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&WriteProfileSettings_Params.ProfileSettings, 0x8, &ProfileSettings, 0x8);

	uFnWriteProfileSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnWriteProfileSettings, &WriteProfileSettings_Params, nullptr);

	uFnWriteProfileSettings->FunctionFlags |= 0x400;

	return WriteProfileSettings_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// class UOnlineProfileSettings*  ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

class UOnlineProfileSettings* UOnlineSubsystemSteamworks::GetProfileSettings(uint8_t LocalUserNum)
{
	static UFunction* uFnGetProfileSettings = nullptr;

	if (!uFnGetProfileSettings)
	{
		uFnGetProfileSettings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings");
	}

	UOnlineSubsystemSteamworks_execGetProfileSettings_Params GetProfileSettings_Params;
	memcpy_s(&GetProfileSettings_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnGetProfileSettings, &GetProfileSettings_Params, nullptr);

	return GetProfileSettings_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate)
{
	static UFunction* uFnClearReadProfileSettingsCompleteDelegate = nullptr;

	if (!uFnClearReadProfileSettingsCompleteDelegate)
	{
		uFnClearReadProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearReadProfileSettingsCompleteDelegate_Params ClearReadProfileSettingsCompleteDelegate_Params;
	memcpy_s(&ClearReadProfileSettingsCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearReadProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate, 0x18, &ReadProfileSettingsCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearReadProfileSettingsCompleteDelegate, &ClearReadProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadProfileSettingsCompleteDelegate(uint8_t LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate)
{
	static UFunction* uFnAddReadProfileSettingsCompleteDelegate = nullptr;

	if (!uFnAddReadProfileSettingsCompleteDelegate)
	{
		uFnAddReadProfileSettingsCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddReadProfileSettingsCompleteDelegate_Params AddReadProfileSettingsCompleteDelegate_Params;
	memcpy_s(&AddReadProfileSettingsCompleteDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddReadProfileSettingsCompleteDelegate_Params.ReadProfileSettingsCompleteDelegate, 0x18, &ReadProfileSettingsCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddReadProfileSettingsCompleteDelegate, &AddReadProfileSettingsCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnReadProfileSettingsComplete(uint8_t LocalUserNum, unsigned long bWasSuccessful)
{
	static UFunction* uFnOnReadProfileSettingsComplete = nullptr;

	if (!uFnOnReadProfileSettingsComplete)
	{
		uFnOnReadProfileSettingsComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete");
	}

	UOnlineSubsystemSteamworks_execOnReadProfileSettingsComplete_Params OnReadProfileSettingsComplete_Params;
	memcpy_s(&OnReadProfileSettingsComplete_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	OnReadProfileSettingsComplete_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnReadProfileSettingsComplete, &OnReadProfileSettingsComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// class UOnlineProfileSettings*  ProfileSettings                (CPF_Parm)

bool UOnlineSubsystemSteamworks::ReadProfileSettings(uint8_t LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static UFunction* uFnReadProfileSettings = nullptr;

	if (!uFnReadProfileSettings)
	{
		uFnReadProfileSettings = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings");
	}

	UOnlineSubsystemSteamworks_execReadProfileSettings_Params ReadProfileSettings_Params;
	memcpy_s(&ReadProfileSettings_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ReadProfileSettings_Params.ProfileSettings, 0x8, &ProfileSettings, 0x8);

	uFnReadProfileSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnReadProfileSettings, &ReadProfileSettings_Params, nullptr);

	uFnReadProfileSettings->FunctionFlags |= 0x400;

	return ReadProfileSettings_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendsDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendsChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendsDelegate)
{
	static UFunction* uFnClearFriendsChangeDelegate = nullptr;

	if (!uFnClearFriendsChangeDelegate)
	{
		uFnClearFriendsChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearFriendsChangeDelegate_Params ClearFriendsChangeDelegate_Params;
	memcpy_s(&ClearFriendsChangeDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearFriendsChangeDelegate_Params.FriendsDelegate, 0x18, &FriendsDelegate, 0x18);

	this->ProcessEvent(uFnClearFriendsChangeDelegate, &ClearFriendsChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAvatarChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         AvatarDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearAvatarChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate AvatarDelegate)
{
	static UFunction* uFnClearAvatarChangeDelegate = nullptr;

	if (!uFnClearAvatarChangeDelegate)
	{
		uFnClearAvatarChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAvatarChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearAvatarChangeDelegate_Params ClearAvatarChangeDelegate_Params;
	memcpy_s(&ClearAvatarChangeDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearAvatarChangeDelegate_Params.AvatarDelegate, 0x18, &AvatarDelegate, 0x18);

	this->ProcessEvent(uFnClearAvatarChangeDelegate, &ClearAvatarChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAvatarChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         AvatarDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddAvatarChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate AvatarDelegate)
{
	static UFunction* uFnAddAvatarChangeDelegate = nullptr;

	if (!uFnAddAvatarChangeDelegate)
	{
		uFnAddAvatarChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAvatarChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddAvatarChangeDelegate_Params AddAvatarChangeDelegate_Params;
	memcpy_s(&AddAvatarChangeDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddAvatarChangeDelegate_Params.AvatarDelegate, 0x18, &AvatarDelegate, 0x18);

	this->ProcessEvent(uFnAddAvatarChangeDelegate, &AddAvatarChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendPresence
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// struct FOnlineFriend           FriendData                     (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::GetFriendPresence(struct FOnlineFriend& FriendData)
{
	static UFunction* uFnGetFriendPresence = nullptr;

	if (!uFnGetFriendPresence)
	{
		uFnGetFriendPresence = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendPresence");
	}

	UOnlineSubsystemSteamworks_execGetFriendPresence_Params GetFriendPresence_Params;
	memcpy_s(&GetFriendPresence_Params.FriendData, 0x130, &FriendData, 0x130);

	uFnGetFriendPresence->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetFriendPresence, &GetFriendPresence_Params, nullptr);

	uFnGetFriendPresence->FunctionFlags |= 0x400;

	memcpy_s(&FriendData, 0x130, &GetFriendPresence_Params.FriendData, 0x130);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendPresenceChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         PresenceDelegate               (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendPresenceChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate PresenceDelegate)
{
	static UFunction* uFnClearFriendPresenceChangeDelegate = nullptr;

	if (!uFnClearFriendPresenceChangeDelegate)
	{
		uFnClearFriendPresenceChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendPresenceChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearFriendPresenceChangeDelegate_Params ClearFriendPresenceChangeDelegate_Params;
	memcpy_s(&ClearFriendPresenceChangeDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearFriendPresenceChangeDelegate_Params.PresenceDelegate, 0x18, &PresenceDelegate, 0x18);

	this->ProcessEvent(uFnClearFriendPresenceChangeDelegate, &ClearFriendPresenceChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendPresenceChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         PresenceDelegate               (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendPresenceChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate PresenceDelegate)
{
	static UFunction* uFnAddFriendPresenceChangeDelegate = nullptr;

	if (!uFnAddFriendPresenceChangeDelegate)
	{
		uFnAddFriendPresenceChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendPresenceChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddFriendPresenceChangeDelegate_Params AddFriendPresenceChangeDelegate_Params;
	memcpy_s(&AddFriendPresenceChangeDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddFriendPresenceChangeDelegate_Params.PresenceDelegate, 0x18, &PresenceDelegate, 0x18);

	this->ProcessEvent(uFnAddFriendPresenceChangeDelegate, &AddFriendPresenceChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         FriendsDelegate                (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendsChangeDelegate(uint8_t LocalUserNum, struct FScriptDelegate FriendsDelegate)
{
	static UFunction* uFnAddFriendsChangeDelegate = nullptr;

	if (!uFnAddFriendsChangeDelegate)
	{
		uFnAddFriendsChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddFriendsChangeDelegate_Params AddFriendsChangeDelegate_Params;
	memcpy_s(&AddFriendsChangeDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddFriendsChangeDelegate_Params.FriendsDelegate, 0x18, &FriendsDelegate, 0x18);

	this->ProcessEvent(uFnAddFriendsChangeDelegate, &AddFriendsChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         MutingDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearMutingChangeDelegate(struct FScriptDelegate MutingDelegate)
{
	static UFunction* uFnClearMutingChangeDelegate = nullptr;

	if (!uFnClearMutingChangeDelegate)
	{
		uFnClearMutingChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearMutingChangeDelegate_Params ClearMutingChangeDelegate_Params;
	memcpy_s(&ClearMutingChangeDelegate_Params.MutingDelegate, 0x18, &MutingDelegate, 0x18);

	this->ProcessEvent(uFnClearMutingChangeDelegate, &ClearMutingChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         MutingDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddMutingChangeDelegate(struct FScriptDelegate MutingDelegate)
{
	static UFunction* uFnAddMutingChangeDelegate = nullptr;

	if (!uFnAddMutingChangeDelegate)
	{
		uFnAddMutingChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddMutingChangeDelegate_Params AddMutingChangeDelegate_Params;
	memcpy_s(&AddMutingChangeDelegate_Params.MutingDelegate, 0x18, &MutingDelegate, 0x18);

	this->ProcessEvent(uFnAddMutingChangeDelegate, &AddMutingChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         CancelledDelegate              (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLoginCancelledDelegate(struct FScriptDelegate CancelledDelegate)
{
	static UFunction* uFnClearLoginCancelledDelegate = nullptr;

	if (!uFnClearLoginCancelledDelegate)
	{
		uFnClearLoginCancelledDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate");
	}

	UOnlineSubsystemSteamworks_execClearLoginCancelledDelegate_Params ClearLoginCancelledDelegate_Params;
	memcpy_s(&ClearLoginCancelledDelegate_Params.CancelledDelegate, 0x18, &CancelledDelegate, 0x18);

	this->ProcessEvent(uFnClearLoginCancelledDelegate, &ClearLoginCancelledDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         CancelledDelegate              (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLoginCancelledDelegate(struct FScriptDelegate CancelledDelegate)
{
	static UFunction* uFnAddLoginCancelledDelegate = nullptr;

	if (!uFnAddLoginCancelledDelegate)
	{
		uFnAddLoginCancelledDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate");
	}

	UOnlineSubsystemSteamworks_execAddLoginCancelledDelegate_Params AddLoginCancelledDelegate_Params;
	memcpy_s(&AddLoginCancelledDelegate_Params.CancelledDelegate, 0x18, &CancelledDelegate, 0x18);

	this->ProcessEvent(uFnAddLoginCancelledDelegate, &AddLoginCancelledDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LoginStatusDelegate            (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::ClearLoginStatusChangeDelegate(struct FScriptDelegate LoginStatusDelegate, uint8_t LocalUserNum)
{
	static UFunction* uFnClearLoginStatusChangeDelegate = nullptr;

	if (!uFnClearLoginStatusChangeDelegate)
	{
		uFnClearLoginStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearLoginStatusChangeDelegate_Params ClearLoginStatusChangeDelegate_Params;
	memcpy_s(&ClearLoginStatusChangeDelegate_Params.LoginStatusDelegate, 0x18, &LoginStatusDelegate, 0x18);
	memcpy_s(&ClearLoginStatusChangeDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnClearLoginStatusChangeDelegate, &ClearLoginStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LoginStatusDelegate            (CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::AddLoginStatusChangeDelegate(struct FScriptDelegate LoginStatusDelegate, uint8_t LocalUserNum)
{
	static UFunction* uFnAddLoginStatusChangeDelegate = nullptr;

	if (!uFnAddLoginStatusChangeDelegate)
	{
		uFnAddLoginStatusChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddLoginStatusChangeDelegate_Params AddLoginStatusChangeDelegate_Params;
	memcpy_s(&AddLoginStatusChangeDelegate_Params.LoginStatusDelegate, 0x18, &LoginStatusDelegate, 0x18);
	memcpy_s(&AddLoginStatusChangeDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnAddLoginStatusChangeDelegate, &AddLoginStatusChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        NewStatus                      (CPF_Parm)
// struct FUniqueNetId            NewId                          (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnLoginStatusChange(uint8_t NewStatus, struct FUniqueNetId NewId)
{
	static UFunction* uFnOnLoginStatusChange = nullptr;

	if (!uFnOnLoginStatusChange)
	{
		uFnOnLoginStatusChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange");
	}

	UOnlineSubsystemSteamworks_execOnLoginStatusChange_Params OnLoginStatusChange_Params;
	memcpy_s(&OnLoginStatusChange_Params.NewStatus, 0x1, &NewStatus, 0x1);
	memcpy_s(&OnLoginStatusChange_Params.NewId, 0x48, &NewId, 0x48);

	this->ProcessEvent(uFnOnLoginStatusChange, &OnLoginStatusChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LoginDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLoginChangeDelegate(struct FScriptDelegate LoginDelegate)
{
	static UFunction* uFnClearLoginChangeDelegate = nullptr;

	if (!uFnClearLoginChangeDelegate)
	{
		uFnClearLoginChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execClearLoginChangeDelegate_Params ClearLoginChangeDelegate_Params;
	memcpy_s(&ClearLoginChangeDelegate_Params.LoginDelegate, 0x18, &LoginDelegate, 0x18);

	this->ProcessEvent(uFnClearLoginChangeDelegate, &ClearLoginChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         LoginDelegate                  (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLoginChangeDelegate(struct FScriptDelegate LoginDelegate)
{
	static UFunction* uFnAddLoginChangeDelegate = nullptr;

	if (!uFnAddLoginChangeDelegate)
	{
		uFnAddLoginChangeDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate");
	}

	UOnlineSubsystemSteamworks_execAddLoginChangeDelegate_Params AddLoginChangeDelegate_Params;
	memcpy_s(&AddLoginChangeDelegate_Params.LoginDelegate, 0x18, &LoginDelegate, 0x18);

	this->ProcessEvent(uFnAddLoginChangeDelegate, &AddLoginChangeDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserSignInCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UserSignInCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUserSignInCompleteDelegate(struct FScriptDelegate UserSignInCompleteDelegate)
{
	static UFunction* uFnClearUserSignInCompleteDelegate = nullptr;

	if (!uFnClearUserSignInCompleteDelegate)
	{
		uFnClearUserSignInCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserSignInCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearUserSignInCompleteDelegate_Params ClearUserSignInCompleteDelegate_Params;
	memcpy_s(&ClearUserSignInCompleteDelegate_Params.UserSignInCompleteDelegate, 0x18, &UserSignInCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearUserSignInCompleteDelegate, &ClearUserSignInCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserSignInCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UserSignInCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUserSignInCompleteDelegate(struct FScriptDelegate UserSignInCompleteDelegate)
{
	static UFunction* uFnAddUserSignInCompleteDelegate = nullptr;

	if (!uFnAddUserSignInCompleteDelegate)
	{
		uFnAddUserSignInCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserSignInCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddUserSignInCompleteDelegate_Params AddUserSignInCompleteDelegate_Params;
	memcpy_s(&AddUserSignInCompleteDelegate_Params.UserSignInCompleteDelegate, 0x18, &UserSignInCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddUserSignInCompleteDelegate, &AddUserSignInCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserSwitchCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UserSwitchCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUserSwitchCompleteDelegate(struct FScriptDelegate UserSwitchCompleteDelegate)
{
	static UFunction* uFnClearUserSwitchCompleteDelegate = nullptr;

	if (!uFnClearUserSwitchCompleteDelegate)
	{
		uFnClearUserSwitchCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUserSwitchCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execClearUserSwitchCompleteDelegate_Params ClearUserSwitchCompleteDelegate_Params;
	memcpy_s(&ClearUserSwitchCompleteDelegate_Params.UserSwitchCompleteDelegate, 0x18, &UserSwitchCompleteDelegate, 0x18);

	this->ProcessEvent(uFnClearUserSwitchCompleteDelegate, &ClearUserSwitchCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserSwitchCompleteDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         UserSwitchCompleteDelegate     (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUserSwitchCompleteDelegate(struct FScriptDelegate UserSwitchCompleteDelegate)
{
	static UFunction* uFnAddUserSwitchCompleteDelegate = nullptr;

	if (!uFnAddUserSwitchCompleteDelegate)
	{
		uFnAddUserSwitchCompleteDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUserSwitchCompleteDelegate");
	}

	UOnlineSubsystemSteamworks_execAddUserSwitchCompleteDelegate_Params AddUserSwitchCompleteDelegate_Params;
	memcpy_s(&AddUserSwitchCompleteDelegate_Params.UserSwitchCompleteDelegate, 0x18, &UserSwitchCompleteDelegate, 0x18);

	this->ProcessEvent(uFnAddUserSwitchCompleteDelegate, &AddUserSwitchCompleteDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetPrimaryPlayerGamepadToLastInput
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::SetPrimaryPlayerGamepadToLastInput()
{
	static UFunction* uFnSetPrimaryPlayerGamepadToLastInput = nullptr;

	if (!uFnSetPrimaryPlayerGamepadToLastInput)
	{
		uFnSetPrimaryPlayerGamepadToLastInput = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetPrimaryPlayerGamepadToLastInput");
	}

	UOnlineSubsystemSteamworks_execSetPrimaryPlayerGamepadToLastInput_Params SetPrimaryPlayerGamepadToLastInput_Params;

	this->ProcessEvent(uFnSetPrimaryPlayerGamepadToLastInput, &SetPrimaryPlayerGamepadToLastInput_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::IsMuted(uint8_t LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnIsMuted = nullptr;

	if (!uFnIsMuted)
	{
		uFnIsMuted = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted");
	}

	UOnlineSubsystemSteamworks_execIsMuted_Params IsMuted_Params;
	memcpy_s(&IsMuted_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&IsMuted_Params.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(uFnIsMuted, &IsMuted_Params, nullptr);

	return IsMuted_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends
// [0x00420401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// TArray<struct FFriendsQuery>   Query                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::AreAnyFriends(uint8_t LocalUserNum, TArray<struct FFriendsQuery>& Query)
{
	static UFunction* uFnAreAnyFriends = nullptr;

	if (!uFnAreAnyFriends)
	{
		uFnAreAnyFriends = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends");
	}

	UOnlineSubsystemSteamworks_execAreAnyFriends_Params AreAnyFriends_Params;
	memcpy_s(&AreAnyFriends_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AreAnyFriends_Params.Query, 0x10, &Query, 0x10);

	uFnAreAnyFriends->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAreAnyFriends, &AreAnyFriends_Params, nullptr);

	uFnAreAnyFriends->FunctionFlags |= 0x400;

	memcpy_s(&Query, 0x10, &AreAnyFriends_Params.Query, 0x10);

	return AreAnyFriends_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::IsFriend(uint8_t LocalUserNum, struct FUniqueNetId PlayerID)
{
	static UFunction* uFnIsFriend = nullptr;

	if (!uFnIsFriend)
	{
		uFnIsFriend = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend");
	}

	UOnlineSubsystemSteamworks_execIsFriend_Params IsFriend_Params;
	memcpy_s(&IsFriend_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&IsFriend_Params.PlayerID, 0x48, &PlayerID, 0x48);

	uFnIsFriend->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnIsFriend, &IsFriend_Params, nullptr);

	uFnIsFriend->FunctionFlags |= 0x400;

	return IsFriend_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RequestRestrictedFeatureMessaging
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint8_t                        RestrictedFeature              (CPF_Parm)

void UOnlineSubsystemSteamworks::RequestRestrictedFeatureMessaging(uint8_t LocalUserNum, uint8_t RestrictedFeature)
{
	static UFunction* uFnRequestRestrictedFeatureMessaging = nullptr;

	if (!uFnRequestRestrictedFeatureMessaging)
	{
		uFnRequestRestrictedFeatureMessaging = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RequestRestrictedFeatureMessaging");
	}

	UOnlineSubsystemSteamworks_execRequestRestrictedFeatureMessaging_Params RequestRestrictedFeatureMessaging_Params;
	memcpy_s(&RequestRestrictedFeatureMessaging_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&RequestRestrictedFeatureMessaging_Params.RestrictedFeature, 0x1, &RestrictedFeature, 0x1);

	this->ProcessEvent(uFnRequestRestrictedFeatureMessaging, &RequestRestrictedFeatureMessaging_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUploadFitnessData
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanUploadFitnessData(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanUploadFitnessData = nullptr;

	if (!uFnCanUploadFitnessData)
	{
		uFnCanUploadFitnessData = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUploadFitnessData");
	}

	UOnlineSubsystemSteamworks_execCanUploadFitnessData_Params CanUploadFitnessData_Params;
	memcpy_s(&CanUploadFitnessData_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanUploadFitnessData_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanUploadFitnessData_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanUploadFitnessData_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanUploadFitnessData, &CanUploadFitnessData_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanUploadFitnessData_Params.PrivilegeLevelHint, 0x1);

	return CanUploadFitnessData_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareKinectContent
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanShareKinectContent(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanShareKinectContent = nullptr;

	if (!uFnCanShareKinectContent)
	{
		uFnCanShareKinectContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareKinectContent");
	}

	UOnlineSubsystemSteamworks_execCanShareKinectContent_Params CanShareKinectContent_Params;
	memcpy_s(&CanShareKinectContent_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanShareKinectContent_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanShareKinectContent_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanShareKinectContent_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanShareKinectContent, &CanShareKinectContent_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanShareKinectContent_Params.PrivilegeLevelHint, 0x1);

	return CanShareKinectContent_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareWithSocialNetwork
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanShareWithSocialNetwork(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanShareWithSocialNetwork = nullptr;

	if (!uFnCanShareWithSocialNetwork)
	{
		uFnCanShareWithSocialNetwork = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareWithSocialNetwork");
	}

	UOnlineSubsystemSteamworks_execCanShareWithSocialNetwork_Params CanShareWithSocialNetwork_Params;
	memcpy_s(&CanShareWithSocialNetwork_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanShareWithSocialNetwork_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanShareWithSocialNetwork_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanShareWithSocialNetwork_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanShareWithSocialNetwork, &CanShareWithSocialNetwork_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanShareWithSocialNetwork_Params.PrivilegeLevelHint, 0x1);

	return CanShareWithSocialNetwork_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanBrowseInternet
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanBrowseInternet(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanBrowseInternet = nullptr;

	if (!uFnCanBrowseInternet)
	{
		uFnCanBrowseInternet = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanBrowseInternet");
	}

	UOnlineSubsystemSteamworks_execCanBrowseInternet_Params CanBrowseInternet_Params;
	memcpy_s(&CanBrowseInternet_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanBrowseInternet_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanBrowseInternet_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanBrowseInternet_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanBrowseInternet, &CanBrowseInternet_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanBrowseInternet_Params.PrivilegeLevelHint, 0x1);

	return CanBrowseInternet_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumVideoContent
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanAccessPremiumVideoContent(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanAccessPremiumVideoContent = nullptr;

	if (!uFnCanAccessPremiumVideoContent)
	{
		uFnCanAccessPremiumVideoContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumVideoContent");
	}

	UOnlineSubsystemSteamworks_execCanAccessPremiumVideoContent_Params CanAccessPremiumVideoContent_Params;
	memcpy_s(&CanAccessPremiumVideoContent_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanAccessPremiumVideoContent_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanAccessPremiumVideoContent_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanAccessPremiumVideoContent_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanAccessPremiumVideoContent, &CanAccessPremiumVideoContent_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanAccessPremiumVideoContent_Params.PrivilegeLevelHint, 0x1);

	return CanAccessPremiumVideoContent_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumContent
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanAccessPremiumContent(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanAccessPremiumContent = nullptr;

	if (!uFnCanAccessPremiumContent)
	{
		uFnCanAccessPremiumContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanAccessPremiumContent");
	}

	UOnlineSubsystemSteamworks_execCanAccessPremiumContent_Params CanAccessPremiumContent_Params;
	memcpy_s(&CanAccessPremiumContent_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanAccessPremiumContent_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanAccessPremiumContent_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanAccessPremiumContent_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanAccessPremiumContent, &CanAccessPremiumContent_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanAccessPremiumContent_Params.PrivilegeLevelHint, 0x1);

	return CanAccessPremiumContent_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUseCloudStorage
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanUseCloudStorage(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanUseCloudStorage = nullptr;

	if (!uFnCanUseCloudStorage)
	{
		uFnCanUseCloudStorage = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanUseCloudStorage");
	}

	UOnlineSubsystemSteamworks_execCanUseCloudStorage_Params CanUseCloudStorage_Params;
	memcpy_s(&CanUseCloudStorage_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanUseCloudStorage_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanUseCloudStorage_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanUseCloudStorage_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanUseCloudStorage, &CanUseCloudStorage_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanUseCloudStorage_Params.PrivilegeLevelHint, 0x1);

	return CanUseCloudStorage_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanRecordDVRClips
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanRecordDVRClips(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanRecordDVRClips = nullptr;

	if (!uFnCanRecordDVRClips)
	{
		uFnCanRecordDVRClips = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanRecordDVRClips");
	}

	UOnlineSubsystemSteamworks_execCanRecordDVRClips_Params CanRecordDVRClips_Params;
	memcpy_s(&CanRecordDVRClips_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanRecordDVRClips_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanRecordDVRClips_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanRecordDVRClips_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanRecordDVRClips, &CanRecordDVRClips_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanRecordDVRClips_Params.PrivilegeLevelHint, 0x1);

	return CanRecordDVRClips_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation
// [0x00424003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanShowPresenceInformation(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanShowPresenceInformation = nullptr;

	if (!uFnCanShowPresenceInformation)
	{
		uFnCanShowPresenceInformation = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation");
	}

	UOnlineSubsystemSteamworks_execCanShowPresenceInformation_Params CanShowPresenceInformation_Params;
	memcpy_s(&CanShowPresenceInformation_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanShowPresenceInformation_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanShowPresenceInformation_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanShowPresenceInformation_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanShowPresenceInformation, &CanShowPresenceInformation_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanShowPresenceInformation_Params.PrivilegeLevelHint, 0x1);

	return CanShowPresenceInformation_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles
// [0x00424003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanViewPlayerProfiles(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanViewPlayerProfiles = nullptr;

	if (!uFnCanViewPlayerProfiles)
	{
		uFnCanViewPlayerProfiles = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles");
	}

	UOnlineSubsystemSteamworks_execCanViewPlayerProfiles_Params CanViewPlayerProfiles_Params;
	memcpy_s(&CanViewPlayerProfiles_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanViewPlayerProfiles_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanViewPlayerProfiles_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanViewPlayerProfiles_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanViewPlayerProfiles, &CanViewPlayerProfiles_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanViewPlayerProfiles_Params.PrivilegeLevelHint, 0x1);

	return CanViewPlayerProfiles_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent
// [0x00424003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanPurchaseContent(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanPurchaseContent = nullptr;

	if (!uFnCanPurchaseContent)
	{
		uFnCanPurchaseContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent");
	}

	UOnlineSubsystemSteamworks_execCanPurchaseContent_Params CanPurchaseContent_Params;
	memcpy_s(&CanPurchaseContent_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanPurchaseContent_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanPurchaseContent_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanPurchaseContent_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanPurchaseContent, &CanPurchaseContent_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanPurchaseContent_Params.PrivilegeLevelHint, 0x1);

	return CanPurchaseContent_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanDownloadUserContent
// [0x00424003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanDownloadUserContent(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanDownloadUserContent = nullptr;

	if (!uFnCanDownloadUserContent)
	{
		uFnCanDownloadUserContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanDownloadUserContent");
	}

	UOnlineSubsystemSteamworks_execCanDownloadUserContent_Params CanDownloadUserContent_Params;
	memcpy_s(&CanDownloadUserContent_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanDownloadUserContent_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanDownloadUserContent_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanDownloadUserContent_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanDownloadUserContent, &CanDownloadUserContent_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanDownloadUserContent_Params.PrivilegeLevelHint, 0x1);

	return CanDownloadUserContent_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareUserCreatedContent
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanShareUserCreatedContent(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanShareUserCreatedContent = nullptr;

	if (!uFnCanShareUserCreatedContent)
	{
		uFnCanShareUserCreatedContent = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShareUserCreatedContent");
	}

	UOnlineSubsystemSteamworks_execCanShareUserCreatedContent_Params CanShareUserCreatedContent_Params;
	memcpy_s(&CanShareUserCreatedContent_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanShareUserCreatedContent_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanShareUserCreatedContent_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanShareUserCreatedContent_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanShareUserCreatedContent, &CanShareUserCreatedContent_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanShareUserCreatedContent_Params.PrivilegeLevelHint, 0x1);

	return CanShareUserCreatedContent_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVoice
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanCommunicateVoice(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanCommunicateVoice = nullptr;

	if (!uFnCanCommunicateVoice)
	{
		uFnCanCommunicateVoice = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVoice");
	}

	UOnlineSubsystemSteamworks_execCanCommunicateVoice_Params CanCommunicateVoice_Params;
	memcpy_s(&CanCommunicateVoice_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanCommunicateVoice_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanCommunicateVoice_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanCommunicateVoice_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanCommunicateVoice, &CanCommunicateVoice_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanCommunicateVoice_Params.PrivilegeLevelHint, 0x1);

	return CanCommunicateVoice_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVideo
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanCommunicateVideo(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanCommunicateVideo = nullptr;

	if (!uFnCanCommunicateVideo)
	{
		uFnCanCommunicateVideo = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateVideo");
	}

	UOnlineSubsystemSteamworks_execCanCommunicateVideo_Params CanCommunicateVideo_Params;
	memcpy_s(&CanCommunicateVideo_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanCommunicateVideo_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanCommunicateVideo_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanCommunicateVideo_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanCommunicateVideo, &CanCommunicateVideo_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanCommunicateVideo_Params.PrivilegeLevelHint, 0x1);

	return CanCommunicateVideo_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateText
// [0x00424001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanCommunicateText(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanCommunicateText = nullptr;

	if (!uFnCanCommunicateText)
	{
		uFnCanCommunicateText = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicateText");
	}

	UOnlineSubsystemSteamworks_execCanCommunicateText_Params CanCommunicateText_Params;
	memcpy_s(&CanCommunicateText_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanCommunicateText_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanCommunicateText_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanCommunicateText_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	this->ProcessEvent(uFnCanCommunicateText, &CanCommunicateText_Params, nullptr);

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanCommunicateText_Params.PrivilegeLevelHint, 0x1);

	return CanCommunicateText_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint8_t                        CommMethod                     (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)

uint8_t UOnlineSubsystemSteamworks::CanCommunicate(uint8_t LocalUserNum, uint8_t CommMethod, unsigned long bAttemptToResolve)
{
	static UFunction* uFnCanCommunicate = nullptr;

	if (!uFnCanCommunicate)
	{
		uFnCanCommunicate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate");
	}

	UOnlineSubsystemSteamworks_execCanCommunicate_Params CanCommunicate_Params;
	memcpy_s(&CanCommunicate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&CanCommunicate_Params.CommMethod, 0x1, &CommMethod, 0x1);
	CanCommunicate_Params.bAttemptToResolve = bAttemptToResolve;

	uFnCanCommunicate->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCanCommunicate, &CanCommunicate_Params, nullptr);

	uFnCanCommunicate->FunctionFlags |= 0x400;

	return CanCommunicate_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline
// [0x00424401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bAttemptToResolve              (CPF_OptionalParm | CPF_Parm)
// struct FString                 Reason                         (CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink)
// uint8_t                        PrivilegeLevelHint             (CPF_Parm | CPF_OutParm)

bool UOnlineSubsystemSteamworks::CanPlayOnline(uint8_t LocalUserNum, unsigned long bAttemptToResolve, struct FString Reason, uint8_t& PrivilegeLevelHint)
{
	static UFunction* uFnCanPlayOnline = nullptr;

	if (!uFnCanPlayOnline)
	{
		uFnCanPlayOnline = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline");
	}

	UOnlineSubsystemSteamworks_execCanPlayOnline_Params CanPlayOnline_Params;
	memcpy_s(&CanPlayOnline_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	CanPlayOnline_Params.bAttemptToResolve = bAttemptToResolve;
	memcpy_s(&CanPlayOnline_Params.Reason, 0x10, &Reason, 0x10);
	memcpy_s(&CanPlayOnline_Params.PrivilegeLevelHint, 0x1, &PrivilegeLevelHint, 0x1);

	uFnCanPlayOnline->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnCanPlayOnline, &CanPlayOnline_Params, nullptr);

	uFnCanPlayOnline->FunctionFlags |= 0x400;

	memcpy_s(&PrivilegeLevelHint, 0x1, &CanPlayOnline_Params.PrivilegeLevelHint, 0x1);

	return CanPlayOnline_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// uint8_t                        LocalUserNum                   (CPF_Parm)

struct FString UOnlineSubsystemSteamworks::GetPlayerNickname(uint8_t LocalUserNum)
{
	static UFunction* uFnGetPlayerNickname = nullptr;

	if (!uFnGetPlayerNickname)
	{
		uFnGetPlayerNickname = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname");
	}

	UOnlineSubsystemSteamworks_execGetPlayerNickname_Params GetPlayerNickname_Params;
	memcpy_s(&GetPlayerNickname_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnGetPlayerNickname, &GetPlayerNickname_Params, nullptr);

	return GetPlayerNickname_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId
// [0x00420003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlineSubsystemSteamworks::GetUniquePlayerId(uint8_t LocalUserNum, struct FUniqueNetId& PlayerID)
{
	static UFunction* uFnGetUniquePlayerId = nullptr;

	if (!uFnGetUniquePlayerId)
	{
		uFnGetUniquePlayerId = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId");
	}

	UOnlineSubsystemSteamworks_execGetUniquePlayerId_Params GetUniquePlayerId_Params;
	memcpy_s(&GetUniquePlayerId_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&GetUniquePlayerId_Params.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(uFnGetUniquePlayerId, &GetUniquePlayerId_Params, nullptr);

	memcpy_s(&PlayerID, 0x48, &GetUniquePlayerId_Params.PlayerID, 0x48);

	return GetUniquePlayerId_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::IsGuestLogin(uint8_t LocalUserNum)
{
	static UFunction* uFnIsGuestLogin = nullptr;

	if (!uFnIsGuestLogin)
	{
		uFnIsGuestLogin = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin");
	}

	UOnlineSubsystemSteamworks_execIsGuestLogin_Params IsGuestLogin_Params;
	memcpy_s(&IsGuestLogin_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnIsGuestLogin, &IsGuestLogin_Params, nullptr);

	return IsGuestLogin_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

uint8_t UOnlineSubsystemSteamworks::GetLoginStatus(uint8_t LocalUserNum)
{
	static UFunction* uFnGetLoginStatus = nullptr;

	if (!uFnGetLoginStatus)
	{
		uFnGetLoginStatus = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus");
	}

	UOnlineSubsystemSteamworks_execGetLoginStatus_Params GetLoginStatus_Params;
	memcpy_s(&GetLoginStatus_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	uFnGetLoginStatus->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnGetLoginStatus, &GetLoginStatus_Params, nullptr);

	uFnGetLoginStatus->FunctionFlags |= 0x400;

	return GetLoginStatus_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LogoutDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLogoutCompletedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LogoutDelegate)
{
	static UFunction* uFnClearLogoutCompletedDelegate = nullptr;

	if (!uFnClearLogoutCompletedDelegate)
	{
		uFnClearLogoutCompletedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate");
	}

	UOnlineSubsystemSteamworks_execClearLogoutCompletedDelegate_Params ClearLogoutCompletedDelegate_Params;
	memcpy_s(&ClearLogoutCompletedDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearLogoutCompletedDelegate_Params.LogoutDelegate, 0x18, &LogoutDelegate, 0x18);

	this->ProcessEvent(uFnClearLogoutCompletedDelegate, &ClearLogoutCompletedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LogoutDelegate                 (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLogoutCompletedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LogoutDelegate)
{
	static UFunction* uFnAddLogoutCompletedDelegate = nullptr;

	if (!uFnAddLogoutCompletedDelegate)
	{
		uFnAddLogoutCompletedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddLogoutCompletedDelegate_Params AddLogoutCompletedDelegate_Params;
	memcpy_s(&AddLogoutCompletedDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddLogoutCompletedDelegate_Params.LogoutDelegate, 0x18, &LogoutDelegate, 0x18);

	this->ProcessEvent(uFnAddLogoutCompletedDelegate, &AddLogoutCompletedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// unsigned long                  bWasSuccessful                 (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLogoutCompleted(unsigned long bWasSuccessful)
{
	static UFunction* uFnOnLogoutCompleted = nullptr;

	if (!uFnOnLogoutCompleted)
	{
		uFnOnLogoutCompleted = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted");
	}

	UOnlineSubsystemSteamworks_execOnLogoutCompleted_Params OnLogoutCompleted_Params;
	OnLogoutCompleted_Params.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(uFnOnLogoutCompleted, &OnLogoutCompleted_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::Logout(uint8_t LocalUserNum)
{
	static UFunction* uFnLogout = nullptr;

	if (!uFnLogout)
	{
		uFnLogout = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout");
	}

	UOnlineSubsystemSteamworks_execLogout_Params Logout_Params;
	memcpy_s(&Logout_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnLogout, &Logout_Params, nullptr);

	return Logout_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LoginFailedDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLoginFailedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LoginFailedDelegate)
{
	static UFunction* uFnClearLoginFailedDelegate = nullptr;

	if (!uFnClearLoginFailedDelegate)
	{
		uFnClearLoginFailedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate");
	}

	UOnlineSubsystemSteamworks_execClearLoginFailedDelegate_Params ClearLoginFailedDelegate_Params;
	memcpy_s(&ClearLoginFailedDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&ClearLoginFailedDelegate_Params.LoginFailedDelegate, 0x18, &LoginFailedDelegate, 0x18);

	this->ProcessEvent(uFnClearLoginFailedDelegate, &ClearLoginFailedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FScriptDelegate         LoginFailedDelegate            (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLoginFailedDelegate(uint8_t LocalUserNum, struct FScriptDelegate LoginFailedDelegate)
{
	static UFunction* uFnAddLoginFailedDelegate = nullptr;

	if (!uFnAddLoginFailedDelegate)
	{
		uFnAddLoginFailedDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate");
	}

	UOnlineSubsystemSteamworks_execAddLoginFailedDelegate_Params AddLoginFailedDelegate_Params;
	memcpy_s(&AddLoginFailedDelegate_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&AddLoginFailedDelegate_Params.LoginFailedDelegate, 0x18, &LoginFailedDelegate, 0x18);

	this->ProcessEvent(uFnAddLoginFailedDelegate, &AddLoginFailedDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)
// uint8_t                        ErrorCode                      (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLoginFailed(uint8_t LocalUserNum, uint8_t ErrorCode)
{
	static UFunction* uFnOnLoginFailed = nullptr;

	if (!uFnOnLoginFailed)
	{
		uFnOnLoginFailed = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed");
	}

	UOnlineSubsystemSteamworks_execOnLoginFailed_Params OnLoginFailed_Params;
	memcpy_s(&OnLoginFailed_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&OnLoginFailed_Params.ErrorCode, 0x1, &ErrorCode, 0x1);

	this->ProcessEvent(uFnOnLoginFailed, &OnLoginFailed_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin
// [0x00020401] (FUNC_Final | FUNC_Native | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::AutoLogin()
{
	static UFunction* uFnAutoLogin = nullptr;

	if (!uFnAutoLogin)
	{
		uFnAutoLogin = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin");
	}

	UOnlineSubsystemSteamworks_execAutoLogin_Params AutoLogin_Params;

	uFnAutoLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnAutoLogin, &AutoLogin_Params, nullptr);

	uFnAutoLogin->FunctionFlags |= 0x400;

	return AutoLogin_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login
// [0x00024401] (FUNC_Final | FUNC_Native | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// struct FString                 LoginName                      (CPF_Parm | CPF_NeedCtorLink)
// struct FString                 Password                       (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bWantsLocalOnly                (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::Login(uint8_t LocalUserNum, struct FString LoginName, struct FString Password, unsigned long bWantsLocalOnly)
{
	static UFunction* uFnLogin = nullptr;

	if (!uFnLogin)
	{
		uFnLogin = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login");
	}

	UOnlineSubsystemSteamworks_execLogin_Params Login_Params;
	memcpy_s(&Login_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	memcpy_s(&Login_Params.LoginName, 0x10, &LoginName, 0x10);
	memcpy_s(&Login_Params.Password, 0x10, &Password, 0x10);
	Login_Params.bWantsLocalOnly = bWantsLocalOnly;

	uFnLogin->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnLogin, &Login_Params, nullptr);

	uFnLogin->FunctionFlags |= 0x400;

	return Login_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetKickPlayerDialogActive
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// unsigned long                  Active                         (CPF_Parm)

void UOnlineSubsystemSteamworks::SetKickPlayerDialogActive(unsigned long Active)
{
	static UFunction* uFnSetKickPlayerDialogActive = nullptr;

	if (!uFnSetKickPlayerDialogActive)
	{
		uFnSetKickPlayerDialogActive = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetKickPlayerDialogActive");
	}

	UOnlineSubsystemSteamworks_execSetKickPlayerDialogActive_Params SetKickPlayerDialogActive_Params;
	SetKickPlayerDialogActive_Params.Active = Active;

	this->ProcessEvent(uFnSetKickPlayerDialogActive, &SetKickPlayerDialogActive_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsUserSwitchActive
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::IsUserSwitchActive()
{
	static UFunction* uFnIsUserSwitchActive = nullptr;

	if (!uFnIsUserSwitchActive)
	{
		uFnIsUserSwitchActive = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsUserSwitchActive");
	}

	UOnlineSubsystemSteamworks_execIsUserSwitchActive_Params IsUserSwitchActive_Params;

	this->ProcessEvent(uFnIsUserSwitchActive, &IsUserSwitchActive_Params, nullptr);

	return IsUserSwitchActive_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetKickPreviousUser
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::SetKickPreviousUser(uint8_t LocalUserNum)
{
	static UFunction* uFnSetKickPreviousUser = nullptr;

	if (!uFnSetKickPreviousUser)
	{
		uFnSetKickPreviousUser = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetKickPreviousUser");
	}

	UOnlineSubsystemSteamworks_execSetKickPreviousUser_Params SetKickPreviousUser_Params;
	memcpy_s(&SetKickPreviousUser_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnSetKickPreviousUser, &SetKickPreviousUser_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SupportInGameLogin
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::SupportInGameLogin()
{
	static UFunction* uFnSupportInGameLogin = nullptr;

	if (!uFnSupportInGameLogin)
	{
		uFnSupportInGameLogin = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SupportInGameLogin");
	}

	UOnlineSubsystemSteamworks_execSupportInGameLogin_Params SupportInGameLogin_Params;

	this->ProcessEvent(uFnSupportInGameLogin, &SupportInGameLogin_Params, nullptr);

	return SupportInGameLogin_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowControllerUI
// [0x00020001] (FUNC_Final | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::ShowControllerUI()
{
	static UFunction* uFnShowControllerUI = nullptr;

	if (!uFnShowControllerUI)
	{
		uFnShowControllerUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowControllerUI");
	}

	UOnlineSubsystemSteamworks_execShowControllerUI_Params ShowControllerUI_Params;

	this->ProcessEvent(uFnShowControllerUI, &ShowControllerUI_Params, nullptr);

	return ShowControllerUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUIForOrphanedUser
// [0x00020003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowLoginUIForOrphanedUser(uint8_t LocalUserNum)
{
	static UFunction* uFnShowLoginUIForOrphanedUser = nullptr;

	if (!uFnShowLoginUIForOrphanedUser)
	{
		uFnShowLoginUIForOrphanedUser = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUIForOrphanedUser");
	}

	UOnlineSubsystemSteamworks_execShowLoginUIForOrphanedUser_Params ShowLoginUIForOrphanedUser_Params;
	memcpy_s(&ShowLoginUIForOrphanedUser_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnShowLoginUIForOrphanedUser, &ShowLoginUIForOrphanedUser_Params, nullptr);

	return ShowLoginUIForOrphanedUser_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI
// [0x00024001] (FUNC_Final | FUNC_NetMulticast | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// uint8_t                        LocalUserNum                   (CPF_Parm)
// unsigned long                  bShowOnlineOnly                (CPF_OptionalParm | CPF_Parm)

bool UOnlineSubsystemSteamworks::ShowLoginUI(uint8_t LocalUserNum, unsigned long bShowOnlineOnly)
{
	static UFunction* uFnShowLoginUI = nullptr;

	if (!uFnShowLoginUI)
	{
		uFnShowLoginUI = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI");
	}

	UOnlineSubsystemSteamworks_execShowLoginUI_Params ShowLoginUI_Params;
	memcpy_s(&ShowLoginUI_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);
	ShowLoginUI_Params.bShowOnlineOnly = bShowOnlineOnly;

	this->ProcessEvent(uFnShowLoginUI, &ShowLoginUI_Params, nullptr);

	return ShowLoginUI_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAvatarChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::OnAvatarChange(struct FUniqueNetId PlayerID)
{
	static UFunction* uFnOnAvatarChange = nullptr;

	if (!uFnOnAvatarChange)
	{
		uFnOnAvatarChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAvatarChange");
	}

	UOnlineSubsystemSteamworks_execOnAvatarChange_Params OnAvatarChange_Params;
	memcpy_s(&OnAvatarChange_Params.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(uFnOnAvatarChange, &OnAvatarChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FriendPresenceChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// struct FUniqueNetId            PlayerID                       (CPF_Parm | CPF_NeedCtorLink)

void UOnlineSubsystemSteamworks::FriendPresenceChange(struct FUniqueNetId PlayerID)
{
	static UFunction* uFnFriendPresenceChange = nullptr;

	if (!uFnFriendPresenceChange)
	{
		uFnFriendPresenceChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FriendPresenceChange");
	}

	UOnlineSubsystemSteamworks_execFriendPresenceChange_Params FriendPresenceChange_Params;
	memcpy_s(&FriendPresenceChange_Params.PlayerID, 0x48, &PlayerID, 0x48);

	this->ProcessEvent(uFnFriendPresenceChange, &FriendPresenceChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::OnFriendsChange()
{
	static UFunction* uFnOnFriendsChange = nullptr;

	if (!uFnOnFriendsChange)
	{
		uFnOnFriendsChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange");
	}

	UOnlineSubsystemSteamworks_execOnFriendsChange_Params OnFriendsChange_Params;

	this->ProcessEvent(uFnOnFriendsChange, &OnFriendsChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::OnMutingChange()
{
	static UFunction* uFnOnMutingChange = nullptr;

	if (!uFnOnMutingChange)
	{
		uFnOnMutingChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange");
	}

	UOnlineSubsystemSteamworks_execOnMutingChange_Params OnMutingChange_Params;

	this->ProcessEvent(uFnOnMutingChange, &OnMutingChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::OnLoginCancelled()
{
	static UFunction* uFnOnLoginCancelled = nullptr;

	if (!uFnOnLoginCancelled)
	{
		uFnOnLoginCancelled = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled");
	}

	UOnlineSubsystemSteamworks_execOnLoginCancelled_Params OnLoginCancelled_Params;

	this->ProcessEvent(uFnOnLoginCancelled, &OnLoginCancelled_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnLoginChange(uint8_t LocalUserNum)
{
	static UFunction* uFnOnLoginChange = nullptr;

	if (!uFnOnLoginChange)
	{
		uFnOnLoginChange = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange");
	}

	UOnlineSubsystemSteamworks_execOnLoginChange_Params OnLoginChange_Params;
	memcpy_s(&OnLoginChange_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnOnLoginChange, &OnLoginChange_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserSignInComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnUserSignInComplete(uint8_t LocalUserNum)
{
	static UFunction* uFnOnUserSignInComplete = nullptr;

	if (!uFnOnUserSignInComplete)
	{
		uFnOnUserSignInComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserSignInComplete");
	}

	UOnlineSubsystemSteamworks_execOnUserSignInComplete_Params OnUserSignInComplete_Params;
	memcpy_s(&OnUserSignInComplete_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnOnUserSignInComplete, &OnUserSignInComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserSwitchComplete
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::OnUserSwitchComplete(uint8_t LocalUserNum)
{
	static UFunction* uFnOnUserSwitchComplete = nullptr;

	if (!uFnOnUserSwitchComplete)
	{
		uFnOnUserSwitchComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUserSwitchComplete");
	}

	UOnlineSubsystemSteamworks_execOnUserSwitchComplete_Params OnUserSwitchComplete_Params;
	memcpy_s(&OnUserSwitchComplete_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnOnUserSwitchComplete, &OnUserSwitchComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit
// [0x400020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:

void UOnlineSubsystemSteamworks::eventExit()
{
	static UFunction* uFnExit = nullptr;

	if (!uFnExit)
	{
		uFnExit = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit");
	}

	UOnlineSubsystemSteamworks_eventExit_Params Exit_Params;

	uFnExit->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnExit, &Exit_Params, nullptr);

	uFnExit->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PostInit
// [0x400020802] (FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::eventPostInit()
{
	static UFunction* uFnPostInit = nullptr;

	if (!uFnPostInit)
	{
		uFnPostInit = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PostInit");
	}

	UOnlineSubsystemSteamworks_eventPostInit_Params PostInit_Params;

	this->ProcessEvent(uFnPostInit, &PostInit_Params, nullptr);

	return PostInit_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init
// [0x400020C00] (FUNC_Native | FUNC_Event | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool UOnlineSubsystemSteamworks::eventInit()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init");
	}

	UOnlineSubsystemSteamworks_eventInit_Params Init_Params;

	uFnInit->FunctionFlags |= ~0x400;

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);

	uFnInit->FunctionFlags |= 0x400;

	return Init_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnlineChanged
// [0x00120001] (FUNC_Final | FUNC_Public | FUNC_Delegate | FUNC_AllFlags)
// Parameter info:
// uint8_t                        LocalUserNum                   (CPF_Parm)

void UOnlineSubsystemSteamworks::CanPlayOnlineChanged(uint8_t LocalUserNum)
{
	static UFunction* uFnCanPlayOnlineChanged = nullptr;

	if (!uFnCanPlayOnlineChanged)
	{
		uFnCanPlayOnlineChanged = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnlineChanged");
	}

	UOnlineSubsystemSteamworks_execCanPlayOnlineChanged_Params CanPlayOnlineChanged_Params;
	memcpy_s(&CanPlayOnlineChanged_Params.LocalUserNum, 0x1, &LocalUserNum, 0x1);

	this->ProcessEvent(uFnCanPlayOnlineChanged, &CanPlayOnlineChanged_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.ClearMicroTxnResponseDelegate
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ResponseMicroTxnDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePurchaseInterfaceSteamworks::ClearMicroTxnResponseDelegate(struct FScriptDelegate ResponseMicroTxnDelegate)
{
	static UFunction* uFnClearMicroTxnResponseDelegate = nullptr;

	if (!uFnClearMicroTxnResponseDelegate)
	{
		uFnClearMicroTxnResponseDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.ClearMicroTxnResponseDelegate");
	}

	UOnlinePurchaseInterfaceSteamworks_execClearMicroTxnResponseDelegate_Params ClearMicroTxnResponseDelegate_Params;
	memcpy_s(&ClearMicroTxnResponseDelegate_Params.ResponseMicroTxnDelegate, 0x18, &ResponseMicroTxnDelegate, 0x18);

	this->ProcessEvent(uFnClearMicroTxnResponseDelegate, &ClearMicroTxnResponseDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AddMicroTxnResponseDelegate
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// struct FScriptDelegate         ResponseMicroTxnDelegate       (CPF_Parm | CPF_NeedCtorLink)

void UOnlinePurchaseInterfaceSteamworks::AddMicroTxnResponseDelegate(struct FScriptDelegate ResponseMicroTxnDelegate)
{
	static UFunction* uFnAddMicroTxnResponseDelegate = nullptr;

	if (!uFnAddMicroTxnResponseDelegate)
	{
		uFnAddMicroTxnResponseDelegate = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AddMicroTxnResponseDelegate");
	}

	UOnlinePurchaseInterfaceSteamworks_execAddMicroTxnResponseDelegate_Params AddMicroTxnResponseDelegate_Params;
	memcpy_s(&AddMicroTxnResponseDelegate_Params.ResponseMicroTxnDelegate, 0x18, &ResponseMicroTxnDelegate, 0x18);

	this->ProcessEvent(uFnAddMicroTxnResponseDelegate, &AddMicroTxnResponseDelegate_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.FormatCurrency
// [0x400020002] (FUNC_RequiredAPI | FUNC_Public | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// struct FString                 ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink)
// struct FString                 Currency                       (CPF_Parm | CPF_NeedCtorLink)
// int32_t                        Price                          (CPF_Parm)

struct FString UOnlinePurchaseInterfaceSteamworks::FormatCurrency(struct FString Currency, int32_t Price)
{
	static UFunction* uFnFormatCurrency = nullptr;

	if (!uFnFormatCurrency)
	{
		uFnFormatCurrency = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.FormatCurrency");
	}

	UOnlinePurchaseInterfaceSteamworks_execFormatCurrency_Params FormatCurrency_Params;
	memcpy_s(&FormatCurrency_Params.Currency, 0x10, &Currency, 0x10);
	memcpy_s(&FormatCurrency_Params.Price, 0x4, &Price, 0x4);

	this->ProcessEvent(uFnFormatCurrency, &FormatCurrency_Params, nullptr);

	return FormatCurrency_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.HandleGetAppPriceInfoComplete
// [0x00840003] (FUNC_Final | FUNC_RequiredAPI | FUNC_Private | FUNC_HasDefaults | FUNC_AllFlags)
// Parameter info:
// class UHttpRequestInterface*   Request                        (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// unsigned long                  bDidSucceed                    (CPF_Parm)

void UOnlinePurchaseInterfaceSteamworks::HandleGetAppPriceInfoComplete(class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bDidSucceed)
{
	static UFunction* uFnHandleGetAppPriceInfoComplete = nullptr;

	if (!uFnHandleGetAppPriceInfoComplete)
	{
		uFnHandleGetAppPriceInfoComplete = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.HandleGetAppPriceInfoComplete");
	}

	UOnlinePurchaseInterfaceSteamworks_execHandleGetAppPriceInfoComplete_Params HandleGetAppPriceInfoComplete_Params;
	memcpy_s(&HandleGetAppPriceInfoComplete_Params.Request, 0x8, &Request, 0x8);
	memcpy_s(&HandleGetAppPriceInfoComplete_Params.Response, 0x8, &Response, 0x8);
	HandleGetAppPriceInfoComplete_Params.bDidSucceed = bDidSucceed;

	this->ProcessEvent(uFnHandleGetAppPriceInfoComplete, &HandleGetAppPriceInfoComplete_Params, nullptr);
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.GetAppPriceInfo
// [0x400C20002] (FUNC_RequiredAPI | FUNC_Public | FUNC_HasOutParms | FUNC_HasDefaults | FUNC_NetValidate | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FScriptDelegate         Callback                       (CPF_Parm | CPF_NeedCtorLink)
// struct FUniqueNetId            PlayerID                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)
// TArray<struct FName>           AppNames                       (CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePurchaseInterfaceSteamworks::GetAppPriceInfo(struct FScriptDelegate Callback, struct FUniqueNetId& PlayerID, TArray<struct FName>& AppNames)
{
	static UFunction* uFnGetAppPriceInfo = nullptr;

	if (!uFnGetAppPriceInfo)
	{
		uFnGetAppPriceInfo = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.GetAppPriceInfo");
	}

	UOnlinePurchaseInterfaceSteamworks_execGetAppPriceInfo_Params GetAppPriceInfo_Params;
	memcpy_s(&GetAppPriceInfo_Params.Callback, 0x18, &Callback, 0x18);
	memcpy_s(&GetAppPriceInfo_Params.PlayerID, 0x48, &PlayerID, 0x48);
	memcpy_s(&GetAppPriceInfo_Params.AppNames, 0x10, &AppNames, 0x10);

	this->ProcessEvent(uFnGetAppPriceInfo, &GetAppPriceInfo_Params, nullptr);

	memcpy_s(&PlayerID, 0x48, &GetAppPriceInfo_Params.PlayerID, 0x48);
	memcpy_s(&AppNames, 0x10, &GetAppPriceInfo_Params.AppNames, 0x10);

	return GetAppPriceInfo_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AppIdToName
// [0x00424003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FString                 AppID                          (CPF_Parm | CPF_NeedCtorLink)
// unsigned long                  bOptional                      (CPF_OptionalParm | CPF_Parm)
// struct FName                   AppName                        (CPF_Parm | CPF_OutParm)

bool UOnlinePurchaseInterfaceSteamworks::AppIdToName(struct FString AppID, unsigned long bOptional, struct FName& AppName)
{
	static UFunction* uFnAppIdToName = nullptr;

	if (!uFnAppIdToName)
	{
		uFnAppIdToName = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AppIdToName");
	}

	UOnlinePurchaseInterfaceSteamworks_execAppIdToName_Params AppIdToName_Params;
	memcpy_s(&AppIdToName_Params.AppID, 0x10, &AppID, 0x10);
	AppIdToName_Params.bOptional = bOptional;
	memcpy_s(&AppIdToName_Params.AppName, 0x8, &AppName, 0x8);

	this->ProcessEvent(uFnAppIdToName, &AppIdToName_Params, nullptr);

	memcpy_s(&AppName, 0x8, &AppIdToName_Params.AppName, 0x8);

	return AppIdToName_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AppNameToId
// [0x00424003] (FUNC_Final | FUNC_RequiredAPI | FUNC_NetMulticast | FUNC_Public | FUNC_HasOutParms | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)
// struct FName                   AppName                        (CPF_Parm)
// unsigned long                  bOptional                      (CPF_OptionalParm | CPF_Parm)
// struct FString                 AppID                          (CPF_Parm | CPF_OutParm | CPF_NeedCtorLink)

bool UOnlinePurchaseInterfaceSteamworks::AppNameToId(struct FName AppName, unsigned long bOptional, struct FString& AppID)
{
	static UFunction* uFnAppNameToId = nullptr;

	if (!uFnAppNameToId)
	{
		uFnAppNameToId = UFunction::FindFunction("Function OnlineSubsystemSteamworks.OnlinePurchaseInterfaceSteamworks.AppNameToId");
	}

	UOnlinePurchaseInterfaceSteamworks_execAppNameToId_Params AppNameToId_Params;
	memcpy_s(&AppNameToId_Params.AppName, 0x8, &AppName, 0x8);
	AppNameToId_Params.bOptional = bOptional;
	memcpy_s(&AppNameToId_Params.AppID, 0x10, &AppID, 0x10);

	this->ProcessEvent(uFnAppNameToId, &AppNameToId_Params, nullptr);

	memcpy_s(&AppID, 0x10, &AppNameToId_Params.AppID, 0x10);

	return AppNameToId_Params.ReturnValue;
};

// Function OnlineSubsystemSteamworks.SteamWorkshopCommandlet.Init
// [0x00020803] (FUNC_Final | FUNC_RequiredAPI | FUNC_Event | FUNC_Public | FUNC_AllFlags)
// Parameter info:
// bool                           ReturnValue                    (CPF_Parm | CPF_OutParm | CPF_ReturnParm)

bool USteamWorkshopCommandlet::eventInit()
{
	static UFunction* uFnInit = nullptr;

	if (!uFnInit)
	{
		uFnInit = UFunction::FindFunction("Function OnlineSubsystemSteamworks.SteamWorkshopCommandlet.Init");
	}

	USteamWorkshopCommandlet_eventInit_Params Init_Params;

	this->ProcessEvent(uFnInit, &Init_Params, nullptr);

	return Init_Params.ReturnValue;
};

/*
# ========================================================================================= #
#
# ========================================================================================= #
*/

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
