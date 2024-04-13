#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_Trap_MovingPanel

#include "Basic.hpp"

#include "BP_Action_Trap_MovingPanel_classes.hpp"
#include "BP_Action_Trap_MovingPanel_parameters.hpp"


namespace SDK
{

// Function BP_Action_Trap_MovingPanel.BP_Action_Trap_MovingPanel_C.ChangeParam
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalFacialEyeType                       Facial                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  WalkSpeed                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Trap_MovingPanel_C::ChangeParam(EPalFacialEyeType Facial, double WalkSpeed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Trap_MovingPanel_C", "ChangeParam");

	Params::BP_Action_Trap_MovingPanel_C_ChangeParam Parms{};

	Parms.Facial = Facial;
	Parms.WalkSpeed = WalkSpeed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Trap_MovingPanel.BP_Action_Trap_MovingPanel_C.ExecuteUbergraph_BP_Action_Trap_MovingPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Trap_MovingPanel_C::ExecuteUbergraph_BP_Action_Trap_MovingPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Trap_MovingPanel_C", "ExecuteUbergraph_BP_Action_Trap_MovingPanel");

	Params::BP_Action_Trap_MovingPanel_C_ExecuteUbergraph_BP_Action_Trap_MovingPanel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Trap_MovingPanel.BP_Action_Trap_MovingPanel_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_Action_Trap_MovingPanel_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Trap_MovingPanel_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Trap_MovingPanel.BP_Action_Trap_MovingPanel_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_Action_Trap_MovingPanel_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Trap_MovingPanel_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Trap_MovingPanel.BP_Action_Trap_MovingPanel_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Trap_MovingPanel_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Trap_MovingPanel_C", "TickAction");

	Params::BP_Action_Trap_MovingPanel_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
