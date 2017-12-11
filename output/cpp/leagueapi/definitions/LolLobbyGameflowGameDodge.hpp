#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolLobbyGameflowPhase.hpp>
#include <leagueapi/definitions/LolLobbyMatchmakingDodgeState.hpp>

namespace leagueapi {
  struct LolLobbyGameflowGameDodge { /**/ 
    std::vector<uint64_t> dodgeIds;/**/
    LolLobbyMatchmakingDodgeState state;/**/
    LolLobbyGameflowPhase phase;/**/
  };
  static void to_json(json& j, const LolLobbyGameflowGameDodge& v) { 
    j["dodgeIds"] = v.dodgeIds;
    j["state"] = v.state;
    j["phase"] = v.phase;
  }
  static void from_json(const json& j, LolLobbyGameflowGameDodge& v) { 
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>(); 
    v.state = j.at("state").get<LolLobbyMatchmakingDodgeState>(); 
    v.phase = j.at("phase").get<LolLobbyGameflowPhase>(); 
  }
} 