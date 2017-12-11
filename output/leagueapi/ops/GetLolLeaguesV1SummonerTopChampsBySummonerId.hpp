#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLeaguesLeagueChampAndStat.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolLeaguesLeagueChampAndStat>> GetLolLeaguesV1SummonerTopChampsBySummonerId (const https::Info& _info_,
      const uint64_t& summonerId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-leagues/v1/summoner-top-champs/"+to_string(summonerId)+"?", { 
    }, { 
    },"") };
  }
} 