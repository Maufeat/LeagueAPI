#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolPftGameflowGameDodgeState.hpp>

namespace leagueapi {
  struct LolPftGameflowGameDodge { /**/ 
    std::vector<uint64_t> dodgeIds;/**/
    LolPftGameflowGameDodgeState state;/**/
  };
  static void to_json(json& j, const LolPftGameflowGameDodge& v) { 
    j["dodgeIds"] = v.dodgeIds;
    j["state"] = v.state;
  }
  static void from_json(const json& j, LolPftGameflowGameDodge& v) { 
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>(); 
    v.state = j.at("state").get<LolPftGameflowGameDodgeState>(); 
  }
} 