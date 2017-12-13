#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolChampSelectLegacyGameflowGameDodgeState.hpp>
namespace lol {
  struct LolChampSelectLegacyGameflowGameDodge { 
    std::vector<uint64_t> dodgeIds;
    LolChampSelectLegacyGameflowGameDodgeState state; 
  };
  void to_json(json& j, const LolChampSelectLegacyGameflowGameDodge& v) {
  j["dodgeIds"] = v.dodgeIds; 
  j["state"] = v.state; 
  }
  void from_json(const json& j, LolChampSelectLegacyGameflowGameDodge& v) {
  v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>(); 
  v.state = j.at("state").get<LolChampSelectLegacyGameflowGameDodgeState>(); 
  }
}