#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolFeaturedModesQueueAvailability {  
    Available_e = 0,
    DoesntMeetRequirements_e = 2,
    PlatformDisabled_e = 1,
  };
  void to_json(json& j, const LolFeaturedModesQueueAvailability& v) {
  if(v == LolFeaturedModesQueueAvailability::Available_e) {
    j = "Available";
    return;
  }
  if(v == LolFeaturedModesQueueAvailability::DoesntMeetRequirements_e) {
    j = "DoesntMeetRequirements";
    return;
  }
  if(v == LolFeaturedModesQueueAvailability::PlatformDisabled_e) {
    j = "PlatformDisabled";
    return;
  }
  }
  void from_json(const json& j, LolFeaturedModesQueueAvailability& v) {
  if(j.get<std::string>() == "Available") {
    v = LolFeaturedModesQueueAvailability::Available_e;
    return;
  } 
  if(j.get<std::string>() == "DoesntMeetRequirements") {
    v = LolFeaturedModesQueueAvailability::DoesntMeetRequirements_e;
    return;
  } 
  if(j.get<std::string>() == "PlatformDisabled") {
    v = LolFeaturedModesQueueAvailability::PlatformDisabled_e;
    return;
  } 
  }
}