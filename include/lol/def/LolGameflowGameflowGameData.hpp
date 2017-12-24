#pragma once
#include "../base_def.hpp" 
#include "LolGameflowQueue.hpp"
namespace lol {
  struct LolGameflowGameflowGameData { 
    std::vector<json> teamTwo;
    uint64_t gameId;
    bool spectatorsAllowed;
    std::vector<json> playerChampionSelections;
    std::string gameName;
    std::string password;
    bool isCustomGame;
    std::vector<json> teamOne;
    LolGameflowQueue queue; 
  };
  inline void to_json(json& j, const LolGameflowGameflowGameData& v) {
    j["teamTwo"] = v.teamTwo; 
    j["gameId"] = v.gameId; 
    j["spectatorsAllowed"] = v.spectatorsAllowed; 
    j["playerChampionSelections"] = v.playerChampionSelections; 
    j["gameName"] = v.gameName; 
    j["password"] = v.password; 
    j["isCustomGame"] = v.isCustomGame; 
    j["teamOne"] = v.teamOne; 
    j["queue"] = v.queue; 
  }
  inline void from_json(const json& j, LolGameflowGameflowGameData& v) {
    v.teamTwo = j.at("teamTwo").get<std::vector<json>>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.spectatorsAllowed = j.at("spectatorsAllowed").get<bool>(); 
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<json>>(); 
    v.gameName = j.at("gameName").get<std::string>(); 
    v.password = j.at("password").get<std::string>(); 
    v.isCustomGame = j.at("isCustomGame").get<bool>(); 
    v.teamOne = j.at("teamOne").get<std::vector<json>>(); 
    v.queue = j.at("queue").get<LolGameflowQueue>(); 
  }
}