#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolMatchmakingQueueCustomGameSpectatorPolicy { /**/ 
    AllAllowed_e = 3, /**/ 
    FriendsAllowed_e = 2, /**/ 
    LobbyAllowed_e = 1, /**/ 
    NotAllowed_e = 0, /**/ 
  };
  static void to_json(json& j, const LolMatchmakingQueueCustomGameSpectatorPolicy& v) {
    switch(v) { 
    case LolMatchmakingQueueCustomGameSpectatorPolicy::AllAllowed_e:
      j = "AllAllowed";
    break;
    case LolMatchmakingQueueCustomGameSpectatorPolicy::FriendsAllowed_e:
      j = "FriendsAllowed";
    break;
    case LolMatchmakingQueueCustomGameSpectatorPolicy::LobbyAllowed_e:
      j = "LobbyAllowed";
    break;
    case LolMatchmakingQueueCustomGameSpectatorPolicy::NotAllowed_e:
      j = "NotAllowed";
    break;
    };
  }
  static void from_json(const json& j, LolMatchmakingQueueCustomGameSpectatorPolicy& v) {
    auto s = j.get<std::string>(); 
    if(s == "AllAllowed") {
      v = LolMatchmakingQueueCustomGameSpectatorPolicy::AllAllowed_e;
      return;
    } 
    if(s == "FriendsAllowed") {
      v = LolMatchmakingQueueCustomGameSpectatorPolicy::FriendsAllowed_e;
      return;
    } 
    if(s == "LobbyAllowed") {
      v = LolMatchmakingQueueCustomGameSpectatorPolicy::LobbyAllowed_e;
      return;
    } 
    if(s == "NotAllowed") {
      v = LolMatchmakingQueueCustomGameSpectatorPolicy::NotAllowed_e;
      return;
    } 
  }
} 