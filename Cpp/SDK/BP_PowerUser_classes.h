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

// BlueprintGeneratedClass BP_PowerUser.BP_PowerUser_C
// 0x0000
class UBP_PowerUser_C : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_PowerUser.BP_PowerUser_C");
		return ptr;
	}



	void Animate();
	void InitializeComponents();
	void GetPowerSource();
	void IsEnabled();
	void ReceiveBeginPlay();
	void OnPowerSourceEnabled();
	void AnimateOn();
	void AnimateOff();
	void ReceiveTick();
	void ExecuteUbergraph_BP_PowerUser();
	void OnEnabled__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
