#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct SummonerOrTeamAvailabilty { /**/ 
    std::vector<std::string> availableForWatching;/**/
  };
  static void to_json(json& j, const SummonerOrTeamAvailabilty& v) { 
    j["availableForWatching"] = v.availableForWatching;
  }
  static void from_json(const json& j, SummonerOrTeamAvailabilty& v) { 
    v.availableForWatching = j.at("availableForWatching").get<std::vector<std::string>>(); 
  }
} 