#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolHonorV2Honor.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolHonorV2Honor>> GetLolHonorV2V1Recognition (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-honor-v2/v1/recognition?", { 
    }, { 
    }) };
  }
} 