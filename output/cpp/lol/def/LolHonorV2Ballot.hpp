#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolHonorV2EligiblePlayer.hpp>
namespace lol {
  struct LolHonorV2Ballot { 
    std::vector<LolHonorV2EligiblePlayer> eligiblePlayers;
    uint64_t gameId; 
  };
  void to_json(json& j, const LolHonorV2Ballot& v) {
  j["eligiblePlayers"] = v.eligiblePlayers; 
  j["gameId"] = v.gameId; 
  }
  void from_json(const json& j, LolHonorV2Ballot& v) {
  v.eligiblePlayers = j.at("eligiblePlayers").get<std::vector<LolHonorV2EligiblePlayer>>(); 
  v.gameId = j.at("gameId").get<uint64_t>(); 
  }
}