#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolGameflowGameflowGameDodgeState.hpp>
#include <lol/def/LolGameflowGameflowPhase.hpp>
namespace lol {
  struct LolGameflowGameflowGameDodge { 
    std::vector<uint64_t> dodgeIds;
    LolGameflowGameflowGameDodgeState state;
    LolGameflowGameflowPhase phase; 
  };
  void to_json(json& j, const LolGameflowGameflowGameDodge& v) {
  j["dodgeIds"] = v.dodgeIds; 
  j["state"] = v.state; 
  j["phase"] = v.phase; 
  }
  void from_json(const json& j, LolGameflowGameflowGameDodge& v) {
  v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>(); 
  v.state = j.at("state").get<LolGameflowGameflowGameDodgeState>(); 
  v.phase = j.at("phase").get<LolGameflowGameflowPhase>(); 
  }
}