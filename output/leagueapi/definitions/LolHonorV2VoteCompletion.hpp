#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolHonorV2VoteCompletion { /**/ 
    uint64_t gameId;/**/
    bool fullTeamVote;/**/
  };
  static void to_json(json& j, const LolHonorV2VoteCompletion& v) { 
    j["gameId"] = v.gameId;
    j["fullTeamVote"] = v.fullTeamVote;
  }
  static void from_json(const json& j, LolHonorV2VoteCompletion& v) { 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.fullTeamVote = j.at("fullTeamVote").get<bool>(); 
  }
} 