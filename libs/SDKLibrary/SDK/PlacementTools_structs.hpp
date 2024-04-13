#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlacementTools

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum PlacementTools.EPlacementMode
// NumValues: 0x0003
enum class EPlacementMode : uint8
{
	Free                                     = 0,
	Surface                                  = 1,
	EPlacementMode_MAX                       = 2,
};

// Enum PlacementTools.EPlacementStyle
// NumValues: 0x0006
enum class EPlacementStyle : uint8
{
	Fade                                     = 0,
	FadeOut                                  = 1,
	FadeIn                                   = 2,
	CustomFade                               = 3,
	Random                                   = 4,
	EPlacementStyle_MAX                      = 5,
};

// Enum PlacementTools.EItemType
// NumValues: 0x0003
enum class EItemType : uint8
{
	Actor                                    = 0,
	StaticMesh                               = 1,
	EItemType_MAX                            = 2,
};

// Enum PlacementTools.EFadeAxis
// NumValues: 0x0005
enum class EFadeAxis : uint8
{
	All                                      = 0,
	X                                        = 1,
	Y                                        = 2,
	Z                                        = 3,
	EFadeAxis_MAX                            = 4,
};

// ScriptStruct PlacementTools.Directions
// 0x0006 (0x0006 - 0x0000)
struct FDirections final
{
public:
	bool                                          XDown;                                             // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          XUp;                                               // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          YDown;                                             // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          YUp;                                               // 0x0003(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ZDown;                                             // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ZUp;                                               // 0x0005(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FDirections) == 0x000001, "Wrong alignment on FDirections");
static_assert(sizeof(FDirections) == 0x000006, "Wrong size on FDirections");
static_assert(offsetof(FDirections, XDown) == 0x000000, "Member 'FDirections::XDown' has a wrong offset!");
static_assert(offsetof(FDirections, XUp) == 0x000001, "Member 'FDirections::XUp' has a wrong offset!");
static_assert(offsetof(FDirections, YDown) == 0x000002, "Member 'FDirections::YDown' has a wrong offset!");
static_assert(offsetof(FDirections, YUp) == 0x000003, "Member 'FDirections::YUp' has a wrong offset!");
static_assert(offsetof(FDirections, ZDown) == 0x000004, "Member 'FDirections::ZDown' has a wrong offset!");
static_assert(offsetof(FDirections, ZUp) == 0x000005, "Member 'FDirections::ZUp' has a wrong offset!");

// ScriptStruct PlacementTools.PlacementItem
// 0x0020 (0x0020 - 0x0000)
struct FPlacementItem final
{
public:
	EItemType                                     ItemType;                                          // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16F6[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSubclassOf<class AActor>                     Actor;                                             // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                            Mesh;                                              // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Weight;                                            // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16F7[0x4];                                     // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FPlacementItem) == 0x000008, "Wrong alignment on FPlacementItem");
static_assert(sizeof(FPlacementItem) == 0x000020, "Wrong size on FPlacementItem");
static_assert(offsetof(FPlacementItem, ItemType) == 0x000000, "Member 'FPlacementItem::ItemType' has a wrong offset!");
static_assert(offsetof(FPlacementItem, Actor) == 0x000008, "Member 'FPlacementItem::Actor' has a wrong offset!");
static_assert(offsetof(FPlacementItem, Mesh) == 0x000010, "Member 'FPlacementItem::Mesh' has a wrong offset!");
static_assert(offsetof(FPlacementItem, Weight) == 0x000018, "Member 'FPlacementItem::Weight' has a wrong offset!");

// ScriptStruct PlacementTools.LinearDistribution
// 0x0010 (0x0010 - 0x0000)
struct FLinearDistribution final
{
public:
	TArray<struct FVector2D>                      CurvePoints;                                       // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLinearDistribution) == 0x000008, "Wrong alignment on FLinearDistribution");
static_assert(sizeof(FLinearDistribution) == 0x000010, "Wrong size on FLinearDistribution");
static_assert(offsetof(FLinearDistribution, CurvePoints) == 0x000000, "Member 'FLinearDistribution::CurvePoints' has a wrong offset!");

}

