#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyTeamBuilderMatchmakingReadyCheckState.hpp>
#include <lol/def/LolLobbyTeamBuilderMatchmakingDodgeWarning.hpp>
#include <lol/def/LolLobbyTeamBuilderMatchmakingReadyCheckResponse.hpp>
namespace lol {
  struct LolLobbyTeamBuilderMatchmakingReadyCheckResource { 
    LolLobbyTeamBuilderMatchmakingReadyCheckResponse playerResponse;
    float timer;
    LolLobbyTeamBuilderMatchmakingReadyCheckState state;
    LolLobbyTeamBuilderMatchmakingDodgeWarning dodgeWarning;
    std::vector<uint64_t> declinerIds; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderMatchmakingReadyCheckResource& v) {
    j["playerResponse"] = v.playerResponse; 
    j["timer"] = v.timer; 
    j["state"] = v.state; 
    j["dodgeWarning"] = v.dodgeWarning; 
    j["declinerIds"] = v.declinerIds; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderMatchmakingReadyCheckResource& v) {
    v.playerResponse = j.at("playerResponse").get<LolLobbyTeamBuilderMatchmakingReadyCheckResponse>(); 
    v.timer = j.at("timer").get<float>(); 
    v.state = j.at("state").get<LolLobbyTeamBuilderMatchmakingReadyCheckState>(); 
    v.dodgeWarning = j.at("dodgeWarning").get<LolLobbyTeamBuilderMatchmakingDodgeWarning>(); 
    v.declinerIds = j.at("declinerIds").get<std::vector<uint64_t>>(); 
  }
}