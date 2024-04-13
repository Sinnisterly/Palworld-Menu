#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_IngameMenu_Task_Tutorial_List

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_IngameMenu_Task_Tutorial_List.WBP_IngameMenu_Task_Tutorial_List_C.ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List
// 0x0060 (0x0060 - 0x0000)
struct WBP_IngameMenu_Task_Tutorial_List_C_ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4743[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue; // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1; // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1; // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4744[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_Task_Tutorial_List_C_ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List) == 0x000008, "Wrong alignment on WBP_IngameMenu_Task_Tutorial_List_C_ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List");
static_assert(sizeof(WBP_IngameMenu_Task_Tutorial_List_C_ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List) == 0x000060, "Wrong size on WBP_IngameMenu_Task_Tutorial_List_C_ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_List_C_ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List, EntryPoint) == 0x000000, "Member 'WBP_IngameMenu_Task_Tutorial_List_C_ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_List_C_ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_IngameMenu_Task_Tutorial_List_C_ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_List_C_ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'WBP_IngameMenu_Task_Tutorial_List_C_ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_List_C_ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List, CallFunc_PlayAnimation_ReturnValue) == 0x000028, "Member 'WBP_IngameMenu_Task_Tutorial_List_C_ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_List_C_ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List, CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result) == 0x000030, "Member 'WBP_IngameMenu_Task_Tutorial_List_C_ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List::CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_List_C_ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List, CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue) == 0x000038, "Member 'WBP_IngameMenu_Task_Tutorial_List_C_ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List::CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_List_C_ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List, CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1) == 0x000040, "Member 'WBP_IngameMenu_Task_Tutorial_List_C_ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List::CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_List_C_ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List, CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1) == 0x000048, "Member 'WBP_IngameMenu_Task_Tutorial_List_C_ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List::CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_List_C_ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'WBP_IngameMenu_Task_Tutorial_List_C_ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_List_C_ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List, CallFunc_IsValid_ReturnValue_1) == 0x000051, "Member 'WBP_IngameMenu_Task_Tutorial_List_C_ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_List_C_ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List, CallFunc_PlayAnimation_ReturnValue_1) == 0x000058, "Member 'WBP_IngameMenu_Task_Tutorial_List_C_ExecuteUbergraph_WBP_IngameMenu_Task_Tutorial_List::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function WBP_IngameMenu_Task_Tutorial_List.WBP_IngameMenu_Task_Tutorial_List_C.OnCompleteQuest
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_Task_Tutorial_List_C_OnCompleteQuest final
{
public:
	class UPalQuestData*                          CompletedQuest;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_Task_Tutorial_List_C_OnCompleteQuest) == 0x000008, "Wrong alignment on WBP_IngameMenu_Task_Tutorial_List_C_OnCompleteQuest");
static_assert(sizeof(WBP_IngameMenu_Task_Tutorial_List_C_OnCompleteQuest) == 0x000008, "Wrong size on WBP_IngameMenu_Task_Tutorial_List_C_OnCompleteQuest");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_List_C_OnCompleteQuest, CompletedQuest) == 0x000000, "Member 'WBP_IngameMenu_Task_Tutorial_List_C_OnCompleteQuest::CompletedQuest' has a wrong offset!");

// Function WBP_IngameMenu_Task_Tutorial_List.WBP_IngameMenu_Task_Tutorial_List_C.OnEndCloseAnim__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_Task_Tutorial_List_C_OnEndCloseAnim__DelegateSignature final
{
public:
	class UWBP_IngameMenu_Task_Tutorial_List_C*   Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_Task_Tutorial_List_C_OnEndCloseAnim__DelegateSignature) == 0x000008, "Wrong alignment on WBP_IngameMenu_Task_Tutorial_List_C_OnEndCloseAnim__DelegateSignature");
