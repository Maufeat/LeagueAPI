#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolSummonerSummonerIdAndIcon.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolSummonerSummonerIdAndIcon>> GetLolSummonerV2SummonerIcons (const https::Info& _info_,
      const std::vector<uint64_t>& ids /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-summoner/v2/summoner-icons?", { 
      { "ids", to_string(ids) },
    }, { 
    }) };
  }
} 