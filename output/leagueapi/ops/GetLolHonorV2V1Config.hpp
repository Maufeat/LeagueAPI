#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolHonorV2HonorConfig.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolHonorV2HonorConfig> GetLolHonorV2V1Config (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-honor-v2/v1/config?", { 
    }, { 
    },"") };
  }
} 