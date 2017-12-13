#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LcdsGameMap.hpp>
#include <lol/def/LcdsPlayerParticipant.hpp>
namespace lol {
  struct LcdsPracticeGameSearchResult { 
    LcdsGameMap gameMap;
    uint64_t id;
    int32_t maxNumPlayers;
    int32_t team1Count;
    std::string name;
    std::string pickType;
    int32_t gameMapId;
    bool privateGame;
    int32_t team2Count;
    std::string allowSpectators;
    LcdsPlayerParticipant owner;
    int32_t spectatorCount;
    std::string gameMode; 
  };
  void to_json(json& j, const LcdsPracticeGameSearchResult& v) {
  j["gameMap"] = v.gameMap; 
  j["id"] = v.id; 
  j["maxNumPlayers"] = v.maxNumPlayers; 
  j["team1Count"] = v.team1Count; 
  j["name"] = v.name; 
  j["pickType"] = v.pickType; 
  j["gameMapId"] = v.gameMapId; 
  j["privateGame"] = v.privateGame; 
  j["team2Count"] = v.team2Count; 
  j["allowSpectators"] = v.allowSpectators; 
  j["owner"] = v.owner; 
  j["spectatorCount"] = v.spectatorCount; 
  j["gameMode"] = v.gameMode; 
  }
  void from_json(const json& j, LcdsPracticeGameSearchResult& v) {
  v.gameMap = j.at("gameMap").get<LcdsGameMap>(); 
  v.id = j.at("id").get<uint64_t>(); 
  v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>(); 
  v.team1Count = j.at("team1Count").get<int32_t>(); 
  v.name = j.at("name").get<std::string>(); 
  v.pickType = j.at("pickType").get<std::string>(); 
  v.gameMapId = j.at("gameMapId").get<int32_t>(); 
  v.privateGame = j.at("privateGame").get<bool>(); 
  v.team2Count = j.at("team2Count").get<int32_t>(); 
  v.allowSpectators = j.at("allowSpectators").get<std::string>(); 
  v.owner = j.at("owner").get<LcdsPlayerParticipant>(); 
  v.spectatorCount = j.at("spectatorCount").get<int32_t>(); 
  v.gameMode = j.at("gameMode").get<std::string>(); 
  }
}