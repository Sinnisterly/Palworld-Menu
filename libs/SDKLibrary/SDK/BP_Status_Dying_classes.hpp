#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Status_Dying

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "Pal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Status_Dying.BP_Status_Dying_C
// 0x0058 (0x00A0 - 0x0048)
class UBP_Status_Dying_C final : public UPalStatusBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0048(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   FlagName;                                          // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnUpdateDying;                                     // 0x0058(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                           UpdateTimer;                                       // 0x0068(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnDyingEnd;                                        // 0x0070(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnDyingInterrupt;                                  // 0x0080(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AActor*                                 Action_Actor;                                      // 0x0090(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UWBP_DyingFriendLoupe_C*                DyingLoupe;                                        // 0x0098(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Status_Dying(int32 EntryPoint);
	void FlagControll(bool bIsDisable);
	void OnBeginStatus();
	void OnDyingEnd__DelegateSignature();
	void OnDyingInterrupt__DelegateSignature(bool IsInterrupting);
	void OnEndRescue(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
	void OnEndStatus();
	void OnStartRescue(class AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
	void OnUpdateDying__DelegateSignature(double DyingHP, double MaxDyingHP);
	void ProcessDeath();
	void SetupInteractTrigger(bool IsEnable);
	void StartBindInteract(class UPalInteractDelegates* InteractDelegates);
	void StartUnBindInteract(class UPalInteractDelegates* InteractDelegates);
	void TickStatus(float DeltaTime);
	void UpdateDyingWidget();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Status_Dying_C">();
	}
	static class UBP_Status_Dying_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Status_Dying_C>();
	}
};
static_assert(alignof(UBP_Status_Dying_C) == 0x000008, "Wrong alignment on UBP_Status_Dying_C");
static_assert(sizeof(UBP_Status_Dying_C) == 0x0000A0, "Wrong size on UBP_Status_Dying_C");
static_assert(offsetof(UBP_Status_Dying_C, UberGraphFrame) == 0x000048, "Member 'UBP_Status_Dying_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Status_Dying_C, FlagName) == 0x000050, "Member 'UBP_Status_Dying_C::FlagName' has a wrong offset!");
static_assert(offsetof(UBP_Status_Dying_C, OnUpdateDying) == 0x000058, "Member 'UBP_Status_Dying_C::OnUpdateDying' has a wrong offset!");
static_assert(offsetof(UBP_Status_Dying_C, UpdateTimer) == 0x000068, "Member 'UBP_Status_Dying_C::UpdateTimer' has a wrong offset!");
static_assert(offsetof(UBP_Status_Dying_C, OnDyingEnd) == 0x000070, "Member 'UBP_Status_Dying_C::OnDyingEnd' has a wrong offset!");
static_assert(offsetof(UBP_Status_Dying_C, OnDyingInterrupt) == 0x000080, "Member 'UBP_Status_Dying_C::OnDyingInterrupt' has a wrong offset!");
static_assert(offsetof(UBP_Status_Dying_C, Action_Actor) == 0x000090, "Member 'UBP_Status_Dying_C::Action_Actor' has a wrong offset!");
static_assert(offsetof(UBP_Status_Dying_C, DyingLoupe) == 0x000098, "Member 'UBP_Status_Dying_C::DyingLoupe' has a wrong offset!");

}
