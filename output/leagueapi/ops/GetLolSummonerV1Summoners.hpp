#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolSummonerSummoner.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolSummonerSummoner> GetLolSummonerV1Summoners (const https::Info& _info_,
      const std::string& name /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-summoner/v1/summoners?", { 
      { "name", https::to_string(name) },
    }, { 
    },"") };
  }
} 