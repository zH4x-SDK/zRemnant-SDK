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

// BlueprintGeneratedClass Quest_BP_Water_SlimeHulk.Quest_BP_Water_SlimeHulk_C
// 0x0000
class AQuest_BP_Water_SlimeHulk_C : public ABP_Water_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_BP_Water_SlimeHulk.Quest_BP_Water_SlimeHulk_C");
		return ptr;
	}



	void RemoveFloaters();
	void Raise_Water_02();
	void ReceiveBeginPlay();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature();
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature();
	void RaiseWater1();
	void RaiseWater2();
	void Raise_Water_01();
	void ResetWaterLevel();
	void OnEnd_Event_1();
	void BndEvt__Tween_K2Node_ComponentBoundEvent_2_TweenCompleteDelegate__DelegateSignature();
	void ExecuteUbergraph_Quest_BP_Water_SlimeHulk();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
