#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMatchmakingMatchmakingDodgeState.hpp>
namespace lol {
  struct LolMatchmakingGameflowGameDodge { 
    LolMatchmakingMatchmakingDodgeState state;
    std::vector<uint64_t> dodgeIds; 
  };
  void to_json(json& j, const LolMatchmakingGameflowGameDodge& v) {
  j["state"] = v.state; 
  j["dodgeIds"] = v.dodgeIds; 
  }
  void from_json(const json& j, LolMatchmakingGameflowGameDodge& v) {
  v.state = j.at("state").get<LolMatchmakingMatchmakingDodgeState>(); 
  v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>(); 
  }
}