#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderMatchmakingDodgeState.hpp"
namespace lol {
  struct LolLobbyTeamBuilderMatchmakingDodgeData { 
    LolLobbyTeamBuilderMatchmakingDodgeState state;
    uint64_t dodgerId; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderMatchmakingDodgeData& v) {
    j["state"] = v.state; 
    j["dodgerId"] = v.dodgerId; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderMatchmakingDodgeData& v) {
    v.state = j.at("state").get<LolLobbyTeamBuilderMatchmakingDodgeState>(); 
    v.dodgerId = j.at("dodgerId").get<uint64_t>(); 
  }
}