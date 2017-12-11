#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolStoreSummoner.hpp>
#include <leagueapi/definitions/LolStoreSummonerLevelAndPoints.hpp>

namespace leagueapi {
  struct LolStoreAllSummonerData { /**/ 
    LolStoreSummonerLevelAndPoints summonerLevelAndPoints;/**/
    LolStoreSummoner summoner;/**/
  };
  static void to_json(json& j, const LolStoreAllSummonerData& v) { 
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints;
    j["summoner"] = v.summoner;
  }
  static void from_json(const json& j, LolStoreAllSummonerData& v) { 
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<LolStoreSummonerLevelAndPoints>(); 
    v.summoner = j.at("summoner").get<LolStoreSummoner>(); 
  }
} 