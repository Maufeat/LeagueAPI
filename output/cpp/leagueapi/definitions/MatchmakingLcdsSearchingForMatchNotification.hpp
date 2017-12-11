#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/MatchmakingLcdsQueueInfo.hpp>

namespace leagueapi {
  struct MatchmakingLcdsSearchingForMatchNotification { /**/ 
    std::vector<MatchmakingLcdsQueueInfo> joinedQueues;/**/
    std::vector<json> playerJoinFailures;/**/
  };
  static void to_json(json& j, const MatchmakingLcdsSearchingForMatchNotification& v) { 
    j["joinedQueues"] = v.joinedQueues;
    j["playerJoinFailures"] = v.playerJoinFailures;
  }
  static void from_json(const json& j, MatchmakingLcdsSearchingForMatchNotification& v) { 
    v.joinedQueues = j.at("joinedQueues").get<std::vector<MatchmakingLcdsQueueInfo>>(); 
    v.playerJoinFailures = j.at("playerJoinFailures").get<std::vector<json>>(); 
  }
} 