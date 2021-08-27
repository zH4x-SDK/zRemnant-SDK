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

// BlueprintGeneratedClass Interactive_Bell.Interactive_Bell_C
// 0x0000
class AInteractive_Bell_C : public ADamageableActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interactive_Bell.Interactive_Bell_C");
		return ptr;
	}



	void MulticastRingBell();
	void OnNotifyTakeDamage();
	void RingBell();
	void ExecuteUbergraph_Interactive_Bell();
	void OnRingBell__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
