#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolHonorV2FullTeamVote { 
    uint64_t gameId; 
  };
  inline void to_json(json& j, const LolHonorV2FullTeamVote& v) {
    j["gameId"] = v.gameId; 
  }
  inline void from_json(const json& j, LolHonorV2FullTeamVote& v) {
    v.gameId = j.at("gameId").get<uint64_t>(); 
  }
}