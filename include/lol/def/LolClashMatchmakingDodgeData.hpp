#pragma once
#include "../base_def.hpp" 
#include "LolClashMatchmakingDodgeState.hpp"
namespace lol {
  struct LolClashMatchmakingDodgeData { 
    LolClashMatchmakingDodgeState state;
    uint64_t dodgerId; 
  };
  inline void to_json(json& j, const LolClashMatchmakingDodgeData& v) {
    j["state"] = v.state; 
    j["dodgerId"] = v.dodgerId; 
  }
  inline void from_json(const json& j, LolClashMatchmakingDodgeData& v) {
    v.state = j.at("state").get<LolClashMatchmakingDodgeState>(); 
    v.dodgerId = j.at("dodgerId").get<uint64_t>(); 
  }
}