static_assert(sizeof(WBP_IngameMenu_Task_Tutorial_List_C_OnEndCloseAnim__DelegateSignature) == 0x000008, "Wrong size on WBP_IngameMenu_Task_Tutorial_List_C_OnEndCloseAnim__DelegateSignature");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_List_C_OnEndCloseAnim__DelegateSignature, Widget) == 0x000000, "Member 'WBP_IngameMenu_Task_Tutorial_List_C_OnEndCloseAnim__DelegateSignature::Widget' has a wrong offset!");

// Function WBP_IngameMenu_Task_Tutorial_List.WBP_IngameMenu_Task_Tutorial_List_C.OnUpdateQuest
// 0x0050 (0x0050 - 0x0000)
struct WBP_IngameMenu_Task_Tutorial_List_C_OnUpdateQuest final
{
public:
	class UPalQuestData*                          UpdatedQuest;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4745[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalQuestBlock*                         CallFunc_GetQuestBlock_OutBlock;                   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4746[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetProgressText_OutText;                  // 0x0020(0x0018)()
	class FText                                   CallFunc_GetDescriptionText_OutText;               // 0x0038(0x0018)()
};
static_assert(alignof(WBP_IngameMenu_Task_Tutorial_List_C_OnUpdateQuest) == 0x000008, "Wrong alignment on WBP_IngameMenu_Task_Tutorial_List_C_OnUpdateQuest");
static_assert(sizeof(WBP_IngameMenu_Task_Tutorial_List_C_OnUpdateQuest) == 0x000050, "Wrong size on WBP_IngameMenu_Task_Tutorial_List_C_OnUpdateQuest");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_List_C_OnUpdateQuest, UpdatedQuest) == 0x000000, "Member 'WBP_IngameMenu_Task_Tutorial_List_C_OnUpdateQuest::UpdatedQuest' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_List_C_OnUpdateQuest, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_IngameMenu_Task_Tutorial_List_C_OnUpdateQuest::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_List_C_OnUpdateQuest, CallFunc_GetQuestBlock_OutBlock) == 0x000010, "Member 'WBP_IngameMenu_Task_Tutorial_List_C_OnUpdateQuest::CallFunc_GetQuestBlock_OutBlock' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_List_C_OnUpdateQuest, CallFunc_IsValid_ReturnValue_1) == 0x000018, "Member 'WBP_IngameMenu_Task_Tutorial_List_C_OnUpdateQuest::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_List_C_OnUpdateQuest, CallFunc_GetProgressText_OutText) == 0x000020, "Member 'WBP_IngameMenu_Task_Tutorial_List_C_OnUpdateQuest::CallFunc_GetProgressText_OutText' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_List_C_OnUpdateQuest, CallFunc_GetDescriptionText_OutText) == 0x000038, "Member 'WBP_IngameMenu_Task_Tutorial_List_C_OnUpdateQuest::CallFunc_GetDescriptionText_OutText' has a wrong offset!");

// Function WBP_IngameMenu_Task_Tutorial_List.WBP_IngameMenu_Task_Tutorial_List_C.Setup
// 0x0030 (0x0030 - 0x0000)
struct WBP_IngameMenu_Task_Tutorial_List_C_Setup final
{
public:
	class UPalQuestData*                          QuestData;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalQuestData* CompletedQuest)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4747[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UPalQuestData* UpdatedQuest)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_Task_Tutorial_List_C_Setup) == 0x000008, "Wrong alignment on WBP_IngameMenu_Task_Tutorial_List_C_Setup");
static_assert(sizeof(WBP_IngameMenu_Task_Tutorial_List_C_Setup) == 0x000030, "Wrong size on WBP_IngameMenu_Task_Tutorial_List_C_Setup");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_List_C_Setup, QuestData) == 0x000000, "Member 'WBP_IngameMenu_Task_Tutorial_List_C_Setup::QuestData' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_List_C_Setup, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_IngameMenu_Task_Tutorial_List_C_Setup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_List_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_IngameMenu_Task_Tutorial_List_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_Tutorial_List_C_Setup, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'WBP_IngameMenu_Task_Tutorial_List_C_Setup::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

}

