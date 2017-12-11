#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolClashGameflowAvailability { /**/ 
    bool isAvailable;/**/
  };
  static void to_json(json& j, const LolClashGameflowAvailability& v) { 
    j["isAvailable"] = v.isAvailable;
  }
  static void from_json(const json& j, LolClashGameflowAvailability& v) { 
    v.isAvailable = j.at("isAvailable").get<bool>(); 
  }
} 