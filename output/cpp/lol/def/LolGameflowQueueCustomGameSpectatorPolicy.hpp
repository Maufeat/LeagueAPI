#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolGameflowQueueCustomGameSpectatorPolicy {  
    AllAllowed_e = 3,
    FriendsAllowed_e = 2,
    LobbyAllowed_e = 1,
    NotAllowed_e = 0,
  };
  void to_json(json& j, const LolGameflowQueueCustomGameSpectatorPolicy& v) {
  if(v == LolGameflowQueueCustomGameSpectatorPolicy::AllAllowed_e) {
    j = "AllAllowed";
    return;
  }
  if(v == LolGameflowQueueCustomGameSpectatorPolicy::FriendsAllowed_e) {
    j = "FriendsAllowed";
    return;
  }
  if(v == LolGameflowQueueCustomGameSpectatorPolicy::LobbyAllowed_e) {
    j = "LobbyAllowed";
    return;
  }
  if(v == LolGameflowQueueCustomGameSpectatorPolicy::NotAllowed_e) {
    j = "NotAllowed";
    return;
  }
  }
  void from_json(const json& j, LolGameflowQueueCustomGameSpectatorPolicy& v) {
  if(j.get<std::string>() == "AllAllowed") {
    v = LolGameflowQueueCustomGameSpectatorPolicy::AllAllowed_e;
    return;
  } 
  if(j.get<std::string>() == "FriendsAllowed") {
    v = LolGameflowQueueCustomGameSpectatorPolicy::FriendsAllowed_e;
    return;
  } 
  if(j.get<std::string>() == "LobbyAllowed") {
    v = LolGameflowQueueCustomGameSpectatorPolicy::LobbyAllowed_e;
    return;
  } 
  if(j.get<std::string>() == "NotAllowed") {
    v = LolGameflowQueueCustomGameSpectatorPolicy::NotAllowed_e;
    return;
  } 
  }
}