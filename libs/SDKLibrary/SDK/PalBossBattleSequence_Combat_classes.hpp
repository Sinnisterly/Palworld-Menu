#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PalBossBattleSequence_Combat

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PalBossBattleSequence_Combat.PalBossBattleSequence_Combat_C
// 0x0010 (0x0050 - 0x0040)
class UPalBossBattleSequence_Combat_C final : public UPalBossBattleSequenceBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0040(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          IsBossDead;                                        // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsResultCompleted;                                 // 0x0049(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void CheckCombatFinish();
	void ExecuteUbergraph_PalBossBattleSequence_Combat(int32 EntryPoint);
	void OnBeginSequence();
	void OnDeadBoss(const struct FPalDeadInfo& DeadInfo);
	void SetTimerEnable(bool IsEnable);
	void TickSequence(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PalBossBattleSequence_Combat_C">();
	}
	static class UPalBossBattleSequence_Combat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPalBossBattleSequence_Combat_C>();
	}
};
static_assert(alignof(UPalBossBattleSequence_Combat_C) == 0x000008, "Wrong alignment on UPalBossBattleSequence_Combat_C");
static_assert(sizeof(UPalBossBattleSequence_Combat_C) == 0x000050, "Wrong size on UPalBossBattleSequence_Combat_C");
static_assert(offsetof(UPalBossBattleSequence_Combat_C, UberGraphFrame) == 0x000040, "Member 'UPalBossBattleSequence_Combat_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPalBossBattleSequence_Combat_C, IsBossDead) == 0x000048, "Member 'UPalBossBattleSequence_Combat_C::IsBossDead' has a wrong offset!");
static_assert(offsetof(UPalBossBattleSequence_Combat_C, IsResultCompleted) == 0x000049, "Member 'UPalBossBattleSequence_Combat_C::IsResultCompleted' has a wrong offset!");

}
