#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/PrivateSummonerDTO.hpp>
#include <leagueapi/definitions/SummonerLevelAndPoints.hpp>

namespace leagueapi {
  struct AllSummonerData { /**/ 
    SummonerLevelAndPoints summonerLevelAndPoints;/**/
    PrivateSummonerDTO summoner;/**/
  };
  static void to_json(json& j, const AllSummonerData& v) { 
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints;
    j["summoner"] = v.summoner;
  }
  static void from_json(const json& j, AllSummonerData& v) { 
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<SummonerLevelAndPoints>(); 
    v.summoner = j.at("summoner").get<PrivateSummonerDTO>(); 
  }
} 