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

// WidgetBlueprintGeneratedClass WIdget_StatusBase.WIdget_StatusBase_C
// 0x0000
class UWIdget_StatusBase_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WIdget_StatusBase.WIdget_StatusBase_C");
		return ptr;
	}



	void Add_Existing_Actions();
	void Get_Action_Component();
	void On_Action_Added();
	void ExecuteUbergraph_WIdget_StatusBase();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
