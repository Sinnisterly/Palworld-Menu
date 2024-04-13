#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_InventoryEquipment_ItemInfo_addeffect

#include "Basic.hpp"

#include "WBP_InventoryEquipment_ItemInfo_addeffect_classes.hpp"
#include "WBP_InventoryEquipment_ItemInfo_addeffect_parameters.hpp"


namespace SDK
{

// Function WBP_InventoryEquipment_ItemInfo_addeffect.WBP_InventoryEquipment_ItemInfo_addeffect_C.SetImportantDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InventoryEquipment_ItemInfo_addeffect_C::SetImportantDescription(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_ItemInfo_addeffect_C", "SetImportantDescription");

	Params::WBP_InventoryEquipment_ItemInfo_addeffect_C_SetImportantDescription Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InventoryEquipment_ItemInfo_addeffect.WBP_InventoryEquipment_ItemInfo_addeffect_C.SetSimpleDescription
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InventoryEquipment_ItemInfo_addeffect_C::SetSimpleDescription(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InventoryEquipment_ItemInfo_addeffect_C", "SetSimpleDescription");

	Params::WBP_InventoryEquipment_ItemInfo_addeffect_C_SetSimpleDescription Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

}
