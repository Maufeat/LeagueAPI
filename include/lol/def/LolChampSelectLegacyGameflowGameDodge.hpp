#pragma once
#include "../base_def.hpp" 
#include "LolChampSelectLegacyGameflowGameDodgeState.hpp"
namespace lol {
  struct LolChampSelectLegacyGameflowGameDodge { 
    LolChampSelectLegacyGameflowGameDodgeState state;
    std::vector<uint64_t> dodgeIds; 
  };
  inline void to_json(json& j, const LolChampSelectLegacyGameflowGameDodge& v) {
    j["state"] = v.state; 
    j["dodgeIds"] = v.dodgeIds; 
  }
  inline void from_json(const json& j, LolChampSelectLegacyGameflowGameDodge& v) {
    v.state = j.at("state").get<LolChampSelectLegacyGameflowGameDodgeState>(); 
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>(); 
  }
}