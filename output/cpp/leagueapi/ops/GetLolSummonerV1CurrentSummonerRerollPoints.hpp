#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolSummonerSummonerRerollPoints.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolSummonerSummonerRerollPoints> GetLolSummonerV1CurrentSummonerRerollPoints (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-summoner/v1/current-summoner/rerollPoints?", { 
    }, { 
    }) };
  }
} 