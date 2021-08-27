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

// WidgetBlueprintGeneratedClass Widget_PersistenceIO_Indicator.Widget_PersistenceIO_Indicator_C
// 0x0000
class UWidget_PersistenceIO_Indicator_C : public UPreservedUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_PersistenceIO_Indicator.Widget_PersistenceIO_Indicator_C");
		return ptr;
	}



	void PulseOpacity();
	void Tick();
	void OnShowIndicator();
	void OnHideIndicator();
	void OnInitialized();
	void PulseCompleted();
	void ExecuteUbergraph_Widget_PersistenceIO_Indicator();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
