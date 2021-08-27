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

// Class FieldSystemEngine.FieldSystemActor
// 0x0000
class AFieldSystemActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemActor");
		return ptr;
	}



};

// Class FieldSystemEngine.FieldSystemComponent
// 0x0000
class UFieldSystemComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemComponent");
		return ptr;
	}



	void ApplyUniformVectorFalloffForce();
	void ApplyStayDynamicField();
	void ApplyRadialVectorFalloffForce();
	void ApplyRadialForce();
	void ApplyLinearForce();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
