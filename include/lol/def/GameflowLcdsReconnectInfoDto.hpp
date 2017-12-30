#pragma once
#include "../base_def.hpp" 
#include "GameflowLcdsPlayerCredentialsDto.hpp"
#include "GameflowLcdsGameDTO.hpp"
namespace lol {
  struct GameflowLcdsReconnectInfoDto { 
    GameflowLcdsGameDTO game;
    uint32_t reconnectDelay;
    GameflowLcdsPlayerCredentialsDto playerCredentials; 
  };
  inline void to_json(json& j, const GameflowLcdsReconnectInfoDto& v) {
    j["game"] = v.game; 
    j["reconnectDelay"] = v.reconnectDelay; 
    j["playerCredentials"] = v.playerCredentials; 
  }
  inline void from_json(const json& j, GameflowLcdsReconnectInfoDto& v) {
    v.game = j.at("game").get<GameflowLcdsGameDTO>(); 
    v.reconnectDelay = j.at("reconnectDelay").get<uint32_t>(); 
    v.playerCredentials = j.at("playerCredentials").get<GameflowLcdsPlayerCredentialsDto>(); 
  }
}