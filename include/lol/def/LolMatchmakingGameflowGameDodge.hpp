#pragma once
#include "../base_def.hpp" 
#include "LolMatchmakingMatchmakingDodgeState.hpp"
namespace lol {
  struct LolMatchmakingGameflowGameDodge { 
    std::vector<uint64_t> dodgeIds;
    LolMatchmakingMatchmakingDodgeState state; 
  };
  inline void to_json(json& j, const LolMatchmakingGameflowGameDodge& v) {
    j["dodgeIds"] = v.dodgeIds; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolMatchmakingGameflowGameDodge& v) {
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>(); 
    v.state = j.at("state").get<LolMatchmakingMatchmakingDodgeState>(); 
  }
}