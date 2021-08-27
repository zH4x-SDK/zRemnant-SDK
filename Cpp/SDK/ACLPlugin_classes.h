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

// Class ACLPlugin.ACLStatsDumpCommandlet
// 0x0000
class UACLStatsDumpCommandlet : public UCommandlet
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ACLPlugin.ACLStatsDumpCommandlet");
		return ptr;
	}



};

// Class ACLPlugin.AnimCompress_ACLBase
// 0x0000
class UAnimCompress_ACLBase : public UAnimCompress
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ACLPlugin.AnimCompress_ACLBase");
		return ptr;
	}



};

// Class ACLPlugin.AnimCompress_ACL
// 0x0000
class UAnimCompress_ACL : public UAnimCompress_ACLBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ACLPlugin.AnimCompress_ACL");
		return ptr;
	}



};

// Class ACLPlugin.AnimCompress_ACLCustom
// 0x0000
class UAnimCompress_ACLCustom : public UAnimCompress_ACLBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ACLPlugin.AnimCompress_ACLCustom");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
