#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderMatchmakingReadyCheckResponse.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderMatchmakingReadyCheckState.hpp>
#include <leagueapi/definitions/LolLobbyTeamBuilderMatchmakingDodgeWarning.hpp>

namespace leagueapi {
  struct LolLobbyTeamBuilderMatchmakingReadyCheckResource { /**/ 
    LolLobbyTeamBuilderMatchmakingReadyCheckState state;/**/
    LolLobbyTeamBuilderMatchmakingReadyCheckResponse playerResponse;/**/
    std::vector<uint64_t> declinerIds;/**/
    LolLobbyTeamBuilderMatchmakingDodgeWarning dodgeWarning;/**/
    float timer;/**/
  };
  static void to_json(json& j, const LolLobbyTeamBuilderMatchmakingReadyCheckResource& v) { 
    j["state"] = v.state;
    j["playerResponse"] = v.playerResponse;
    j["declinerIds"] = v.declinerIds;
    j["dodgeWarning"] = v.dodgeWarning;
    j["timer"] = v.timer;
  }
  static void from_json(const json& j, LolLobbyTeamBuilderMatchmakingReadyCheckResource& v) { 
    v.state = j.at("state").get<LolLobbyTeamBuilderMatchmakingReadyCheckState>(); 
    v.playerResponse = j.at("playerResponse").get<LolLobbyTeamBuilderMatchmakingReadyCheckResponse>(); 
    v.declinerIds = j.at("declinerIds").get<std::vector<uint64_t>>(); 
    v.dodgeWarning = j.at("dodgeWarning").get<LolLobbyTeamBuilderMatchmakingDodgeWarning>(); 
    v.timer = j.at("timer").get<float>(); 
  }
} 