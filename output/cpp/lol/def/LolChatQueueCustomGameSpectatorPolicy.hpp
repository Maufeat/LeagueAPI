#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolChatQueueCustomGameSpectatorPolicy {  
    AllAllowed_e = 3,
    FriendsAllowed_e = 2,
    LobbyAllowed_e = 1,
    NotAllowed_e = 0,
  };
  inline void to_json(json& j, const LolChatQueueCustomGameSpectatorPolicy& v) {
    if(v == LolChatQueueCustomGameSpectatorPolicy::AllAllowed_e) {
      j = "AllAllowed";
      return;
    }
    if(v == LolChatQueueCustomGameSpectatorPolicy::FriendsAllowed_e) {
      j = "FriendsAllowed";
      return;
    }
    if(v == LolChatQueueCustomGameSpectatorPolicy::LobbyAllowed_e) {
      j = "LobbyAllowed";
      return;
    }
    if(v == LolChatQueueCustomGameSpectatorPolicy::NotAllowed_e) {
      j = "NotAllowed";
      return;
    }
  }
  inline void from_json(const json& j, LolChatQueueCustomGameSpectatorPolicy& v) {
    if(j.get<std::string>() == "AllAllowed") {
      v = LolChatQueueCustomGameSpectatorPolicy::AllAllowed_e;
      return;
    } 
    if(j.get<std::string>() == "FriendsAllowed") {
      v = LolChatQueueCustomGameSpectatorPolicy::FriendsAllowed_e;
      return;
    } 
    if(j.get<std::string>() == "LobbyAllowed") {
      v = LolChatQueueCustomGameSpectatorPolicy::LobbyAllowed_e;
      return;
    } 
    if(j.get<std::string>() == "NotAllowed") {
      v = LolChatQueueCustomGameSpectatorPolicy::NotAllowed_e;
      return;
    } 
  }
}