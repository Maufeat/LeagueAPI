#pragma once
#include "../base_def.hpp" 
#include "GameflowLcdsGameDTO.hpp"
#include "GameflowLcdsPlayerCredentialsDto.hpp"
namespace lol {
  struct GameflowLcdsReconnectInfoDto { 
    GameflowLcdsPlayerCredentialsDto playerCredentials;
    uint32_t reconnectDelay;
    GameflowLcdsGameDTO game; 
  };
  inline void to_json(json& j, const GameflowLcdsReconnectInfoDto& v) {
    j["playerCredentials"] = v.playerCredentials; 
    j["reconnectDelay"] = v.reconnectDelay; 
    j["game"] = v.game; 
  }
  inline void from_json(const json& j, GameflowLcdsReconnectInfoDto& v) {
    v.playerCredentials = j.at("playerCredentials").get<GameflowLcdsPlayerCredentialsDto>(); 
    v.reconnectDelay = j.at("reconnectDelay").get<uint32_t>(); 
    v.game = j.at("game").get<GameflowLcdsGameDTO>(); 
  }
}