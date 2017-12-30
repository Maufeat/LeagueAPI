#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolHonorV2VoteCompletion { 
    uint64_t gameId;
    bool fullTeamVote; 
  };
  inline void to_json(json& j, const LolHonorV2VoteCompletion& v) {
    j["gameId"] = v.gameId; 
    j["fullTeamVote"] = v.fullTeamVote; 
  }
  inline void from_json(const json& j, LolHonorV2VoteCompletion& v) {
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.fullTeamVote = j.at("fullTeamVote").get<bool>(); 
  }
}