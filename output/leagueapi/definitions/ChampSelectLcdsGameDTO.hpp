#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/BannedChampion.hpp>"
#include "<leagueapi/definitions/ChampSelectLcdsPlayerChampionSelectionDTO.hpp>"

namespace leagueapi {
  struct ChampSelectLcdsGameDTO { /**/ 
    std::vector<ChampSelectLcdsPlayerChampionSelectionDTO> playerChampionSelections;/**/
    std::string gameState;/**/
    uint64_t id;/**/
    std::vector<BannedChampion> bannedChampions;/**/
    std::string name;/**/
    std::vector<json> teamOne;/**/
    std::vector<std::string> gameMutators;/**/
    std::vector<json> teamTwo;/**/
    std::string queueTypeName;/**/
    std::string roomPassword;/**/
    int64_t spectatorDelay;/**/
    std::string roomName;/**/
    int32_t pickTurn;/**/
    int64_t optimisticLock;/**/
    std::string statusOfParticipants;/**/
  };
  static void to_json(json& j, const ChampSelectLcdsGameDTO& v) { 
    j["playerChampionSelections"] = v.playerChampionSelections;
    j["gameState"] = v.gameState;
    j["id"] = v.id;
    j["bannedChampions"] = v.bannedChampions;
    j["name"] = v.name;
    j["teamOne"] = v.teamOne;
    j["gameMutators"] = v.gameMutators;
    j["teamTwo"] = v.teamTwo;
    j["queueTypeName"] = v.queueTypeName;
    j["roomPassword"] = v.roomPassword;
    j["spectatorDelay"] = v.spectatorDelay;
    j["roomName"] = v.roomName;
    j["pickTurn"] = v.pickTurn;
    j["optimisticLock"] = v.optimisticLock;
    j["statusOfParticipants"] = v.statusOfParticipants;
  }
  static void from_json(const json& j, ChampSelectLcdsGameDTO& v) { 
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<ChampSelectLcdsPlayerChampionSelectionDTO>>(); 
    v.gameState = j.at("gameState").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.bannedChampions = j.at("bannedChampions").get<std::vector<BannedChampion>>(); 
    v.name = j.at("name").get<std::string>(); 
    v.teamOne = j.at("teamOne").get<std::vector<json>>(); 
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>(); 
    v.teamTwo = j.at("teamTwo").get<std::vector<json>>(); 
    v.queueTypeName = j.at("queueTypeName").get<std::string>(); 
    v.roomPassword = j.at("roomPassword").get<std::string>(); 
    v.spectatorDelay = j.at("spectatorDelay").get<int64_t>(); 
    v.roomName = j.at("roomName").get<std::string>(); 
    v.pickTurn = j.at("pickTurn").get<int32_t>(); 
    v.optimisticLock = j.at("optimisticLock").get<int64_t>(); 
    v.statusOfParticipants = j.at("statusOfParticipants").get<std::string>(); 
  }
} 