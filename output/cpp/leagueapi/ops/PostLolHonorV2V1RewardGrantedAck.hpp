#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolHonorV2V1RewardGrantedAck (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/lol-honor-v2/v1/reward-granted/ack?", { 
    }, { 
    }) };
  }
} 