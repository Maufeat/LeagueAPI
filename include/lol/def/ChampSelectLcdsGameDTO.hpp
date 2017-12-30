#pragma once
#include "../base_def.hpp" 
#include "BannedChampion.hpp"
#include "ChampSelectLcdsPlayerChampionSelectionDTO.hpp"
namespace lol {
  struct ChampSelectLcdsGameDTO { 
    std::string name;
    uint64_t id;
    int64_t optimisticLock;
    std::vector<ChampSelectLcdsPlayerChampionSelectionDTO> playerChampionSelections;
    int64_t spectatorDelay;
    int32_t pickTurn;
    std::string queueTypeName;
    std::vector<json> teamOne;
    std::vector<std::string> gameMutators;
    std::string gameState;
    std::vector<json> teamTwo;
    std::string roomPassword;
    std::string roomName;
    std::string statusOfParticipants;
    std::vector<BannedChampion> bannedChampions; 
  };
  inline void to_json(json& j, const ChampSelectLcdsGameDTO& v) {
    j["name"] = v.name; 
    j["id"] = v.id; 
    j["optimisticLock"] = v.optimisticLock; 
    j["playerChampionSelections"] = v.playerChampionSelections; 
    j["spectatorDelay"] = v.spectatorDelay; 
    j["pickTurn"] = v.pickTurn; 
    j["queueTypeName"] = v.queueTypeName; 
    j["teamOne"] = v.teamOne; 
    j["gameMutators"] = v.gameMutators; 
    j["gameState"] = v.gameState; 
    j["teamTwo"] = v.teamTwo; 
    j["roomPassword"] = v.roomPassword; 
    j["roomName"] = v.roomName; 
    j["statusOfParticipants"] = v.statusOfParticipants; 
    j["bannedChampions"] = v.bannedChampions; 
  }
  inline void from_json(const json& j, ChampSelectLcdsGameDTO& v) {
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.optimisticLock = j.at("optimisticLock").get<int64_t>(); 
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<ChampSelectLcdsPlayerChampionSelectionDTO>>(); 
    v.spectatorDelay = j.at("spectatorDelay").get<int64_t>(); 
    v.pickTurn = j.at("pickTurn").get<int32_t>(); 
    v.queueTypeName = j.at("queueTypeName").get<std::string>(); 
    v.teamOne = j.at("teamOne").get<std::vector<json>>(); 
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>(); 
    v.gameState = j.at("gameState").get<std::string>(); 
    v.teamTwo = j.at("teamTwo").get<std::vector<json>>(); 
    v.roomPassword = j.at("roomPassword").get<std::string>(); 
    v.roomName = j.at("roomName").get<std::string>(); 
    v.statusOfParticipants = j.at("statusOfParticipants").get<std::string>(); 
    v.bannedChampions = j.at("bannedChampions").get<std::vector<BannedChampion>>(); 
  }
}