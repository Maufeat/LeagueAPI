#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyLobbyCustomGameLobby.hpp>
namespace lol {
  struct LolLobbyLobbyChangeGameDto { 
    int32_t queueId;
    std::optional<LolLobbyLobbyCustomGameLobby> customGameLobby;
    bool isCustom; 
  };
  void to_json(json& j, const LolLobbyLobbyChangeGameDto& v) {
  j["queueId"] = v.queueId; 
  j["customGameLobby"] = v.customGameLobby; 
  j["isCustom"] = v.isCustom; 
  }
  void from_json(const json& j, LolLobbyLobbyChangeGameDto& v) {
  v.queueId = j.at("queueId").get<int32_t>(); 
  v.customGameLobby = j.at("customGameLobby").get<std::optional<LolLobbyLobbyCustomGameLobby>>(); 
  v.isCustom = j.at("isCustom").get<bool>(); 
  }
}