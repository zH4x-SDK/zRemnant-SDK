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

// BlueprintGeneratedClass Action_Shield_Splitter.Action_Shield_Splitter_C
// 0x0000
class UAction_Shield_Splitter_C : public UAction_Shield_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Shield_Splitter.Action_Shield_Splitter_C");
		return ptr;
	}



	void OnActionStop();
	void ExecuteUbergraph_Action_Shield_Splitter();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
