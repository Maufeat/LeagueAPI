#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderTBDMatchmakingState { 
    int64_t estimatedMatchmakingTimeMillis;
    int64_t timeInMatchmakingMillis;
    std::string backwardsTransitionReason; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderTBDMatchmakingState& v) {
    j["estimatedMatchmakingTimeMillis"] = v.estimatedMatchmakingTimeMillis; 
    j["timeInMatchmakingMillis"] = v.timeInMatchmakingMillis; 
    j["backwardsTransitionReason"] = v.backwardsTransitionReason; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderTBDMatchmakingState& v) {
    v.estimatedMatchmakingTimeMillis = j.at("estimatedMatchmakingTimeMillis").get<int64_t>(); 
    v.timeInMatchmakingMillis = j.at("timeInMatchmakingMillis").get<int64_t>(); 
    v.backwardsTransitionReason = j.at("backwardsTransitionReason").get<std::string>(); 
  }
}