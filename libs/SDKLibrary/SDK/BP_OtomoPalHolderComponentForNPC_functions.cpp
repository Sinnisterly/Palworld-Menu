#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OtomoPalHolderComponentForNPC

#include "Basic.hpp"

#include "BP_OtomoPalHolderComponentForNPC_classes.hpp"
#include "BP_OtomoPalHolderComponentForNPC_parameters.hpp"


namespace SDK
{

// Function BP_OtomoPalHolderComponentForNPC.BP_OtomoPalHolderComponentForNPC_C.ExecuteUbergraph_BP_OtomoPalHolderComponentForNPC
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_OtomoPalHolderComponentForNPC_C::ExecuteUbergraph_BP_OtomoPalHolderComponentForNPC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OtomoPalHolderComponentForNPC_C", "ExecuteUbergraph_BP_OtomoPalHolderComponentForNPC");

	Params::BP_OtomoPalHolderComponentForNPC_C_ExecuteUbergraph_BP_OtomoPalHolderComponentForNPC Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_OtomoPalHolderComponentForNPC.BP_OtomoPalHolderComponentForNPC_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_OtomoPalHolderComponentForNPC_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_OtomoPalHolderComponentForNPC_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

