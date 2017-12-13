#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LcdsPlayerParticipant.hpp>
#include <lol/def/LcdsGameMap.hpp>
namespace lol {
  struct LcdsPracticeGameSearchResult { 
    std::string allowSpectators;
    std::string pickType;
    int32_t team1Count;
    std::string gameMode;
    std::string name;
    int32_t spectatorCount;
    uint64_t id;
    int32_t maxNumPlayers;
    LcdsGameMap gameMap;
    int32_t team2Count;
    bool privateGame;
    LcdsPlayerParticipant owner;
    int32_t gameMapId; 
  };
  void to_json(json& j, const LcdsPracticeGameSearchResult& v) {
    j["allowSpectators"] = v.allowSpectators; 
    j["pickType"] = v.pickType; 
    j["team1Count"] = v.team1Count; 
    j["gameMode"] = v.gameMode; 
    j["name"] = v.name; 
    j["spectatorCount"] = v.spectatorCount; 
    j["id"] = v.id; 
    j["maxNumPlayers"] = v.maxNumPlayers; 
    j["gameMap"] = v.gameMap; 
    j["team2Count"] = v.team2Count; 
    j["privateGame"] = v.privateGame; 
    j["owner"] = v.owner; 
    j["gameMapId"] = v.gameMapId; 
  }
  void from_json(const json& j, LcdsPracticeGameSearchResult& v) {
    v.allowSpectators = j.at("allowSpectators").get<std::string>(); 
    v.pickType = j.at("pickType").get<std::string>(); 
    v.team1Count = j.at("team1Count").get<int32_t>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.spectatorCount = j.at("spectatorCount").get<int32_t>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>(); 
    v.gameMap = j.at("gameMap").get<LcdsGameMap>(); 
    v.team2Count = j.at("team2Count").get<int32_t>(); 
    v.privateGame = j.at("privateGame").get<bool>(); 
    v.owner = j.at("owner").get<LcdsPlayerParticipant>(); 
    v.gameMapId = j.at("gameMapId").get<int32_t>(); 
  }
}