#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolHonorV2Reward.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolHonorV2Reward> GetLolHonorV2V1RewardGranted (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-honor-v2/v1/reward-granted?", { 
    }, { 
    }) };
  }
} 