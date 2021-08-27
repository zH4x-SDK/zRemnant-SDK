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

// Class VariantManagerContent.LevelVariantSets
// 0x0000
class ULevelVariantSets : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSets");
		return ptr;
	}



	void GetVariantSetByName();
	void GetVariantSet();
	void GetNumVariantSets();
};

// Class VariantManagerContent.LevelVariantSetsActor
// 0x0000
class ALevelVariantSetsActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSetsActor");
		return ptr;
	}



	void SwitchOnVariantByName();
	void SwitchOnVariantByIndex();
	void SetLevelVariantSets();
	void GetLevelVariantSets();
};

// Class VariantManagerContent.LevelVariantSetsFunctionDirector
// 0x0000
class ULevelVariantSetsFunctionDirector : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSetsFunctionDirector");
		return ptr;
	}



};

// Class VariantManagerContent.PropertyValue
// 0x0000
class UPropertyValue : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValue");
		return ptr;
	}



	void HasRecordedData();
	void GetPropertyTooltip();
	void GetFullDisplayString();
};

// Class VariantManagerContent.PropertyValueTransform
// 0x0000
class UPropertyValueTransform : public UPropertyValue
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueTransform");
		return ptr;
	}



};

// Class VariantManagerContent.PropertyValueVisibility
// 0x0000
class UPropertyValueVisibility : public UPropertyValue
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueVisibility");
		return ptr;
	}



};

// Class VariantManagerContent.PropertyValueColor
// 0x0000
class UPropertyValueColor : public UPropertyValue
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueColor");
		return ptr;
	}



};

// Class VariantManagerContent.PropertyValueMaterial
// 0x0000
class UPropertyValueMaterial : public UPropertyValue
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueMaterial");
		return ptr;
	}



};

// Class VariantManagerContent.Variant
// 0x0000
class UVariant : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.Variant");
		return ptr;
	}



	void SwitchOn();
	void SetDisplayText();
	void GetNumActors();
	void GetDisplayText();
	void GetActor();
};

// Class VariantManagerContent.VariantObjectBinding
// 0x0000
class UVariantObjectBinding : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.VariantObjectBinding");
		return ptr;
	}



};

// Class VariantManagerContent.VariantSet
// 0x0000
class UVariantSet : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.VariantSet");
		return ptr;
	}



	void SetDisplayText();
	void GetVariantByName();
	void GetVariant();
	void GetNumVariants();
	void GetDisplayText();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
