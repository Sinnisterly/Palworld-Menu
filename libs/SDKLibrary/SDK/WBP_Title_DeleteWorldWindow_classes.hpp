#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Title_DeleteWorldWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Pal_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Title_DeleteWorldWindow.WBP_Title_DeleteWorldWindow_C
// 0x0030 (0x0460 - 0x0430)
class UWBP_Title_DeleteWorldWindow_C final : public UPalUserWidgetOverlayUI
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0430(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UEditableTextBox*                       EditableTextBox_DELETE;                            // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_57;                                          // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonButton_C*                    WBP_CommonButton_Cancel;                           // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonButton_C*                    WBP_CommonButton_Confirm;                          // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalCommonWindow_C*                 WBP_PalCommonWindow;                               // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void BndEvt__WBP_Title_DeleteWorldWindow_WBP_CommonButton_Cancel_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void BndEvt__WBP_CharaCre_PlayerNameEdit_WBP_CommonButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void BndEvt__WBP_CharaCre_PlayerNameEdit_EditableTextBox_Name_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void Construct();
	void ExecuteUbergraph_WBP_Title_DeleteWorldWindow(int32 EntryPoint);
	void OnClosedDeleteCheckDialog(bool bResult);
	void OnSetup();
	void OpenCheckDialog();
	void SetEnableConfirmButton(bool IsEnable);

	class UWidget* BP_GetDesiredFocusTarget() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Title_DeleteWorldWindow_C">();
	}
	static class UWBP_Title_DeleteWorldWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Title_DeleteWorldWindow_C>();
	}
};
static_assert(alignof(UWBP_Title_DeleteWorldWindow_C) == 0x000008, "Wrong alignment on UWBP_Title_DeleteWorldWindow_C");
static_assert(sizeof(UWBP_Title_DeleteWorldWindow_C) == 0x000460, "Wrong size on UWBP_Title_DeleteWorldWindow_C");
static_assert(offsetof(UWBP_Title_DeleteWorldWindow_C, UberGraphFrame) == 0x000430, "Member 'UWBP_Title_DeleteWorldWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Title_DeleteWorldWindow_C, EditableTextBox_DELETE) == 0x000438, "Member 'UWBP_Title_DeleteWorldWindow_C::EditableTextBox_DELETE' has a wrong offset!");
static_assert(offsetof(UWBP_Title_DeleteWorldWindow_C, Image_57) == 0x000440, "Member 'UWBP_Title_DeleteWorldWindow_C::Image_57' has a wrong offset!");
static_assert(offsetof(UWBP_Title_DeleteWorldWindow_C, WBP_CommonButton_Cancel) == 0x000448, "Member 'UWBP_Title_DeleteWorldWindow_C::WBP_CommonButton_Cancel' has a wrong offset!");
static_assert(offsetof(UWBP_Title_DeleteWorldWindow_C, WBP_CommonButton_Confirm) == 0x000450, "Member 'UWBP_Title_DeleteWorldWindow_C::WBP_CommonButton_Confirm' has a wrong offset!");
static_assert(offsetof(UWBP_Title_DeleteWorldWindow_C, WBP_PalCommonWindow) == 0x000458, "Member 'UWBP_Title_DeleteWorldWindow_C::WBP_PalCommonWindow' has a wrong offset!");

}
