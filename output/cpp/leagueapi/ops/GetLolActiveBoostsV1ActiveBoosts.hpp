#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/ActiveBoosts.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<ActiveBoosts> GetLolActiveBoostsV1ActiveBoosts (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-active-boosts/v1/active-boosts?", { 
    }, { 
    }) };
  }
} 