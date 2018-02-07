#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderMatchmakingReadyCheckResponse.hpp"
#include "LolLobbyTeamBuilderMatchmakingDodgeWarning.hpp"
#include "LolLobbyTeamBuilderMatchmakingReadyCheckState.hpp"
namespace lol {
  struct LolLobbyTeamBuilderMatchmakingReadyCheckResource { 
    LolLobbyTeamBuilderMatchmakingReadyCheckState state;
    LolLobbyTeamBuilderMatchmakingReadyCheckResponse playerResponse;
    LolLobbyTeamBuilderMatchmakingDodgeWarning dodgeWarning;
    float timer;
    std::vector<uint64_t> declinerIds; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderMatchmakingReadyCheckResource& v) {
    j["state"] = v.state; 
    j["playerResponse"] = v.playerResponse; 
    j["dodgeWarning"] = v.dodgeWarning; 
    j["timer"] = v.timer; 
    j["declinerIds"] = v.declinerIds; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderMatchmakingReadyCheckResource& v) {
    v.state = j.at("state").get<LolLobbyTeamBuilderMatchmakingReadyCheckState>(); 
    v.playerResponse = j.at("playerResponse").get<LolLobbyTeamBuilderMatchmakingReadyCheckResponse>(); 
    v.dodgeWarning = j.at("dodgeWarning").get<LolLobbyTeamBuilderMatchmakingDodgeWarning>(); 
    v.timer = j.at("timer").get<float>(); 
    v.declinerIds = j.at("declinerIds").get<std::vector<uint64_t>>(); 
  }
}