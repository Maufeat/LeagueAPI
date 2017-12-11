#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> GetLolAcsV2RequestRecentlyPlayedChampionsByAccountId (const https::Info& _info_,
      const uint64_t& accountId /**/,
      const bool& force /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-acs/v2/request-recently-played-champions/"+to_string(accountId)+"?", { 
      { "force", to_string(force) },
    }, { 
    }) };
  }
} 