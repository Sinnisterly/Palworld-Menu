#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIActionRideCall

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_AIAction_CallBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIActionRideCall.BP_AIActionRideCall_C
// 0x0008 (0x0180 - 0x0178)
class UBP_AIActionRideCall_C final : public UBP_AIAction_CallBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_AIActionRideCall_C;              // 0x0178(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void CanRide(bool* Param_CanRide);
	void DoRide(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIActionRideCall(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIActionRideCall_C">();
	}
	static class UBP_AIActionRideCall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIActionRideCall_C>();
	}
};
static_assert(alignof(UBP_AIActionRideCall_C) == 0x000008, "Wrong alignment on UBP_AIActionRideCall_C");
static_assert(sizeof(UBP_AIActionRideCall_C) == 0x000180, "Wrong size on UBP_AIActionRideCall_C");
static_assert(offsetof(UBP_AIActionRideCall_C, UberGraphFrame_BP_AIActionRideCall_C) == 0x000178, "Member 'UBP_AIActionRideCall_C::UberGraphFrame_BP_AIActionRideCall_C' has a wrong offset!");

}

