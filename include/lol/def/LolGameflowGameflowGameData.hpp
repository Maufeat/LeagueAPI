#pragma once
#include "../base_def.hpp" 
#include "LolGameflowQueue.hpp"
namespace lol {
  struct LolGameflowGameflowGameData { 
    uint64_t gameId;
    LolGameflowQueue queue;
    bool isCustomGame;
    std::string gameName;
    std::string password;
    std::vector<json> teamOne;
    std::vector<json> teamTwo;
    std::vector<json> playerChampionSelections;
    bool spectatorsAllowed; 
  };
  inline void to_json(json& j, const LolGameflowGameflowGameData& v) {
    j["gameId"] = v.gameId; 
    j["queue"] = v.queue; 
    j["isCustomGame"] = v.isCustomGame; 
    j["gameName"] = v.gameName; 
    j["password"] = v.password; 
    j["teamOne"] = v.teamOne; 
    j["teamTwo"] = v.teamTwo; 
    j["playerChampionSelections"] = v.playerChampionSelections; 
    j["spectatorsAllowed"] = v.spectatorsAllowed; 
  }
  inline void from_json(const json& j, LolGameflowGameflowGameData& v) {
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.queue = j.at("queue").get<LolGameflowQueue>(); 
    v.isCustomGame = j.at("isCustomGame").get<bool>(); 
    v.gameName = j.at("gameName").get<std::string>(); 
    v.password = j.at("password").get<std::string>(); 
    v.teamOne = j.at("teamOne").get<std::vector<json>>(); 
    v.teamTwo = j.at("teamTwo").get<std::vector<json>>(); 
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<json>>(); 
    v.spectatorsAllowed = j.at("spectatorsAllowed").get<bool>(); 
  }
}