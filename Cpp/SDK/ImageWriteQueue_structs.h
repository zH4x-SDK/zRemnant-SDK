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

// Enum ImageWriteQueue.EDesiredImageFormat
enum class ImageWriteQueue_EDesiredImageFormat : uint8_t
{
	EDesiredImageFormat__PNG       = 0,
	EDesiredImageFormat__JPG       = 1,
	EDesiredImageFormat__BMP       = 2,
	EDesiredImageFormat__EXR       = 3,
	EDesiredImageFormat__EDesiredImageFormat_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ImageWriteQueue.ImageWriteOptions
// 0x0000
struct FImageWriteOptions
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
