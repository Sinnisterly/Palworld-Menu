#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpreadSheetToCsv

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class SpreadSheetToCsv.SpreadSheetImpoter
// 0x00C8 (0x00F0 - 0x0028)
class USpreadSheetImpoter final : public UObject
{
public:
	uint8                                         Pad_1C5B[0x10];                                    // 0x0028(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnGetResult;                                       // 0x0038(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             ErrorLogger;                                       // 0x0048(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UDataTable*                             TargetDataTable;                                   // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                 IgnoreRowIndexes;                                  // 0x0060(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                   AutoUniqueIdColumnName;                            // 0x0070(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   RowNameHashColumnName;                             // 0x0078(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                           MetaTagText_IgnoreRow;                             // 0x0080(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FName, class FName>                BlueprintName2ObjectPathColumnNameMap;             // 0x0090(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FName                                   BlueprintNamePrefix;                               // 0x00E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bNoticeMessageAtNewRecordImported;                 // 0x00E8(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C5C[0x7];                                     // 0x00E9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class USpreadSheetImpoter* Create();
	static class FString CreateSheetUrlString(const class FName SheetId, const class FName SheetNameId);
	static class USpreadSheetImpoter* GetRequest(const class FName SheetId, const class FName SheetName, const class FName Key);

	bool FromString(const class FString& Data);
	void PostProcessImport(bool* bAppliedPostProcess);
	class FString ToCsvString();
	class FString ToCsvStringForLocalizedText(const class FString& PickCultureName);

	bool IsExistNewRecord() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpreadSheetImpoter">();
	}
	static class USpreadSheetImpoter* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpreadSheetImpoter>();
	}
};
static_assert(alignof(USpreadSheetImpoter) == 0x000008, "Wrong alignment on USpreadSheetImpoter");
static_assert(sizeof(USpreadSheetImpoter) == 0x0000F0, "Wrong size on USpreadSheetImpoter");
static_assert(offsetof(USpreadSheetImpoter, OnGetResult) == 0x000038, "Member 'USpreadSheetImpoter::OnGetResult' has a wrong offset!");
static_assert(offsetof(USpreadSheetImpoter, ErrorLogger) == 0x000048, "Member 'USpreadSheetImpoter::ErrorLogger' has a wrong offset!");
static_assert(offsetof(USpreadSheetImpoter, TargetDataTable) == 0x000058, "Member 'USpreadSheetImpoter::TargetDataTable' has a wrong offset!");
static_assert(offsetof(USpreadSheetImpoter, IgnoreRowIndexes) == 0x000060, "Member 'USpreadSheetImpoter::IgnoreRowIndexes' has a wrong offset!");
static_assert(offsetof(USpreadSheetImpoter, AutoUniqueIdColumnName) == 0x000070, "Member 'USpreadSheetImpoter::AutoUniqueIdColumnName' has a wrong offset!");
static_assert(offsetof(USpreadSheetImpoter, RowNameHashColumnName) == 0x000078, "Member 'USpreadSheetImpoter::RowNameHashColumnName' has a wrong offset!");
static_assert(offsetof(USpreadSheetImpoter, MetaTagText_IgnoreRow) == 0x000080, "Member 'USpreadSheetImpoter::MetaTagText_IgnoreRow' has a wrong offset!");
static_assert(offsetof(USpreadSheetImpoter, BlueprintName2ObjectPathColumnNameMap) == 0x000090, "Member 'USpreadSheetImpoter::BlueprintName2ObjectPathColumnNameMap' has a wrong offset!");
static_assert(offsetof(USpreadSheetImpoter, BlueprintNamePrefix) == 0x0000E0, "Member 'USpreadSheetImpoter::BlueprintNamePrefix' has a wrong offset!");
static_assert(offsetof(USpreadSheetImpoter, bNoticeMessageAtNewRecordImported) == 0x0000E8, "Member 'USpreadSheetImpoter::bNoticeMessageAtNewRecordImported' has a wrong offset!");

// Class SpreadSheetToCsv.SpreadSheetUtility
// 0x0000 (0x0028 - 0x0028)
class USpreadSheetUtility final : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SpreadSheetUtility">();
	}
	static class USpreadSheetUtility* GetDefaultObj()
	{
		return GetDefaultObjImpl<USpreadSheetUtility>();
	}
};
static_assert(alignof(USpreadSheetUtility) == 0x000008, "Wrong alignment on USpreadSheetUtility");
static_assert(sizeof(USpreadSheetUtility) == 0x000028, "Wrong size on USpreadSheetUtility");

}
