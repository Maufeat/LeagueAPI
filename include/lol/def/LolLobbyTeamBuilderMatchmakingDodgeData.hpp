#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderMatchmakingDodgeState.hpp"
namespace lol {
  struct LolLobbyTeamBuilderMatchmakingDodgeData { 
    uint64_t dodgerId;
    LolLobbyTeamBuilderMatchmakingDodgeState state; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderMatchmakingDodgeData& v) {
    j["dodgerId"] = v.dodgerId; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderMatchmakingDodgeData& v) {
    v.dodgerId = j.at("dodgerId").get<uint64_t>(); 
    v.state = j.at("state").get<LolLobbyTeamBuilderMatchmakingDodgeState>(); 
  }
}