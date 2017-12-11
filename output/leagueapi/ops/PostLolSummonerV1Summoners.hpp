#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolSummonerInternalSummoner.hpp>
#include <leagueapi/definitions/LolSummonerSummonerRequestedName.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolSummonerInternalSummoner> PostLolSummonerV1Summoners (const https::Info& _info_,
      const LolSummonerSummonerRequestedName& name /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-summoner/v1/summoners?", { 
    }, { 
    },name) };
  }
} 