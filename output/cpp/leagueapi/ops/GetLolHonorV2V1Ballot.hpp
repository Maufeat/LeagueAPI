#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolHonorV2Ballot.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolHonorV2Ballot> GetLolHonorV2V1Ballot (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-honor-v2/v1/ballot?", { 
    }, { 
    }) };
  }
} 