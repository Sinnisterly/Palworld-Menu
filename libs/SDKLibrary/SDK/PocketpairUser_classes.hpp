#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PocketpairUser

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class PocketpairUser.HTTPRequestAsyncFunction
// 0x00B0 (0x00E0 - 0x0030)
class UHTTPRequestAsyncFunction final : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_             Completed;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C43[0xA0];                                    // 0x0040(0x00A0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UHTTPRequestAsyncFunction* HTTPRequestAsyncFunction(class UPocketpairUserSubsystem* Target, const class FString& URL, const class FString& Verb);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"HTTPRequestAsyncFunction">();
	}
	static class UHTTPRequestAsyncFunction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHTTPRequestAsyncFunction>();
	}
};
static_assert(alignof(UHTTPRequestAsyncFunction) == 0x000008, "Wrong alignment on UHTTPRequestAsyncFunction");
static_assert(sizeof(UHTTPRequestAsyncFunction) == 0x0000E0, "Wrong size on UHTTPRequestAsyncFunction");
static_assert(offsetof(UHTTPRequestAsyncFunction, Completed) == 0x000030, "Member 'UHTTPRequestAsyncFunction::Completed' has a wrong offset!");

// Class PocketpairUser.SwitchUserUIDefaultOnlineSubsystemAsyncFunction
// 0x0020 (0x0050 - 0x0030)
class USwitchUserUIDefaultOnlineSubsystemAsyncFunction final : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_             Completed;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C44[0x10];                                    // 0x0040(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class USwitchUserUIDefaultOnlineSubsystemAsyncFunction* SwitchUserUIAsyncFunction(class UPocketpairUserSubsystem* Target);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SwitchUserUIDefaultOnlineSubsystemAsyncFunction">();
	}
	static class USwitchUserUIDefaultOnlineSubsystemAsyncFunction* GetDefaultObj()
	{
		return GetDefaultObjImpl<USwitchUserUIDefaultOnlineSubsystemAsyncFunction>();
	}
};
static_assert(alignof(USwitchUserUIDefaultOnlineSubsystemAsyncFunction) == 0x000008, "Wrong alignment on USwitchUserUIDefaultOnlineSubsystemAsyncFunction");
static_assert(sizeof(USwitchUserUIDefaultOnlineSubsystemAsyncFunction) == 0x000050, "Wrong size on USwitchUserUIDefaultOnlineSubsystemAsyncFunction");
static_assert(offsetof(USwitchUserUIDefaultOnlineSubsystemAsyncFunction, Completed) == 0x000030, "Member 'USwitchUserUIDefaultOnlineSubsystemAsyncFunction::Completed' has a wrong offset!");

// Class PocketpairUser.LoginDefaultOnlineSubsystemAsyncFunction
// 0x0020 (0x0050 - 0x0030)
class ULoginDefaultOnlineSubsystemAsyncFunction final : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_             Completed;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C45[0x10];                                    // 0x0040(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class ULoginDefaultOnlineSubsystemAsyncFunction* LoginDefaultAsyncFunction(class UPocketpairUserSubsystem* Target);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LoginDefaultOnlineSubsystemAsyncFunction">();
	}
	static class ULoginDefaultOnlineSubsystemAsyncFunction* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoginDefaultOnlineSubsystemAsyncFunction>();
	}
};
static_assert(alignof(ULoginDefaultOnlineSubsystemAsyncFunction) == 0x000008, "Wrong alignment on ULoginDefaultOnlineSubsystemAsyncFunction");
static_assert(sizeof(ULoginDefaultOnlineSubsystemAsyncFunction) == 0x000050, "Wrong size on ULoginDefaultOnlineSubsystemAsyncFunction");
static_assert(offsetof(ULoginDefaultOnlineSubsystemAsyncFunction, Completed) == 0x000030, "Member 'ULoginDefaultOnlineSubsystemAsyncFunction::Completed' has a wrong offset!");

