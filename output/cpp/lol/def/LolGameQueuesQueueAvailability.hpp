#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolGameQueuesQueueAvailability {  
    Available_e = 0,
    DoesntMeetRequirements_e = 2,
    PlatformDisabled_e = 1,
  };
  void to_json(json& j, const LolGameQueuesQueueAvailability& v) {
    if(v == LolGameQueuesQueueAvailability::Available_e) {
      j = "Available";
      return;
    }
    if(v == LolGameQueuesQueueAvailability::DoesntMeetRequirements_e) {
      j = "DoesntMeetRequirements";
      return;
    }
    if(v == LolGameQueuesQueueAvailability::PlatformDisabled_e) {
      j = "PlatformDisabled";
      return;
    }
  }
  void from_json(const json& j, LolGameQueuesQueueAvailability& v) {
    if(j.get<std::string>() == "Available") {
      v = LolGameQueuesQueueAvailability::Available_e;
      return;
    } 
    if(j.get<std::string>() == "DoesntMeetRequirements") {
      v = LolGameQueuesQueueAvailability::DoesntMeetRequirements_e;
      return;
    } 
    if(j.get<std::string>() == "PlatformDisabled") {
      v = LolGameQueuesQueueAvailability::PlatformDisabled_e;
      return;
    } 
  }
}