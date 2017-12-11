#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LolFeaturedModesQueueAvailability { /**/ 
    Available_e = 0, /**/ 
    DoesntMeetRequirements_e = 2, /**/ 
    PlatformDisabled_e = 1, /**/ 
  };
  static void to_json(json& j, const LolFeaturedModesQueueAvailability& v) {
    switch(v) { 
    case LolFeaturedModesQueueAvailability::Available_e:
      j = "Available";
    break;
    case LolFeaturedModesQueueAvailability::DoesntMeetRequirements_e:
      j = "DoesntMeetRequirements";
    break;
    case LolFeaturedModesQueueAvailability::PlatformDisabled_e:
      j = "PlatformDisabled";
    break;
    };
  }
  static void from_json(const json& j, LolFeaturedModesQueueAvailability& v) {
    auto s = j.get<std::string>(); 
    if(s == "Available") {
      v = LolFeaturedModesQueueAvailability::Available_e;
      return;
    } 
    if(s == "DoesntMeetRequirements") {
      v = LolFeaturedModesQueueAvailability::DoesntMeetRequirements_e;
      return;
    } 
    if(s == "PlatformDisabled") {
      v = LolFeaturedModesQueueAvailability::PlatformDisabled_e;
      return;
    } 
  }
} 