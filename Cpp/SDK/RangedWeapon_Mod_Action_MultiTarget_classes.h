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

// BlueprintGeneratedClass RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C
// 0x0000
class ARangedWeapon_Mod_Action_MultiTarget_C : public ARangedWeapon_Mod_Action_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RangedWeapon_Mod_Action_MultiTarget.RangedWeapon_Mod_Action_MultiTarget_C");
		return ptr;
	}



	void ValidateArc();
	void RemoveProjectile();
	void AddProjectile();
	void ContainsValidProjectile();
	void ValidateCachedTargets();
	void OnUpdatePendingTargets();
	void OnRep_PendingTargets();
	void GetDrawTargets();
	void ClearInvalidTargets();
	void DrawIndicators();
	void AddPendingTargets();
	void CalculateClientAimVector();
	void PickTarget();
	void GetCurrentTargets();
	void SelectTargets();
	void CreateIndicator();
	void ClearIndicator();
	void MoveIndicatorToTarget();
	void WeighTarget();
	void ClearPreviewIndicators();
	void UpdatePreviewIndicators();
	void FindTargets();
	void OnPreviewStart();
	void OnPreviewEnd();
	void PreviewLoop();
	void UpdateTargets();
	void OnAttached();
	void OnDetached();
	void ReceiveTick();
	void OnBeginUse();
	void OnEndUse();
	void OnActivate();
	void CustomEvent();
	void OnDeactivate();
	void ExecuteUbergraph_RangedWeapon_Mod_Action_MultiTarget();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
