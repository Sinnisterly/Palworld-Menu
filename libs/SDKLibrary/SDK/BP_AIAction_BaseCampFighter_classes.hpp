#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_BaseCampFighter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIAction_BaseCampFighter.BP_AIAction_BaseCampFighter_C
// 0x0008 (0x0148 - 0x0140)
class UBP_AIAction_BaseCampFighter_C final : public UPalAIActionBaseCampFighter
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ActionResume(class APawn* ControlledPawn);
	void ActionStart(class APawn* ControlledPawn);
	void ChangeActionWait();
	void ExecuteUbergraph_BP_AIAction_BaseCampFighter(int32 EntryPoint);
	void NotifyOrderCommand(const EPalMapBaseCampWorkerOrderType OrderType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_BaseCampFighter_C">();
	}
	static class UBP_AIAction_BaseCampFighter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_BaseCampFighter_C>();
	}
};
static_assert(alignof(UBP_AIAction_BaseCampFighter_C) == 0x000008, "Wrong alignment on UBP_AIAction_BaseCampFighter_C");
static_assert(sizeof(UBP_AIAction_BaseCampFighter_C) == 0x000148, "Wrong size on UBP_AIAction_BaseCampFighter_C");
static_assert(offsetof(UBP_AIAction_BaseCampFighter_C, UberGraphFrame) == 0x000140, "Member 'UBP_AIAction_BaseCampFighter_C::UberGraphFrame' has a wrong offset!");

}

