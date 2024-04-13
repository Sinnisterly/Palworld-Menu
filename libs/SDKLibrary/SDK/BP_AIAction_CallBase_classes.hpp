#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_CallBase

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIAction_CallBase.BP_AIAction_CallBase_C
// 0x0048 (0x0178 - 0x0130)
class UBP_AIAction_CallBase_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0130(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   CallApproachSpeedName;                             // 0x0138(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          ApproachTarget;                                    // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          OwnerChara;                                        // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                        WalkSpeedMulti;                                    // 0x0150(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSimpleMoveToActor;                               // 0x0158(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41C9[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                PrevTargetLocation;                                // 0x0160(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult);
	void ActionStart(class APawn* ControlledPawn);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BP_AIAction_CallBase(int32 EntryPoint);
	void GetMasterCameraRotate(struct FRotator* CameraRotate);
	void IsInteractingPlayer(bool* IsInteracting);
	void OnChildActionFinished(class UPawnAction* Action, EPawnActionResult WithResult);
	void OnCoopRelease_Event();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_CallBase_C">();
	}
	static class UBP_AIAction_CallBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_CallBase_C>();
	}
};
static_assert(alignof(UBP_AIAction_CallBase_C) == 0x000008, "Wrong alignment on UBP_AIAction_CallBase_C");
static_assert(sizeof(UBP_AIAction_CallBase_C) == 0x000178, "Wrong size on UBP_AIAction_CallBase_C");
static_assert(offsetof(UBP_AIAction_CallBase_C, UberGraphFrame) == 0x000130, "Member 'UBP_AIAction_CallBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CallBase_C, CallApproachSpeedName) == 0x000138, "Member 'UBP_AIAction_CallBase_C::CallApproachSpeedName' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CallBase_C, ApproachTarget) == 0x000140, "Member 'UBP_AIAction_CallBase_C::ApproachTarget' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CallBase_C, OwnerChara) == 0x000148, "Member 'UBP_AIAction_CallBase_C::OwnerChara' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CallBase_C, WalkSpeedMulti) == 0x000150, "Member 'UBP_AIAction_CallBase_C::WalkSpeedMulti' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CallBase_C, IsSimpleMoveToActor) == 0x000158, "Member 'UBP_AIAction_CallBase_C::IsSimpleMoveToActor' has a wrong offset!");
static_assert(offsetof(UBP_AIAction_CallBase_C, PrevTargetLocation) == 0x000160, "Member 'UBP_AIAction_CallBase_C::PrevTargetLocation' has a wrong offset!");

}
