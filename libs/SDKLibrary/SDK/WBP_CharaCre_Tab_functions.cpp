#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharaCre_Tab

#include "Basic.hpp"

#include "WBP_CharaCre_Tab_classes.hpp"
#include "WBP_CharaCre_Tab_parameters.hpp"


namespace SDK
{

// Function WBP_CharaCre_Tab.WBP_CharaCre_Tab_C.AnmEvent_Focus
// (BlueprintCallable, BlueprintEvent)

void UWBP_CharaCre_Tab_C::AnmEvent_Focus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_Tab_C", "AnmEvent_Focus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharaCre_Tab.WBP_CharaCre_Tab_C.AnmEvent_Normal
// (BlueprintCallable, BlueprintEvent)

void UWBP_CharaCre_Tab_C::AnmEvent_Normal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_Tab_C", "AnmEvent_Normal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharaCre_Tab.WBP_CharaCre_Tab_C.BndEvt__WBP_CharaCre_Tab_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_Tab_C::BndEvt__WBP_CharaCre_Tab_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_Tab_C", "BndEvt__WBP_CharaCre_Tab_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_CharaCre_Tab_C_BndEvt__WBP_CharaCre_Tab_WBP_PalCommonButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_Tab.WBP_CharaCre_Tab_C.ExecuteUbergraph_WBP_CharaCre_Tab
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_Tab_C::ExecuteUbergraph_WBP_CharaCre_Tab(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_Tab_C", "ExecuteUbergraph_WBP_CharaCre_Tab");

	Params::WBP_CharaCre_Tab_C_ExecuteUbergraph_WBP_CharaCre_Tab Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_Tab.WBP_CharaCre_Tab_C.GetBindedCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// E_UICharacterMakeCategory               CategoryType                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_Tab_C::GetBindedCategory(E_UICharacterMakeCategory* CategoryType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_Tab_C", "GetBindedCategory");

	Params::WBP_CharaCre_Tab_C_GetBindedCategory Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CategoryType != nullptr)
		*CategoryType = Parms.CategoryType;
}


// Function WBP_CharaCre_Tab.WBP_CharaCre_Tab_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CharaCre_Tab_C*              TabWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharaCre_Tab_C::OnClicked__DelegateSignature(class UWBP_CharaCre_Tab_C* TabWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_Tab_C", "OnClicked__DelegateSignature");

	Params::WBP_CharaCre_Tab_C_OnClicked__DelegateSignature Parms{};

	Parms.TabWidget = TabWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharaCre_Tab.WBP_CharaCre_Tab_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CharaCre_Tab_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharaCre_Tab_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

}

