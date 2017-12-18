#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolClashQueueAvailability {  
    Available_e = 0,
    DoesntMeetRequirements_e = 2,
    PlatformDisabled_e = 1,
  };
  inline void to_json(json& j, const LolClashQueueAvailability& v) {
    if(v == LolClashQueueAvailability::Available_e) {
      j = "Available";
      return;
    }
    if(v == LolClashQueueAvailability::DoesntMeetRequirements_e) {
      j = "DoesntMeetRequirements";
      return;
    }
    if(v == LolClashQueueAvailability::PlatformDisabled_e) {
      j = "PlatformDisabled";
      return;
    }
  }
  inline void from_json(const json& j, LolClashQueueAvailability& v) {
    if(j.get<std::string>() == "Available") {
      v = LolClashQueueAvailability::Available_e;
      return;
    } 
    if(j.get<std::string>() == "DoesntMeetRequirements") {
      v = LolClashQueueAvailability::DoesntMeetRequirements_e;
      return;
    } 
    if(j.get<std::string>() == "PlatformDisabled") {
      v = LolClashQueueAvailability::PlatformDisabled_e;
      return;
    } 
  }
}