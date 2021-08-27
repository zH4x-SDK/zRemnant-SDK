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

// WidgetBlueprintGeneratedClass Widget_StatusInfo.Widget_StatusInfo_C
// 0x0000
class UWidget_StatusInfo_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_StatusInfo.Widget_StatusInfo_C");
		return ptr;
	}



	void Init();
	void Get_Name_Text_1();
	void Construct();
	void ExecuteUbergraph_Widget_StatusInfo();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
