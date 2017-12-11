#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolGameflowQueueCustomGameSpectatorPolicy { /**/ 
    AllAllowed_e = 3, /**/ 
    FriendsAllowed_e = 2, /**/ 
    LobbyAllowed_e = 1, /**/ 
    NotAllowed_e = 0, /**/ 
  };
  static void to_json(json& j, const LolGameflowQueueCustomGameSpectatorPolicy& v) {
    switch(v) { 
    case LolGameflowQueueCustomGameSpectatorPolicy::AllAllowed_e:
      j = "AllAllowed";
    break;
    case LolGameflowQueueCustomGameSpectatorPolicy::FriendsAllowed_e:
      j = "FriendsAllowed";
    break;
    case LolGameflowQueueCustomGameSpectatorPolicy::LobbyAllowed_e:
      j = "LobbyAllowed";
    break;
    case LolGameflowQueueCustomGameSpectatorPolicy::NotAllowed_e:
      j = "NotAllowed";
    break;
    };
  }
  static void from_json(const json& j, LolGameflowQueueCustomGameSpectatorPolicy& v) {
    auto s = j.get<std::string>(); 
    if(s == "AllAllowed") {
      v = LolGameflowQueueCustomGameSpectatorPolicy::AllAllowed_e;
      return;
    } 
    if(s == "FriendsAllowed") {
      v = LolGameflowQueueCustomGameSpectatorPolicy::FriendsAllowed_e;
      return;
    } 
    if(s == "LobbyAllowed") {
      v = LolGameflowQueueCustomGameSpectatorPolicy::LobbyAllowed_e;
      return;
    } 
    if(s == "NotAllowed") {
      v = LolGameflowQueueCustomGameSpectatorPolicy::NotAllowed_e;
      return;
    } 
  }
} 