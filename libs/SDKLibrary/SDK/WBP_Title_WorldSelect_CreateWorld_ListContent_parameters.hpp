#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Title_WorldSelect_CreateWorld_ListContent

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace SDK::Params
{

// Function WBP_Title_WorldSelect_CreateWorld_ListContent.WBP_Title_WorldSelect_CreateWorld_ListContent_C.ToMaxSaveDataMode
// 0x0018 (0x0018 - 0x0000)
struct WBP_Title_WorldSelect_CreateWorld_ListContent_C_ToMaxSaveDataMode final
{
public:
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0000(0x0018)()
};
static_assert(alignof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_ToMaxSaveDataMode) == 0x000008, "Wrong alignment on WBP_Title_WorldSelect_CreateWorld_ListContent_C_ToMaxSaveDataMode");
static_assert(sizeof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_ToMaxSaveDataMode) == 0x000018, "Wrong size on WBP_Title_WorldSelect_CreateWorld_ListContent_C_ToMaxSaveDataMode");
static_assert(offsetof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_ToMaxSaveDataMode, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000000, "Member 'WBP_Title_WorldSelect_CreateWorld_ListContent_C_ToMaxSaveDataMode::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");

// Function WBP_Title_WorldSelect_CreateWorld_ListContent.WBP_Title_WorldSelect_CreateWorld_ListContent_C.SetupByLocalWorldDisplayData
// 0x0068 (0x0068 - 0x0000)
struct WBP_Title_WorldSelect_CreateWorld_ListContent_C_SetupByLocalWorldDisplayData final
{
public:
	class FString                                 SaveDirectoryName;                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FPalUILocalWorldDisplayData            DisplayData;                                       // 0x0010(0x0058)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_SetupByLocalWorldDisplayData) == 0x000008, "Wrong alignment on WBP_Title_WorldSelect_CreateWorld_ListContent_C_SetupByLocalWorldDisplayData");
static_assert(sizeof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_SetupByLocalWorldDisplayData) == 0x000068, "Wrong size on WBP_Title_WorldSelect_CreateWorld_ListContent_C_SetupByLocalWorldDisplayData");
static_assert(offsetof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_SetupByLocalWorldDisplayData, SaveDirectoryName) == 0x000000, "Member 'WBP_Title_WorldSelect_CreateWorld_ListContent_C_SetupByLocalWorldDisplayData::SaveDirectoryName' has a wrong offset!");
static_assert(offsetof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_SetupByLocalWorldDisplayData, DisplayData) == 0x000010, "Member 'WBP_Title_WorldSelect_CreateWorld_ListContent_C_SetupByLocalWorldDisplayData::DisplayData' has a wrong offset!");

// Function WBP_Title_WorldSelect_CreateWorld_ListContent.WBP_Title_WorldSelect_CreateWorld_ListContent_C.OnClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Title_WorldSelect_CreateWorld_ListContent_C_OnClicked__DelegateSignature final
{
public:
	class UWBP_Title_WorldSelect_CreateWorld_ListContent_C* Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_OnClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Title_WorldSelect_CreateWorld_ListContent_C_OnClicked__DelegateSignature");
static_assert(sizeof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_OnClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_Title_WorldSelect_CreateWorld_ListContent_C_OnClicked__DelegateSignature");
static_assert(offsetof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_OnClicked__DelegateSignature, Widget) == 0x000000, "Member 'WBP_Title_WorldSelect_CreateWorld_ListContent_C_OnClicked__DelegateSignature::Widget' has a wrong offset!");

// Function WBP_Title_WorldSelect_CreateWorld_ListContent.WBP_Title_WorldSelect_CreateWorld_ListContent_C.GetBindedSaveDirectoryName
// 0x0010 (0x0010 - 0x0000)
struct WBP_Title_WorldSelect_CreateWorld_ListContent_C_GetBindedSaveDirectoryName final
{
public:
	class FString                                 DirectoryName;                                     // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_GetBindedSaveDirectoryName) == 0x000008, "Wrong alignment on WBP_Title_WorldSelect_CreateWorld_ListContent_C_GetBindedSaveDirectoryName");
static_assert(sizeof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_GetBindedSaveDirectoryName) == 0x000010, "Wrong size on WBP_Title_WorldSelect_CreateWorld_ListContent_C_GetBindedSaveDirectoryName");
static_assert(offsetof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_GetBindedSaveDirectoryName, DirectoryName) == 0x000000, "Member 'WBP_Title_WorldSelect_CreateWorld_ListContent_C_GetBindedSaveDirectoryName::DirectoryName' has a wrong offset!");

