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

// BlueprintGeneratedClass Mod_BlinkToken.Mod_BlinkToken_C
// 0x0000
class AMod_BlinkToken_C : public ARangedWeapon_Mod_Action_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_BlinkToken.Mod_BlinkToken_C");
		return ptr;
	}



	void CheckForFog();
	void ModifyDamage();
	void CalculateClientAimVector();
	void FindGround();
	void GetBlinkLocation();
	void ClearIndicator();
	void UpdateIndicator();
	void DoAction();
	void ModifyInspectInfo();
	void OnPreviewEnd();
	void PreviewLoop();
	void OnPreviewStart();
	void ExecuteUbergraph_Mod_BlinkToken();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
