#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolSummonerSummoner.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolSummonerSummoner> PostLolSummonerV1CurrentSummonerName (const https::Info& _info_,
      const std::string& name /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-summoner/v1/current-summoner/name?", { 
    }, { 
    },name) };
  }
} 