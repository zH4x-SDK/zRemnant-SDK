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

// Class ImgMedia.ImgMediaSource
// 0x0000
class UImgMediaSource : public UBaseMediaSource
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ImgMedia.ImgMediaSource");
		return ptr;
	}



	void SetSequencePath();
	void GetSequencePath();
	void GetProxies();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
