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

// BlueprintGeneratedClass Tutorial.Tutorial_C
// 0x0000
class UTutorial_C : public UPrimaryDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tutorial.Tutorial_C");
		return ptr;
	}



	void WriteKey();
	void HasKey();
	void Validate();
	void Show();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
