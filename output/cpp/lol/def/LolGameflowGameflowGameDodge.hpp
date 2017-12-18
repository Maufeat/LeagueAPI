#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolGameflowGameflowPhase.hpp>
#include <lol/def/LolGameflowGameflowGameDodgeState.hpp>
namespace lol {
  struct LolGameflowGameflowGameDodge { 
    LolGameflowGameflowGameDodgeState state;
    std::vector<uint64_t> dodgeIds;
    LolGameflowGameflowPhase phase; 
  };
  inline void to_json(json& j, const LolGameflowGameflowGameDodge& v) {
    j["state"] = v.state; 
    j["dodgeIds"] = v.dodgeIds; 
    j["phase"] = v.phase; 
  }
  inline void from_json(const json& j, LolGameflowGameflowGameDodge& v) {
    v.state = j.at("state").get<LolGameflowGameflowGameDodgeState>(); 
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>(); 
    v.phase = j.at("phase").get<LolGameflowGameflowPhase>(); 
  }
}