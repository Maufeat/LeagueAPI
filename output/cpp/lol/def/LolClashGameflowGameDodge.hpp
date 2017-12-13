#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolClashMatchmakingDodgeState.hpp>
namespace lol {
  struct LolClashGameflowGameDodge { 
    std::vector<uint64_t> dodgeIds;
    LolClashMatchmakingDodgeState state; 
  };
  void to_json(json& j, const LolClashGameflowGameDodge& v) {
  j["dodgeIds"] = v.dodgeIds; 
  j["state"] = v.state; 
  }
  void from_json(const json& j, LolClashGameflowGameDodge& v) {
  v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>(); 
  v.state = j.at("state").get<LolClashMatchmakingDodgeState>(); 
  }
}