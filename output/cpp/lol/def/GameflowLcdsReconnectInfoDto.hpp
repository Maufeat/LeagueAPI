#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/GameflowLcdsPlayerCredentialsDto.hpp>
#include <lol/def/GameflowLcdsGameDTO.hpp>
namespace lol {
  struct GameflowLcdsReconnectInfoDto { 
    GameflowLcdsGameDTO game;
    GameflowLcdsPlayerCredentialsDto playerCredentials;
    uint32_t reconnectDelay; 
  };
  void to_json(json& j, const GameflowLcdsReconnectInfoDto& v) {
  j["game"] = v.game; 
  j["playerCredentials"] = v.playerCredentials; 
  j["reconnectDelay"] = v.reconnectDelay; 
  }
  void from_json(const json& j, GameflowLcdsReconnectInfoDto& v) {
  v.game = j.at("game").get<GameflowLcdsGameDTO>(); 
  v.playerCredentials = j.at("playerCredentials").get<GameflowLcdsPlayerCredentialsDto>(); 
  v.reconnectDelay = j.at("reconnectDelay").get<uint32_t>(); 
  }
}