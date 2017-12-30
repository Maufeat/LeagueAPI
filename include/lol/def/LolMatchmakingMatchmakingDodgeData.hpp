#pragma once
#include "../base_def.hpp" 
#include "LolMatchmakingMatchmakingDodgeState.hpp"
namespace lol {
  struct LolMatchmakingMatchmakingDodgeData { 
    uint64_t dodgerId;
    LolMatchmakingMatchmakingDodgeState state; 
  };
  inline void to_json(json& j, const LolMatchmakingMatchmakingDodgeData& v) {
    j["dodgerId"] = v.dodgerId; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolMatchmakingMatchmakingDodgeData& v) {
    v.dodgerId = j.at("dodgerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolMatchmakingMatchmakingDodgeState>(); 
  }
}