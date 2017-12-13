#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolGameflowQueueAvailability {  
    Available_e = 0,
    DoesntMeetRequirements_e = 2,
    PlatformDisabled_e = 1,
  };
  void to_json(json& j, const LolGameflowQueueAvailability& v) {
    if(v == LolGameflowQueueAvailability::Available_e) {
      j = "Available";
      return;
    }
    if(v == LolGameflowQueueAvailability::DoesntMeetRequirements_e) {
      j = "DoesntMeetRequirements";
      return;
    }
    if(v == LolGameflowQueueAvailability::PlatformDisabled_e) {
      j = "PlatformDisabled";
      return;
    }
  }
  void from_json(const json& j, LolGameflowQueueAvailability& v) {
    if(j.get<std::string>() == "Available") {
      v = LolGameflowQueueAvailability::Available_e;
      return;
    } 
    if(j.get<std::string>() == "DoesntMeetRequirements") {
      v = LolGameflowQueueAvailability::DoesntMeetRequirements_e;
      return;
    } 
    if(j.get<std::string>() == "PlatformDisabled") {
      v = LolGameflowQueueAvailability::PlatformDisabled_e;
      return;
    } 
  }
}