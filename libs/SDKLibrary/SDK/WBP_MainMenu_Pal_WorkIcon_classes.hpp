#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_MainMenu_Pal_WorkIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "Pal_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_MainMenu_Pal_WorkIcon.WBP_MainMenu_Pal_WorkIcon_C
// 0x0028 (0x02A0 - 0x0278)
class UWBP_MainMenu_Pal_WorkIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalRetainerBox*                        PalRetainerBox_Eff;                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                     Text_LevelNum;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UpArrow;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IconPalWork_C*                     WBP_IconPalWork;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_MainMenu_Pal_WorkIcon(int32 EntryPoint);
	void IconOff();
	void IconOn();
	void SetRank(int32 Rank);
	void SetRankup(bool Enable);
	void SetSuitability(EPalWorkSuitability WorkSuitability);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_MainMenu_Pal_WorkIcon_C">();
	}
	static class UWBP_MainMenu_Pal_WorkIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_MainMenu_Pal_WorkIcon_C>();
	}
};
static_assert(alignof(UWBP_MainMenu_Pal_WorkIcon_C) == 0x000008, "Wrong alignment on UWBP_MainMenu_Pal_WorkIcon_C");
static_assert(sizeof(UWBP_MainMenu_Pal_WorkIcon_C) == 0x0002A0, "Wrong size on UWBP_MainMenu_Pal_WorkIcon_C");
static_assert(offsetof(UWBP_MainMenu_Pal_WorkIcon_C, UberGraphFrame) == 0x000278, "Member 'UWBP_MainMenu_Pal_WorkIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_WorkIcon_C, PalRetainerBox_Eff) == 0x000280, "Member 'UWBP_MainMenu_Pal_WorkIcon_C::PalRetainerBox_Eff' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_WorkIcon_C, Text_LevelNum) == 0x000288, "Member 'UWBP_MainMenu_Pal_WorkIcon_C::Text_LevelNum' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_WorkIcon_C, UpArrow) == 0x000290, "Member 'UWBP_MainMenu_Pal_WorkIcon_C::UpArrow' has a wrong offset!");
static_assert(offsetof(UWBP_MainMenu_Pal_WorkIcon_C, WBP_IconPalWork) == 0x000298, "Member 'UWBP_MainMenu_Pal_WorkIcon_C::WBP_IconPalWork' has a wrong offset!");

}

