#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WantedPolice_NPCSpawner

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_MonoNPCSpawner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WantedPolice_NPCSpawner.BP_WantedPolice_NPCSpawner_C
// 0x0280 (0x0698 - 0x0418)
class ABP_WantedPolice_NPCSpawner_C final : public ABP_MonoNPCSpawner_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_WantedPolice_NPCSpawner_C;       // 0x0418(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          BoxCollision;                                      // 0x0420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   DummyPlayer;                                       // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         SpawnPointNum;                                     // 0x0430(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A48[0x4];                                     // 0x0434(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        SpawnPointRadius;                                  // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RespawnDistance;                                   // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_NPCAIController_C*                  NPCAIController;                                   // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          OwnerHandle;                                       // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          OwnerCharacter;                                    // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWanted;                                          // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A49[0x7];                                     // 0x0461(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        LostSearchTime;                                    // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        LostSearchTimer;                                   // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<int32, struct FPalDataTableRowName_PalHumanData> PoliceHumanDataArray;                              // 0x0478(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UPalIndividualCharacterHandle*          DespawnHandle;                                     // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<class UPalIndividualCharacterHandle*, class ABP_NPCAIController_C*> NPCMap;                                            // 0x04D0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UPalIndividualCharacterHandle*, class ABP_NPCAIController_C*> PreNPCMap;                                         // 0x0520(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         SpawnNum;                                          // 0x0570(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A4A[0x4];                                     // 0x0574(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        SpawnHeightOffset;                                 // 0x0578(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TotalReward;                                       // 0x0580(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CharacterID;                                       // 0x0584(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A4B[0x4];                                     // 0x058C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        FloorCheckHeight;                                  // 0x0590(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PoliceLevel;                                       // 0x0598(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RespawnCheckCount;                                 // 0x059C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RespawnCount;                                      // 0x05A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A4C[0x4];                                     // 0x05A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        RespawnCheckTimer;                                 // 0x05A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RespawnCheckTime;                                  // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsForceSpawn;                                      // 0x05B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A4D[0x7];                                     // 0x05B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        PreLocations;                                      // 0x05C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         PreTargetReward;                                   // 0x05D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TargetReward;                                      // 0x05D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        StuckCheckDistance;                                // 0x05D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MoveFailedRespawnTime;                             // 0x05E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MoveFailedRespawnTimer;                            // 0x05E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_NPCAIController_C*>          MoveFailedNPCs;                                    // 0x05F0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	double                                        PoliceHate;                                        // 0x0600(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CheckMoveFailedTimerHandle;                        // 0x0608(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        CheckMoveFailedTime;                               // 0x0610(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class ABP_NPCAIController_C*, struct FVector> NPCPreLocationMap;                                 // 0x0618(0x0050)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          IsSpawnFailed;                                     // 0x0668(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A4E[0x7];                                     // 0x0669(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           SpawnFailedCheckTimer;                             // 0x0670(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        SpawnFailedCheckTime;                              // 0x0678(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalWorldSecurityWantedStateInfo       CurrentWantedStateInfo;                            // 0x0680(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BlueprintTick(float DeltaTime);
	void ChangeCombatMode();
	void CheckPoliceInSight(class ABP_NPCAIController_C* NPC, bool* InSight);
	void CheckReleaseWantedTimer(double DeltaTime, bool* IsRelease);
	void CheckReportCriminal();
	void CheckRespawn(const struct FVector& CheckLocation, bool* IsRespawn);
	void CheckRespawnByFailedMove();
	void CheckSpawnFailed();
	void CheckValidSpawnLocation(const struct FVector& TargetLocation, struct FVector* Location, bool* IsValid);
	void CheckWaterOrSky(const struct FVector& Start, const struct FVector& End, bool* IsWaterOrSky);
	void CorrectPoints(TArray<struct FVector>* Points);
	void DebugShowPoints(double DeltaTime);
	void Despawn();
	void DespawnPolices(TArray<class UPalIndividualCharacterHandle*>& DespawnHandles);
	void ExecuteUbergraph_BP_WantedPolice_NPCSpawner(int32 EntryPoint);
	void FindSpawnLocation(struct FVector* Location, bool* IsSuccess);
	void GetCombatGunBP(class ABP_NPCAIController_C* AIController, class UBP_AIAction_NPC_Combat_Gun_C** CombatAIAction);
	void HasWeapon(class ABP_NPCAIController_C* NPCController, bool* Param_HasWeapon);
	void IsFailedMove(class ABP_NPCAIController_C* AIController, bool* IsFailed);
	void IsOrganizationCitizen(EPalOrganizationType OrganizationType, bool* bCitizen);
	void IsPoliceInSight(bool* NoOneInSight);
	void IsSelf(class UPalIndividualCharacterHandle* CharacterHandle, bool* Param_IsSelf);
	void IsStuckMove(class ABP_NPCAIController_C* AIController, bool* IsStuck);
	void OnInitializedNPC();
	void OnReleaseWanted(class UPalIndividualCharacterHandle* CriminalHandle);
	void OnWanted(class UPalIndividualCharacterHandle* CriminalHandle, const struct FPalWorldSecurityWantedStateInfo& WantedStateInfo);
	void ReceiveBeginPlay();
	void ReleaseWanted();
	void ReporterChangeAction(class APalCharacter* Reporter, class APalCharacter* Criminal);
	void SetupOwnerAndHandle();
	void Spawn();
	void SpawnDelegate(const struct FPalInstanceID& ID);
	void SpawnPolices();
	void TrySpawnPolices();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WantedPolice_NPCSpawner_C">();
	}
	static class ABP_WantedPolice_NPCSpawner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WantedPolice_NPCSpawner_C>();
	}
};
static_assert(alignof(ABP_WantedPolice_NPCSpawner_C) == 0x000008, "Wrong alignment on ABP_WantedPolice_NPCSpawner_C");
static_assert(sizeof(ABP_WantedPolice_NPCSpawner_C) == 0x000698, "Wrong size on ABP_WantedPolice_NPCSpawner_C");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, UberGraphFrame_BP_WantedPolice_NPCSpawner_C) == 0x000418, "Member 'ABP_WantedPolice_NPCSpawner_C::UberGraphFrame_BP_WantedPolice_NPCSpawner_C' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, BoxCollision) == 0x000420, "Member 'ABP_WantedPolice_NPCSpawner_C::BoxCollision' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, DummyPlayer) == 0x000428, "Member 'ABP_WantedPolice_NPCSpawner_C::DummyPlayer' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, SpawnPointNum) == 0x000430, "Member 'ABP_WantedPolice_NPCSpawner_C::SpawnPointNum' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, SpawnPointRadius) == 0x000438, "Member 'ABP_WantedPolice_NPCSpawner_C::SpawnPointRadius' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, RespawnDistance) == 0x000440, "Member 'ABP_WantedPolice_NPCSpawner_C::RespawnDistance' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, NPCAIController) == 0x000448, "Member 'ABP_WantedPolice_NPCSpawner_C::NPCAIController' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, OwnerHandle) == 0x000450, "Member 'ABP_WantedPolice_NPCSpawner_C::OwnerHandle' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, OwnerCharacter) == 0x000458, "Member 'ABP_WantedPolice_NPCSpawner_C::OwnerCharacter' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, IsWanted) == 0x000460, "Member 'ABP_WantedPolice_NPCSpawner_C::IsWanted' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, LostSearchTime) == 0x000468, "Member 'ABP_WantedPolice_NPCSpawner_C::LostSearchTime' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, LostSearchTimer) == 0x000470, "Member 'ABP_WantedPolice_NPCSpawner_C::LostSearchTimer' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, PoliceHumanDataArray) == 0x000478, "Member 'ABP_WantedPolice_NPCSpawner_C::PoliceHumanDataArray' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, DespawnHandle) == 0x0004C8, "Member 'ABP_WantedPolice_NPCSpawner_C::DespawnHandle' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, NPCMap) == 0x0004D0, "Member 'ABP_WantedPolice_NPCSpawner_C::NPCMap' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, PreNPCMap) == 0x000520, "Member 'ABP_WantedPolice_NPCSpawner_C::PreNPCMap' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, SpawnNum) == 0x000570, "Member 'ABP_WantedPolice_NPCSpawner_C::SpawnNum' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, SpawnHeightOffset) == 0x000578, "Member 'ABP_WantedPolice_NPCSpawner_C::SpawnHeightOffset' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, TotalReward) == 0x000580, "Member 'ABP_WantedPolice_NPCSpawner_C::TotalReward' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, CharacterID) == 0x000584, "Member 'ABP_WantedPolice_NPCSpawner_C::CharacterID' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, FloorCheckHeight) == 0x000590, "Member 'ABP_WantedPolice_NPCSpawner_C::FloorCheckHeight' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, PoliceLevel) == 0x000598, "Member 'ABP_WantedPolice_NPCSpawner_C::PoliceLevel' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, RespawnCheckCount) == 0x00059C, "Member 'ABP_WantedPolice_NPCSpawner_C::RespawnCheckCount' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, RespawnCount) == 0x0005A0, "Member 'ABP_WantedPolice_NPCSpawner_C::RespawnCount' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, RespawnCheckTimer) == 0x0005A8, "Member 'ABP_WantedPolice_NPCSpawner_C::RespawnCheckTimer' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, RespawnCheckTime) == 0x0005B0, "Member 'ABP_WantedPolice_NPCSpawner_C::RespawnCheckTime' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, IsForceSpawn) == 0x0005B8, "Member 'ABP_WantedPolice_NPCSpawner_C::IsForceSpawn' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, PreLocations) == 0x0005C0, "Member 'ABP_WantedPolice_NPCSpawner_C::PreLocations' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, PreTargetReward) == 0x0005D0, "Member 'ABP_WantedPolice_NPCSpawner_C::PreTargetReward' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, TargetReward) == 0x0005D4, "Member 'ABP_WantedPolice_NPCSpawner_C::TargetReward' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, StuckCheckDistance) == 0x0005D8, "Member 'ABP_WantedPolice_NPCSpawner_C::StuckCheckDistance' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, MoveFailedRespawnTime) == 0x0005E0, "Member 'ABP_WantedPolice_NPCSpawner_C::MoveFailedRespawnTime' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, MoveFailedRespawnTimer) == 0x0005E8, "Member 'ABP_WantedPolice_NPCSpawner_C::MoveFailedRespawnTimer' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, MoveFailedNPCs) == 0x0005F0, "Member 'ABP_WantedPolice_NPCSpawner_C::MoveFailedNPCs' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, PoliceHate) == 0x000600, "Member 'ABP_WantedPolice_NPCSpawner_C::PoliceHate' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, CheckMoveFailedTimerHandle) == 0x000608, "Member 'ABP_WantedPolice_NPCSpawner_C::CheckMoveFailedTimerHandle' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, CheckMoveFailedTime) == 0x000610, "Member 'ABP_WantedPolice_NPCSpawner_C::CheckMoveFailedTime' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, NPCPreLocationMap) == 0x000618, "Member 'ABP_WantedPolice_NPCSpawner_C::NPCPreLocationMap' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, IsSpawnFailed) == 0x000668, "Member 'ABP_WantedPolice_NPCSpawner_C::IsSpawnFailed' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, SpawnFailedCheckTimer) == 0x000670, "Member 'ABP_WantedPolice_NPCSpawner_C::SpawnFailedCheckTimer' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, SpawnFailedCheckTime) == 0x000678, "Member 'ABP_WantedPolice_NPCSpawner_C::SpawnFailedCheckTime' has a wrong offset!");
static_assert(offsetof(ABP_WantedPolice_NPCSpawner_C, CurrentWantedStateInfo) == 0x000680, "Member 'ABP_WantedPolice_NPCSpawner_C::CurrentWantedStateInfo' has a wrong offset!");

}

