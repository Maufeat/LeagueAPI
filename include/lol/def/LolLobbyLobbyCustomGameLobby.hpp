#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyCustomGameConfiguration.hpp"
#include "LolLobbyLobbyMember.hpp"
namespace lol {
  struct LolLobbyLobbyCustomGameLobby { 
    std::string lobbyName;
    std::string lobbyPassword;
    LolLobbyLobbyCustomGameConfiguration configuration;
    std::vector<LolLobbyLobbyMember> teamOne;
    std::vector<LolLobbyLobbyMember> teamTwo;
    std::vector<LolLobbyLobbyMember> spectators;
    std::vector<std::string> practiceGameRewardsDisabledReasons;
    uint64_t gameId; 
  };
  inline void to_json(json& j, const LolLobbyLobbyCustomGameLobby& v) {
    j["lobbyName"] = v.lobbyName; 
    j["lobbyPassword"] = v.lobbyPassword; 
    j["configuration"] = v.configuration; 
    j["teamOne"] = v.teamOne; 
    j["teamTwo"] = v.teamTwo; 
    j["spectators"] = v.spectators; 
    j["practiceGameRewardsDisabledReasons"] = v.practiceGameRewardsDisabledReasons; 
    j["gameId"] = v.gameId; 
  }
  inline void from_json(const json& j, LolLobbyLobbyCustomGameLobby& v) {
    v.lobbyName = j.at("lobbyName").get<std::string>(); 
    v.lobbyPassword = j.at("lobbyPassword").get<std::string>(); 
    v.configuration = j.at("configuration").get<LolLobbyLobbyCustomGameConfiguration>(); 
    v.teamOne = j.at("teamOne").get<std::vector<LolLobbyLobbyMember>>(); 
    v.teamTwo = j.at("teamTwo").get<std::vector<LolLobbyLobbyMember>>(); 
    v.spectators = j.at("spectators").get<std::vector<LolLobbyLobbyMember>>(); 
    v.practiceGameRewardsDisabledReasons = j.at("practiceGameRewardsDisabledReasons").get<std::vector<std::string>>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
  }
}