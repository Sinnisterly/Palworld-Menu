#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIActionRiding

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIActionRiding.BP_AIActionRiding_C
// 0x0028 (0x0158 - 0x0130)
class UBP_AIActionRiding_C final : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0130(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class APalCharacter*                          RidingCharacter;                                   // 0x0138(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   RidingSpeedUpFlagName;                             // 0x0140(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OwnerPawn;                                         // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsRiding;                                         // 0x0150(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ActionStart(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIActionRiding(int32 EntryPoint);
	void OnCoopReleaseDelegate______0();
	void SetRidingCharacter(class APalCharacter* Param_RidingCharacter);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIActionRiding_C">();
	}
	static class UBP_AIActionRiding_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIActionRiding_C>();
	}
};
static_assert(alignof(UBP_AIActionRiding_C) == 0x000008, "Wrong alignment on UBP_AIActionRiding_C");
static_assert(sizeof(UBP_AIActionRiding_C) == 0x000158, "Wrong size on UBP_AIActionRiding_C");
static_assert(offsetof(UBP_AIActionRiding_C, UberGraphFrame) == 0x000130, "Member 'UBP_AIActionRiding_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_AIActionRiding_C, RidingCharacter) == 0x000138, "Member 'UBP_AIActionRiding_C::RidingCharacter' has a wrong offset!");
static_assert(offsetof(UBP_AIActionRiding_C, RidingSpeedUpFlagName) == 0x000140, "Member 'UBP_AIActionRiding_C::RidingSpeedUpFlagName' has a wrong offset!");
static_assert(offsetof(UBP_AIActionRiding_C, OwnerPawn) == 0x000148, "Member 'UBP_AIActionRiding_C::OwnerPawn' has a wrong offset!");
static_assert(offsetof(UBP_AIActionRiding_C, bIsRiding) == 0x000150, "Member 'UBP_AIActionRiding_C::bIsRiding' has a wrong offset!");

}
