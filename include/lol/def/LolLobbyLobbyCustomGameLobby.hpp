#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyCustomGameConfiguration.hpp"
#include "LolLobbyLobbyMember.hpp"
namespace lol {
  struct LolLobbyLobbyCustomGameLobby { 
    std::string lobbyPassword;
    std::vector<LolLobbyLobbyMember> teamTwo;
    uint64_t gameId;
    std::string lobbyName;
    std::vector<LolLobbyLobbyMember> spectators;
    std::vector<std::string> practiceGameRewardsDisabledReasons;
    std::vector<LolLobbyLobbyMember> teamOne;
    LolLobbyLobbyCustomGameConfiguration configuration; 
  };
  inline void to_json(json& j, const LolLobbyLobbyCustomGameLobby& v) {
    j["lobbyPassword"] = v.lobbyPassword; 
    j["teamTwo"] = v.teamTwo; 
    j["gameId"] = v.gameId; 
    j["lobbyName"] = v.lobbyName; 
    j["spectators"] = v.spectators; 
    j["practiceGameRewardsDisabledReasons"] = v.practiceGameRewardsDisabledReasons; 
    j["teamOne"] = v.teamOne; 
    j["configuration"] = v.configuration; 
  }
  inline void from_json(const json& j, LolLobbyLobbyCustomGameLobby& v) {
    v.lobbyPassword = j.at("lobbyPassword").get<std::string>(); 
    v.teamTwo = j.at("teamTwo").get<std::vector<LolLobbyLobbyMember>>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.lobbyName = j.at("lobbyName").get<std::string>(); 
    v.spectators = j.at("spectators").get<std::vector<LolLobbyLobbyMember>>(); 
    v.practiceGameRewardsDisabledReasons = j.at("practiceGameRewardsDisabledReasons").get<std::vector<std::string>>(); 
    v.teamOne = j.at("teamOne").get<std::vector<LolLobbyLobbyMember>>(); 
    v.configuration = j.at("configuration").get<LolLobbyLobbyCustomGameConfiguration>(); 
  }
}