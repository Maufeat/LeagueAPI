#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> GetLolLasToxicityV1SummonersBySummonerId (const https::Info& _info_,
      const uint64_t& summonerId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-las-toxicity/v1/summoners/"+to_string(summonerId)+"?", { 
    }, { 
    }) };
  }
} 