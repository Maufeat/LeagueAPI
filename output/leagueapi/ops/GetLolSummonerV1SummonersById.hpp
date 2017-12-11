#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolSummonerSummoner.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolSummonerSummoner> GetLolSummonerV1SummonersById (const https::Info& _info_,
      const uint64_t& id /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-summoner/v1/summoners/"+to_string(id)+"?", { 
    }, { 
    },"") };
  }
} 