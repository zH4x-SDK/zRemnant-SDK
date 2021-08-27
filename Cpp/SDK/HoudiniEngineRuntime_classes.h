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

// Class HoudiniEngineRuntime.HoudiniAssetComponent
// 0x0000
class UHoudiniAssetComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetComponent");
		return ptr;
	}



	void GetAssetId();
};

// Class HoudiniEngineRuntime.HDAComponent
// 0x0000
class UHDAComponent : public UHoudiniAssetComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HDAComponent");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniAsset
// 0x0000
class UHoudiniAsset : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAsset");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniAssetActor
// 0x0000
class AHoudiniAssetActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetActor");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniAssetComponentMaterials
// 0x0000
class UHoudiniAssetComponentMaterials : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetComponentMaterials");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniAssetParameter
// 0x0000
class UHoudiniAssetParameter : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameter");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniAssetInput
// 0x0000
class UHoudiniAssetInput : public UHoudiniAssetParameter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetInput");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniAssetInstanceInput
// 0x0000
class UHoudiniAssetInstanceInput : public UHoudiniAssetParameter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetInstanceInput");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniAssetInstanceInputField
// 0x0000
class UHoudiniAssetInstanceInputField : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetInstanceInputField");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniAssetParameterButton
// 0x0000
class UHoudiniAssetParameterButton : public UHoudiniAssetParameter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterButton");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniAssetParameterChoice
// 0x0000
class UHoudiniAssetParameterChoice : public UHoudiniAssetParameter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterChoice");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniAssetParameterColor
// 0x0000
class UHoudiniAssetParameterColor : public UHoudiniAssetParameter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterColor");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniAssetParameterFile
// 0x0000
class UHoudiniAssetParameterFile : public UHoudiniAssetParameter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterFile");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniAssetParameterFloat
// 0x0000
class UHoudiniAssetParameterFloat : public UHoudiniAssetParameter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterFloat");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniAssetParameterFolder
// 0x0000
class UHoudiniAssetParameterFolder : public UHoudiniAssetParameter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterFolder");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniAssetParameterFolderList
// 0x0000
class UHoudiniAssetParameterFolderList : public UHoudiniAssetParameter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterFolderList");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniAssetParameterInt
// 0x0000
class UHoudiniAssetParameterInt : public UHoudiniAssetParameter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterInt");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniAssetParameterLabel
// 0x0000
class UHoudiniAssetParameterLabel : public UHoudiniAssetParameter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterLabel");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniAssetParameterMultiparm
// 0x0000
class UHoudiniAssetParameterMultiparm : public UHoudiniAssetParameter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterMultiparm");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniAssetParameterRampCurveFloat
// 0x0000
class UHoudiniAssetParameterRampCurveFloat : public UCurveFloat
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterRampCurveFloat");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniAssetParameterRampCurveColor
// 0x0000
class UHoudiniAssetParameterRampCurveColor : public UCurveLinearColor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterRampCurveColor");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniAssetParameterRamp
// 0x0000
class UHoudiniAssetParameterRamp : public UHoudiniAssetParameterMultiparm
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterRamp");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniAssetParameterSeparator
// 0x0000
class UHoudiniAssetParameterSeparator : public UHoudiniAssetParameter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterSeparator");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniAssetParameterString
// 0x0000
class UHoudiniAssetParameterString : public UHoudiniAssetParameter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterString");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniAssetParameterToggle
// 0x0000
class UHoudiniAssetParameterToggle : public UHoudiniAssetParameter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAssetParameterToggle");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniAttributeDataComponent
// 0x0000
class UHoudiniAttributeDataComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniAttributeDataComponent");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniEngineConvertBgeoCommandlet
// 0x0000
class UHoudiniEngineConvertBgeoCommandlet : public UCommandlet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniEngineConvertBgeoCommandlet");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniEngineConvertBgeoDirCommandlet
// 0x0000
class UHoudiniEngineConvertBgeoDirCommandlet : public UCommandlet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniEngineConvertBgeoDirCommandlet");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.TestHoudiniParameterBuilder
// 0x0000
class UTestHoudiniParameterBuilder : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.TestHoudiniParameterBuilder");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniHandleComponent
// 0x0000
class UHoudiniHandleComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniHandleComponent");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniInstancedActorComponent
// 0x0000
class UHoudiniInstancedActorComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniInstancedActorComponent");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent
// 0x0000
class UHoudiniMeshSplitInstancerComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniRuntimeSettings
// 0x0000
class UHoudiniRuntimeSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniRuntimeSettings");
		return ptr;
	}



};

// Class HoudiniEngineRuntime.HoudiniSplineComponent
// 0x0000
class UHoudiniSplineComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HoudiniEngineRuntime.HoudiniSplineComponent");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
