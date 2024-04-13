#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_Warning_PointWalk

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "BP_AIAction_CanCombatBase_classes.hpp"
#include "Engine_structs.hpp"
#include "EWarningPalAIMoveType_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIAction_Warning_PointWalk.BP_AIAction_Warning_PointWalk_C
// 0x00A8 (0x0200 - 0x0158)
class UBP_AIAction_Warning_PointWalk_C final : public UBP_AIAction_CanCombatBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AIAction_Warning_PointWalk_C;    // 0x0158(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                AttentionPoint;                                    // 0x0160(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        ConstWalkSpeed;                                    // 0x0178(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MoveGoalLocation;                                  // 0x0180(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        AcceptanceDistance;                                // 0x0198(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TempDeltaTime;                                     // 0x01A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        Timer;                                             // 0x01A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        RandomWalkStartTime;                               // 0x01B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TurnR_Direction;                                   // 0x01B8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TurnL_Direction;                                   // 0x01D0(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EWarningPalAIMoveType                         MoveMode;                                          // 0x01E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E71[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        TimeOutTime;                                       // 0x01F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         TurnAction;                                        // 0x01F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ActionAbort(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void CancelTurnAction();
	void ExecuteUbergraph_BP_AIAction_Warning_PointWalk(int32 EntryPoint);
	void PlayActionTurnIfNoneAction(const struct FVector& Direction);
	void Setup(const struct FVector& AttentionLocation);
	void StartJump();
	void TurnL45();
	void TurnMode();
	void TurnR45();
	void UpdateMoveGoal();
	void ActionPause(class APawn* ControlledPawn);
	void ActionResume(class APawn* ControlledPawn);
	void ActionStart(class APawn* ControlledPawn);
	void SoundEvent(const struct FVector& EmitLocation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_Warning_PointWalk_C">();
	}
	static class UBP_AIAction_Warning_PointWalk_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_Warning_PointWalk_C>();
	}
};
static_assert(alignof(UBP_AIAction_Warning_PointWalk_C) == 0x000008, "Wrong alignment on UBP_AIAction_Warning_PointWalk_C");
static_assert(sizeof(UBP_AIAction_Warning_PointWalk_C) == 0x000200, "Wrong size on UBP_AIAction_Warning_PointWalk_C");
static_assert(offsetof(UBP_AIAction_Warning_PointWalk_C, UberGraphFrame_BP_AIAction_Warning_PointWalk_C) == 0x000158, "Member 'UBP_AIAction_Warning_PointWalk_C::UberGraphFrame_BP_AIAction_Warning_PointWalk_C' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Warning_PointWalk_C, AttentionPoint) == 0x000160, "Member 'UBP_AIAction_Warning_PointWalk_C::AttentionPoint' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Warning_PointWalk_C, ConstWalkSpeed) == 0x000178, "Member 'UBP_AIAction_Warning_PointWalk_C::ConstWalkSpeed' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Warning_PointWalk_C, MoveGoalLocation) == 0x000180, "Member 'UBP_AIAction_Warning_PointWalk_C::MoveGoalLocation' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Warning_PointWalk_C, AcceptanceDistance) == 0x000198, "Member 'UBP_AIAction_Warning_PointWalk_C::AcceptanceDistance' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Warning_PointWalk_C, TempDeltaTime) == 0x0001A0, "Member 'UBP_AIAction_Warning_PointWalk_C::TempDeltaTime' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Warning_PointWalk_C, Timer) == 0x0001A8, "Member 'UBP_AIAction_Warning_PointWalk_C::Timer' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Warning_PointWalk_C, RandomWalkStartTime) == 0x0001B0, "Member 'UBP_AIAction_Warning_PointWalk_C::RandomWalkStartTime' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Warning_PointWalk_C, TurnR_Direction) == 0x0001B8, "Member 'UBP_AIAction_Warning_PointWalk_C::TurnR_Direction' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Warning_PointWalk_C, TurnL_Direction) == 0x0001D0, "Member 'UBP_AIAction_Warning_PointWalk_C::TurnL_Direction' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Warning_PointWalk_C, MoveMode) == 0x0001E8, "Member 'UBP_AIAction_Warning_PointWalk_C::MoveMode' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Warning_PointWalk_C, TimeOutTime) == 0x0001F0, "Member 'UBP_AIAction_Warning_PointWalk_C::TimeOutTime' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_Warning_PointWalk_C, TurnAction) == 0x0001F8, "Member 'UBP_AIAction_Warning_PointWalk_C::TurnAction' has a wrong offset!");

}

