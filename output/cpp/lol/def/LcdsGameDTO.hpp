#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LcdsPlayerParticipant.hpp>
namespace lol {
  struct LcdsGameDTO { 
    std::string roomName;
    int32_t gameTypeConfigId;
    LcdsPlayerParticipant ownerSummary;
    std::vector<std::string> practiceGameRewardsDisabledReasons;
    int32_t mapId;
    std::vector<LcdsPlayerParticipant> teamOne;
    std::string gameMode;
    std::string name;
    std::string passbackUrl;
    std::string roomPassword;
    int64_t id;
    int32_t maxNumPlayers;
    std::string gameState;
    std::vector<std::string> gameMutators;
    int64_t optimisticLock;
    std::string spectatorsAllowed;
    std::vector<LcdsPlayerParticipant> teamTwo;
    std::string passbackDataPacket;
    std::vector<LcdsPlayerParticipant> observers;
    std::string gameType; 
  };
  void to_json(json& j, const LcdsGameDTO& v) {
    j["roomName"] = v.roomName; 
    j["gameTypeConfigId"] = v.gameTypeConfigId; 
    j["ownerSummary"] = v.ownerSummary; 
    j["practiceGameRewardsDisabledReasons"] = v.practiceGameRewardsDisabledReasons; 
    j["mapId"] = v.mapId; 
    j["teamOne"] = v.teamOne; 
    j["gameMode"] = v.gameMode; 
    j["name"] = v.name; 
    j["passbackUrl"] = v.passbackUrl; 
    j["roomPassword"] = v.roomPassword; 
    j["id"] = v.id; 
    j["maxNumPlayers"] = v.maxNumPlayers; 
    j["gameState"] = v.gameState; 
    j["gameMutators"] = v.gameMutators; 
    j["optimisticLock"] = v.optimisticLock; 
    j["spectatorsAllowed"] = v.spectatorsAllowed; 
    j["teamTwo"] = v.teamTwo; 
    j["passbackDataPacket"] = v.passbackDataPacket; 
    j["observers"] = v.observers; 
    j["gameType"] = v.gameType; 
  }
  void from_json(const json& j, LcdsGameDTO& v) {
    v.roomName = j.at("roomName").get<std::string>(); 
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>(); 
    v.ownerSummary = j.at("ownerSummary").get<LcdsPlayerParticipant>(); 
    v.practiceGameRewardsDisabledReasons = j.at("practiceGameRewardsDisabledReasons").get<std::vector<std::string>>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.teamOne = j.at("teamOne").get<std::vector<LcdsPlayerParticipant>>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.passbackUrl = j.at("passbackUrl").get<std::string>(); 
    v.roomPassword = j.at("roomPassword").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>(); 
    v.gameState = j.at("gameState").get<std::string>(); 
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>(); 
    v.optimisticLock = j.at("optimisticLock").get<int64_t>(); 
    v.spectatorsAllowed = j.at("spectatorsAllowed").get<std::string>(); 
    v.teamTwo = j.at("teamTwo").get<std::vector<LcdsPlayerParticipant>>(); 
    v.passbackDataPacket = j.at("passbackDataPacket").get<std::string>(); 
    v.observers = j.at("observers").get<std::vector<LcdsPlayerParticipant>>(); 
    v.gameType = j.at("gameType").get<std::string>(); 
  }
}