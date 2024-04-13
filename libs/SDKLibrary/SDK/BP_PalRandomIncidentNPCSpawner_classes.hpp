#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalRandomIncidentNPCSpawner

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"
#include "F_NPC_PathWalkArray_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PalRandomIncidentNPCSpawner.BP_PalRandomIncidentNPCSpawner_C
// 0x0270 (0x0648 - 0x03D8)
class ABP_PalRandomIncidentNPCSpawner_C final : public APalRandomIncidentNPCSpawner
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        ReturnRadius;                                      // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        WalkRadius;                                        // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FF_NPC_PathWalkArray> WalkPathLists;                                     // 0x03F8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UPalIndividualCharacterHandle*>  IndividualHandleList;                              // 0x0448(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UPalIndividualCharacterHandle*, struct FPalRandomIncidentSpawnMonsterData> MonsterSpawnData;                                  // 0x0458(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UPalIndividualCharacterHandle*, struct FPalRandomIncidentSpawnNPCData> NPCSpawnData;                                      // 0x04A8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UPalIndividualCharacterHandle*, class FName> PathNames;                                         // 0x04F8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UPalIndividualCharacterHandle*, class FName> RowNames;                                          // 0x0548(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             GetWalkPathDelegate;                               // 0x0598(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<class UPalIndividualCharacterHandle*, struct FVector> SpawnedLocation;                                   // 0x05A8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UPalIndividualCharacterHandle*, class FName> OtomoNames;                                        // 0x05F8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Despawn_Characters();
	void DespawnCharacters();
	void ExecuteUbergraph_BP_PalRandomIncidentNPCSpawner(int32 EntryPoint);
	class APalCharacter* FindCharacterByName(const class FName& Param_Name);
	void FindIndividualHandle(const struct FPalInstanceID& ID, class UPalIndividualCharacterHandle** Handle);
	void Get_Character(const struct FPalInstanceID& ID, class APalCharacter** Character);
	void Get_Path_Name(const struct FPalInstanceID& ID, class FName* PathName);
	void GetDefaultAction(const struct FPalInstanceID& ID, class UClass** DefaultAction, class UClass** DefaultAIAction);
	void GetGroupNo(class UPalIndividualCharacterHandle* IndividualHandle, int32* GroupNo);
	void GetHandleByCharacter(class APalCharacter* Character, class UPalIndividualCharacterHandle** Handle);
	void GetSpawnedCharacters(TArray<class AActor*>* SpawnedCharacters);
	void GetSpawnedLocation(class UPalIndividualCharacterHandle* Handle, bool* Found, struct FVector* Param_SpawnedLocation);
	void GetWalkPath(class FName PathName, struct FF_NPC_PathWalkArray* WalkPathList);
	void GetWalkPathDelegate__DelegateSignature(class FName NewParam);
	bool IsSpawnedCharacter(const class UPalIndividualCharacterHandle* Handle);
	void IsSquad(const struct FPalInstanceID& ID, bool* Param_IsSquad);
	void On_Character_Spawned_(const struct FPalInstanceID& ID);
	void OnCharacterDespawned(const struct FPalInstanceID& ID);
	void OnCharacterDestroyed(class AActor* DestroyedActor);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void RemoveHandle(class UPalIndividualCharacterHandle* Handle);
	void Setup_Npc_Controller(class ABP_NPCAIController_C* NPCController, class APalCharacter* SpawnedChara, const struct FPalInstanceID& ID);
	void Setup_Spawned_Character(const struct FPalInstanceID& ID);
	void SetupMonsterController(class ABP_MonsterAIController_Wild_C* Controller, class APalCharacter* SpawnedChara);
	void SetWalkPathList(const TMap<class FName, struct FF_NPC_PathWalkArray>& PathList);
	void Spawn_Monster(class FName RowName, const struct FPalRandomIncidentSpawnMonsterData& SpawnData, int32 SpawnPointIndex, int32 SpawnPointCount);
	void Spawn_NPC(class FName RowName, const struct FPalRandomIncidentSpawnNPCData& SpawnData, int32 SpawnPointIndex, int32 SpawnPointCount);
	void SpawnCharacter(class FName RowName, class FName CharacterID, class FName UniqueName, class FName OtomoName, int32 Level, class UClass* AIController, class FName PathName, const struct FVector& Location, double Radius, double RotZ, int32 SpawnPointIndex, int32 SpawnPointCount, class UPalIndividualCharacterHandle** Handle, struct FVector* Param_SpawnedLocation);
	void SpawnMonster(const class FName& RowName, const struct FPalRandomIncidentSpawnMonsterData& SpawnData, int32 SpawnPointIndex, int32 SpawnPointCount);
	void SpawnNPC(const class FName& RowName, const struct FPalRandomIncidentSpawnNPCData& SpawnData, int32 SpawnPointIndex, int32 SpawnPointCount);
	void _________0(class APalCharacter* InCharacter);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalRandomIncidentNPCSpawner_C">();
	}
	static class ABP_PalRandomIncidentNPCSpawner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalRandomIncidentNPCSpawner_C>();
	}
};
static_assert(alignof(ABP_PalRandomIncidentNPCSpawner_C) == 0x000008, "Wrong alignment on ABP_PalRandomIncidentNPCSpawner_C");
static_assert(sizeof(ABP_PalRandomIncidentNPCSpawner_C) == 0x000648, "Wrong size on ABP_PalRandomIncidentNPCSpawner_C");
static_assert(offsetof(ABP_PalRandomIncidentNPCSpawner_C, UberGraphFrame) == 0x0003D8, "Member 'ABP_PalRandomIncidentNPCSpawner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_PalRandomIncidentNPCSpawner_C, DefaultSceneRoot) == 0x0003E0, "Member 'ABP_PalRandomIncidentNPCSpawner_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_PalRandomIncidentNPCSpawner_C, ReturnRadius) == 0x0003E8, "Member 'ABP_PalRandomIncidentNPCSpawner_C::ReturnRadius' has a wrong offset!");
static_assert(offsetof(ABP_PalRandomIncidentNPCSpawner_C, WalkRadius) == 0x0003F0, "Member 'ABP_PalRandomIncidentNPCSpawner_C::WalkRadius' has a wrong offset!");
static_assert(offsetof(ABP_PalRandomIncidentNPCSpawner_C, WalkPathLists) == 0x0003F8, "Member 'ABP_PalRandomIncidentNPCSpawner_C::WalkPathLists' has a wrong offset!");
static_assert(offsetof(ABP_PalRandomIncidentNPCSpawner_C, IndividualHandleList) == 0x000448, "Member 'ABP_PalRandomIncidentNPCSpawner_C::IndividualHandleList' has a wrong offset!");
static_assert(offsetof(ABP_PalRandomIncidentNPCSpawner_C, MonsterSpawnData) == 0x000458, "Member 'ABP_PalRandomIncidentNPCSpawner_C::MonsterSpawnData' has a wrong offset!");
static_assert(offsetof(ABP_PalRandomIncidentNPCSpawner_C, NPCSpawnData) == 0x0004A8, "Member 'ABP_PalRandomIncidentNPCSpawner_C::NPCSpawnData' has a wrong offset!");
static_assert(offsetof(ABP_PalRandomIncidentNPCSpawner_C, PathNames) == 0x0004F8, "Member 'ABP_PalRandomIncidentNPCSpawner_C::PathNames' has a wrong offset!");
static_assert(offsetof(ABP_PalRandomIncidentNPCSpawner_C, RowNames) == 0x000548, "Member 'ABP_PalRandomIncidentNPCSpawner_C::RowNames' has a wrong offset!");
static_assert(offsetof(ABP_PalRandomIncidentNPCSpawner_C, GetWalkPathDelegate) == 0x000598, "Member 'ABP_PalRandomIncidentNPCSpawner_C::GetWalkPathDelegate' has a wrong offset!");
static_assert(offsetof(ABP_PalRandomIncidentNPCSpawner_C, SpawnedLocation) == 0x0005A8, "Member 'ABP_PalRandomIncidentNPCSpawner_C::SpawnedLocation' has a wrong offset!");
static_assert(offsetof(ABP_PalRandomIncidentNPCSpawner_C, OtomoNames) == 0x0005F8, "Member 'ABP_PalRandomIncidentNPCSpawner_C::OtomoNames' has a wrong offset!");

}
