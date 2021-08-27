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

// BlueprintGeneratedClass PlayStateEffect_FadeHUD.PlayStateEffect_FadeHUD_C
// 0x0000
class UPlayStateEffect_FadeHUD_C : public UPlayStateEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayStateEffect_FadeHUD.PlayStateEffect_FadeHUD_C");
		return ptr;
	}



	void GetEditorLabel();
	void Apply();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
