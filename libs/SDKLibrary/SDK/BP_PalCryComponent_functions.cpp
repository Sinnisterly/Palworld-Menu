#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PalCryComponent

#include "Basic.hpp"

#include "BP_PalCryComponent_classes.hpp"
#include "BP_PalCryComponent_parameters.hpp"


namespace SDK
{

// Function BP_PalCryComponent.BP_PalCryComponent_C.CheckAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalActionBase*                   Action                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PalCryComponent_C::CheckAction(const class UPalActionBase* Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCryComponent_C", "CheckAction");

	Params::BP_PalCryComponent_C_CheckAction Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalCryComponent.BP_PalCryComponent_C.CheckAIAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PalCryComponent_C::CheckAIAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCryComponent_C", "CheckAIAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalCryComponent.BP_PalCryComponent_C.CheckHungerType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalStatusHungerType                    Current                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPalStatusHungerType                    Last                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalCryComponent_C::CheckHungerType(EPalStatusHungerType Current, EPalStatusHungerType Last)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCryComponent_C", "CheckHungerType");

	Params::BP_PalCryComponent_C_CheckHungerType Parms{};

	Parms.Current = Current;
	Parms.Last = Last;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalCryComponent.BP_PalCryComponent_C.CheckWorkerEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PalCryComponent_C::CheckWorkerEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCryComponent_C", "CheckWorkerEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalCryComponent.BP_PalCryComponent_C.ExecuteUbergraph_BP_PalCryComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalCryComponent_C::ExecuteUbergraph_BP_PalCryComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCryComponent_C", "ExecuteUbergraph_BP_PalCryComponent");

	Params::BP_PalCryComponent_C_ExecuteUbergraph_BP_PalCryComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalCryComponent.BP_PalCryComponent_C.GetPalID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UBP_PalCryComponent_C::GetPalID()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCryComponent_C", "GetPalID");

	Params::BP_PalCryComponent_C_GetPalID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PalCryComponent.BP_PalCryComponent_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_PalCryComponent_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCryComponent_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalCryComponent.BP_PalCryComponent_C.OnPlayCryWithAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_PalEmo                                PalEmo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalCryComponent_C::OnPlayCryWithAction(E_PalEmo PalEmo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCryComponent_C", "OnPlayCryWithAction");

	Params::BP_PalCryComponent_C_OnPlayCryWithAction Parms{};

	Parms.PalEmo = PalEmo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalCryComponent.BP_PalCryComponent_C.OnSpawnPal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bIsActive                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalCryComponent_C::OnSpawnPal(bool Param_bIsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCryComponent_C", "OnSpawnPal");

	Params::BP_PalCryComponent_C_OnSpawnPal Parms{};

	Parms.Param_bIsActive = Param_bIsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalCryComponent.BP_PalCryComponent_C.PlayCry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EmoState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalCryComponent_C::PlayCry(class FName EmoState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCryComponent_C", "PlayCry");

	Params::BP_PalCryComponent_C_PlayCry Parms{};

	Parms.EmoState = EmoState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalCryComponent.BP_PalCryComponent_C.ProcessIdleCry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalCryComponent_C::ProcessIdleCry(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCryComponent_C", "ProcessIdleCry");

	Params::BP_PalCryComponent_C_ProcessIdleCry Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalCryComponent.BP_PalCryComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_PalCryComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCryComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalCryComponent.BP_PalCryComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalCryComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCryComponent_C", "ReceiveTick");

	Params::BP_PalCryComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

