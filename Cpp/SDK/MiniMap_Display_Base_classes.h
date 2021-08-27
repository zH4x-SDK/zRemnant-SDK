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

// BlueprintGeneratedClass MiniMap_Display_Base.MiniMap_Display_Base_C
// 0x0000
class AMiniMap_Display_Base_C : public ARemnantMiniMapDisplayActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MiniMap_Display_Base.MiniMap_Display_Base_C");
		return ptr;
	}



	void Toggle_Mini_Map();
	void OnInit();
	void ExecuteUbergraph_MiniMap_Display_Base();
	void Map_Initialized__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
