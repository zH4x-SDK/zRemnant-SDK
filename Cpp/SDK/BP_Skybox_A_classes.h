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

// BlueprintGeneratedClass BP_Skybox_A.BP_Skybox_A_C
// 0x0000
class ABP_Skybox_A_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Skybox_A.BP_Skybox_A_C");
		return ptr;
	}



	void UpdateAudioState();
	void ResetSkyboxVFX();
	void ToggleCharacterVFX();
	void ToggleAmbientVFX();
	void RefreshSkyBoxSettings();
	void OverrideTesting();
	void Set_Sun_Light_Properties();
	void Get_Current_Data_Table_Row();
	void Update_Lighting_Scheme();
	void Set_Solar_Angle();
	void UserConstructionScript();
	void OnWorldReset();
	void ReceiveBeginPlay();
	void OnNotifyAllWorldReset();
	void OnSpectateTargetChanged();
	void ExecuteUbergraph_BP_Skybox_A();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
