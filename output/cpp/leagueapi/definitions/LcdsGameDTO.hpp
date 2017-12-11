#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LcdsPlayerParticipant.hpp>

namespace leagueapi {
  struct LcdsGameDTO { /**/ 
    std::string gameType;/**/
    std::vector<std::string> gameMutators;/**/
    int64_t id;/**/
    LcdsPlayerParticipant ownerSummary;/**/
    std::vector<LcdsPlayerParticipant> teamOne;/**/
    std::vector<LcdsPlayerParticipant> observers;/**/
    std::string name;/**/
    std::string spectatorsAllowed;/**/
    std::vector<LcdsPlayerParticipant> teamTwo;/**/
    std::string passbackDataPacket;/**/
    int32_t gameTypeConfigId;/**/
    std::string roomPassword;/**/
    int32_t maxNumPlayers;/**/
    std::string roomName;/**/
    std::string passbackUrl;/**/
    std::vector<std::string> practiceGameRewardsDisabledReasons;/**/
    int64_t optimisticLock;/**/
    int32_t mapId;/**/
    std::string gameState;/**/
    std::string gameMode;/**/
  };
  static void to_json(json& j, const LcdsGameDTO& v) { 
    j["gameType"] = v.gameType;
    j["gameMutators"] = v.gameMutators;
    j["id"] = v.id;
    j["ownerSummary"] = v.ownerSummary;
    j["teamOne"] = v.teamOne;
    j["observers"] = v.observers;
    j["name"] = v.name;
    j["spectatorsAllowed"] = v.spectatorsAllowed;
    j["teamTwo"] = v.teamTwo;
    j["passbackDataPacket"] = v.passbackDataPacket;
    j["gameTypeConfigId"] = v.gameTypeConfigId;
    j["roomPassword"] = v.roomPassword;
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["roomName"] = v.roomName;
    j["passbackUrl"] = v.passbackUrl;
    j["practiceGameRewardsDisabledReasons"] = v.practiceGameRewardsDisabledReasons;
    j["optimisticLock"] = v.optimisticLock;
    j["mapId"] = v.mapId;
    j["gameState"] = v.gameState;
    j["gameMode"] = v.gameMode;
  }
  static void from_json(const json& j, LcdsGameDTO& v) { 
    v.gameType = j.at("gameType").get<std::string>(); 
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.ownerSummary = j.at("ownerSummary").get<LcdsPlayerParticipant>(); 
    v.teamOne = j.at("teamOne").get<std::vector<LcdsPlayerParticipant>>(); 
    v.observers = j.at("observers").get<std::vector<LcdsPlayerParticipant>>(); 
    v.name = j.at("name").get<std::string>(); 
    v.spectatorsAllowed = j.at("spectatorsAllowed").get<std::string>(); 
    v.teamTwo = j.at("teamTwo").get<std::vector<LcdsPlayerParticipant>>(); 
    v.passbackDataPacket = j.at("passbackDataPacket").get<std::string>(); 
    v.gameTypeConfigId = j.at("gameTypeConfigId").get<int32_t>(); 
    v.roomPassword = j.at("roomPassword").get<std::string>(); 
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>(); 
    v.roomName = j.at("roomName").get<std::string>(); 
    v.passbackUrl = j.at("passbackUrl").get<std::string>(); 
    v.practiceGameRewardsDisabledReasons = j.at("practiceGameRewardsDisabledReasons").get<std::vector<std::string>>(); 
    v.optimisticLock = j.at("optimisticLock").get<int64_t>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.gameState = j.at("gameState").get<std::string>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
  }
} 