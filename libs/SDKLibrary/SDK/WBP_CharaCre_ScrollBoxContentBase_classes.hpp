#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharaCre_ScrollBoxContentBase

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CharaCre_ScrollBoxContentBase.WBP_CharaCre_ScrollBoxContentBase_C
// 0x0020 (0x0428 - 0x0408)
class UWBP_CharaCre_ScrollBoxContentBase_C : public UPalUserWidget
{
public:
	FMulticastInlineDelegateProperty_             OnNotifyOpenSelectColorWindow;                     // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnNotifyCloseSelectColorWIndow;                    // 0x0418(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void ApplyMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo);
	void GetRestoreFocusTarget(class UWidget** Widget);
	void GetTopFocusTarget(class UWidget** Widget);
	void OnClosedSelectColorWindow_Internal(class UPalHUDDispatchParameterBase* Param_Param);
	void OnNotifyCloseSelectColorWIndow__DelegateSignature();
	void OnNotifyOpenSelectColorWindow__DelegateSignature();
	void OpenColorSelectWindow(class UBP_CharaCre_ColorSelectWindowDispatchParameter_C* Parameter);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CharaCre_ScrollBoxContentBase_C">();
	}
	static class UWBP_CharaCre_ScrollBoxContentBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CharaCre_ScrollBoxContentBase_C>();
	}
};
static_assert(alignof(UWBP_CharaCre_ScrollBoxContentBase_C) == 0x000008, "Wrong alignment on UWBP_CharaCre_ScrollBoxContentBase_C");
static_assert(sizeof(UWBP_CharaCre_ScrollBoxContentBase_C) == 0x000428, "Wrong size on UWBP_CharaCre_ScrollBoxContentBase_C");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContentBase_C, OnNotifyOpenSelectColorWindow) == 0x000408, "Member 'UWBP_CharaCre_ScrollBoxContentBase_C::OnNotifyOpenSelectColorWindow' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContentBase_C, OnNotifyCloseSelectColorWIndow) == 0x000418, "Member 'UWBP_CharaCre_ScrollBoxContentBase_C::OnNotifyCloseSelectColorWIndow' has a wrong offset!");

}

