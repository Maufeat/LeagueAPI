#pragma once
#include "../base_def.hpp" 
#include "ChampSelectLcdsPlayerChampionSelectionDTO.hpp"
#include "BannedChampion.hpp"
namespace lol {
  struct ChampSelectLcdsGameDTO { 
    std::vector<json> teamTwo;
    std::string statusOfParticipants;
    std::string roomPassword;
    std::string name;
    int64_t optimisticLock;
    std::string gameState;
    std::string roomName;
    std::string queueTypeName;
    int64_t spectatorDelay;
    std::vector<BannedChampion> bannedChampions;
    std::vector<ChampSelectLcdsPlayerChampionSelectionDTO> playerChampionSelections;
    uint64_t id;
    std::vector<std::string> gameMutators;
    int32_t pickTurn;
    std::vector<json> teamOne; 
  };
  inline void to_json(json& j, const ChampSelectLcdsGameDTO& v) {
    j["teamTwo"] = v.teamTwo; 
    j["statusOfParticipants"] = v.statusOfParticipants; 
    j["roomPassword"] = v.roomPassword; 
    j["name"] = v.name; 
    j["optimisticLock"] = v.optimisticLock; 
    j["gameState"] = v.gameState; 
    j["roomName"] = v.roomName; 
    j["queueTypeName"] = v.queueTypeName; 
    j["spectatorDelay"] = v.spectatorDelay; 
    j["bannedChampions"] = v.bannedChampions; 
    j["playerChampionSelections"] = v.playerChampionSelections; 
    j["id"] = v.id; 
    j["gameMutators"] = v.gameMutators; 
    j["pickTurn"] = v.pickTurn; 
    j["teamOne"] = v.teamOne; 
  }
  inline void from_json(const json& j, ChampSelectLcdsGameDTO& v) {
    v.teamTwo = j.at("teamTwo").get<std::vector<json>>(); 
    v.statusOfParticipants = j.at("statusOfParticipants").get<std::string>(); 
    v.roomPassword = j.at("roomPassword").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.optimisticLock = j.at("optimisticLock").get<int64_t>(); 
    v.gameState = j.at("gameState").get<std::string>(); 
    v.roomName = j.at("roomName").get<std::string>(); 
    v.queueTypeName = j.at("queueTypeName").get<std::string>(); 
    v.spectatorDelay = j.at("spectatorDelay").get<int64_t>(); 
    v.bannedChampions = j.at("bannedChampions").get<std::vector<BannedChampion>>(); 
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<ChampSelectLcdsPlayerChampionSelectionDTO>>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>(); 
    v.pickTurn = j.at("pickTurn").get<int32_t>(); 
    v.teamOne = j.at("teamOne").get<std::vector<json>>(); 
  }
}