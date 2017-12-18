#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/MatchmakingLcdsQueueInfo.hpp>
namespace lol {
  struct MatchmakingLcdsSearchingForMatchNotification { 
    std::vector<json> playerJoinFailures;
    std::vector<MatchmakingLcdsQueueInfo> joinedQueues; 
  };
  inline void to_json(json& j, const MatchmakingLcdsSearchingForMatchNotification& v) {
    j["playerJoinFailures"] = v.playerJoinFailures; 
    j["joinedQueues"] = v.joinedQueues; 
  }
  inline void from_json(const json& j, MatchmakingLcdsSearchingForMatchNotification& v) {
    v.playerJoinFailures = j.at("playerJoinFailures").get<std::vector<json>>(); 
    v.joinedQueues = j.at("joinedQueues").get<std::vector<MatchmakingLcdsQueueInfo>>(); 
  }
}