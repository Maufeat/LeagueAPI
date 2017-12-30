#pragma once
#include "../base_def.hpp" 
#include "LolClashMatchmakingDodgeState.hpp"
namespace lol {
  struct LolClashMatchmakingDodgeData { 
    uint64_t dodgerId;
    LolClashMatchmakingDodgeState state; 
  };
  inline void to_json(json& j, const LolClashMatchmakingDodgeData& v) {
    j["dodgerId"] = v.dodgerId; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolClashMatchmakingDodgeData& v) {
    v.dodgerId = j.at("dodgerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolClashMatchmakingDodgeState>(); 
  }
}