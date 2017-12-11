#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/SummonerLevelAndPoints.hpp>"
#include "<leagueapi/definitions/BasePublicSummonerDTO.hpp>"

namespace leagueapi {
  struct AllPublicSummonerDataDTO { /**/ 
    SummonerLevelAndPoints summonerLevelAndPoints;/**/
    BasePublicSummonerDTO summoner;/**/
  };
  static void to_json(json& j, const AllPublicSummonerDataDTO& v) { 
    j["summonerLevelAndPoints"] = v.summonerLevelAndPoints;
    j["summoner"] = v.summoner;
  }
  static void from_json(const json& j, AllPublicSummonerDataDTO& v) { 
    v.summonerLevelAndPoints = j.at("summonerLevelAndPoints").get<SummonerLevelAndPoints>(); 
    v.summoner = j.at("summoner").get<BasePublicSummonerDTO>(); 
  }
} 