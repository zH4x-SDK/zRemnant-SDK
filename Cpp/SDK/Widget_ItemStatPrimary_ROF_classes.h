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

// WidgetBlueprintGeneratedClass Widget_ItemStatPrimary_ROF.Widget_ItemStatPrimary_ROF_C
// 0x0000
class UWidget_ItemStatPrimary_ROF_C : public UWidget_ItemStatPrimary_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ItemStatPrimary_ROF.Widget_ItemStatPrimary_ROF_C");
		return ptr;
	}



	void Get_StatValue_Text_1();
	void Refresh();
	void Init();
	void ExecuteUbergraph_Widget_ItemStatPrimary_ROF();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