// Class PocketpairUser.LoginEOSAsyncFunction
// 0x0020 (0x0050 - 0x0030)
class ULoginEOSAsyncFunction final : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_             Completed;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C46[0x10];                                    // 0x0040(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class ULoginEOSAsyncFunction* LoginEOSAsyncFunction(class UPocketpairUserSubsystem* Target);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LoginEOSAsyncFunction">();
	}
	static class ULoginEOSAsyncFunction* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoginEOSAsyncFunction>();
	}
};
static_assert(alignof(ULoginEOSAsyncFunction) == 0x000008, "Wrong alignment on ULoginEOSAsyncFunction");
static_assert(sizeof(ULoginEOSAsyncFunction) == 0x000050, "Wrong size on ULoginEOSAsyncFunction");
static_assert(offsetof(ULoginEOSAsyncFunction, Completed) == 0x000030, "Member 'ULoginEOSAsyncFunction::Completed' has a wrong offset!");

// Class PocketpairUser.CreateSessionAsyncFunction
// 0x00B0 (0x00E0 - 0x0030)
class UCreateSessionAsyncFunction final : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_             Completed;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C47[0xA0];                                    // 0x0040(0x00A0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UCreateSessionAsyncFunction* CreateSessionAsyncFunction(class UPocketpairUserSubsystem* Target, bool IsDedicatedServer, int32 PublicConnections, const class FString& InviteCode, const class FString& ServerName, const class FString& Desc, const class FString& ServerAddress, int32 ServerPort, bool IsPassword, const class FString& Version, const class FString& ServerType, const class FString& Region, const class FString& Namespace);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"CreateSessionAsyncFunction">();
	}
	static class UCreateSessionAsyncFunction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCreateSessionAsyncFunction>();
	}
};
static_assert(alignof(UCreateSessionAsyncFunction) == 0x000008, "Wrong alignment on UCreateSessionAsyncFunction");
static_assert(sizeof(UCreateSessionAsyncFunction) == 0x0000E0, "Wrong size on UCreateSessionAsyncFunction");
static_assert(offsetof(UCreateSessionAsyncFunction, Completed) == 0x000030, "Member 'UCreateSessionAsyncFunction::Completed' has a wrong offset!");

// Class PocketpairUser.FindSessionsAsyncFunction
// 0x00A0 (0x00D0 - 0x0030)
class UFindSessionsAsyncFunction final : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_             Completed;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C4A[0x90];                                    // 0x0040(0x0090)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UFindSessionsAsyncFunction* FindSessionsAsyncFunction(class UPocketpairUserSubsystem* Target, bool IsDedicatedServer, const class FString& InviteCode, const class FString& ServerType, const class FString& Region, const int32 LessThanTime, const class FString& WorldGUID, const class FString& Namespace);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FindSessionsAsyncFunction">();
	}
	static class UFindSessionsAsyncFunction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFindSessionsAsyncFunction>();
	}
};
static_assert(alignof(UFindSessionsAsyncFunction) == 0x000008, "Wrong alignment on UFindSessionsAsyncFunction");
static_assert(sizeof(UFindSessionsAsyncFunction) == 0x0000D0, "Wrong size on UFindSessionsAsyncFunction");
static_assert(offsetof(UFindSessionsAsyncFunction, Completed) == 0x000030, "Member 'UFindSessionsAsyncFunction::Completed' has a wrong offset!");

// Class PocketpairUser.JoinSessionAsyncFunction
// 0x0150 (0x0180 - 0x0030)
class UJoinSessionAsyncFunction final : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_             Completed;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C4D[0x138];                                   // 0x0040(0x0138)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      Controller;                                        // 0x0178(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"JoinSessionAsyncFunction">();
	}
	static class UJoinSessionAsyncFunction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJoinSessionAsyncFunction>();
	}
};
static_assert(alignof(UJoinSessionAsyncFunction) == 0x000008, "Wrong alignment on UJoinSessionAsyncFunction");
static_assert(sizeof(UJoinSessionAsyncFunction) == 0x000180, "Wrong size on UJoinSessionAsyncFunction");
static_assert(offsetof(UJoinSessionAsyncFunction, Completed) == 0x000030, "Member 'UJoinSessionAsyncFunction::Completed' has a wrong offset!");
static_assert(offsetof(UJoinSessionAsyncFunction, Controller) == 0x000178, "Member 'UJoinSessionAsyncFunction::Controller' has a wrong offset!");

