#pragma once
#include "../base_def.hpp" 
#include "LolLobbyMatchmakingDodgeState.hpp"
#include "LolLobbyGameflowPhase.hpp"
namespace lol {
  struct LolLobbyGameflowGameDodge { 
    LolLobbyMatchmakingDodgeState state;
    std::vector<uint64_t> dodgeIds;
    LolLobbyGameflowPhase phase; 
  };
  inline void to_json(json& j, const LolLobbyGameflowGameDodge& v) {
    j["state"] = v.state; 
    j["dodgeIds"] = v.dodgeIds; 
    j["phase"] = v.phase; 
  }
  inline void from_json(const json& j, LolLobbyGameflowGameDodge& v) {
    v.state = j.at("state").get<LolLobbyMatchmakingDodgeState>(); 
    v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>(); 
    v.phase = j.at("phase").get<LolLobbyGameflowPhase>(); 
  }
}