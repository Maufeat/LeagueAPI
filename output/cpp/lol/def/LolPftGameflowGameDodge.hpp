#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPftGameflowGameDodgeState.hpp>
namespace lol {
  struct LolPftGameflowGameDodge { 
    LolPftGameflowGameDodgeState state;
    std::vector<uint64_t> dodgeIds; 
  };
  void to_json(json& j, const LolPftGameflowGameDodge& v) {
  j["state"] = v.state; 
  j["dodgeIds"] = v.dodgeIds; 
  }
  void from_json(const json& j, LolPftGameflowGameDodge& v) {
  v.state = j.at("state").get<LolPftGameflowGameDodgeState>(); 
  v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>(); 
  }
}