#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolHonorV2VoteCompletion { 
    bool fullTeamVote;
    uint64_t gameId; 
  };
  inline void to_json(json& j, const LolHonorV2VoteCompletion& v) {
    j["fullTeamVote"] = v.fullTeamVote; 
    j["gameId"] = v.gameId; 
  }
  inline void from_json(const json& j, LolHonorV2VoteCompletion& v) {
    v.fullTeamVote = j.at("fullTeamVote").get<bool>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
  }
}