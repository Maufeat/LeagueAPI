#pragma once
#include "../base_def.hpp" 
#include "LolMatchmakingMatchmakingDodgeState.hpp"
namespace lol {
  struct LolMatchmakingGameflowGameDodge { 
    LolMatchmakingMatchmakingDodgeState state;
    std::vector<uint64_t> dodgeIds; 
  };
  inline void to_json(json& j, const LolMatchmakingGameflowGameDodge& v) {
    j["state"] = v.state; 
    j["dodgeIds"] = v.dodgeIds; 
  }
  inline void from_json(const json& j, LolMatchmakingGameflowGameDodge& v) {
    v.state = j.at("state").get<LolMatchmakingMatchmakingDodgeState>(); 
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>(); 
  }
}