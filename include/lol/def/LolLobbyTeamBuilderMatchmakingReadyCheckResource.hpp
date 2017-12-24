#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderMatchmakingReadyCheckResponse.hpp"
#include "LolLobbyTeamBuilderMatchmakingReadyCheckState.hpp"
#include "LolLobbyTeamBuilderMatchmakingDodgeWarning.hpp"
namespace lol {
  struct LolLobbyTeamBuilderMatchmakingReadyCheckResource { 
    float timer;
    LolLobbyTeamBuilderMatchmakingReadyCheckState state;
    LolLobbyTeamBuilderMatchmakingDodgeWarning dodgeWarning;
    std::vector<uint64_t> declinerIds;
    LolLobbyTeamBuilderMatchmakingReadyCheckResponse playerResponse; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderMatchmakingReadyCheckResource& v) {
    j["timer"] = v.timer; 
    j["state"] = v.state; 
    j["dodgeWarning"] = v.dodgeWarning; 
    j["declinerIds"] = v.declinerIds; 
    j["playerResponse"] = v.playerResponse; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderMatchmakingReadyCheckResource& v) {
    v.timer = j.at("timer").get<float>(); 
    v.state = j.at("state").get<LolLobbyTeamBuilderMatchmakingReadyCheckState>(); 
    v.dodgeWarning = j.at("dodgeWarning").get<LolLobbyTeamBuilderMatchmakingDodgeWarning>(); 
    v.declinerIds = j.at("declinerIds").get<std::vector<uint64_t>>(); 
    v.playerResponse = j.at("playerResponse").get<LolLobbyTeamBuilderMatchmakingReadyCheckResponse>(); 
  }
}