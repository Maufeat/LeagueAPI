#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolQueueEligibilityQueueAvailability {  
    Available_e = 0,
    DoesntMeetRequirements_e = 2,
    PlatformDisabled_e = 1,
  };
  void to_json(json& j, const LolQueueEligibilityQueueAvailability& v) {
    if(v == LolQueueEligibilityQueueAvailability::Available_e) {
      j = "Available";
      return;
    }
    if(v == LolQueueEligibilityQueueAvailability::DoesntMeetRequirements_e) {
      j = "DoesntMeetRequirements";
      return;
    }
    if(v == LolQueueEligibilityQueueAvailability::PlatformDisabled_e) {
      j = "PlatformDisabled";
      return;
    }
  }
  void from_json(const json& j, LolQueueEligibilityQueueAvailability& v) {
    if(j.get<std::string>() == "Available") {
      v = LolQueueEligibilityQueueAvailability::Available_e;
      return;
    } 
    if(j.get<std::string>() == "DoesntMeetRequirements") {
      v = LolQueueEligibilityQueueAvailability::DoesntMeetRequirements_e;
      return;
    } 
    if(j.get<std::string>() == "PlatformDisabled") {
      v = LolQueueEligibilityQueueAvailability::PlatformDisabled_e;
      return;
    } 
  }
}