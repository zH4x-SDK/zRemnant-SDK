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

// BlueprintGeneratedClass Dialog_Death.Dialog_Death_C
// 0x0000
class ADialog_Death_C : public ADialog_InGameBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_Death.Dialog_Death_C");
		return ptr;
	}



	void fade();
	void BeginSpectating();
	void SetContext();
	void PostTravel();
	void OnInvalidTarget();
	void OnValidTarget();
	void EnsureValidTarget();
	void OnPushDialog();
	void OnPopDialog();
	void ExecuteUbergraph_Dialog_Death();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
