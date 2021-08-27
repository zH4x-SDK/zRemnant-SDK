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

// Class GunfireSaveSystem.LevelScriptActorGunfire
// 0x0000
class ALevelScriptActorGunfire : public ALevelScriptActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.LevelScriptActorGunfire");
		return ptr;
	}



};

// Class GunfireSaveSystem.PersistenceCallbackProxy
// 0x0000
class UPersistenceCallbackProxy : public UBlueprintAsyncActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.PersistenceCallbackProxy");
		return ptr;
	}



};

// Class GunfireSaveSystem.CommitSaveWithResultCallbackProxy
// 0x0000
class UCommitSaveWithResultCallbackProxy : public UPersistenceCallbackProxy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.CommitSaveWithResultCallbackProxy");
		return ptr;
	}



	void CommitSaveWithResult();
};

// Class GunfireSaveSystem.LoadSaveCallbackProxy
// 0x0000
class ULoadSaveCallbackProxy : public UPersistenceCallbackProxy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.LoadSaveCallbackProxy");
		return ptr;
	}



	void LoadSave();
};

// Class GunfireSaveSystem.LoadProfileSaveCallbackProxy
// 0x0000
class ULoadProfileSaveCallbackProxy : public UPersistenceCallbackProxy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.LoadProfileSaveCallbackProxy");
		return ptr;
	}



	void LoadProfileSave();
};

// Class GunfireSaveSystem.ReadSaveCallbackProxy
// 0x0000
class UReadSaveCallbackProxy : public UPersistenceCallbackProxy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.ReadSaveCallbackProxy");
		return ptr;
	}



	void ReadSave();
};

// Class GunfireSaveSystem.HasSaveCallbackProxy
// 0x0000
class UHasSaveCallbackProxy : public UPersistenceCallbackProxy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.HasSaveCallbackProxy");
		return ptr;
	}



	void HasSave();
};

// Class GunfireSaveSystem.DeleteSaveCallbackProxy
// 0x0000
class UDeleteSaveCallbackProxy : public UPersistenceCallbackProxy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.DeleteSaveCallbackProxy");
		return ptr;
	}



	void DeleteSave();
};

// Class GunfireSaveSystem.DeleteProfileSaveCallbackProxy
// 0x0000
class UDeleteProfileSaveCallbackProxy : public UPersistenceCallbackProxy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.DeleteProfileSaveCallbackProxy");
		return ptr;
	}



	void DeleteProfileSave();
};

// Class GunfireSaveSystem.HasProfileBackupCallbackProxy
// 0x0000
class UHasProfileBackupCallbackProxy : public UPersistenceCallbackProxy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.HasProfileBackupCallbackProxy");
		return ptr;
	}



	void HasProfileBackup();
};

// Class GunfireSaveSystem.RestoreProfileBackupCallbackProxy
// 0x0000
class URestoreProfileBackupCallbackProxy : public UPersistenceCallbackProxy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.RestoreProfileBackupCallbackProxy");
		return ptr;
	}



	void RestoreProfileBackup();
};

// Class GunfireSaveSystem.HasSlotBackupCallbackProxy
// 0x0000
class UHasSlotBackupCallbackProxy : public UPersistenceCallbackProxy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.HasSlotBackupCallbackProxy");
		return ptr;
	}



	void HasSlotBackup();
};

// Class GunfireSaveSystem.RestoreSlotBackupCallbackProxy
// 0x0000
class URestoreSlotBackupCallbackProxy : public UPersistenceCallbackProxy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.RestoreSlotBackupCallbackProxy");
		return ptr;
	}



	void RestoreSlotBackup();
};

// Class GunfireSaveSystem.PersistenceBlueprintFunctionLibrary
// 0x0000
class UPersistenceBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.PersistenceBlueprintFunctionLibrary");
		return ptr;
	}



	void SetReference();
	void SetDisableCommit();
	void GetReference();
	void GetProfileSave();
	void GetPersistenceManager();
	void GetCurrentSave();
	void CopyReference();
	void CommitSave();
	void ClearReference();
};

// Class GunfireSaveSystem.PersistenceComponent
// 0x0000
class UPersistenceComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.PersistenceComponent");
		return ptr;
	}



};

// Class GunfireSaveSystem.PersistenceContainer
// 0x0000
class UPersistenceContainer : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.PersistenceContainer");
		return ptr;
	}



};

// Class GunfireSaveSystem.PersistenceSettings
// 0x0000
class UPersistenceSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.PersistenceSettings");
		return ptr;
	}



};

// Class GunfireSaveSystem.GunfireSaveSystemSettings
// 0x0000
class UGunfireSaveSystemSettings : public UDeveloperSettings
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.GunfireSaveSystemSettings");
		return ptr;
	}



};

// Class GunfireSaveSystem.PersistenceManager
// 0x0000
class UPersistenceManager : public UGameInstanceSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.PersistenceManager");
		return ptr;
	}



};

// Class GunfireSaveSystem.SaveGamePersistence
// 0x0000
class USaveGamePersistence : public USaveGame
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.SaveGamePersistence");
		return ptr;
	}



	void PreCommit();
};

// Class GunfireSaveSystem.SaveGameProfile
// 0x0000
class USaveGameProfile : public USaveGamePersistence
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.SaveGameProfile");
		return ptr;
	}



};

// Class GunfireSaveSystem.SaveGameWorld
// 0x0000
class USaveGameWorld : public USaveGamePersistence
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireSaveSystem.SaveGameWorld");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
