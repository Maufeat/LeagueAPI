#pragma once
#include "../base_def.hpp" 
#include "MatchmakingLcdsQueueInfo.hpp"
namespace lol {
  struct MatchmakingLcdsSearchingForMatchNotification { 
    std::vector<MatchmakingLcdsQueueInfo> joinedQueues;
    std::vector<json> playerJoinFailures; 
  };
  inline void to_json(json& j, const MatchmakingLcdsSearchingForMatchNotification& v) {
    j["joinedQueues"] = v.joinedQueues; 
    j["playerJoinFailures"] = v.playerJoinFailures; 
  }
  inline void from_json(const json& j, MatchmakingLcdsSearchingForMatchNotification& v) {
    v.joinedQueues = j.at("joinedQueues").get<std::vector<MatchmakingLcdsQueueInfo>>(); 
    v.playerJoinFailures = j.at("playerJoinFailures").get<std::vector<json>>(); 
  }
}