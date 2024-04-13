#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PalBossBattleSequence_Opening

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PalBossBattleSequence_Opening.PalBossBattleSequence_Opening_C
// 0x00B8 (0x00F8 - 0x0040)
class UPalBossBattleSequence_Opening_C final : public UPalBossBattleSequenceBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0040(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ULevelSequencePlayer*                   LSPlayer;                                          // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                          IsEndCutscene;                                     // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEndSetBoss;                                      // 0x0051(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_447A[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FTransform>                     PlayerPosList;                                     // 0x0058(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsPlayerFix;                                       // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_447B[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDDispatchParameter_FadeWidget*    FadeParameter;                                     // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLoaded;                                          // 0x0078(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_447C[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalBossBattleLevelInstance*            BossRoom;                                          // 0x0080(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalBossBattleInstanceModel*            InstanceModel;                                     // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCutscenePlayed;                                  // 0x0090(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsTeleportEnd;                                     // 0x0091(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_447D[0x6];                                     // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        LevelLoadCheckTimer;                               // 0x0098(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          BGMBeginEvent;                                     // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          BGMLoopEvent;                                      // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UAkAudioEvent>           BGMLoopEventSoft;                                  // 0x00B0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         LoadingAssetCount;                                 // 0x00E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_447E[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 PalCustCeneActorClass;                             // 0x00E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPlayIntroBGM;                                    // 0x00F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActivateBossAI();
	void CheckLevelInstanceLoaded(double DeltaTime);
	void DecAssetLoadingCount();
	void DoSequenceFinish();
	void ExecuteUbergraph_PalBossBattleSequence_Opening(int32 EntryPoint);
	void FinishSequence(bool IsSuccess);
	void FixPlayerPos();
	void GetLevelSpawnPos(struct FVector* Pos);
	void InitPlayerCameraRotation();
	void IsAssetLoadingCompleted(bool* NewParam);
	void IsSkipCutscene(bool* Skip);
	void LoadedLevel();
	void LogShow(const class FString& String);
	void OnBeginSequence();
	void OnFinishCutscene(bool IsSkipped);
	void OnLoaded_7D1701CA4A594EE0B85451B16F0DD9FB(class UObject* Loaded);
	void OnLoaded_87511D084D17A2720B719F91D617DC72(TSubclassOf<class UObject> Loaded);
	void OnLoaded_95B43418450294BEE8289E863350333C(class UObject* Loaded);
	void OnPlayerTeleported();
	void PlayIntroMovie(class UClass* StartCutscene);
	void SetPlayerLocation_StartPoint();
	void SetupCutscene();
	void StartCustcene();
	void StartUIFadeIn();
	void StartUIFadeOut();
	void TickSequence(float DeltaTime);
	void _________0(class APalCharacter* SpawnedCharacter);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PalBossBattleSequence_Opening_C">();
	}
	static class UPalBossBattleSequence_Opening_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPalBossBattleSequence_Opening_C>();
	}
};
static_assert(alignof(UPalBossBattleSequence_Opening_C) == 0x000008, "Wrong alignment on UPalBossBattleSequence_Opening_C");
static_assert(sizeof(UPalBossBattleSequence_Opening_C) == 0x0000F8, "Wrong size on UPalBossBattleSequence_Opening_C");
static_assert(offsetof(UPalBossBattleSequence_Opening_C, UberGraphFrame) == 0x000040, "Member 'UPalBossBattleSequence_Opening_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPalBossBattleSequence_Opening_C, LSPlayer) == 0x000048, "Member 'UPalBossBattleSequence_Opening_C::LSPlayer' has a wrong offset!");
static_assert(offsetof(UPalBossBattleSequence_Opening_C, IsEndCutscene) == 0x000050, "Member 'UPalBossBattleSequence_Opening_C::IsEndCutscene' has a wrong offset!");
static_assert(offsetof(UPalBossBattleSequence_Opening_C, IsEndSetBoss) == 0x000051, "Member 'UPalBossBattleSequence_Opening_C::IsEndSetBoss' has a wrong offset!");
static_assert(offsetof(UPalBossBattleSequence_Opening_C, PlayerPosList) == 0x000058, "Member 'UPalBossBattleSequence_Opening_C::PlayerPosList' has a wrong offset!");
static_assert(offsetof(UPalBossBattleSequence_Opening_C, IsPlayerFix) == 0x000068, "Member 'UPalBossBattleSequence_Opening_C::IsPlayerFix' has a wrong offset!");
static_assert(offsetof(UPalBossBattleSequence_Opening_C, FadeParameter) == 0x000070, "Member 'UPalBossBattleSequence_Opening_C::FadeParameter' has a wrong offset!");
static_assert(offsetof(UPalBossBattleSequence_Opening_C, IsLoaded) == 0x000078, "Member 'UPalBossBattleSequence_Opening_C::IsLoaded' has a wrong offset!");
static_assert(offsetof(UPalBossBattleSequence_Opening_C, BossRoom) == 0x000080, "Member 'UPalBossBattleSequence_Opening_C::BossRoom' has a wrong offset!");
static_assert(offsetof(UPalBossBattleSequence_Opening_C, InstanceModel) == 0x000088, "Member 'UPalBossBattleSequence_Opening_C::InstanceModel' has a wrong offset!");
static_assert(offsetof(UPalBossBattleSequence_Opening_C, IsCutscenePlayed) == 0x000090, "Member 'UPalBossBattleSequence_Opening_C::IsCutscenePlayed' has a wrong offset!");
static_assert(offsetof(UPalBossBattleSequence_Opening_C, IsTeleportEnd) == 0x000091, "Member 'UPalBossBattleSequence_Opening_C::IsTeleportEnd' has a wrong offset!");
static_assert(offsetof(UPalBossBattleSequence_Opening_C, LevelLoadCheckTimer) == 0x000098, "Member 'UPalBossBattleSequence_Opening_C::LevelLoadCheckTimer' has a wrong offset!");
static_assert(offsetof(UPalBossBattleSequence_Opening_C, BGMBeginEvent) == 0x0000A0, "Member 'UPalBossBattleSequence_Opening_C::BGMBeginEvent' has a wrong offset!");
static_assert(offsetof(UPalBossBattleSequence_Opening_C, BGMLoopEvent) == 0x0000A8, "Member 'UPalBossBattleSequence_Opening_C::BGMLoopEvent' has a wrong offset!");
static_assert(offsetof(UPalBossBattleSequence_Opening_C, BGMLoopEventSoft) == 0x0000B0, "Member 'UPalBossBattleSequence_Opening_C::BGMLoopEventSoft' has a wrong offset!");
static_assert(offsetof(UPalBossBattleSequence_Opening_C, LoadingAssetCount) == 0x0000E0, "Member 'UPalBossBattleSequence_Opening_C::LoadingAssetCount' has a wrong offset!");
static_assert(offsetof(UPalBossBattleSequence_Opening_C, PalCustCeneActorClass) == 0x0000E8, "Member 'UPalBossBattleSequence_Opening_C::PalCustCeneActorClass' has a wrong offset!");
static_assert(offsetof(UPalBossBattleSequence_Opening_C, IsPlayIntroBGM) == 0x0000F0, "Member 'UPalBossBattleSequence_Opening_C::IsPlayIntroBGM' has a wrong offset!");

}

