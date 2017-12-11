#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolHonorV2VoteCompletion.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolHonorV2VoteCompletion> GetLolHonorV2V1VoteCompletion (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-honor-v2/v1/vote-completion?", { 
    }, { 
    }) };
  }
} 