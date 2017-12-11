#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolEndOfGameLoginSummonerLevelAndPoints.hpp>"

namespace leagueapi {
  struct LolEndOfGameLoginSummonerData { /**/ 
    LolEndOfGameLoginSummonerLevelAndPoints summonerLevelAndPoints;/**/
  };
  static void to_json(json& j, const LolEndOfGameLoginSummonerData& v) { 
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints;
  }
  static void from_json(const json& j, LolEndOfGameLoginSummonerData& v) { 
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<LolEndOfGameLoginSummonerLevelAndPoints>(); 
  }
} 