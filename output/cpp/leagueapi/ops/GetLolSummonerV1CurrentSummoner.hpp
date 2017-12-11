#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolSummonerSummoner.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolSummonerSummoner> GetLolSummonerV1CurrentSummoner (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-summoner/v1/current-summoner?", { 
    }, { 
    }) };
  }
} 