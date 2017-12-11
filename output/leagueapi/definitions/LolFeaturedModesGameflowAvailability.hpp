#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolFeaturedModesGameflowAvailabilityState.hpp>"

namespace leagueapi {
  struct LolFeaturedModesGameflowAvailability { /**/ 
    LolFeaturedModesGameflowAvailabilityState state;/**/
    bool isAvailable;/**/
  };
  static void to_json(json& j, const LolFeaturedModesGameflowAvailability& v) { 
    j["state"] = v.state;
    j["isAvailable"] = v.isAvailable;
  }
  static void from_json(const json& j, LolFeaturedModesGameflowAvailability& v) { 
    v.state = j.at("state").get<LolFeaturedModesGameflowAvailabilityState>(); 
    v.isAvailable = j.at("isAvailable").get<bool>(); 
  }
} 