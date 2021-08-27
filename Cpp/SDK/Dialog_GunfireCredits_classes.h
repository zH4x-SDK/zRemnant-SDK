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

// BlueprintGeneratedClass Dialog_GunfireCredits.Dialog_GunfireCredits_C
// 0x0000
class ADialog_GunfireCredits_C : public ADialog_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_GunfireCredits.Dialog_GunfireCredits_C");
		return ptr;
	}



	void EndCreditRoll();
	void SetEndGame();
	void OnBeginDialog();
	void OnEndDialog();
	void ExecuteUbergraph_Dialog_GunfireCredits();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
