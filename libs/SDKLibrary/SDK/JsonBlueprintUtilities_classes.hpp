#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: JsonBlueprintUtilities

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class JsonBlueprintUtilities.JsonBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UJsonBlueprintFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool FromFile(class UObject* WorldContextObject, const struct FFilePath& File, struct FJsonObjectWrapper* OutJsonObject);
	static bool FromString(class UObject* WorldContextObject, const class FString& JsonString, struct FJsonObjectWrapper* OutJsonObject);
	static bool GetField(const struct FJsonObjectWrapper& JsonObject, const class FString& FieldName, int32* OutValue);
	static bool GetFieldNames(const struct FJsonObjectWrapper& JsonObject, TArray<class FString>* FieldNames);
	static bool HasField(const struct FJsonObjectWrapper& JsonObject, const class FString& FieldName);
	static bool SetField(const struct FJsonObjectWrapper& JsonObject, const class FString& FieldName, const int32& Value);
	static bool StructToJsonString(const int32& Struct, class FString* OutJsonString);
	static bool ToFile(const struct FJsonObjectWrapper& JsonObject, const struct FFilePath& File);
	static bool ToString(const struct FJsonObjectWrapper& JsonObject, class FString* OutJsonString);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"JsonBlueprintFunctionLibrary">();
	}
	static class UJsonBlueprintFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UJsonBlueprintFunctionLibrary>();
	}
};
static_assert(alignof(UJsonBlueprintFunctionLibrary) == 0x000008, "Wrong alignment on UJsonBlueprintFunctionLibrary");
static_assert(sizeof(UJsonBlueprintFunctionLibrary) == 0x000028, "Wrong size on UJsonBlueprintFunctionLibrary");

}

