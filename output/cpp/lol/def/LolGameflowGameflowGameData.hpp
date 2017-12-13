#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolGameflowQueue.hpp>
namespace lol {
  struct LolGameflowGameflowGameData { 
    std::vector<json> teamOne;
    bool spectatorsAllowed;
    uint64_t gameId;
    bool isCustomGame;
    std::string password;
    std::vector<json> teamTwo;
    LolGameflowQueue queue;
    std::vector<json> playerChampionSelections;
    std::string gameName; 
  };
  void to_json(json& j, const LolGameflowGameflowGameData& v) {
    j["teamOne"] = v.teamOne; 
    j["spectatorsAllowed"] = v.spectatorsAllowed; 
    j["gameId"] = v.gameId; 
    j["isCustomGame"] = v.isCustomGame; 
    j["password"] = v.password; 
    j["teamTwo"] = v.teamTwo; 
    j["queue"] = v.queue; 
    j["playerChampionSelections"] = v.playerChampionSelections; 
    j["gameName"] = v.gameName; 
  }
  void from_json(const json& j, LolGameflowGameflowGameData& v) {
    v.teamOne = j.at("teamOne").get<std::vector<json>>(); 
    v.spectatorsAllowed = j.at("spectatorsAllowed").get<bool>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.isCustomGame = j.at("isCustomGame").get<bool>(); 
    v.password = j.at("password").get<std::string>(); 
    v.teamTwo = j.at("teamTwo").get<std::vector<json>>(); 
    v.queue = j.at("queue").get<LolGameflowQueue>(); 
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<json>>(); 
    v.gameName = j.at("gameName").get<std::string>(); 
  }
}