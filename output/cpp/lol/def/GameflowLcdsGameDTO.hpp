#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct GameflowLcdsGameDTO { 
    int32_t spectatorDelay;
    int32_t mapId;
    std::vector<json> teamOne;
    std::string queueTypeName;
    int32_t gameTypeConfigId;
    uint64_t id;
    int32_t maxNumPlayers;
    std::string gameState;
    std::vector<json> playerChampionSelections;
    std::vector<json> teamTwo;
    std::string gameMode;
    std::string gameType; 
  };
  inline void to_json(json& j, const GameflowLcdsGameDTO& v) {
    j["spectatorDelay"] = v.spectatorDelay; 
    j["mapId"] = v.mapId; 
    j["teamOne"] = v.teamOne; 
    j["queueTypeName"] = v.queueTypeName; 
    j["gameTypeConfigId"] = v.gameTypeConfigId; 
    j["id"] = v.id; 
    j["maxNumPlayers"] = v.maxNumPlayers; 
    j["gameState"] = v.gameState; 
    j["playerChampionSelections"] = v.playerChampionSelections; 
    j["teamTwo"] = v.teamTwo; 
    j["gameMode"] = v.gameMode; 
    j["gameType"] = v.gameType; 
  }
  inline void from_json(const json& j, GameflowLcdsGameDTO& v) {
    v.spectatorDelay = j.at("spectatorDelay").get<int32_t>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.teamOne = j.at("teamOne").get<std::vector<json>>(); 
    v.queueTypeName = j.at("queueTypeName").get<std::string>(); 
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>(); 
    v.gameState = j.at("gameState").get<std::string>(); 
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<json>>(); 
    v.teamTwo = j.at("teamTwo").get<std::vector<json>>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.gameType = j.at("gameType").get<std::string>(); 
  }
}