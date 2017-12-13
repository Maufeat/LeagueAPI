#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyLobbyCustomGameLobby.hpp>
namespace lol {
  struct LolLobbyLobbyChangeGameDto { 
    bool isCustom;
    int32_t queueId;
    std::optional<LolLobbyLobbyCustomGameLobby> customGameLobby; 
  };
  void to_json(json& j, const LolLobbyLobbyChangeGameDto& v) {
  j["isCustom"] = v.isCustom; 
  j["queueId"] = v.queueId; 
  j["customGameLobby"] = v.customGameLobby; 
  }
  void from_json(const json& j, LolLobbyLobbyChangeGameDto& v) {
  v.isCustom = j.at("isCustom").get<bool>(); 
  v.queueId = j.at("queueId").get<int32_t>(); 
  v.customGameLobby = j.at("customGameLobby").get<std::optional<LolLobbyLobbyCustomGameLobby>>(); 
  }
}