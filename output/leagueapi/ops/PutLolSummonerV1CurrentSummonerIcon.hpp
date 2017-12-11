#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolSummonerSummonerIcon.hpp>
#include <leagueapi/definitions/LolSummonerSummoner.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolSummonerSummoner> PutLolSummonerV1CurrentSummonerIcon (const https::Info& _info_,
      const LolSummonerSummonerIcon& body /**/ )
  { 
    return { https::Do(_info_, "put", "/lol-summoner/v1/current-summoner/icon?", { 
    }, { 
    },body) };
  }
} 