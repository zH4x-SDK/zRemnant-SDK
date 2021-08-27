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

// Class AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy
// 0x0000
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy");
		return ptr;
	}



	void CreateProxyObjectForConvertToTIFF();
	void CreateProxyObjectForConvertToPNG();
	void CreateProxyObjectForConvertToJPEG();
	void CreateProxyObjectForConvertToHEIF();
};

// Class AppleImageUtils.AppleImageInterface
// 0x0000
class UAppleImageInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AppleImageUtils.AppleImageInterface");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
