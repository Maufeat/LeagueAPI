#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChampSelectLegacyGameflowGameDodgeState.hpp>
namespace lol {
  struct LolChampSelectLegacyGameflowGameDodge { 
    LolChampSelectLegacyGameflowGameDodgeState state;
    std::vector<uint64_t> dodgeIds; 
  };
  void to_json(json& j, const LolChampSelectLegacyGameflowGameDodge& v) {
  j["state"] = v.state; 
  j["dodgeIds"] = v.dodgeIds; 
  }
  void from_json(const json& j, LolChampSelectLegacyGameflowGameDodge& v) {
  v.state = j.at("state").get<LolChampSelectLegacyGameflowGameDodgeState>(); 
  v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>(); 
  }
}