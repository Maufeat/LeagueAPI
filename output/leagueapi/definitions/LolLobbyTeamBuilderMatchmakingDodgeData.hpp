#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLobbyTeamBuilderMatchmakingDodgeState.hpp>"

namespace leagueapi {
  struct LolLobbyTeamBuilderMatchmakingDodgeData { /**/ 
    LolLobbyTeamBuilderMatchmakingDodgeState state;/**/
    uint64_t dodgerId;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderMatchmakingDodgeData& v) { 
    j["state"] = v.state;
    j["dodgerId"] = v.dodgerId;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderMatchmakingDodgeData& v) { 
    v.state = j.at("state").get<LolLobbyTeamBuilderMatchmakingDodgeState>(); 
    v.dodgerId = j.at("dodgerId").get<uint64_t>(); 
  }
} 