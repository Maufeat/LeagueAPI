#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolChatQueueCustomGameSpectatorPolicy { /**/ 
    AllAllowed_e = 3, /**/ 
    FriendsAllowed_e = 2, /**/ 
    LobbyAllowed_e = 1, /**/ 
    NotAllowed_e = 0, /**/ 
  };
  static void to_json(json& j, const LolChatQueueCustomGameSpectatorPolicy& v) {
    switch(v) { 
    case LolChatQueueCustomGameSpectatorPolicy::AllAllowed_e:
      j = "AllAllowed";
    break;
    case LolChatQueueCustomGameSpectatorPolicy::FriendsAllowed_e:
      j = "FriendsAllowed";
    break;
    case LolChatQueueCustomGameSpectatorPolicy::LobbyAllowed_e:
      j = "LobbyAllowed";
    break;
    case LolChatQueueCustomGameSpectatorPolicy::NotAllowed_e:
      j = "NotAllowed";
    break;
    };
  }
  static void from_json(const json& j, LolChatQueueCustomGameSpectatorPolicy& v) {
    auto s = j.get<std::string>(); 
    if(s == "AllAllowed") {
      v = LolChatQueueCustomGameSpectatorPolicy::AllAllowed_e;
      return;
    } 
    if(s == "FriendsAllowed") {
      v = LolChatQueueCustomGameSpectatorPolicy::FriendsAllowed_e;
      return;
    } 
    if(s == "LobbyAllowed") {
      v = LolChatQueueCustomGameSpectatorPolicy::LobbyAllowed_e;
      return;
    } 
    if(s == "NotAllowed") {
      v = LolChatQueueCustomGameSpectatorPolicy::NotAllowed_e;
      return;
    } 
  }
} 