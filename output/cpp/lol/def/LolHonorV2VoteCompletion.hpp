#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolHonorV2VoteCompletion { 
    bool fullTeamVote;
    uint64_t gameId; 
  };
  void to_json(json& j, const LolHonorV2VoteCompletion& v) {
  j["fullTeamVote"] = v.fullTeamVote; 
  j["gameId"] = v.gameId; 
  }
  void from_json(const json& j, LolHonorV2VoteCompletion& v) {
  v.fullTeamVote = j.at("fullTeamVote").get<bool>(); 
  v.gameId = j.at("gameId").get<uint64_t>(); 
  }
}