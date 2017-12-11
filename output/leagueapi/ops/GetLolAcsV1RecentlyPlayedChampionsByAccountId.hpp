#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolAcsAcsChampionGamesCollection.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolAcsAcsChampionGamesCollection> GetLolAcsV1RecentlyPlayedChampionsByAccountId (const https::Info& _info_,
      const uint64_t& accountId /**/,
      const bool& force /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-acs/v1/recently-played-champions/"+to_string(accountId)+"?", { 
      { "force", https::to_string(force) },
    }, { 
    },"") };
  }
} 