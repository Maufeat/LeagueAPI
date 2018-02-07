#pragma once
#include "../base_def.hpp" 
#include "LcdsGameMap.hpp"
#include "LcdsPlayerParticipant.hpp"
namespace lol {
  struct LcdsPracticeGameSearchResult { 
    uint64_t id;
    std::string name;
    LcdsPlayerParticipant owner;
    int32_t maxNumPlayers;
    bool privateGame;
    int32_t team1Count;
    int32_t team2Count;
    int32_t spectatorCount;
    LcdsGameMap gameMap;
    int32_t gameMapId;
    std::string gameMode;
    std::string pickType;
    std::string allowSpectators; 
  };
  inline void to_json(json& j, const LcdsPracticeGameSearchResult& v) {
    j["id"] = v.id; 
    j["name"] = v.name; 
    j["owner"] = v.owner; 
    j["maxNumPlayers"] = v.maxNumPlayers; 
    j["privateGame"] = v.privateGame; 
    j["team1Count"] = v.team1Count; 
    j["team2Count"] = v.team2Count; 
    j["spectatorCount"] = v.spectatorCount; 
    j["gameMap"] = v.gameMap; 
    j["gameMapId"] = v.gameMapId; 
    j["gameMode"] = v.gameMode; 
    j["pickType"] = v.pickType; 
    j["allowSpectators"] = v.allowSpectators; 
  }
  inline void from_json(const json& j, LcdsPracticeGameSearchResult& v) {
    v.id = j.at("id").get<uint64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.owner = j.at("owner").get<LcdsPlayerParticipant>(); 
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>(); 
    v.privateGame = j.at("privateGame").get<bool>(); 
    v.team1Count = j.at("team1Count").get<int32_t>(); 
    v.team2Count = j.at("team2Count").get<int32_t>(); 
    v.spectatorCount = j.at("spectatorCount").get<int32_t>(); 
    v.gameMap = j.at("gameMap").get<LcdsGameMap>(); 
    v.gameMapId = j.at("gameMapId").get<int32_t>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.pickType = j.at("pickType").get<std::string>(); 
    v.allowSpectators = j.at("allowSpectators").get<std::string>(); 
  }
}