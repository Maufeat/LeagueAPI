#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLobbyQueueCustomGameSpectatorPolicy { /**/ 
    AllAllowed_e = 3, /**/ 
    FriendsAllowed_e = 2, /**/ 
    LobbyAllowed_e = 1, /**/ 
    NotAllowed_e = 0, /**/ 
  };
  static void to_json(json& j, const LolLobbyQueueCustomGameSpectatorPolicy& v) {
    switch(v) { 
    case LolLobbyQueueCustomGameSpectatorPolicy::AllAllowed_e:
      j = "AllAllowed";
    break;
    case LolLobbyQueueCustomGameSpectatorPolicy::FriendsAllowed_e:
      j = "FriendsAllowed";
    break;
    case LolLobbyQueueCustomGameSpectatorPolicy::LobbyAllowed_e:
      j = "LobbyAllowed";
    break;
    case LolLobbyQueueCustomGameSpectatorPolicy::NotAllowed_e:
      j = "NotAllowed";
    break;
    };
  }
  static void from_json(const json& j, LolLobbyQueueCustomGameSpectatorPolicy& v) {
    auto s = j.get<std::string>(); 
    if(s == "AllAllowed") {
      v = LolLobbyQueueCustomGameSpectatorPolicy::AllAllowed_e;
      return;
    } 
    if(s == "FriendsAllowed") {
      v = LolLobbyQueueCustomGameSpectatorPolicy::FriendsAllowed_e;
      return;
    } 
    if(s == "LobbyAllowed") {
      v = LolLobbyQueueCustomGameSpectatorPolicy::LobbyAllowed_e;
      return;
    } 
    if(s == "NotAllowed") {
      v = LolLobbyQueueCustomGameSpectatorPolicy::NotAllowed_e;
      return;
    } 
  }
} 