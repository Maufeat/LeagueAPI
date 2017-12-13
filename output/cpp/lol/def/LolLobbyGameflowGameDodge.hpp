#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyMatchmakingDodgeState.hpp>
#include <lol/def/LolLobbyGameflowPhase.hpp>
namespace lol {
  struct LolLobbyGameflowGameDodge { 
    LolLobbyMatchmakingDodgeState state;
    std::vector<uint64_t> dodgeIds;
    LolLobbyGameflowPhase phase; 
  };
  void to_json(json& j, const LolLobbyGameflowGameDodge& v) {
  j["state"] = v.state; 
  j["dodgeIds"] = v.dodgeIds; 
  j["phase"] = v.phase; 
  }
  void from_json(const json& j, LolLobbyGameflowGameDodge& v) {
  v.state = j.at("state").get<LolLobbyMatchmakingDodgeState>(); 
  v.dodgeIds = j.at("dodgeIds").get<std::vector<uint64_t>>(); 
  v.phase = j.at("phase").get<LolLobbyGameflowPhase>(); 
  }
}