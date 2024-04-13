#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AIAction_CombatPal

#include "Basic.hpp"

#include "BP_AIAction_CombatPal_classes.hpp"
#include "BP_AIAction_CombatPal_parameters.hpp"


namespace SDK
{

// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPawnActionResult                       WithResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CombatPal_C::ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "ActionFinished");

	Params::BP_AIAction_CombatPal_C_ActionFinished Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.ActionPause
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CombatPal_C::ActionPause(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "ActionPause");

	Params::BP_AIAction_CombatPal_C_ActionPause Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CombatPal_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "ActionStart");

	Params::BP_AIAction_CombatPal_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CombatPal_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "ActionTick");

	Params::BP_AIAction_CombatPal_C_ActionTick Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.AddDamageResponse
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_CombatPal_C::AddDamageResponse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "AddDamageResponse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.AddWarpStackTimer
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_CombatPal_C::AddWarpStackTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "AddWarpStackTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.AttackNearestMapObject
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReachAble                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CombatPal_C::AttackNearestMapObject(bool* ReachAble)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "AttackNearestMapObject");

	Params::BP_AIAction_CombatPal_C_AttackNearestMapObject Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ReachAble != nullptr)
		*ReachAble = Parms.ReachAble;
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.ChangeCombatStartLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Change                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CombatPal_C::ChangeCombatStartLocation(bool* Change)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "ChangeCombatStartLocation");

	Params::BP_AIAction_CombatPal_C_ChangeCombatStartLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Change != nullptr)
		*Change = Parms.Change;
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.ChangeNextAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_CombatPal_C::ChangeNextAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "ChangeNextAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.CheckDeadTimer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_CombatPal_C::CheckDeadTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "CheckDeadTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.DamageResponseForCombatPal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageResult                 DmgResult                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_AIAction_CombatPal_C::DamageResponseForCombatPal(const struct FPalDamageResult& DmgResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "DamageResponseForCombatPal");

	Params::BP_AIAction_CombatPal_C_DamageResponseForCombatPal Parms{};

	Parms.DmgResult = std::move(DmgResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.ExecuteUbergraph_BP_AIAction_CombatPal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CombatPal_C::ExecuteUbergraph_BP_AIAction_CombatPal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "ExecuteUbergraph_BP_AIAction_CombatPal");

	Params::BP_AIAction_CombatPal_C_ExecuteUbergraph_BP_AIAction_CombatPal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.FindWazaClass
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   SlotIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           WazaAction                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CombatPal_C::FindWazaClass(int32 SlotIndex, class UClass** WazaAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "FindWazaClass");

	Params::BP_AIAction_CombatPal_C_FindWazaClass Parms{};

	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (WazaAction != nullptr)
		*WazaAction = Parms.WazaAction;
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.Get Next Action Slot ID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SlotID                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CombatPal_C::Get_Next_Action_Slot_ID(int32* SlotID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "Get Next Action Slot ID");

	Params::BP_AIAction_CombatPal_C_Get_Next_Action_Slot_ID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SlotID != nullptr)
		*SlotID = Parms.SlotID;
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.GetActorActionComponentRef
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalActionComponent*              ActionComp                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CombatPal_C::GetActorActionComponentRef(class UPalActionComponent** ActionComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "GetActorActionComponentRef");

	Params::BP_AIAction_CombatPal_C_GetActorActionComponentRef Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ActionComp != nullptr)
		*ActionComp = Parms.ActionComp;
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.GetControllerRef
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalAIController*                 PalAIController                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CombatPal_C::GetControllerRef(class APalAIController** PalAIController)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "GetControllerRef");

	Params::BP_AIAction_CombatPal_C_GetControllerRef Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PalAIController != nullptr)
		*PalAIController = Parms.PalAIController;
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.GetSelfPalBlackBoard
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_PalAIBlackboard_Common_C*     PalBB                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CombatPal_C::GetSelfPalBlackBoard(class UBP_PalAIBlackboard_Common_C** PalBB)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "GetSelfPalBlackBoard");

	Params::BP_AIAction_CombatPal_C_GetSelfPalBlackBoard Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PalBB != nullptr)
		*PalBB = Parms.PalBB;
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.GetSkillSlotRef
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalActiveSkillSlot*              SkillSlot                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CombatPal_C::GetSkillSlotRef(class UPalActiveSkillSlot** SkillSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "GetSkillSlotRef");

	Params::BP_AIAction_CombatPal_C_GetSkillSlotRef Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SkillSlot != nullptr)
		*SkillSlot = Parms.SkillSlot;
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.GetStaticParamCompRef
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalStaticCharacterParameterComponent*StaticParamComp                                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CombatPal_C::GetStaticParamCompRef(class UPalStaticCharacterParameterComponent** StaticParamComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "GetStaticParamCompRef");

	Params::BP_AIAction_CombatPal_C_GetStaticParamCompRef Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (StaticParamComp != nullptr)
		*StaticParamComp = Parms.StaticParamComp;
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.Interrupt Action
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SlotID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CombatPal_C::Interrupt_Action(int32 SlotID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "Interrupt Action");

	Params::BP_AIAction_CombatPal_C_Interrupt_Action Parms{};

	Parms.SlotID = SlotID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.MoveToTarget
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_CombatPal_C::MoveToTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "MoveToTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.NextAction_ByApproachFailure
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_CombatPal_C::NextAction_ByApproachFailure()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "NextAction_ByApproachFailure");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.OnChildActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPawnAction*                      Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPawnActionResult                       WithResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CombatPal_C::OnChildActionFinished(class UPawnAction* Action, EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "OnChildActionFinished");

	Params::BP_AIAction_CombatPal_C_OnChildActionFinished Parms{};

	Parms.Action = Action;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.OnDeadDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                     DeadInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_AIAction_CombatPal_C::OnDeadDelegate_Event(const struct FPalDeadInfo& DeadInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "OnDeadDelegate_Event");

	Params::BP_AIAction_CombatPal_C_OnDeadDelegate_Event Parms{};

	Parms.DeadInfo = std::move(DeadInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.OnPlayAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalActionBase*                   Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CombatPal_C::OnPlayAction(class UPalActionBase* Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "OnPlayAction");

	Params::BP_AIAction_CombatPal_C_OnPlayAction Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.PlayerCameraCheck
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    AttackAble                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CombatPal_C::PlayerCameraCheck(bool* AttackAble)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "PlayerCameraCheck");

	Params::BP_AIAction_CombatPal_C_PlayerCameraCheck Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AttackAble != nullptr)
		*AttackAble = Parms.AttackAble;
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.PlayWazaAction
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_CombatPal_C::PlayWazaAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "PlayWazaAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.PlayWazaDarknessStatus
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_CombatPal_C::PlayWazaDarknessStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "PlayWazaDarknessStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.RemoveDamageResponse
// (Private, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_CombatPal_C::RemoveDamageResponse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "RemoveDamageResponse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.ResetWorpStackTimer
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_CombatPal_C::ResetWorpStackTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "ResetWorpStackTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.SetupSkillSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_CombatPal_C::SetupSkillSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "SetupSkillSlot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.SightCheckAndResponseForCombatPal
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ChangeNextAction                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CombatPal_C::SightCheckAndResponseForCombatPal(bool* ChangeNextAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "SightCheckAndResponseForCombatPal");

	Params::BP_AIAction_CombatPal_C_SightCheckAndResponseForCombatPal Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ChangeNextAction != nullptr)
		*ChangeNextAction = Parms.ChangeNextAction;
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.StartNextAction_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalActionComponent*              ActionComponent                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CombatPal_C::StartNextAction_Event(const class UPalActionComponent* ActionComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "StartNextAction_Event");

	Params::BP_AIAction_CombatPal_C_StartNextAction_Event Parms{};

	Parms.ActionComponent = ActionComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.TargetChange
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_CombatPal_C::TargetChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "TargetChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.TargetIsValid
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Valid                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_CombatPal_C::TargetIsValid(bool* Valid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "TargetIsValid");

	Params::BP_AIAction_CombatPal_C_TargetIsValid Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;
}


// Function BP_AIAction_CombatPal.BP_AIAction_CombatPal_C.WarpToSpawnerPoint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_CombatPal_C::WarpToSpawnerPoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_CombatPal_C", "WarpToSpawnerPoint");

	UObject::ProcessEvent(Func, nullptr);
}

}

