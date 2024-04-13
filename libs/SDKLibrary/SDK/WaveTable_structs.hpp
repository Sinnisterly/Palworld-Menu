#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WaveTable

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum WaveTable.EWaveTableResolution
// NumValues: 0x000E
enum class EWaveTableResolution : uint8
{
	None                                     = 0,
	Res_8                                    = 3,
	Res_16                                   = 4,
	Res_32                                   = 5,
	Res_64                                   = 6,
	Res_128                                  = 7,
	Res_256                                  = 8,
	Res_512                                  = 9,
	Res_1024                                 = 10,
	Res_2048                                 = 11,
	Res_4096                                 = 12,
	Res_Max                                  = 12,
	Maximum                                  = 13,
	EWaveTableResolution_MAX                 = 14,
};

// Enum WaveTable.EWaveTableCurve
// NumValues: 0x000D
enum class EWaveTableCurve : uint8
{
	Linear                                   = 0,
	Linear_Inv                               = 1,
	Exp                                      = 2,
	Exp_Inverse                              = 3,
	Log                                      = 4,
	Sin                                      = 5,
	Sin_Full                                 = 6,
	SCurve                                   = 7,
	Shared                                   = 8,
	Custom                                   = 9,
	File                                     = 10,
	Count                                    = 11,
	EWaveTableCurve_MAX                      = 12,
};

// ScriptStruct WaveTable.WaveTableTransform
// 0x00A0 (0x00A0 - 0x0000)
struct FWaveTableTransform final
{
public:
	EWaveTableCurve                               Curve;                                             // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24B9[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Scalar;                                            // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRichCurve                             CurveCustom;                                       // 0x0008(0x0080)(NativeAccessSpecifierPublic)
	class UCurveFloat*                            CurveShared;                                       // 0x0088(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                 WaveTable;                                         // 0x0090(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWaveTableTransform) == 0x000008, "Wrong alignment on FWaveTableTransform");
static_assert(sizeof(FWaveTableTransform) == 0x0000A0, "Wrong size on FWaveTableTransform");
static_assert(offsetof(FWaveTableTransform, Curve) == 0x000000, "Member 'FWaveTableTransform::Curve' has a wrong offset!");
static_assert(offsetof(FWaveTableTransform, Scalar) == 0x000004, "Member 'FWaveTableTransform::Scalar' has a wrong offset!");
static_assert(offsetof(FWaveTableTransform, CurveCustom) == 0x000008, "Member 'FWaveTableTransform::CurveCustom' has a wrong offset!");
static_assert(offsetof(FWaveTableTransform, CurveShared) == 0x000088, "Member 'FWaveTableTransform::CurveShared' has a wrong offset!");
static_assert(offsetof(FWaveTableTransform, WaveTable) == 0x000090, "Member 'FWaveTableTransform::WaveTable' has a wrong offset!");

// ScriptStruct WaveTable.WaveTableBankEntry
// 0x00A0 (0x00A0 - 0x0000)
struct FWaveTableBankEntry final
{
public:
	struct FWaveTableTransform                    Transform;                                         // 0x0000(0x00A0)(Edit, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWaveTableBankEntry) == 0x000008, "Wrong alignment on FWaveTableBankEntry");
static_assert(sizeof(FWaveTableBankEntry) == 0x0000A0, "Wrong size on FWaveTableBankEntry");
static_assert(offsetof(FWaveTableBankEntry, Transform) == 0x000000, "Member 'FWaveTableBankEntry::Transform' has a wrong offset!");

// ScriptStruct WaveTable.WaveTableSettings
// 0x0040 (0x0040 - 0x0000)
struct FWaveTableSettings final
{
public:
	struct FFilePath                              FilePath;                                          // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ChannelIndex;                                      // 0x0010(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Phase;                                             // 0x0014(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Top;                                               // 0x0018(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Tail;                                              // 0x001C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FadeIn;                                            // 0x0020(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         FadeOut;                                           // 0x0024(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bNormalize;                                        // 0x0028(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRemoveOffset;                                     // 0x0029(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24BA[0x6];                                     // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<float>                                 SourcePCMData;                                     // 0x0030(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWaveTableSettings) == 0x000008, "Wrong alignment on FWaveTableSettings");
static_assert(sizeof(FWaveTableSettings) == 0x000040, "Wrong size on FWaveTableSettings");
static_assert(offsetof(FWaveTableSettings, FilePath) == 0x000000, "Member 'FWaveTableSettings::FilePath' has a wrong offset!");
static_assert(offsetof(FWaveTableSettings, ChannelIndex) == 0x000010, "Member 'FWaveTableSettings::ChannelIndex' has a wrong offset!");
static_assert(offsetof(FWaveTableSettings, Phase) == 0x000014, "Member 'FWaveTableSettings::Phase' has a wrong offset!");
static_assert(offsetof(FWaveTableSettings, Top) == 0x000018, "Member 'FWaveTableSettings::Top' has a wrong offset!");
static_assert(offsetof(FWaveTableSettings, Tail) == 0x00001C, "Member 'FWaveTableSettings::Tail' has a wrong offset!");
static_assert(offsetof(FWaveTableSettings, FadeIn) == 0x000020, "Member 'FWaveTableSettings::FadeIn' has a wrong offset!");
static_assert(offsetof(FWaveTableSettings, FadeOut) == 0x000024, "Member 'FWaveTableSettings::FadeOut' has a wrong offset!");
static_assert(offsetof(FWaveTableSettings, bNormalize) == 0x000028, "Member 'FWaveTableSettings::bNormalize' has a wrong offset!");
static_assert(offsetof(FWaveTableSettings, bRemoveOffset) == 0x000029, "Member 'FWaveTableSettings::bRemoveOffset' has a wrong offset!");
static_assert(offsetof(FWaveTableSettings, SourcePCMData) == 0x000030, "Member 'FWaveTableSettings::SourcePCMData' has a wrong offset!");

}

