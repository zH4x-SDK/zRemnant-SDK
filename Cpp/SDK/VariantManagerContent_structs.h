#pragma once

// Name: Remnant, Version: 1.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum VariantManagerContent.EPropertyValueCategory
enum class VariantManagerContent_EPropertyValueCategory : uint8_t
{
	EPropertyValueCategory__Undefined = 0,
	EPropertyValueCategory__Generic = 1,
	EPropertyValueCategory__RelativeLocation = 2,
	EPropertyValueCategory__RelativeRotation = 3,
	EPropertyValueCategory__RelativeScale3D = 4,
	EPropertyValueCategory__bVisible = 5,
	EPropertyValueCategory__Material = 6,
	EPropertyValueCategory__Color  = 7,
	EPropertyValueCategory__EPropertyValueCategory_MAX = 8,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct VariantManagerContent.FunctionCaller
// 0x0000
struct FFunctionCaller
{

};

// ScriptStruct VariantManagerContent.CapturedPropSegment
// 0x0000
struct FCapturedPropSegment
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
