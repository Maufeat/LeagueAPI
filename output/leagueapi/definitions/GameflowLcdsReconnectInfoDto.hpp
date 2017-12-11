#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/GameflowLcdsPlayerCredentialsDto.hpp>"
#include "<leagueapi/definitions/GameflowLcdsGameDTO.hpp>"

namespace leagueapi {
  struct GameflowLcdsReconnectInfoDto { /**/ 
    GameflowLcdsGameDTO game;/**/
    GameflowLcdsPlayerCredentialsDto playerCredentials;/**/
    uint32_t reconnectDelay;/**/
  };
  static void to_json(json& j, const GameflowLcdsReconnectInfoDto& v) { 
    j["game"] = v.game;
    j["playerCredentials"] = v.playerCredentials;
    j["reconnectDelay"] = v.reconnectDelay;
  }
  static void from_json(const json& j, GameflowLcdsReconnectInfoDto& v) { 
    v.game = j.at("game").get<GameflowLcdsGameDTO>(); 
    v.playerCredentials = j.at("playerCredentials").get<GameflowLcdsPlayerCredentialsDto>(); 
    v.reconnectDelay = j.at("reconnectDelay").get<uint32_t>(); 
  }
} 