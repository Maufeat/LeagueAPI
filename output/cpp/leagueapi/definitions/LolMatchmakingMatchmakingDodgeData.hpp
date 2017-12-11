#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolMatchmakingMatchmakingDodgeState.hpp>

namespace leagueapi {
  struct LolMatchmakingMatchmakingDodgeData { /**/ 
    LolMatchmakingMatchmakingDodgeState state;/**/
    uint64_t dodgerId;/**/
  };
  static void to_json(json& j, const LolMatchmakingMatchmakingDodgeData& v) { 
    j["state"] = v.state;
    j["dodgerId"] = v.dodgerId;
  }
  static void from_json(const json& j, LolMatchmakingMatchmakingDodgeData& v) { 
    v.state = j.at("state").get<LolMatchmakingMatchmakingDodgeState>(); 
    v.dodgerId = j.at("dodgerId").get<uint64_t>(); 
  }
} 