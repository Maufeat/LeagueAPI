#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolGameQueuesQueueCustomGameSpectatorPolicy {  
    AllAllowed_e = 3,
    FriendsAllowed_e = 2,
    LobbyAllowed_e = 1,
    NotAllowed_e = 0,
  };
  inline void to_json(json& j, const LolGameQueuesQueueCustomGameSpectatorPolicy& v) {
    if(v == LolGameQueuesQueueCustomGameSpectatorPolicy::AllAllowed_e) {
      j = "AllAllowed";
      return;
    }
    if(v == LolGameQueuesQueueCustomGameSpectatorPolicy::FriendsAllowed_e) {
      j = "FriendsAllowed";
      return;
    }
    if(v == LolGameQueuesQueueCustomGameSpectatorPolicy::LobbyAllowed_e) {
      j = "LobbyAllowed";
      return;
    }
    if(v == LolGameQueuesQueueCustomGameSpectatorPolicy::NotAllowed_e) {
      j = "NotAllowed";
      return;
    }
  }
  inline void from_json(const json& j, LolGameQueuesQueueCustomGameSpectatorPolicy& v) {
    if(j.get<std::string>() == "AllAllowed") {
      v = LolGameQueuesQueueCustomGameSpectatorPolicy::AllAllowed_e;
      return;
    } 
    if(j.get<std::string>() == "FriendsAllowed") {
      v = LolGameQueuesQueueCustomGameSpectatorPolicy::FriendsAllowed_e;
      return;
    } 
    if(j.get<std::string>() == "LobbyAllowed") {
      v = LolGameQueuesQueueCustomGameSpectatorPolicy::LobbyAllowed_e;
      return;
    } 
    if(j.get<std::string>() == "NotAllowed") {
      v = LolGameQueuesQueueCustomGameSpectatorPolicy::NotAllowed_e;
      return;
    } 
  }
}