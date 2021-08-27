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

// Class TimeManagement.FixedFrameRateCustomTimeStep
// 0x0000
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TimeManagement.FixedFrameRateCustomTimeStep");
		return ptr;
	}



};

// Class TimeManagement.TimeManagementBlueprintLibrary
// 0x0000
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TimeManagement.TimeManagementBlueprintLibrary");
		return ptr;
	}



	void TransformTime();
	void Subtract_FrameNumberInteger();
	void Subtract_FrameNumberFrameNumber();
	void SnapFrameTimeToRate();
	void Multiply_SecondsFrameRate();
	void Multiply_FrameNumberInteger();
	void IsValid_MultipleOf();
	void IsValid_Framerate();
	void GetTimecode();
	void Divide_FrameNumberInteger();
	void Conv_TimecodeToString();
	void Conv_QualifiedFrameTimeToSeconds();
	void Conv_FrameRateToSeconds();
	void Conv_FrameNumberToInteger();
	void Add_FrameNumberInteger();
	void Add_FrameNumberFrameNumber();
};

// Class TimeManagement.TimeSynchronizationSource
// 0x0000
class UTimeSynchronizationSource : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TimeManagement.TimeSynchronizationSource");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
