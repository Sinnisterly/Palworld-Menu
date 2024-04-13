#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharaCre_ScrollBoxContent_Hair

#include "Basic.hpp"

#include "WBP_CharaCre_ScrollBoxContentBase_classes.hpp"
#include "Engine_structs.hpp"
#include "Pal_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_CharaCre_ScrollBoxContent_Hair.WBP_CharaCre_ScrollBoxContent_Hair_C
// 0x0090 (0x04B8 - 0x0428)
class UWBP_CharaCre_ScrollBoxContent_Hair_C final : public UWBP_CharaCre_ScrollBoxContentBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0428(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_CharaCre_ColorSelect_sq_C*         WBP_CharaCre_ColorSelect_sq_Hair;                  // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CharaCre_PartsSelectPanel_C*       WBP_MeshSelectPanel_Hair;                          // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FName, struct FPalCharacterCreationMeshPresetDataRow> HairMeshMap;                                       // 0x0440(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FLinearColor>                   HairColorPreset;                                   // 0x0490(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnSelectedHairColor;                               // 0x04A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWidget*                                RestoreFocusWIdget;                                // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void ApplyMakeInfo(const struct FPalPlayerDataCharacterMakeInfo& MakeInfo);
	void BndEvt__WBP_CharaCre_ScrollBoxContent_Hair_WBP_CharaCre_ColorSelect_sq_Hair_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWBP_CharaCre_ColorSelect_sq_C* Widget);
	void Construct();
	void ExecuteUbergraph_WBP_CharaCre_ScrollBoxContent_Hair(int32 EntryPoint);
	void GetRestoreFocusTarget(class UWidget** Widget);
	void OnChangedHairColor(const struct FLinearColor& Color);
	void OnClosedHairColorSelectWindow(class UPalHUDDispatchParameterBase* Param_Param);
	void OnSelectedHairColor__DelegateSignature(const struct FLinearColor& HSV);
	void GetTopFocusTarget(class UWidget** Widget);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_CharaCre_ScrollBoxContent_Hair_C">();
	}
	static class UWBP_CharaCre_ScrollBoxContent_Hair_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_CharaCre_ScrollBoxContent_Hair_C>();
	}
};
static_assert(alignof(UWBP_CharaCre_ScrollBoxContent_Hair_C) == 0x000008, "Wrong alignment on UWBP_CharaCre_ScrollBoxContent_Hair_C");
static_assert(sizeof(UWBP_CharaCre_ScrollBoxContent_Hair_C) == 0x0004B8, "Wrong size on UWBP_CharaCre_ScrollBoxContent_Hair_C");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Hair_C, UberGraphFrame) == 0x000428, "Member 'UWBP_CharaCre_ScrollBoxContent_Hair_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Hair_C, WBP_CharaCre_ColorSelect_sq_Hair) == 0x000430, "Member 'UWBP_CharaCre_ScrollBoxContent_Hair_C::WBP_CharaCre_ColorSelect_sq_Hair' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Hair_C, WBP_MeshSelectPanel_Hair) == 0x000438, "Member 'UWBP_CharaCre_ScrollBoxContent_Hair_C::WBP_MeshSelectPanel_Hair' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Hair_C, HairMeshMap) == 0x000440, "Member 'UWBP_CharaCre_ScrollBoxContent_Hair_C::HairMeshMap' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Hair_C, HairColorPreset) == 0x000490, "Member 'UWBP_CharaCre_ScrollBoxContent_Hair_C::HairColorPreset' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Hair_C, OnSelectedHairColor) == 0x0004A0, "Member 'UWBP_CharaCre_ScrollBoxContent_Hair_C::OnSelectedHairColor' has a wrong offset!");
static_assert(offsetof(UWBP_CharaCre_ScrollBoxContent_Hair_C, RestoreFocusWIdget) == 0x0004B0, "Member 'UWBP_CharaCre_ScrollBoxContent_Hair_C::RestoreFocusWIdget' has a wrong offset!");

}
