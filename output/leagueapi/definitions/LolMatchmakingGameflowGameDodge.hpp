#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolMatchmakingMatchmakingDodgeState.hpp>"

namespace leagueapi {
  struct LolMatchmakingGameflowGameDodge { /**/ 
    std::vector<uint64_t> dodgeIds;/**/
    LolMatchmakingMatchmakingDodgeState state;/**/
  };
  static void to_json(json& j, const LolMatchmakingGameflowGameDodge& v) { 
    j["dodgeIds"] = v.dodgeIds;
    j["state"] = v.state;
  }
  static void from_json(const json& j, LolMatchmakingGameflowGameDodge& v) { 
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>(); 
    v.state = j.at("state").get<LolMatchmakingMatchmakingDodgeState>(); 
  }
} 