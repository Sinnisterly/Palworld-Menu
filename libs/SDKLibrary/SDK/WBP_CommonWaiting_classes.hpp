#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CommonWaiting

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CommonWaiting.WBP_CommonWaiting_C
// 0x0018 (0x0420 - 0x0408)
class UWBP_CommonWaiting_C final : public UPalUserWidget
{
public:
	class UBP_PalTextBlock_C*                     BP_PalTextBlock_C_17;                              // 0x0408(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                      CircularThrobber_31;                               // 0x0410(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_14;                                          // 0x0418(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetText(const class FText& Text);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CommonWaiting_C">();
	}
	static class UWBP_CommonWaiting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CommonWaiting_C>();
	}
};
static_assert(alignof(UWBP_CommonWaiting_C) == 0x000008, "Wrong alignment on UWBP_CommonWaiting_C");
static_assert(sizeof(UWBP_CommonWaiting_C) == 0x000420, "Wrong size on UWBP_CommonWaiting_C");
static_assert(offsetof(UWBP_CommonWaiting_C, BP_PalTextBlock_C_17) == 0x000408, "Member 'UWBP_CommonWaiting_C::BP_PalTextBlock_C_17' has a wrong offset!");
static_assert(offsetof(UWBP_CommonWaiting_C, CircularThrobber_31) == 0x000410, "Member 'UWBP_CommonWaiting_C::CircularThrobber_31' has a wrong offset!");
static_assert(offsetof(UWBP_CommonWaiting_C, Image_14) == 0x000418, "Member 'UWBP_CommonWaiting_C::Image_14' has a wrong offset!");

}
