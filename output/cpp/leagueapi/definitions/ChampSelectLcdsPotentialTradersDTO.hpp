#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct ChampSelectLcdsPotentialTradersDTO { /**/ 
    std::vector<std::string> potentialTraders;/**/
  };
  static void to_json(json& j, const ChampSelectLcdsPotentialTradersDTO& v) { 
    j["potentialTraders"] = v.potentialTraders;
  }
  static void from_json(const json& j, ChampSelectLcdsPotentialTradersDTO& v) { 
    v.potentialTraders = j.at("potentialTraders").get<std::vector<std::string>>(); 
  }
} 