#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct GameflowLcdsGameDTO { 
    std::vector<json> teamTwo;
    int32_t maxNumPlayers;
    std::vector<json> playerChampionSelections;
    std::string gameState;
    std::string queueTypeName;
    std::string gameType;
    int32_t mapId;
    std::string gameMode;
    int32_t spectatorDelay;
    uint64_t id;
    std::vector<json> teamOne;
    int32_t gameTypeConfigId; 
  };
  inline void to_json(json& j, const GameflowLcdsGameDTO& v) {
    j["teamTwo"] = v.teamTwo; 
    j["maxNumPlayers"] = v.maxNumPlayers; 
    j["playerChampionSelections"] = v.playerChampionSelections; 
    j["gameState"] = v.gameState; 
    j["queueTypeName"] = v.queueTypeName; 
    j["gameType"] = v.gameType; 
    j["mapId"] = v.mapId; 
    j["gameMode"] = v.gameMode; 
    j["spectatorDelay"] = v.spectatorDelay; 
    j["id"] = v.id; 
    j["teamOne"] = v.teamOne; 
    j["gameTypeConfigId"] = v.gameTypeConfigId; 
  }
  inline void from_json(const json& j, GameflowLcdsGameDTO& v) {
    v.teamTwo = j.at("teamTwo").get<std::vector<json>>(); 
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>(); 
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<json>>(); 
    v.gameState = j.at("gameState").get<std::string>(); 
    v.queueTypeName = j.at("queueTypeName").get<std::string>(); 
    v.gameType = j.at("gameType").get<std::string>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.spectatorDelay = j.at("spectatorDelay").get<int32_t>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.teamOne = j.at("teamOne").get<std::vector<json>>(); 
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>(); 
  }
}