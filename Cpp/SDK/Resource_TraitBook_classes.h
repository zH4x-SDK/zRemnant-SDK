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

// BlueprintGeneratedClass Resource_TraitBook.Resource_TraitBook_C
// 0x0000
class AResource_TraitBook_C : public ABP_Item_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Resource_TraitBook.Resource_TraitBook_C");
		return ptr;
	}



	void PreAdd();
	void OnPickedUp();
	void ExecuteUbergraph_Resource_TraitBook();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
