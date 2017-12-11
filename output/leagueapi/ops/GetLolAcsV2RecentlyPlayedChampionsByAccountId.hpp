#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolAcsAcsChampionGamesCollection.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolAcsAcsChampionGamesCollection> GetLolAcsV2RecentlyPlayedChampionsByAccountId (const https::Info& _info_,
      const uint64_t& accountId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-acs/v2/recently-played-champions/"+to_string(accountId)+"?", { 
    }, { 
    },"") };
  }
} 