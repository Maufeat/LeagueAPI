#pragma once
#include "../base_def.hpp" 
#include "LolClashMatchmakingDodgeState.hpp"
namespace lol {
  struct LolClashGameflowGameDodge { 
    std::vector<uint64_t> dodgeIds;
    LolClashMatchmakingDodgeState state; 
  };
  inline void to_json(json& j, const LolClashGameflowGameDodge& v) {
    j["dodgeIds"] = v.dodgeIds; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolClashGameflowGameDodge& v) {
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>(); 
    v.state = j.at("state").get<LolClashMatchmakingDodgeState>(); 
  }
}