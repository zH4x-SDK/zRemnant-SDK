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

// WidgetBlueprintGeneratedClass Widget_StatList.Widget_StatList_C
// 0x0000
class UWidget_StatList_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_StatList.Widget_StatList_C");
		return ptr;
	}



	void GetWidgetForStat();
	void BuildList();
	void SetInspectInfo();
	void Construct();
	void ExecuteUbergraph_Widget_StatList();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
