#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CaptureWire

#include "Basic.hpp"

#include "BP_CaptureWire_classes.hpp"
#include "BP_CaptureWire_parameters.hpp"


namespace SDK
{

// Function BP_CaptureWire.BP_CaptureWire_C.CaptureEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                     DeadInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_CaptureWire_C::CaptureEffect(const struct FPalDeadInfo& DeadInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureWire_C", "CaptureEffect");

	Params::BP_CaptureWire_C_CaptureEffect Parms{};

	Parms.DeadInfo = std::move(DeadInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CaptureWire.BP_CaptureWire_C.ExecuteUbergraph_BP_CaptureWire
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CaptureWire_C::ExecuteUbergraph_BP_CaptureWire(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureWire_C", "ExecuteUbergraph_BP_CaptureWire");

	Params::BP_CaptureWire_C_ExecuteUbergraph_BP_CaptureWire Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CaptureWire.BP_CaptureWire_C.FixMonsterInSphere
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CaptureWire_C::FixMonsterInSphere()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureWire_C", "FixMonsterInSphere");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CaptureWire.BP_CaptureWire_C.RagDollStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CaptureWire_C::RagDollStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureWire_C", "RagDollStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CaptureWire.BP_CaptureWire_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CaptureWire_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureWire_C", "ReceiveTick");

	Params::BP_CaptureWire_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CaptureWire.BP_CaptureWire_C.SetAnchorGoal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CaptureWire_C::SetAnchorGoal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureWire_C", "SetAnchorGoal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CaptureWire.BP_CaptureWire_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    TargetPal                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_CaptureWire_C::Setup(class APalCharacter* TargetPal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureWire_C", "Setup");

	Params::BP_CaptureWire_C_Setup Parms{};

	Parms.TargetPal = TargetPal;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CaptureWire.BP_CaptureWire_C.UpdateWireMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_CaptureWire_C::UpdateWireMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CaptureWire_C", "UpdateWireMesh");

	UObject::ProcessEvent(Func, nullptr);
}

}
