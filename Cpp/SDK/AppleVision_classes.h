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

// Class AppleVision.AppleVisionDetectFacesAsyncTaskBlueprintProxy
// 0x0000
class UAppleVisionDetectFacesAsyncTaskBlueprintProxy : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AppleVision.AppleVisionDetectFacesAsyncTaskBlueprintProxy");
		return ptr;
	}



	void CreateProxyObjectForDetectFaces();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
