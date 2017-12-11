#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> GetLolSummonerV1SummonerProfile (const https::Info& _info_,
      const std::string& puuid /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-summoner/v1/summoner-profile?", { 
      { "puuid", to_string(puuid) },
    }, { 
    }) };
  }
} 