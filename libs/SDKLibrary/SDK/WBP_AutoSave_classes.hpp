#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_AutoSave

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_AutoSave.WBP_AutoSave_C
// 0x0060 (0x02D8 - 0x0278)
class UWBP_AutoSave_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anm_Saving;                                        // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_IconBase;                                    // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_IconPart_0;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_IconPart_1;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_IconPart_2;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_IconPart_3;                                  // 0x02A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_IconPart_4;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_IconPart_5;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsForceDisplayngTime;                              // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_375F[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           ForceDisplayTimerHandle;                           // 0x02C8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEndSave;                                         // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void AnmEvent_Loop();
	void AnmEvent_Stop();
	void Construct();
	void Destruct();
	void Display();
	void ExecuteUbergraph_WBP_AutoSave(int32 EntryPoint);
	void OnEndedAutoSave(bool IsSuccess);
	void OnEndedForceDisplayTime();
	void OnStartAutoSave();
	void TryHide();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_AutoSave_C">();
	}
	static class UWBP_AutoSave_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_AutoSave_C>();
	}
};
static_assert(alignof(UWBP_AutoSave_C) == 0x000008, "Wrong alignment on UWBP_AutoSave_C");
static_assert(sizeof(UWBP_AutoSave_C) == 0x0002D8, "Wrong size on UWBP_AutoSave_C");
static_assert(offsetof(UWBP_AutoSave_C, UberGraphFrame) == 0x000278, "Member 'UWBP_AutoSave_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_AutoSave_C, Anm_Saving) == 0x000280, "Member 'UWBP_AutoSave_C::Anm_Saving' has a wrong offset!");
static_assert(offsetof(UWBP_AutoSave_C, Image_IconBase) == 0x000288, "Member 'UWBP_AutoSave_C::Image_IconBase' has a wrong offset!");
static_assert(offsetof(UWBP_AutoSave_C, Image_IconPart_0) == 0x000290, "Member 'UWBP_AutoSave_C::Image_IconPart_0' has a wrong offset!");
static_assert(offsetof(UWBP_AutoSave_C, Image_IconPart_1) == 0x000298, "Member 'UWBP_AutoSave_C::Image_IconPart_1' has a wrong offset!");
static_assert(offsetof(UWBP_AutoSave_C, Image_IconPart_2) == 0x0002A0, "Member 'UWBP_AutoSave_C::Image_IconPart_2' has a wrong offset!");
static_assert(offsetof(UWBP_AutoSave_C, Image_IconPart_3) == 0x0002A8, "Member 'UWBP_AutoSave_C::Image_IconPart_3' has a wrong offset!");
static_assert(offsetof(UWBP_AutoSave_C, Image_IconPart_4) == 0x0002B0, "Member 'UWBP_AutoSave_C::Image_IconPart_4' has a wrong offset!");
static_assert(offsetof(UWBP_AutoSave_C, Image_IconPart_5) == 0x0002B8, "Member 'UWBP_AutoSave_C::Image_IconPart_5' has a wrong offset!");
static_assert(offsetof(UWBP_AutoSave_C, IsForceDisplayngTime) == 0x0002C0, "Member 'UWBP_AutoSave_C::IsForceDisplayngTime' has a wrong offset!");
static_assert(offsetof(UWBP_AutoSave_C, ForceDisplayTimerHandle) == 0x0002C8, "Member 'UWBP_AutoSave_C::ForceDisplayTimerHandle' has a wrong offset!");
static_assert(offsetof(UWBP_AutoSave_C, IsEndSave) == 0x0002D0, "Member 'UWBP_AutoSave_C::IsEndSave' has a wrong offset!");

}

