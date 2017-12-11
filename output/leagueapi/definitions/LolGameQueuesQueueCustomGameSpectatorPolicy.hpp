#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolGameQueuesQueueCustomGameSpectatorPolicy { /**/ 
    AllAllowed_e = 3, /**/ 
    FriendsAllowed_e = 2, /**/ 
    LobbyAllowed_e = 1, /**/ 
    NotAllowed_e = 0, /**/ 
  };
  static void to_json(json& j, const LolGameQueuesQueueCustomGameSpectatorPolicy& v) {
    switch(v) { 
    case LolGameQueuesQueueCustomGameSpectatorPolicy::AllAllowed_e:
      j = "AllAllowed";
    break;
    case LolGameQueuesQueueCustomGameSpectatorPolicy::FriendsAllowed_e:
      j = "FriendsAllowed";
    break;
    case LolGameQueuesQueueCustomGameSpectatorPolicy::LobbyAllowed_e:
      j = "LobbyAllowed";
    break;
    case LolGameQueuesQueueCustomGameSpectatorPolicy::NotAllowed_e:
      j = "NotAllowed";
    break;
    };
  }
  static void from_json(const json& j, LolGameQueuesQueueCustomGameSpectatorPolicy& v) {
    auto s = j.get<std::string>(); 
    if(s == "AllAllowed") {
      v = LolGameQueuesQueueCustomGameSpectatorPolicy::AllAllowed_e;
      return;
    } 
    if(s == "FriendsAllowed") {
      v = LolGameQueuesQueueCustomGameSpectatorPolicy::FriendsAllowed_e;
      return;
    } 
    if(s == "LobbyAllowed") {
      v = LolGameQueuesQueueCustomGameSpectatorPolicy::LobbyAllowed_e;
      return;
    } 
    if(s == "NotAllowed") {
      v = LolGameQueuesQueueCustomGameSpectatorPolicy::NotAllowed_e;
      return;
    } 
  }
} 