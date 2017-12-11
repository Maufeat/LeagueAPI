#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLootLoginSummonerLevelAndPoints.hpp>"

namespace leagueapi {
  struct LolLootLoginAllSummonerData { /**/ 
    LolLootLoginSummonerLevelAndPoints summonerLevelAndPoints;/**/
  };
  static void to_json(json& j, const LolLootLoginAllSummonerData& v) { 
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints;
  }
  static void from_json(const json& j, LolLootLoginAllSummonerData& v) { 
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<LolLootLoginSummonerLevelAndPoints>(); 
  }
} 