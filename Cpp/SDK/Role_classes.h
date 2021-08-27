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

// WidgetBlueprintGeneratedClass Role.Role_C
// 0x0000
class URole_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Role.Role_C");
		return ptr;
	}



	void RemoveRoleBox();
	void Construct();
	void ExecuteUbergraph_Role();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
