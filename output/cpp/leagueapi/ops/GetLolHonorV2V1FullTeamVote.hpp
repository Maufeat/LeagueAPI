#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolHonorV2FullTeamVote.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolHonorV2FullTeamVote> GetLolHonorV2V1FullTeamVote (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-honor-v2/v1/full-team-vote?", { 
    }, { 
    }) };
  }
} 