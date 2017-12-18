#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMatchmakingMatchmakingDodgeState.hpp>
namespace lol {
  struct LolMatchmakingMatchmakingDodgeData { 
    LolMatchmakingMatchmakingDodgeState state;
    uint64_t dodgerId; 
  };
  inline void to_json(json& j, const LolMatchmakingMatchmakingDodgeData& v) {
    j["state"] = v.state; 
    j["dodgerId"] = v.dodgerId; 
  }
  inline void from_json(const json& j, LolMatchmakingMatchmakingDodgeData& v) {
    v.state = j.at("state").get<LolMatchmakingMatchmakingDodgeState>(); 
    v.dodgerId = j.at("dodgerId").get<uint64_t>(); 
  }
}