#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/ChampSelectLcdsPlayerChampionSelectionDTO.hpp>
#include <lol/def/BannedChampion.hpp>
namespace lol {
  struct ChampSelectLcdsGameDTO { 
    std::string roomName;
    int64_t spectatorDelay;
    int32_t pickTurn;
    std::vector<json> teamOne;
    std::string queueTypeName;
    std::string name;
    std::string roomPassword;
    std::vector<BannedChampion> bannedChampions;
    std::string gameState;
    std::vector<std::string> gameMutators;
    int64_t optimisticLock;
    std::vector<json> teamTwo;
    std::string statusOfParticipants;
    uint64_t id;
    std::vector<ChampSelectLcdsPlayerChampionSelectionDTO> playerChampionSelections; 
  };
  void to_json(json& j, const ChampSelectLcdsGameDTO& v) {
  j["roomName"] = v.roomName; 
  j["spectatorDelay"] = v.spectatorDelay; 
  j["pickTurn"] = v.pickTurn; 
  j["teamOne"] = v.teamOne; 
  j["queueTypeName"] = v.queueTypeName; 
  j["name"] = v.name; 
  j["roomPassword"] = v.roomPassword; 
  j["bannedChampions"] = v.bannedChampions; 
  j["gameState"] = v.gameState; 
  j["gameMutators"] = v.gameMutators; 
  j["optimisticLock"] = v.optimisticLock; 
  j["teamTwo"] = v.teamTwo; 
  j["statusOfParticipants"] = v.statusOfParticipants; 
  j["id"] = v.id; 
  j["playerChampionSelections"] = v.playerChampionSelections; 
  }
  void from_json(const json& j, ChampSelectLcdsGameDTO& v) {
  v.roomName = j.at("roomName").get<std::string>(); 
  v.spectatorDelay = j.at("spectatorDelay").get<int64_t>(); 
  v.pickTurn = j.at("pickTurn").get<int32_t>(); 
  v.teamOne = j.at("teamOne").get<std::vector<json>>(); 
  v.queueTypeName = j.at("queueTypeName").get<std::string>(); 
  v.name = j.at("name").get<std::string>(); 
  v.roomPassword = j.at("roomPassword").get<std::string>(); 
  v.bannedChampions = j.at("bannedChampions").get<std::vector<BannedChampion>>(); 
  v.gameState = j.at("gameState").get<std::string>(); 
  v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>(); 
  v.optimisticLock = j.at("optimisticLock").get<int64_t>(); 
  v.teamTwo = j.at("teamTwo").get<std::vector<json>>(); 
  v.statusOfParticipants = j.at("statusOfParticipants").get<std::string>(); 
  v.id = j.at("id").get<uint64_t>(); 
  v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<ChampSelectLcdsPlayerChampionSelectionDTO>>(); 
  }
}