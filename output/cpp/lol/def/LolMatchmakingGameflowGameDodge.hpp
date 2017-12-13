#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMatchmakingMatchmakingDodgeState.hpp>
namespace lol {
  struct LolMatchmakingGameflowGameDodge { 
    std::vector<uint64_t> dodgeIds;
    LolMatchmakingMatchmakingDodgeState state; 
  };
  void to_json(json& j, const LolMatchmakingGameflowGameDodge& v) {
  j["dodgeIds"] = v.dodgeIds; 
  j["state"] = v.state; 
  }
  void from_json(const json& j, LolMatchmakingGameflowGameDodge& v) {
  v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>(); 
  v.state = j.at("state").get<LolMatchmakingMatchmakingDodgeState>(); 
  }
}