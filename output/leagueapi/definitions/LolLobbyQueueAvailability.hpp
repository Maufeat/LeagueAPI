#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolLobbyQueueAvailability { /**/ 
    Available_e = 0, /**/ 
    DoesntMeetRequirements_e = 2, /**/ 
    PlatformDisabled_e = 1, /**/ 
  };
  static void to_json(json& j, const LolLobbyQueueAvailability& v) {
    switch(v) { 
    case LolLobbyQueueAvailability::Available_e:
      j = "Available";
    break;
    case LolLobbyQueueAvailability::DoesntMeetRequirements_e:
      j = "DoesntMeetRequirements";
    break;
    case LolLobbyQueueAvailability::PlatformDisabled_e:
      j = "PlatformDisabled";
    break;
    };
  }
  static void from_json(const json& j, LolLobbyQueueAvailability& v) {
    auto s = j.get<std::string>(); 
    if(s == "Available") {
      v = LolLobbyQueueAvailability::Available_e;
      return;
    } 
    if(s == "DoesntMeetRequirements") {
      v = LolLobbyQueueAvailability::DoesntMeetRequirements_e;
      return;
    } 
    if(s == "PlatformDisabled") {
      v = LolLobbyQueueAvailability::PlatformDisabled_e;
      return;
    } 
  }
} 