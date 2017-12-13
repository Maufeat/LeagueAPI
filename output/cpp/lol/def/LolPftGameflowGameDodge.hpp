#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPftGameflowGameDodgeState.hpp>
namespace lol {
  struct LolPftGameflowGameDodge { 
    std::vector<uint64_t> dodgeIds;
    LolPftGameflowGameDodgeState state; 
  };
  void to_json(json& j, const LolPftGameflowGameDodge& v) {
  j["dodgeIds"] = v.dodgeIds; 
  j["state"] = v.state; 
  }
  void from_json(const json& j, LolPftGameflowGameDodge& v) {
  v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>(); 
  v.state = j.at("state").get<LolPftGameflowGameDodgeState>(); 
  }
}