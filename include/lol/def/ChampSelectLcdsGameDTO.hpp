#pragma once
#include "../base_def.hpp" 
#include "BannedChampion.hpp"
#include "ChampSelectLcdsPlayerChampionSelectionDTO.hpp"
namespace lol {
  struct ChampSelectLcdsGameDTO { 
    uint64_t id;
    std::string gameState;
    std::string queueTypeName;
    std::string roomName;
    std::string roomPassword;
    std::string name;
    std::vector<ChampSelectLcdsPlayerChampionSelectionDTO> playerChampionSelections;
    std::vector<BannedChampion> bannedChampions;
    std::vector<json> teamOne;
    std::vector<json> teamTwo;
    std::string statusOfParticipants;
    int64_t optimisticLock;
    int32_t pickTurn;
    int64_t spectatorDelay;
    std::vector<std::string> gameMutators; 
  };
  inline void to_json(json& j, const ChampSelectLcdsGameDTO& v) {
    j["id"] = v.id; 
    j["gameState"] = v.gameState; 
    j["queueTypeName"] = v.queueTypeName; 
    j["roomName"] = v.roomName; 
    j["roomPassword"] = v.roomPassword; 
    j["name"] = v.name; 
    j["playerChampionSelections"] = v.playerChampionSelections; 
    j["bannedChampions"] = v.bannedChampions; 
    j["teamOne"] = v.teamOne; 
    j["teamTwo"] = v.teamTwo; 
    j["statusOfParticipants"] = v.statusOfParticipants; 
    j["optimisticLock"] = v.optimisticLock; 
    j["pickTurn"] = v.pickTurn; 
    j["spectatorDelay"] = v.spectatorDelay; 
    j["gameMutators"] = v.gameMutators; 
  }
  inline void from_json(const json& j, ChampSelectLcdsGameDTO& v) {
    v.id = j.at("id").get<uint64_t>(); 
    v.gameState = j.at("gameState").get<std::string>(); 
    v.queueTypeName = j.at("queueTypeName").get<std::string>(); 
    v.roomName = j.at("roomName").get<std::string>(); 
    v.roomPassword = j.at("roomPassword").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<ChampSelectLcdsPlayerChampionSelectionDTO>>(); 
    v.bannedChampions = j.at("bannedChampions").get<std::vector<BannedChampion>>(); 
    v.teamOne = j.at("teamOne").get<std::vector<json>>(); 
    v.teamTwo = j.at("teamTwo").get<std::vector<json>>(); 
    v.statusOfParticipants = j.at("statusOfParticipants").get<std::string>(); 
    v.optimisticLock = j.at("optimisticLock").get<int64_t>(); 
    v.pickTurn = j.at("pickTurn").get<int32_t>(); 
    v.spectatorDelay = j.at("spectatorDelay").get<int64_t>(); 
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>(); 
  }
}