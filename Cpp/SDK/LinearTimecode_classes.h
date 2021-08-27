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
// Classes
//---------------------------------------------------------------------------

// Class LinearTimecode.LinearTimecodeComponent
// 0x0000
class ULinearTimecodeComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LinearTimecode.LinearTimecodeComponent");
		return ptr;
	}



	void SetDropTimecodeFrameNumber();
	void GetDropTimeCodeFrameNumber();
	void GetDropFrameNumber();
};

// Class LinearTimecode.DropTimecodeToStringConversion
// 0x0000
class UDropTimecodeToStringConversion : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LinearTimecode.DropTimecodeToStringConversion");
		return ptr;
	}



	void Conv_DropTimecodeToString();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
