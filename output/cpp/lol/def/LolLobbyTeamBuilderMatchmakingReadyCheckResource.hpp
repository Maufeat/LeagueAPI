#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyTeamBuilderMatchmakingReadyCheckState.hpp>
#include <lol/def/LolLobbyTeamBuilderMatchmakingReadyCheckResponse.hpp>
#include <lol/def/LolLobbyTeamBuilderMatchmakingDodgeWarning.hpp>
namespace lol {
  struct LolLobbyTeamBuilderMatchmakingReadyCheckResource { 
    LolLobbyTeamBuilderMatchmakingReadyCheckState state;
    LolLobbyTeamBuilderMatchmakingReadyCheckResponse playerResponse;
    std::vector<uint64_t> declinerIds;
    LolLobbyTeamBuilderMatchmakingDodgeWarning dodgeWarning;
    float timer; 
  };
  void to_json(json& j, const LolLobbyTeamBuilderMatchmakingReadyCheckResource& v) {
  j["state"] = v.state; 
  j["playerResponse"] = v.playerResponse; 
  j["declinerIds"] = v.declinerIds; 
  j["dodgeWarning"] = v.dodgeWarning; 
  j["timer"] = v.timer; 
  }
  void from_json(const json& j, LolLobbyTeamBuilderMatchmakingReadyCheckResource& v) {
  v.state = j.at("state").get<LolLobbyTeamBuilderMatchmakingReadyCheckState>(); 
  v.playerResponse = j.at("playerResponse").get<LolLobbyTeamBuilderMatchmakingReadyCheckResponse>(); 
  v.declinerIds = j.at("declinerIds").get<std::vector<uint64_t>>(); 
  v.dodgeWarning = j.at("dodgeWarning").get<LolLobbyTeamBuilderMatchmakingDodgeWarning>(); 
  v.timer = j.at("timer").get<float>(); 
  }
}