#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyGameflowPhase.hpp>
#include <lol/def/LolLobbyMatchmakingDodgeState.hpp>
namespace lol {
  struct LolLobbyGameflowGameDodge { 
    std::vector<uint64_t> dodgeIds;
    LolLobbyMatchmakingDodgeState state;
    LolLobbyGameflowPhase phase; 
  };
  void to_json(json& j, const LolLobbyGameflowGameDodge& v) {
  j["dodgeIds"] = v.dodgeIds; 
  j["state"] = v.state; 
  j["phase"] = v.phase; 
  }
  void from_json(const json& j, LolLobbyGameflowGameDodge& v) {
  v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>(); 
  v.state = j.at("state").get<LolLobbyMatchmakingDodgeState>(); 
  v.phase = j.at("phase").get<LolLobbyGameflowPhase>(); 
  }
}