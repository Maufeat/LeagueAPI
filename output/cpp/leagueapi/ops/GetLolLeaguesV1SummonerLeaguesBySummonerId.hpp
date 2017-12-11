#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLeaguesLeague.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolLeaguesLeague>> GetLolLeaguesV1SummonerLeaguesBySummonerId (const https::Info& _info_,
      const uint64_t& summonerId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-leagues/v1/summoner-leagues/"+to_string(summonerId)+"?", { 
    }, { 
    }) };
  }
} 