// Class PocketpairUser.SanitizeDisplayNameAsyncFunction
// 0x0028 (0x0058 - 0x0030)
class USanitizeDisplayNameAsyncFunction final : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_             Completed;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C4E[0x18];                                    // 0x0040(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class USanitizeDisplayNameAsyncFunction* SanitizeDisplayNameAsyncFunction(class UPocketpairUserSubsystem* Target, const class FString& InString);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SanitizeDisplayNameAsyncFunction">();
	}
	static class USanitizeDisplayNameAsyncFunction* GetDefaultObj()
	{
		return GetDefaultObjImpl<USanitizeDisplayNameAsyncFunction>();
	}
};
static_assert(alignof(USanitizeDisplayNameAsyncFunction) == 0x000008, "Wrong alignment on USanitizeDisplayNameAsyncFunction");
static_assert(sizeof(USanitizeDisplayNameAsyncFunction) == 0x000058, "Wrong size on USanitizeDisplayNameAsyncFunction");
static_assert(offsetof(USanitizeDisplayNameAsyncFunction, Completed) == 0x000030, "Member 'USanitizeDisplayNameAsyncFunction::Completed' has a wrong offset!");

// Class PocketpairUser.PingIP
// 0x0048 (0x0070 - 0x0028)
class UPingIP final : public UObject
{
public:
	uint8                                         Pad_1C4F[0x28];                                    // 0x0028(0x0028)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnPingComplete;                                    // 0x0050(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnPingFailure;                                     // 0x0060(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	static class UPingIP* ConstructPingObject();

	void PollThread();
	void SendPing(const class FString& IpAddress);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PingIP">();
	}
	static class UPingIP* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPingIP>();
	}
};
static_assert(alignof(UPingIP) == 0x000008, "Wrong alignment on UPingIP");
static_assert(sizeof(UPingIP) == 0x000070, "Wrong size on UPingIP");
static_assert(offsetof(UPingIP, OnPingComplete) == 0x000050, "Member 'UPingIP::OnPingComplete' has a wrong offset!");
static_assert(offsetof(UPingIP, OnPingFailure) == 0x000060, "Member 'UPingIP::OnPingFailure' has a wrong offset!");

// Class PocketpairUser.PocketpairUserInfo
// 0x0010 (0x0038 - 0x0028)
class UPocketpairUserInfo final : public UObject
{
public:
	uint8                                         Pad_1C50[0x10];                                    // 0x0028(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class FString GetDebugString() const;
	struct FUniqueNetIdRepl GetNetId() const;
	class FString GetNickname() const;
	class FName GetOnlineSubsystemName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PocketpairUserInfo">();
	}
	static class UPocketpairUserInfo* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPocketpairUserInfo>();
	}
};
static_assert(alignof(UPocketpairUserInfo) == 0x000008, "Wrong alignment on UPocketpairUserInfo");
static_assert(sizeof(UPocketpairUserInfo) == 0x000038, "Wrong size on UPocketpairUserInfo");

// Class PocketpairUser.PocketpairFriend
// 0x0040 (0x0068 - 0x0028)
class UPocketpairFriend final : public UObject
{
public:
	class FString                                 DisplayName;                                       // 0x0028(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C51[0x30];                                    // 0x0038(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	struct FUniqueNetIdRepl GetNetId();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PocketpairFriend">();
	}
	static class UPocketpairFriend* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPocketpairFriend>();
	}
};
static_assert(alignof(UPocketpairFriend) == 0x000008, "Wrong alignment on UPocketpairFriend");
static_assert(sizeof(UPocketpairFriend) == 0x000068, "Wrong size on UPocketpairFriend");
static_assert(offsetof(UPocketpairFriend, DisplayName) == 0x000028, "Member 'UPocketpairFriend::DisplayName' has a wrong offset!");

