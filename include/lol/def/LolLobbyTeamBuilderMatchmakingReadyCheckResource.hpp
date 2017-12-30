#pragma once
#include "../base_def.hpp" 
#include "LolLobbyTeamBuilderMatchmakingReadyCheckState.hpp"
#include "LolLobbyTeamBuilderMatchmakingReadyCheckResponse.hpp"
#include "LolLobbyTeamBuilderMatchmakingDodgeWarning.hpp"
namespace lol {
  struct LolLobbyTeamBuilderMatchmakingReadyCheckResource { 
    LolLobbyTeamBuilderMatchmakingDodgeWarning dodgeWarning;
    LolLobbyTeamBuilderMatchmakingReadyCheckResponse playerResponse;
    float timer;
    std::vector<uint64_t> declinerIds;
    LolLobbyTeamBuilderMatchmakingReadyCheckState state; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderMatchmakingReadyCheckResource& v) {
    j["dodgeWarning"] = v.dodgeWarning; 
    j["playerResponse"] = v.playerResponse; 
    j["timer"] = v.timer; 
    j["declinerIds"] = v.declinerIds; 
    j["state"] = v.state; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderMatchmakingReadyCheckResource& v) {
    v.dodgeWarning = j.at("dodgeWarning").get<LolLobbyTeamBuilderMatchmakingDodgeWarning>(); 
    v.playerResponse = j.at("playerResponse").get<LolLobbyTeamBuilderMatchmakingReadyCheckResponse>(); 
    v.timer = j.at("timer").get<float>(); 
    v.declinerIds = j.at("declinerIds").get<std::vector<uint64_t>>(); 
    v.state = j.at("state").get<LolLobbyTeamBuilderMatchmakingReadyCheckState>(); 
  }
}