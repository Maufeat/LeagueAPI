#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolEndOfGameGameflowAvailability { /**/ 
    std::string state;/**/
  };
  static void to_json(json& j, const LolEndOfGameGameflowAvailability& v) { 
    j["state"] = v.state;
  }
  static void from_json(const json& j, LolEndOfGameGameflowAvailability& v) { 
    v.state = j.at("state").get<std::string>(); 
  }
} 