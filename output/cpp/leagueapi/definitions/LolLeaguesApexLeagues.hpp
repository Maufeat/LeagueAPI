#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolLeaguesLeague.hpp>

namespace leagueapi {
  struct LolLeaguesApexLeagues { /**/ 
    std::vector<LolLeaguesLeague> challengers;/**/
    std::vector<LolLeaguesLeague> masters;/**/
  };
  static void to_json(json& j, const LolLeaguesApexLeagues& v) { 
    j["challengers"] = v.challengers;
    j["masters"] = v.masters;
  }
  static void from_json(const json& j, LolLeaguesApexLeagues& v) { 
    v.challengers = j.at("challengers").get<std::vector<LolLeaguesLeague>>(); 
    v.masters = j.at("masters").get<std::vector<LolLeaguesLeague>>(); 
  }
} 