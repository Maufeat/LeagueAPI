#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolReplaysGameflowAvailability { /**/ 
    std::string state;/**/
  };
  static void to_json(json& j, const LolReplaysGameflowAvailability& v) { 
    j["state"] = v.state;
  }
  static void from_json(const json& j, LolReplaysGameflowAvailability& v) { 
    v.state = j.at("state").get<std::string>(); 
  }
} 