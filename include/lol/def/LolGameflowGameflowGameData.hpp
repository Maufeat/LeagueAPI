#pragma once
#include "../base_def.hpp" 
#include "LolGameflowQueue.hpp"
namespace lol {
  struct LolGameflowGameflowGameData { 
    std::vector<json> playerChampionSelections;
    std::vector<json> teamOne;
    std::string gameName;
    std::vector<json> teamTwo;
    LolGameflowQueue queue;
    std::string password;
    uint64_t gameId;
    bool spectatorsAllowed;
    bool isCustomGame; 
  };
  inline void to_json(json& j, const LolGameflowGameflowGameData& v) {
    j["playerChampionSelections"] = v.playerChampionSelections; 
    j["teamOne"] = v.teamOne; 
    j["gameName"] = v.gameName; 
    j["teamTwo"] = v.teamTwo; 
    j["queue"] = v.queue; 
    j["password"] = v.password; 
    j["gameId"] = v.gameId; 
    j["spectatorsAllowed"] = v.spectatorsAllowed; 
    j["isCustomGame"] = v.isCustomGame; 
  }
  inline void from_json(const json& j, LolGameflowGameflowGameData& v) {
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<json>>(); 
    v.teamOne = j.at("teamOne").get<std::vector<json>>(); 
    v.gameName = j.at("gameName").get<std::string>(); 
    v.teamTwo = j.at("teamTwo").get<std::vector<json>>(); 
    v.queue = j.at("queue").get<LolGameflowQueue>(); 
    v.password = j.at("password").get<std::string>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.spectatorsAllowed = j.at("spectatorsAllowed").get<bool>(); 
    v.isCustomGame = j.at("isCustomGame").get<bool>(); 
  }
}