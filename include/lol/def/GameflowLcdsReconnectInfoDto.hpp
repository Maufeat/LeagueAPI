#pragma once
#include "../base_def.hpp" 
#include "GameflowLcdsPlayerCredentialsDto.hpp"
#include "GameflowLcdsGameDTO.hpp"
namespace lol {
  struct GameflowLcdsReconnectInfoDto { 
    GameflowLcdsPlayerCredentialsDto playerCredentials;
    GameflowLcdsGameDTO game;
    uint32_t reconnectDelay; 
  };
  inline void to_json(json& j, const GameflowLcdsReconnectInfoDto& v) {
    j["playerCredentials"] = v.playerCredentials; 
    j["game"] = v.game; 
    j["reconnectDelay"] = v.reconnectDelay; 
  }
  inline void from_json(const json& j, GameflowLcdsReconnectInfoDto& v) {
    v.playerCredentials = j.at("playerCredentials").get<GameflowLcdsPlayerCredentialsDto>(); 
    v.game = j.at("game").get<GameflowLcdsGameDTO>(); 
    v.reconnectDelay = j.at("reconnectDelay").get<uint32_t>(); 
  }
}