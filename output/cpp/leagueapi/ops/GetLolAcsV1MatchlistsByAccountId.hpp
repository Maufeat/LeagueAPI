#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> GetLolAcsV1MatchlistsByAccountId (const https::Info& _info_,
      const uint64_t& accountId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-acs/v1/matchlists/"+to_string(accountId)+"?", { 
    }, { 
    }) };
  }
} 