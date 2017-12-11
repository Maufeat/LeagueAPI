#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> GetLolLasToxicityV1AccountsByAccountId (const https::Info& _info_,
      const uint64_t& accountId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-las-toxicity/v1/accounts/"+to_string(accountId)+"?", { 
    }, { 
    },"") };
  }
} 