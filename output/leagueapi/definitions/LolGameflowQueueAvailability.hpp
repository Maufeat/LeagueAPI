#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolGameflowQueueAvailability { /**/ 
    Available_e = 0, /**/ 
    DoesntMeetRequirements_e = 2, /**/ 
    PlatformDisabled_e = 1, /**/ 
  };
  static void to_json(json& j, const LolGameflowQueueAvailability& v) {
    switch(v) { 
    case LolGameflowQueueAvailability::Available_e:
      j = "Available";
    break;
    case LolGameflowQueueAvailability::DoesntMeetRequirements_e:
      j = "DoesntMeetRequirements";
    break;
    case LolGameflowQueueAvailability::PlatformDisabled_e:
      j = "PlatformDisabled";
    break;
    };
  }
  static void from_json(const json& j, LolGameflowQueueAvailability& v) {
    auto s = j.get<std::string>(); 
    if(s == "Available") {
      v = LolGameflowQueueAvailability::Available_e;
      return;
    } 
    if(s == "DoesntMeetRequirements") {
      v = LolGameflowQueueAvailability::DoesntMeetRequirements_e;
      return;
    } 
    if(s == "PlatformDisabled") {
      v = LolGameflowQueueAvailability::PlatformDisabled_e;
      return;
    } 
  }
} 