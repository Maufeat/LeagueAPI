#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct GameflowLcdsGameDTO { 
    uint64_t id;
    int32_t mapId;
    std::string gameState;
    std::string queueTypeName;
    std::string gameMode;
    int32_t gameTypeConfigId;
    int32_t maxNumPlayers;
    std::string gameType;
    int32_t spectatorDelay;
    std::vector<json> teamOne;
    std::vector<json> teamTwo;
    std::vector<json> playerChampionSelections; 
  };
  inline void to_json(json& j, const GameflowLcdsGameDTO& v) {
    j["id"] = v.id; 
    j["mapId"] = v.mapId; 
    j["gameState"] = v.gameState; 
    j["queueTypeName"] = v.queueTypeName; 
    j["gameMode"] = v.gameMode; 
    j["gameTypeConfigId"] = v.gameTypeConfigId; 
    j["maxNumPlayers"] = v.maxNumPlayers; 
    j["gameType"] = v.gameType; 
    j["spectatorDelay"] = v.spectatorDelay; 
    j["teamOne"] = v.teamOne; 
    j["teamTwo"] = v.teamTwo; 
    j["playerChampionSelections"] = v.playerChampionSelections; 
  }
  inline void from_json(const json& j, GameflowLcdsGameDTO& v) {
    v.id = j.at("id").get<uint64_t>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.gameState = j.at("gameState").get<std::string>(); 
    v.queueTypeName = j.at("queueTypeName").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>(); 
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>(); 
    v.gameType = j.at("gameType").get<std::string>(); 
    v.spectatorDelay = j.at("spectatorDelay").get<int32_t>(); 
    v.teamOne = j.at("teamOne").get<std::vector<json>>(); 
    v.teamTwo = j.at("teamTwo").get<std::vector<json>>(); 
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<json>>(); 
  }
}