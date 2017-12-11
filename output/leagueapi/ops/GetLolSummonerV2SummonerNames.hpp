#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolSummonerSummonerIdAndName.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolSummonerSummonerIdAndName>> GetLolSummonerV2SummonerNames (const https::Info& _info_,
      const std::vector<uint64_t>& ids /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-summoner/v2/summoner-names?", { 
      { "ids", https::to_string(ids) },
    }, { 
    },"") };
  }
} 