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

// WidgetBlueprintGeneratedClass Widget_Debug_QuestTree.Widget_Debug_QuestTree_C
// 0x0000
class UWidget_Debug_QuestTree_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Debug_QuestTree.Widget_Debug_QuestTree_C");
		return ptr;
	}



	void AddChildren();
	void BuildTree();
	void Init();
	void OnComponentClick__DelegateSignature();
	void OnComponentSelected__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
