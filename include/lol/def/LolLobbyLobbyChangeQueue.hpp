#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyCustomGameLobby.hpp"
namespace lol {
  struct LolLobbyLobbyChangeQueue { 
    std::optional<LolLobbyLobbyCustomGameLobby> customGameLobby;
    bool isCustom;
    int32_t queueId; 
  };
  inline void to_json(json& j, const LolLobbyLobbyChangeQueue& v) {
    if(v.customGameLobby)
      j["customGameLobby"] = *v.customGameLobby;
    j["isCustom"] = v.isCustom; 
    j["queueId"] = v.queueId; 
  }
  inline void from_json(const json& j, LolLobbyLobbyChangeQueue& v) {
    if(auto it = j.find("customGameLobby"); it != j.end() && !it->is_null())
      v.customGameLobby = it->get<std::optional<LolLobbyLobbyCustomGameLobby>>(); 
    v.isCustom = j.at("isCustom").get<bool>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
  }
}