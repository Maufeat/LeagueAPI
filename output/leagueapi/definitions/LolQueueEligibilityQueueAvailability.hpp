#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolQueueEligibilityQueueAvailability { /**/ 
    Available_e = 0, /**/ 
    DoesntMeetRequirements_e = 2, /**/ 
    PlatformDisabled_e = 1, /**/ 
  };
  static void to_json(json& j, const LolQueueEligibilityQueueAvailability& v) {
    switch(v) { 
    case LolQueueEligibilityQueueAvailability::Available_e:
      j = "Available";
    break;
    case LolQueueEligibilityQueueAvailability::DoesntMeetRequirements_e:
      j = "DoesntMeetRequirements";
    break;
    case LolQueueEligibilityQueueAvailability::PlatformDisabled_e:
      j = "PlatformDisabled";
    break;
    };
  }
  static void from_json(const json& j, LolQueueEligibilityQueueAvailability& v) {
    auto s = j.get<std::string>(); 
    if(s == "Available") {
      v = LolQueueEligibilityQueueAvailability::Available_e;
      return;
    } 
    if(s == "DoesntMeetRequirements") {
      v = LolQueueEligibilityQueueAvailability::DoesntMeetRequirements_e;
      return;
    } 
    if(s == "PlatformDisabled") {
      v = LolQueueEligibilityQueueAvailability::PlatformDisabled_e;
      return;
    } 
  }
} 