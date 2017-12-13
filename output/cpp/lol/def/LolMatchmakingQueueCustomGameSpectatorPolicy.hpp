#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolMatchmakingQueueCustomGameSpectatorPolicy {  
    AllAllowed_e = 3,
    FriendsAllowed_e = 2,
    LobbyAllowed_e = 1,
    NotAllowed_e = 0,
  };
  void to_json(json& j, const LolMatchmakingQueueCustomGameSpectatorPolicy& v) {
  if(v == LolMatchmakingQueueCustomGameSpectatorPolicy::AllAllowed_e) {
    j = "AllAllowed";
    return;
  }
  if(v == LolMatchmakingQueueCustomGameSpectatorPolicy::FriendsAllowed_e) {
    j = "FriendsAllowed";
    return;
  }
  if(v == LolMatchmakingQueueCustomGameSpectatorPolicy::LobbyAllowed_e) {
    j = "LobbyAllowed";
    return;
  }
  if(v == LolMatchmakingQueueCustomGameSpectatorPolicy::NotAllowed_e) {
    j = "NotAllowed";
    return;
  }
  }
  void from_json(const json& j, LolMatchmakingQueueCustomGameSpectatorPolicy& v) {
  if(j.get<std::string>() == "AllAllowed") {
    v = LolMatchmakingQueueCustomGameSpectatorPolicy::AllAllowed_e;
    return;
  } 
  if(j.get<std::string>() == "FriendsAllowed") {
    v = LolMatchmakingQueueCustomGameSpectatorPolicy::FriendsAllowed_e;
    return;
  } 
  if(j.get<std::string>() == "LobbyAllowed") {
    v = LolMatchmakingQueueCustomGameSpectatorPolicy::LobbyAllowed_e;
    return;
  } 
  if(j.get<std::string>() == "NotAllowed") {
    v = LolMatchmakingQueueCustomGameSpectatorPolicy::NotAllowed_e;
    return;
  } 
  }
}