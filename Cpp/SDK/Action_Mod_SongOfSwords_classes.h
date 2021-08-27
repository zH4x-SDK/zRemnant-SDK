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

// BlueprintGeneratedClass Action_Mod_SongOfSwords.Action_Mod_SongOfSwords_C
// 0x0000
class UAction_Mod_SongOfSwords_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_SongOfSwords.Action_Mod_SongOfSwords_C");
		return ptr;
	}



	void Check_Is_Friendly_();
	void OnPostComputeStats();
	void ExecuteUbergraph_Action_Mod_SongOfSwords();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
