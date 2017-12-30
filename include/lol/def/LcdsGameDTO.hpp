#pragma once
#include "../base_def.hpp" 
#include "LcdsPlayerParticipant.hpp"
namespace lol {
  struct LcdsGameDTO { 
    std::string name;
    int32_t maxNumPlayers;
    int64_t id;
    std::vector<LcdsPlayerParticipant> teamTwo;
    std::vector<std::string> gameMutators;
    std::vector<std::string> practiceGameRewardsDisabledReasons;
    LcdsPlayerParticipant ownerSummary;
    std::string roomPassword;
    std::vector<LcdsPlayerParticipant> teamOne;
    int32_t gameTypeConfigId;
    int32_t mapId;
    std::string gameType;
    std::string gameMode;
    std::vector<LcdsPlayerParticipant> observers;
    int64_t optimisticLock;
    std::string spectatorsAllowed;
    std::string passbackDataPacket;
    std::string passbackUrl;
    std::string gameState;
    std::string roomName; 
  };
  inline void to_json(json& j, const LcdsGameDTO& v) {
    j["name"] = v.name; 
    j["maxNumPlayers"] = v.maxNumPlayers; 
    j["id"] = v.id; 
    j["teamTwo"] = v.teamTwo; 
    j["gameMutators"] = v.gameMutators; 
    j["practiceGameRewardsDisabledReasons"] = v.practiceGameRewardsDisabledReasons; 
    j["ownerSummary"] = v.ownerSummary; 
    j["roomPassword"] = v.roomPassword; 
    j["teamOne"] = v.teamOne; 
    j["gameTypeConfigId"] = v.gameTypeConfigId; 
    j["mapId"] = v.mapId; 
    j["gameType"] = v.gameType; 
    j["gameMode"] = v.gameMode; 
    j["observers"] = v.observers; 
    j["optimisticLock"] = v.optimisticLock; 
    j["spectatorsAllowed"] = v.spectatorsAllowed; 
    j["passbackDataPacket"] = v.passbackDataPacket; 
    j["passbackUrl"] = v.passbackUrl; 
    j["gameState"] = v.gameState; 
    j["roomName"] = v.roomName; 
  }
  inline void from_json(const json& j, LcdsGameDTO& v) {
    v.name = j.at("name").get<std::string>(); 
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.teamTwo = j.at("teamTwo").get<std::vector<LcdsPlayerParticipant>>(); 
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>(); 
    v.practiceGameRewardsDisabledReasons = j.at("practiceGameRewardsDisabledReasons").get<std::vector<std::string>>(); 
    v.ownerSummary = j.at("ownerSummary").get<LcdsPlayerParticipant>(); 
    v.roomPassword = j.at("roomPassword").get<std::string>(); 
    v.teamOne = j.at("teamOne").get<std::vector<LcdsPlayerParticipant>>(); 
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.gameType = j.at("gameType").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.observers = j.at("observers").get<std::vector<LcdsPlayerParticipant>>(); 
    v.optimisticLock = j.at("optimisticLock").get<int64_t>(); 
    v.spectatorsAllowed = j.at("spectatorsAllowed").get<std::string>(); 
    v.passbackDataPacket = j.at("passbackDataPacket").get<std::string>(); 
    v.passbackUrl = j.at("passbackUrl").get<std::string>(); 
    v.gameState = j.at("gameState").get<std::string>(); 
    v.roomName = j.at("roomName").get<std::string>(); 
  }
}