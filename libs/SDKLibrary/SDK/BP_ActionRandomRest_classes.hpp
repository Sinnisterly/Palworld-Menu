#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActionRandomRest

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ActionRandomRest.BP_ActionRandomRest_C
// 0x0040 (0x0180 - 0x0140)
class UBP_ActionRandomRest_C final : public UPalActionBase
{
public:
	uint8                                         Pad_4198[0x8];                                     // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0140(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                           CurrentMontage;                                    // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalRandomRestInfo                     CurrentRestInfo;                                   // 0x0150(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                         CurrentLoopMaxNum;                                 // 0x0168(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrentLoopingCount;                               // 0x016C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TempRand;                                          // 0x0170(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ActionRandomRest(int32 EntryPoint);
	void OnBeginAction();
	void OnBlendOut_4551F62E41169AB9D4D27C8A2A1A7EE2(class FName NotifyName);
	void OnBlendOut_903852264ADDCC5C76468EB1B01885D1(class FName NotifyName);
	void OnCompleted_4551F62E41169AB9D4D27C8A2A1A7EE2(class FName NotifyName);
	void OnCompleted_903852264ADDCC5C76468EB1B01885D1(class FName NotifyName);
	void OnEndAction();
	void OnInterrupted_4551F62E41169AB9D4D27C8A2A1A7EE2(class FName NotifyName);
	void OnInterrupted_903852264ADDCC5C76468EB1B01885D1(class FName NotifyName);
	void OnNotifyBegin_4551F62E41169AB9D4D27C8A2A1A7EE2(class FName NotifyName);
	void OnNotifyBegin_903852264ADDCC5C76468EB1B01885D1(class FName NotifyName);
	void OnNotifyEnd_4551F62E41169AB9D4D27C8A2A1A7EE2(class FName NotifyName);
	void OnNotifyEnd_903852264ADDCC5C76468EB1B01885D1(class FName NotifyName);
	void Play_Idle();
	void Play_MontageLoop();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionRandomRest_C">();
	}
	static class UBP_ActionRandomRest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionRandomRest_C>();
	}
};
static_assert(alignof(UBP_ActionRandomRest_C) == 0x000010, "Wrong alignment on UBP_ActionRandomRest_C");
static_assert(sizeof(UBP_ActionRandomRest_C) == 0x000180, "Wrong size on UBP_ActionRandomRest_C");
static_assert(offsetof(UBP_ActionRandomRest_C, UberGraphFrame) == 0x000140, "Member 'UBP_ActionRandomRest_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_ActionRandomRest_C, CurrentMontage) == 0x000148, "Member 'UBP_ActionRandomRest_C::CurrentMontage' has a wrong offset!");
static_assert(offsetof(UBP_ActionRandomRest_C, CurrentRestInfo) == 0x000150, "Member 'UBP_ActionRandomRest_C::CurrentRestInfo' has a wrong offset!");
static_assert(offsetof(UBP_ActionRandomRest_C, CurrentLoopMaxNum) == 0x000168, "Member 'UBP_ActionRandomRest_C::CurrentLoopMaxNum' has a wrong offset!");
static_assert(offsetof(UBP_ActionRandomRest_C, CurrentLoopingCount) == 0x00016C, "Member 'UBP_ActionRandomRest_C::CurrentLoopingCount' has a wrong offset!");
static_assert(offsetof(UBP_ActionRandomRest_C, TempRand) == 0x000170, "Member 'UBP_ActionRandomRest_C::TempRand' has a wrong offset!");

}