// Class PocketpairUser.PocketpairUserSubsystem
// 0x00C8 (0x00F8 - 0x0030)
class UPocketpairUserSubsystem final : public UGameInstanceSubsystem
{
public:
	uint8                                         Pad_1C52[0x28];                                    // 0x0030(0x0028)(Fixing Size After Last Property [ Dumper-7 ])
	class UPocketpairUserInfo*                    LocalUserInfo;                                     // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1C53[0x98];                                    // 0x0060(0x0098)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddPingResultCache(const class FString& Address, int32 Ping);
	int32 GetPingResultCache(const class FString& Address);
	int32 GetPlayerNo(const class APlayerController* PlayerController);
	struct FSocialId GetSocialId(const class APlayerController* PlayerController);
	void OnSessionInviteReceived(const class FString& InviteCode);
	void UnlockAchievement(const class FString& ID, float Percent);

	class FName GetDefaultOnlineSubsystemName() const;
	class FString GetInviteCode() const;
	const class UPocketpairUserInfo* GetLocalUserInfo() const;
	class FString GetSaveDataUserId() const;
	class FString GetTelemetrySessionId() const;
	class FString GetTelemetryUserId() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PocketpairUserSubsystem">();
	}
	static class UPocketpairUserSubsystem* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPocketpairUserSubsystem>();
	}
};
static_assert(alignof(UPocketpairUserSubsystem) == 0x000008, "Wrong alignment on UPocketpairUserSubsystem");
static_assert(sizeof(UPocketpairUserSubsystem) == 0x0000F8, "Wrong size on UPocketpairUserSubsystem");
static_assert(offsetof(UPocketpairUserSubsystem, LocalUserInfo) == 0x000058, "Member 'UPocketpairUserSubsystem::LocalUserInfo' has a wrong offset!");

// Class PocketpairUser.GDKActivityAsyncFunction
// 0x0038 (0x0068 - 0x0030)
class UGDKActivityAsyncFunction final : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_             Completed;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C59[0x28];                                    // 0x0040(0x0028)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UGDKActivityAsyncFunction* GDKActivityAsyncFunction(class UPocketpairUserSubsystem* Target, const class FString& ConnectionString, int32 MaxPlayerNum, int32 CurrentPlayerNum);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GDKActivityAsyncFunction">();
	}
	static class UGDKActivityAsyncFunction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGDKActivityAsyncFunction>();
	}
};
static_assert(alignof(UGDKActivityAsyncFunction) == 0x000008, "Wrong alignment on UGDKActivityAsyncFunction");
static_assert(sizeof(UGDKActivityAsyncFunction) == 0x000068, "Wrong size on UGDKActivityAsyncFunction");
static_assert(offsetof(UGDKActivityAsyncFunction, Completed) == 0x000030, "Member 'UGDKActivityAsyncFunction::Completed' has a wrong offset!");

// Class PocketpairUser.GDKInviteAsyncFunction
// 0x0018 (0x0048 - 0x0030)
class UGDKInviteAsyncFunction final : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_             Completed;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C5A[0x8];                                     // 0x0040(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UGDKInviteAsyncFunction* GDKInviteAsyncFunction(class UPocketpairUserSubsystem* Target);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GDKInviteAsyncFunction">();
	}
	static class UGDKInviteAsyncFunction* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGDKInviteAsyncFunction>();
	}
};
static_assert(alignof(UGDKInviteAsyncFunction) == 0x000008, "Wrong alignment on UGDKInviteAsyncFunction");
static_assert(sizeof(UGDKInviteAsyncFunction) == 0x000048, "Wrong size on UGDKInviteAsyncFunction");
static_assert(offsetof(UGDKInviteAsyncFunction, Completed) == 0x000030, "Member 'UGDKInviteAsyncFunction::Completed' has a wrong offset!");

}

