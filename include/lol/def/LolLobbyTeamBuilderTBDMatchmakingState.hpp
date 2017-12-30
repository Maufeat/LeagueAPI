#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderTBDMatchmakingState { 
    int64_t timeInMatchmakingMillis;
    int64_t estimatedMatchmakingTimeMillis;
    std::string backwardsTransitionReason; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderTBDMatchmakingState& v) {
    j["timeInMatchmakingMillis"] = v.timeInMatchmakingMillis; 
    j["estimatedMatchmakingTimeMillis"] = v.estimatedMatchmakingTimeMillis; 
    j["backwardsTransitionReason"] = v.backwardsTransitionReason; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderTBDMatchmakingState& v) {
    v.timeInMatchmakingMillis = j.at("timeInMatchmakingMillis").get<int64_t>(); 
    v.estimatedMatchmakingTimeMillis = j.at("estimatedMatchmakingTimeMillis").get<int64_t>(); 
    v.backwardsTransitionReason = j.at("backwardsTransitionReason").get<std::string>(); 
  }
}