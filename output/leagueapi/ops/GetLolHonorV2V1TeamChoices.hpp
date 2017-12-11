#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<uint64_t>> GetLolHonorV2V1TeamChoices (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-honor-v2/v1/team-choices?", { 
    }, { 
    },"") };
  }
} 