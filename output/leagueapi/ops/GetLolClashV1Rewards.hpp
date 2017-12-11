#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClashPlayerRewards.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolClashPlayerRewards> GetLolClashV1Rewards (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-clash/v1/rewards?", { 
    }, { 
    },"") };
  }
} 