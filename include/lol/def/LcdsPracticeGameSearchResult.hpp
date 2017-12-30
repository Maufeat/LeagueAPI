#pragma once
#include "../base_def.hpp" 
#include "LcdsGameMap.hpp"
#include "LcdsPlayerParticipant.hpp"
namespace lol {
  struct LcdsPracticeGameSearchResult { 
    std::string name;
    int32_t team1Count;
    int32_t maxNumPlayers;
    uint64_t id;
    int32_t team2Count;
    LcdsPlayerParticipant owner;
    int32_t spectatorCount;
    LcdsGameMap gameMap;
    bool privateGame;
    std::string gameMode;
    int32_t gameMapId;
    std::string pickType;
    std::string allowSpectators; 
  };
  inline void to_json(json& j, const LcdsPracticeGameSearchResult& v) {
    j["name"] = v.name; 
    j["team1Count"] = v.team1Count; 
    j["maxNumPlayers"] = v.maxNumPlayers; 
    j["id"] = v.id; 
    j["team2Count"] = v.team2Count; 
    j["owner"] = v.owner; 
    j["spectatorCount"] = v.spectatorCount; 
    j["gameMap"] = v.gameMap; 
    j["privateGame"] = v.privateGame; 
    j["gameMode"] = v.gameMode; 
    j["gameMapId"] = v.gameMapId; 
    j["pickType"] = v.pickType; 
    j["allowSpectators"] = v.allowSpectators; 
  }
  inline void from_json(const json& j, LcdsPracticeGameSearchResult& v) {
    v.name = j.at("name").get<std::string>(); 
    v.team1Count = j.at("team1Count").get<int32_t>(); 
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.team2Count = j.at("team2Count").get<int32_t>(); 
    v.owner = j.at("owner").get<LcdsPlayerParticipant>(); 
    v.spectatorCount = j.at("spectatorCount").get<int32_t>(); 
    v.gameMap = j.at("gameMap").get<LcdsGameMap>(); 
    v.privateGame = j.at("privateGame").get<bool>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.gameMapId = j.at("gameMapId").get<int32_t>(); 
    v.pickType = j.at("pickType").get<std::string>(); 
    v.allowSpectators = j.at("allowSpectators").get<std::string>(); 
  }
}