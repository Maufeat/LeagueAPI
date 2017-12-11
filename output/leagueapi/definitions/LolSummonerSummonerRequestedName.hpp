#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolSummonerSummonerRequestedName { /**/ 
    std::string name;/**/
  };
  static void to_json(json& j, const LolSummonerSummonerRequestedName& v) { 
    j["name"] = v.name;
  }
  static void from_json(const json& j, LolSummonerSummonerRequestedName& v) { 
    v.name = j.at("name").get<std::string>(); 
  }
} 