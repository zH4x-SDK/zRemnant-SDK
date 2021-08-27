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

// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// 0x0000
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementBlueprintLibrary");
		return ptr;
	}



	void GetCachedAchievementProgress();
	void GetCachedAchievementDescription();
};

// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// 0x0000
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementQueryCallbackProxy");
		return ptr;
	}



	void CacheAchievements();
	void CacheAchievementDescriptions();
};

// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// 0x0000
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.AchievementWriteCallbackProxy");
		return ptr;
	}



	void WriteAchievementProgress();
};

// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// 0x0000
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.ConnectionCallbackProxy");
		return ptr;
	}



	void ConnectToService();
};

// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// 0x0000
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.CreateSessionCallbackProxy");
		return ptr;
	}



	void CreateSession();
};

// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// 0x0000
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.DestroySessionCallbackProxy");
		return ptr;
	}



	void DestroySession();
};

// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// 0x0000
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.EndMatchCallbackProxy");
		return ptr;
	}



	void EndMatch();
};

// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// 0x0000
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.EndTurnCallbackProxy");
		return ptr;
	}



	void EndTurn();
};

// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// 0x0000
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.FindSessionsCallbackProxy");
		return ptr;
	}



	void GetServerName();
	void GetPingInMs();
	void GetMaxPlayers();
	void GetCurrentPlayers();
	void FindSessions();
};

// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// 0x0000
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy");
		return ptr;
	}



	void FindTurnBasedMatch();
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// 0x0000
class UInAppPurchaseCallbackProxy : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy");
		return ptr;
	}



	void CreateProxyObjectForInAppPurchase();
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// 0x0000
class UInAppPurchaseQueryCallbackProxy : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy");
		return ptr;
	}



	void CreateProxyObjectForInAppPurchaseQuery();
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// 0x0000
class UInAppPurchaseRestoreCallbackProxy : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy");
		return ptr;
	}



	void CreateProxyObjectForInAppPurchaseRestore();
};

// Class OnlineSubsystemUtils.IpConnection
// 0x0000
class UIpConnection : public UNetConnection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.IpConnection");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.IpNetDriver
// 0x0000
class UIpNetDriver : public UNetDriver
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.IpNetDriver");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// 0x0000
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.JoinSessionCallbackProxy");
		return ptr;
	}



	void JoinSession();
};

// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// 0x0000
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary");
		return ptr;
	}



	void WriteLeaderboardInteger();
};

// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// 0x0000
class ULeaderboardFlushCallbackProxy : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy");
		return ptr;
	}



	void CreateProxyObjectForFlush();
};

// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// 0x0000
class ULeaderboardQueryCallbackProxy : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy");
		return ptr;
	}



	void CreateProxyObjectForIntQuery();
};

// Class OnlineSubsystemUtils.LogoutCallbackProxy
// 0x0000
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.LogoutCallbackProxy");
		return ptr;
	}



	void Logout();
};

// Class OnlineSubsystemUtils.OnlineBeacon
// 0x0000
class AOnlineBeacon : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeacon");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.OnlineBeaconClient
// 0x0000
class AOnlineBeaconClient : public AOnlineBeacon
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconClient");
		return ptr;
	}



	void ClientOnConnected();
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
// 0x0000
class AOnlineBeaconHost : public AOnlineBeacon
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconHost");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// 0x0000
class AOnlineBeaconHostObject : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineBeaconHostObject");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// 0x0000
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.OnlinePIESettings
// 0x0000
class UOnlinePIESettings : public UDeveloperSettings
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlinePIESettings");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.OnlineSessionClient
// 0x0000
class UOnlineSessionClient : public UOnlineSession
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.OnlineSessionClient");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.PartyBeaconClient
// 0x0000
class APartyBeaconClient : public AOnlineBeaconClient
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconClient");
		return ptr;
	}



	void ServerUpdateReservationRequest();
	void ServerReservationRequest();
	void ServerCancelReservationRequest();
	void ClientSendReservationUpdates();
	void ClientSendReservationFull();
	void ClientReservationResponse();
	void ClientCancelReservationResponse();
};

// Class OnlineSubsystemUtils.PartyBeaconHost
// 0x0000
class APartyBeaconHost : public AOnlineBeaconHostObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconHost");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.PartyBeaconState
// 0x0000
class UPartyBeaconState : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.PartyBeaconState");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// 0x0000
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.QuitMatchCallbackProxy");
		return ptr;
	}



	void QuitMatch();
};

// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// 0x0000
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.ShowLoginUICallbackProxy");
		return ptr;
	}



	void ShowExternalLoginUI();
};

// Class OnlineSubsystemUtils.TestBeaconClient
// 0x0000
class ATestBeaconClient : public AOnlineBeaconClient
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.TestBeaconClient");
		return ptr;
	}



	void ServerPong();
	void ClientPing();
};

// Class OnlineSubsystemUtils.TestBeaconHost
// 0x0000
class ATestBeaconHost : public AOnlineBeaconHostObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.TestBeaconHost");
		return ptr;
	}



};

// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// 0x0000
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary");
		return ptr;
	}



	void RegisterTurnBasedMatchInterfaceObject();
	void GetPlayerDisplayName();
	void GetMyPlayerIndex();
	void GetIsMyTurn();
};

// Class OnlineSubsystemUtils.VoipListenerSynthComponent
// 0x0000
class UVoipListenerSynthComponent : public USynthComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemUtils.VoipListenerSynthComponent");
		return ptr;
	}



	void IsIdling();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
