#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolGameQueuesQueueAvailability { /**/ 
    Available_e = 0, /**/ 
    DoesntMeetRequirements_e = 2, /**/ 
    PlatformDisabled_e = 1, /**/ 
  };
  static void to_json(json& j, const LolGameQueuesQueueAvailability& v) {
    switch(v) { 
    case LolGameQueuesQueueAvailability::Available_e:
      j = "Available";
    break;
    case LolGameQueuesQueueAvailability::DoesntMeetRequirements_e:
      j = "DoesntMeetRequirements";
    break;
    case LolGameQueuesQueueAvailability::PlatformDisabled_e:
      j = "PlatformDisabled";
    break;
    };
  }
  static void from_json(const json& j, LolGameQueuesQueueAvailability& v) {
    auto s = j.get<std::string>(); 
    if(s == "Available") {
      v = LolGameQueuesQueueAvailability::Available_e;
      return;
    } 
    if(s == "DoesntMeetRequirements") {
      v = LolGameQueuesQueueAvailability::DoesntMeetRequirements_e;
      return;
    } 
    if(s == "PlatformDisabled") {
      v = LolGameQueuesQueueAvailability::PlatformDisabled_e;
      return;
    } 
  }
} 