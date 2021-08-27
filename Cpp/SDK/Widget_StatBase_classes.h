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

// WidgetBlueprintGeneratedClass Widget_StatBase.Widget_StatBase_C
// 0x0000
class UWidget_StatBase_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_StatBase.Widget_StatBase_C");
		return ptr;
	}



	void Init();
	void InitFromInspectInfo();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
