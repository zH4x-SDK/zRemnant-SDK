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

// BlueprintGeneratedClass BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C
// 0x0000
class ABP_VeilOfTheBlackTear_Shield_C : public ABP_BreakableActor_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_VeilOfTheBlackTear_Shield.BP_VeilOfTheBlackTear_Shield_C");
		return ptr;
	}



	void Get_Scale();
	void UserConstructionScript();
	void OnNotifyAllWorldReset();
	void FX_Impact();
	void DestroyFX();
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void OnNotifyTakeDamage();
	void OnNotifyDead();
	void OnWorldReset();
	void BndEvt__ShieldMesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature();
	void ExecuteUbergraph_BP_VeilOfTheBlackTear_Shield();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
