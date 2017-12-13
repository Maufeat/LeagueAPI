#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolLobbyQueueCustomGameSpectatorPolicy {  
    AllAllowed_e = 3,
    FriendsAllowed_e = 2,
    LobbyAllowed_e = 1,
    NotAllowed_e = 0,
  };
  void to_json(json& j, const LolLobbyQueueCustomGameSpectatorPolicy& v) {
  if(v == LolLobbyQueueCustomGameSpectatorPolicy::AllAllowed_e) {
    j = "AllAllowed";
    return;
  }
  if(v == LolLobbyQueueCustomGameSpectatorPolicy::FriendsAllowed_e) {
    j = "FriendsAllowed";
    return;
  }
  if(v == LolLobbyQueueCustomGameSpectatorPolicy::LobbyAllowed_e) {
    j = "LobbyAllowed";
    return;
  }
  if(v == LolLobbyQueueCustomGameSpectatorPolicy::NotAllowed_e) {
    j = "NotAllowed";
    return;
  }
  }
  void from_json(const json& j, LolLobbyQueueCustomGameSpectatorPolicy& v) {
  if(j.get<std::string>() == "AllAllowed") {
    v = LolLobbyQueueCustomGameSpectatorPolicy::AllAllowed_e;
    return;
  } 
  if(j.get<std::string>() == "FriendsAllowed") {
    v = LolLobbyQueueCustomGameSpectatorPolicy::FriendsAllowed_e;
    return;
  } 
  if(j.get<std::string>() == "LobbyAllowed") {
    v = LolLobbyQueueCustomGameSpectatorPolicy::LobbyAllowed_e;
    return;
  } 
  if(j.get<std::string>() == "NotAllowed") {
    v = LolLobbyQueueCustomGameSpectatorPolicy::NotAllowed_e;
    return;
  } 
  }
}