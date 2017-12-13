#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyGameModeDto { 
    int32_t queueId;
    std::optional<std::string> botDifficulty;
    std::string gameType;
    int32_t maxPartySize; 
  };
  void to_json(json& j, const LolLobbyGameModeDto& v) {
  j["queueId"] = v.queueId; 
  j["botDifficulty"] = v.botDifficulty; 
  j["gameType"] = v.gameType; 
  j["maxPartySize"] = v.maxPartySize; 
  }
  void from_json(const json& j, LolLobbyGameModeDto& v) {
  v.queueId = j.at("queueId").get<int32_t>(); 
  v.botDifficulty = j.at("botDifficulty").get<std::optional<std::string>>(); 
  v.gameType = j.at("gameType").get<std::string>(); 
  v.maxPartySize = j.at("maxPartySize").get<int32_t>(); 
  }
}