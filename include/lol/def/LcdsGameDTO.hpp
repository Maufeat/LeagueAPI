#pragma once
#include "../base_def.hpp" 
#include "LcdsPlayerParticipant.hpp"
namespace lol {
  struct LcdsGameDTO { 
    int64_t id;
    std::string name;
    int32_t mapId;
    int32_t gameTypeConfigId;
    std::string gameType;
    std::string gameMode;
    int32_t maxNumPlayers;
    std::string spectatorsAllowed;
    LcdsPlayerParticipant ownerSummary;
    std::vector<LcdsPlayerParticipant> teamOne;
    std::vector<LcdsPlayerParticipant> teamTwo;
    std::vector<LcdsPlayerParticipant> observers;
    std::vector<std::string> practiceGameRewardsDisabledReasons;
    std::vector<std::string> gameMutators;
    std::string roomName;
    std::string roomPassword;
    std::string passbackUrl;
    std::string passbackDataPacket;
    int64_t optimisticLock;
    std::string gameState; 
  };
  inline void to_json(json& j, const LcdsGameDTO& v) {
    j["id"] = v.id; 
    j["name"] = v.name; 
    j["mapId"] = v.mapId; 
    j["gameTypeConfigId"] = v.gameTypeConfigId; 
    j["gameType"] = v.gameType; 
    j["gameMode"] = v.gameMode; 
    j["maxNumPlayers"] = v.maxNumPlayers; 
    j["spectatorsAllowed"] = v.spectatorsAllowed; 
    j["ownerSummary"] = v.ownerSummary; 
    j["teamOne"] = v.teamOne; 
    j["teamTwo"] = v.teamTwo; 
    j["observers"] = v.observers; 
    j["practiceGameRewardsDisabledReasons"] = v.practiceGameRewardsDisabledReasons; 
    j["gameMutators"] = v.gameMutators; 
    j["roomName"] = v.roomName; 
    j["roomPassword"] = v.roomPassword; 
    j["passbackUrl"] = v.passbackUrl; 
    j["passbackDataPacket"] = v.passbackDataPacket; 
    j["optimisticLock"] = v.optimisticLock; 
    j["gameState"] = v.gameState; 
  }
  inline void from_json(const json& j, LcdsGameDTO& v) {
    v.id = j.at("id").get<int64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>(); 
    v.gameType = j.at("gameType").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>(); 
    v.spectatorsAllowed = j.at("spectatorsAllowed").get<std::string>(); 
    v.ownerSummary = j.at("ownerSummary").get<LcdsPlayerParticipant>(); 
    v.teamOne = j.at("teamOne").get<std::vector<LcdsPlayerParticipant>>(); 
    v.teamTwo = j.at("teamTwo").get<std::vector<LcdsPlayerParticipant>>(); 
    v.observers = j.at("observers").get<std::vector<LcdsPlayerParticipant>>(); 
    v.practiceGameRewardsDisabledReasons = j.at("practiceGameRewardsDisabledReasons").get<std::vector<std::string>>(); 
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>(); 
    v.roomName = j.at("roomName").get<std::string>(); 
    v.roomPassword = j.at("roomPassword").get<std::string>(); 
    v.passbackUrl = j.at("passbackUrl").get<std::string>(); 
    v.passbackDataPacket = j.at("passbackDataPacket").get<std::string>(); 
    v.optimisticLock = j.at("optimisticLock").get<int64_t>(); 
    v.gameState = j.at("gameState").get<std::string>(); 
  }
}