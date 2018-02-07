#pragma once
#include "../base_def.hpp" 
#include "LolHonorV2EligiblePlayer.hpp"
namespace lol {
  struct LolHonorV2Ballot { 
    std::vector<LolHonorV2EligiblePlayer> eligiblePlayers;
    uint64_t gameId; 
  };
  inline void to_json(json& j, const LolHonorV2Ballot& v) {
    j["eligiblePlayers"] = v.eligiblePlayers; 
    j["gameId"] = v.gameId; 
  }
  inline void from_json(const json& j, LolHonorV2Ballot& v) {
    v.eligiblePlayers = j.at("eligiblePlayers").get<std::vector<LolHonorV2EligiblePlayer>>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
  }
}