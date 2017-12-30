#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct GameflowLcdsGameDTO { 
    int32_t maxNumPlayers;
    uint64_t id;
    std::vector<json> teamTwo;
    std::vector<json> playerChampionSelections;
    int32_t spectatorDelay;
    std::string queueTypeName;
    std::vector<json> teamOne;
    int32_t gameTypeConfigId;
    int32_t mapId;
    std::string gameType;
    std::string gameMode;
    std::string gameState; 
  };
  inline void to_json(json& j, const GameflowLcdsGameDTO& v) {
    j["maxNumPlayers"] = v.maxNumPlayers; 
    j["id"] = v.id; 
    j["teamTwo"] = v.teamTwo; 
    j["playerChampionSelections"] = v.playerChampionSelections; 
    j["spectatorDelay"] = v.spectatorDelay; 
    j["queueTypeName"] = v.queueTypeName; 
    j["teamOne"] = v.teamOne; 
    j["gameTypeConfigId"] = v.gameTypeConfigId; 
    j["mapId"] = v.mapId; 
    j["gameType"] = v.gameType; 
    j["gameMode"] = v.gameMode; 
    j["gameState"] = v.gameState; 
  }
  inline void from_json(const json& j, GameflowLcdsGameDTO& v) {
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.teamTwo = j.at("teamTwo").get<std::vector<json>>(); 
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<json>>(); 
    v.spectatorDelay = j.at("spectatorDelay").get<int32_t>(); 
    v.queueTypeName = j.at("queueTypeName").get<std::string>(); 
    v.teamOne = j.at("teamOne").get<std::vector<json>>(); 
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.gameType = j.at("gameType").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.gameState = j.at("gameState").get<std::string>(); 
  }
}