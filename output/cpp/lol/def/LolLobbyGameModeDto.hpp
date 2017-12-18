#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyGameModeDto { 
    int32_t queueId;
    int32_t maxPartySize;
    std::string gameType;
    std::optional<std::string> botDifficulty; 
  };
  inline void to_json(json& j, const LolLobbyGameModeDto& v) {
    j["queueId"] = v.queueId; 
    j["maxPartySize"] = v.maxPartySize; 
    j["gameType"] = v.gameType; 
    if(v.botDifficulty)
      j["botDifficulty"] = *v.botDifficulty;
  }
  inline void from_json(const json& j, LolLobbyGameModeDto& v) {
    v.queueId = j.at("queueId").get<int32_t>(); 
    v.maxPartySize = j.at("maxPartySize").get<int32_t>(); 
    v.gameType = j.at("gameType").get<std::string>(); 
    if(auto it = j.find("botDifficulty"); it != j.end() && !it->is_null())
      v.botDifficulty = it->get<std::optional<std::string>>(); 
  }
}