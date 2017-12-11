#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct GameflowLcdsGameDTO { /**/ 
    std::vector<json> playerChampionSelections;/**/
    std::string gameState;/**/
    uint64_t id;/**/
    int32_t maxNumPlayers;/**/
    std::vector<json> teamOne;/**/
    std::string gameType;/**/
    std::vector<json> teamTwo;/**/
    std::string queueTypeName;/**/
    int32_t gameTypeConfigId;/**/
    int32_t spectatorDelay;/**/
    int32_t mapId;/**/
    std::string gameMode;/**/
  };
  static void to_json(json& j, const GameflowLcdsGameDTO& v) { 
    j["playerChampionSelections"] = v.playerChampionSelections;
    j["gameState"] = v.gameState;
    j["id"] = v.id;
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["teamOne"] = v.teamOne;
    j["gameType"] = v.gameType;
    j["teamTwo"] = v.teamTwo;
    j["queueTypeName"] = v.queueTypeName;
    j["gameTypeConfigId"] = v.gameTypeConfigId;
    j["spectatorDelay"] = v.spectatorDelay;
    j["mapId"] = v.mapId;
    j["gameMode"] = v.gameMode;
  }
  static void from_json(const json& j, GameflowLcdsGameDTO& v) { 
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<json>>(); 
    v.gameState = j.at("gameState").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>(); 
    v.teamOne = j.at("teamOne").get<std::vector<json>>(); 
    v.gameType = j.at("gameType").get<std::string>(); 
    v.teamTwo = j.at("teamTwo").get<std::vector<json>>(); 
    v.queueTypeName = j.at("queueTypeName").get<std::string>(); 
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>(); 
    v.spectatorDelay = j.at("spectatorDelay").get<int32_t>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
  }
} 