// Function WBP_Title_WorldSelect_CreateWorld_ListContent.WBP_Title_WorldSelect_CreateWorld_ListContent_C.ExecuteUbergraph_WBP_Title_WorldSelect_CreateWorld_ListContent
// 0x0038 (0x0038 - 0x0000)
struct WBP_Title_WorldSelect_CreateWorld_ListContent_C_ExecuteUbergraph_WBP_Title_WorldSelect_CreateWorld_ListContent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1396[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_2;               // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button_1;               // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_ExecuteUbergraph_WBP_Title_WorldSelect_CreateWorld_ListContent) == 0x000008, "Wrong alignment on WBP_Title_WorldSelect_CreateWorld_ListContent_C_ExecuteUbergraph_WBP_Title_WorldSelect_CreateWorld_ListContent");
static_assert(sizeof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_ExecuteUbergraph_WBP_Title_WorldSelect_CreateWorld_ListContent) == 0x000038, "Wrong size on WBP_Title_WorldSelect_CreateWorld_ListContent_C_ExecuteUbergraph_WBP_Title_WorldSelect_CreateWorld_ListContent");
static_assert(offsetof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_ExecuteUbergraph_WBP_Title_WorldSelect_CreateWorld_ListContent, EntryPoint) == 0x000000, "Member 'WBP_Title_WorldSelect_CreateWorld_ListContent_C_ExecuteUbergraph_WBP_Title_WorldSelect_CreateWorld_ListContent::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_ExecuteUbergraph_WBP_Title_WorldSelect_CreateWorld_ListContent, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_Title_WorldSelect_CreateWorld_ListContent_C_ExecuteUbergraph_WBP_Title_WorldSelect_CreateWorld_ListContent::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_ExecuteUbergraph_WBP_Title_WorldSelect_CreateWorld_ListContent, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'WBP_Title_WorldSelect_CreateWorld_ListContent_C_ExecuteUbergraph_WBP_Title_WorldSelect_CreateWorld_ListContent::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_ExecuteUbergraph_WBP_Title_WorldSelect_CreateWorld_ListContent, K2Node_ComponentBoundEvent_Button_2) == 0x000018, "Member 'WBP_Title_WorldSelect_CreateWorld_ListContent_C_ExecuteUbergraph_WBP_Title_WorldSelect_CreateWorld_ListContent::K2Node_ComponentBoundEvent_Button_2' has a wrong offset!");
static_assert(offsetof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_ExecuteUbergraph_WBP_Title_WorldSelect_CreateWorld_ListContent, CallFunc_PlayAnimation_ReturnValue_2) == 0x000020, "Member 'WBP_Title_WorldSelect_CreateWorld_ListContent_C_ExecuteUbergraph_WBP_Title_WorldSelect_CreateWorld_ListContent::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_ExecuteUbergraph_WBP_Title_WorldSelect_CreateWorld_ListContent, K2Node_ComponentBoundEvent_Button_1) == 0x000028, "Member 'WBP_Title_WorldSelect_CreateWorld_ListContent_C_ExecuteUbergraph_WBP_Title_WorldSelect_CreateWorld_ListContent::K2Node_ComponentBoundEvent_Button_1' has a wrong offset!");
static_assert(offsetof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_ExecuteUbergraph_WBP_Title_WorldSelect_CreateWorld_ListContent, K2Node_ComponentBoundEvent_Button) == 0x000030, "Member 'WBP_Title_WorldSelect_CreateWorld_ListContent_C_ExecuteUbergraph_WBP_Title_WorldSelect_CreateWorld_ListContent::K2Node_ComponentBoundEvent_Button' has a wrong offset!");

// Function WBP_Title_WorldSelect_CreateWorld_ListContent.WBP_Title_WorldSelect_CreateWorld_ListContent_C.BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Title_WorldSelect_CreateWorld_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Title_WorldSelect_CreateWorld_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_Title_WorldSelect_CreateWorld_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_Title_WorldSelect_CreateWorld_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_Title_WorldSelect_CreateWorld_ListContent.WBP_Title_WorldSelect_CreateWorld_ListContent_C.BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Title_WorldSelect_CreateWorld_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Title_WorldSelect_CreateWorld_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_Title_WorldSelect_CreateWorld_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_Title_WorldSelect_CreateWorld_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_Title_WorldSelect_CreateWorld_ListContent.WBP_Title_WorldSelect_CreateWorld_ListContent_C.BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_Title_WorldSelect_CreateWorld_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Title_WorldSelect_CreateWorld_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_Title_WorldSelect_CreateWorld_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_Title_WorldSelect_CreateWorld_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_Title_WorldSelect_CreateWorld_ListContent_C_BndEvt__WBP_Title_WorldSelect_ListContent_WBP_PalInvisibleButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

}
