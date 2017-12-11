#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolClashMatchmakingDodgeState.hpp>

namespace leagueapi {
  struct LolClashGameflowGameDodge { /**/ 
    std::vector<uint64_t> dodgeIds;/**/
    LolClashMatchmakingDodgeState state;/**/
  };
  static void to_json(json& j, const LolClashGameflowGameDodge& v) { 
    j["dodgeIds"] = v.dodgeIds;
    j["state"] = v.state;
  }
  static void from_json(const json& j, LolClashGameflowGameDodge& v) { 
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>(); 
    v.state = j.at("state").get<LolClashMatchmakingDodgeState>(); 
  }
} 