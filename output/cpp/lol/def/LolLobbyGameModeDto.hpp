#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyGameModeDto { 
    int32_t queueId;
    int32_t maxPartySize;
    std::string gameType;
    std::optional<std::string> botDifficulty; 
  };
  void to_json(json& j, const LolLobbyGameModeDto& v) {
  j["queueId"] = v.queueId; 
  j["maxPartySize"] = v.maxPartySize; 
  j["gameType"] = v.gameType; 
  j["botDifficulty"] = v.botDifficulty; 
  }
  void from_json(const json& j, LolLobbyGameModeDto& v) {
  v.queueId = j.at("queueId").get<int32_t>(); 
  v.maxPartySize = j.at("maxPartySize").get<int32_t>(); 
  v.gameType = j.at("gameType").get<std::string>(); 
  v.botDifficulty = j.at("botDifficulty").get<std::optional<std::string>>(); 
  }
}