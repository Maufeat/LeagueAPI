#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolClashMatchmakingDodgeState.hpp>"

namespace leagueapi {
  struct LolClashMatchmakingDodgeData { /**/ 
    LolClashMatchmakingDodgeState state;/**/
    uint64_t dodgerId;/**/
  };
  static void to_json(json& j, const LolClashMatchmakingDodgeData& v) { 
    j["state"] = v.state;
    j["dodgerId"] = v.dodgerId;
  }
  static void from_json(const json& j, LolClashMatchmakingDodgeData& v) { 
    v.state = j.at("state").get<LolClashMatchmakingDodgeState>(); 
    v.dodgerId = j.at("dodgerId").get<uint64_t>(); 
  }
} 