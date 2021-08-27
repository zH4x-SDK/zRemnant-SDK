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

// BlueprintGeneratedClass RemnantEntitlement.RemnantEntitlement_C
// 0x0000
class URemnantEntitlement_C : public UEntitlementComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RemnantEntitlement.RemnantEntitlement_C");
		return ptr;
	}



	void RevokeLicense();
	void ExecuteUbergraph_RemnantEntitlement();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
