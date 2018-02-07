#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyCustomGameLobby.hpp"
namespace lol {
  struct LolLobbyLobbyChangeGameDto { 
    int32_t queueId;
    bool isCustom;
    std::optional<LolLobbyLobbyCustomGameLobby> customGameLobby; 
  };
  inline void to_json(json& j, const LolLobbyLobbyChangeGameDto& v) {
    j["queueId"] = v.queueId; 
    j["isCustom"] = v.isCustom; 
    if(v.customGameLobby)
      j["customGameLobby"] = *v.customGameLobby;
  }
  inline void from_json(const json& j, LolLobbyLobbyChangeGameDto& v) {
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.isCustom = j.at("isCustom").get<bool>(); 
    if(auto it = j.find("customGameLobby"); it != j.end() && !it->is_null())
      v.customGameLobby = it->get<std::optional<LolLobbyLobbyCustomGameLobby>>(); 
  }
}