#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolHonorV2ProfileInfo.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolHonorV2ProfileInfo> GetLolHonorV2V1Profile (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-honor-v2/v1/profile?", { 
    }, { 
    },"") };
  }
} 