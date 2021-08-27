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

// BlueprintGeneratedClass Dialog_JoinSpectate.Dialog_JoinSpectate_C
// 0x0000
class ADialog_JoinSpectate_C : public ADialog_Death_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_JoinSpectate.Dialog_JoinSpectate_C");
		return ptr;
	}



	void OnInvalidTarget();
	void OnValidTarget();
	void EvemtClosedCharacterSelect();
	void PostTravel();
	void ExecuteUbergraph_Dialog_JoinSpectate();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
