#pragma once
#include "../base_def.hpp" 
#include "LcdsPlayerParticipant.hpp"
#include "LcdsGameMap.hpp"
namespace lol {
  struct LcdsPracticeGameSearchResult { 
    int32_t maxNumPlayers;
    std::string allowSpectators;
    int32_t team1Count;
    int32_t gameMapId;
    int32_t team2Count;
    std::string name;
    std::string gameMode;
    std::string pickType;
    bool privateGame;
    uint64_t id;
    LcdsGameMap gameMap;
    int32_t spectatorCount;
    LcdsPlayerParticipant owner; 
  };
  inline void to_json(json& j, const LcdsPracticeGameSearchResult& v) {
    j["maxNumPlayers"] = v.maxNumPlayers; 
    j["allowSpectators"] = v.allowSpectators; 
    j["team1Count"] = v.team1Count; 
    j["gameMapId"] = v.gameMapId; 
    j["team2Count"] = v.team2Count; 
    j["name"] = v.name; 
    j["gameMode"] = v.gameMode; 
    j["pickType"] = v.pickType; 
    j["privateGame"] = v.privateGame; 
    j["id"] = v.id; 
    j["gameMap"] = v.gameMap; 
    j["spectatorCount"] = v.spectatorCount; 
    j["owner"] = v.owner; 
  }
  inline void from_json(const json& j, LcdsPracticeGameSearchResult& v) {
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>(); 
    v.allowSpectators = j.at("allowSpectators").get<std::string>(); 
    v.team1Count = j.at("team1Count").get<int32_t>(); 
    v.gameMapId = j.at("gameMapId").get<int32_t>(); 
    v.team2Count = j.at("team2Count").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.pickType = j.at("pickType").get<std::string>(); 
    v.privateGame = j.at("privateGame").get<bool>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.gameMap = j.at("gameMap").get<LcdsGameMap>(); 
    v.spectatorCount = j.at("spectatorCount").get<int32_t>(); 
    v.owner = j.at("owner").get<LcdsPlayerParticipant>(); 
  }
}