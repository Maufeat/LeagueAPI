#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolGameflowQueue.hpp>
namespace lol {
  struct LolGameflowGameflowGameData { 
    std::vector<json> playerChampionSelections;
    std::vector<json> teamOne;
    bool isCustomGame;
    std::string gameName;
    LolGameflowQueue queue;
    uint64_t gameId;
    std::vector<json> teamTwo;
    bool spectatorsAllowed;
    std::string password; 
  };
  void to_json(json& j, const LolGameflowGameflowGameData& v) {
  j["playerChampionSelections"] = v.playerChampionSelections; 
  j["teamOne"] = v.teamOne; 
  j["isCustomGame"] = v.isCustomGame; 
  j["gameName"] = v.gameName; 
  j["queue"] = v.queue; 
  j["gameId"] = v.gameId; 
  j["teamTwo"] = v.teamTwo; 
  j["spectatorsAllowed"] = v.spectatorsAllowed; 
  j["password"] = v.password; 
  }
  void from_json(const json& j, LolGameflowGameflowGameData& v) {
  v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<json>>(); 
  v.teamOne = j.at("teamOne").get<std::vector<json>>(); 
  v.isCustomGame = j.at("isCustomGame").get<bool>(); 
  v.gameName = j.at("gameName").get<std::string>(); 
  v.queue = j.at("queue").get<LolGameflowQueue>(); 
  v.gameId = j.at("gameId").get<uint64_t>(); 
  v.teamTwo = j.at("teamTwo").get<std::vector<json>>(); 
  v.spectatorsAllowed = j.at("spectatorsAllowed").get<bool>(); 
  v.password = j.at("password").get<std::string>(); 
  }
}