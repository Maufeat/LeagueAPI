#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolGameflowGameflowAvailabilityState.hpp>"

namespace leagueapi {
  struct LolGameflowGameflowAvailability { /**/ 
    LolGameflowGameflowAvailabilityState state;/**/
    bool isAvailable;/**/
  };
  static void to_json(json& j, const LolGameflowGameflowAvailability& v) { 
    j["state"] = v.state;
    j["isAvailable"] = v.isAvailable;
  }
  static void from_json(const json& j, LolGameflowGameflowAvailability& v) { 
    v.state = j.at("state").get<LolGameflowGameflowAvailabilityState>(); 
    v.isAvailable = j.at("isAvailable").get<bool>(); 
  }
} 