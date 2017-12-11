#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolHonorV2VendedHonorChange.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolHonorV2VendedHonorChange> GetLolHonorV2V1LevelChange (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-honor-v2/v1/level-change?", { 
    }, { 
    },"") };
  }
} 