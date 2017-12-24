#pragma once
#include "../base_def.hpp" 
#include "LcdsPlayerParticipant.hpp"
namespace lol {
  struct LcdsGameDTO { 
    std::vector<LcdsPlayerParticipant> teamTwo;
    int32_t maxNumPlayers;
    std::vector<std::string> practiceGameRewardsDisabledReasons;
    std::string roomPassword;
    std::string name;
    std::string passbackDataPacket;
    std::string gameState;
    std::string roomName;
    std::string spectatorsAllowed;
    int64_t optimisticLock;
    int32_t mapId;
    LcdsPlayerParticipant ownerSummary;
    std::string gameMode;
    std::string gameType;
    std::string passbackUrl;
    int64_t id;
    std::vector<std::string> gameMutators;
    std::vector<LcdsPlayerParticipant> teamOne;
    int32_t gameTypeConfigId;
    std::vector<LcdsPlayerParticipant> observers; 
  };
  inline void to_json(json& j, const LcdsGameDTO& v) {
    j["teamTwo"] = v.teamTwo; 
    j["maxNumPlayers"] = v.maxNumPlayers; 
    j["practiceGameRewardsDisabledReasons"] = v.practiceGameRewardsDisabledReasons; 
    j["roomPassword"] = v.roomPassword; 
    j["name"] = v.name; 
    j["passbackDataPacket"] = v.passbackDataPacket; 
    j["gameState"] = v.gameState; 
    j["roomName"] = v.roomName; 
    j["spectatorsAllowed"] = v.spectatorsAllowed; 
    j["optimisticLock"] = v.optimisticLock; 
    j["mapId"] = v.mapId; 
    j["ownerSummary"] = v.ownerSummary; 
    j["gameMode"] = v.gameMode; 
    j["gameType"] = v.gameType; 
    j["passbackUrl"] = v.passbackUrl; 
    j["id"] = v.id; 
    j["gameMutators"] = v.gameMutators; 
    j["teamOne"] = v.teamOne; 
    j["gameTypeConfigId"] = v.gameTypeConfigId; 
    j["observers"] = v.observers; 
  }
  inline void from_json(const json& j, LcdsGameDTO& v) {
    v.teamTwo = j.at("teamTwo").get<std::vector<LcdsPlayerParticipant>>(); 
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>(); 
    v.practiceGameRewardsDisabledReasons = j.at("practiceGameRewardsDisabledReasons").get<std::vector<std::string>>(); 
    v.roomPassword = j.at("roomPassword").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.passbackDataPacket = j.at("passbackDataPacket").get<std::string>(); 
    v.gameState = j.at("gameState").get<std::string>(); 
    v.roomName = j.at("roomName").get<std::string>(); 
    v.spectatorsAllowed = j.at("spectatorsAllowed").get<std::string>(); 
    v.optimisticLock = j.at("optimisticLock").get<int64_t>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.ownerSummary = j.at("ownerSummary").get<LcdsPlayerParticipant>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.gameType = j.at("gameType").get<std::string>(); 
    v.passbackUrl = j.at("passbackUrl").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>(); 
    v.teamOne = j.at("teamOne").get<std::vector<LcdsPlayerParticipant>>(); 
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>(); 
    v.observers = j.at("observers").get<std::vector<LcdsPlayerParticipant>>(); 
  }
}