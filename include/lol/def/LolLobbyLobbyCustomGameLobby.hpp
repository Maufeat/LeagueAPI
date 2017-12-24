#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyCustomGameConfiguration.hpp"
#include "LolLobbyLobbyMember.hpp"
namespace lol {
  struct LolLobbyLobbyCustomGameLobby { 
    std::vector<LolLobbyLobbyMember> teamTwo;
    uint64_t gameId;
    LolLobbyLobbyCustomGameConfiguration configuration;
    std::vector<std::string> practiceGameRewardsDisabledReasons;
    std::string lobbyName;
    std::string lobbyPassword;
    std::vector<LolLobbyLobbyMember> spectators;
    std::vector<LolLobbyLobbyMember> teamOne; 
  };
  inline void to_json(json& j, const LolLobbyLobbyCustomGameLobby& v) {
    j["teamTwo"] = v.teamTwo; 
    j["gameId"] = v.gameId; 
    j["configuration"] = v.configuration; 
    j["practiceGameRewardsDisabledReasons"] = v.practiceGameRewardsDisabledReasons; 
    j["lobbyName"] = v.lobbyName; 
    j["lobbyPassword"] = v.lobbyPassword; 
    j["spectators"] = v.spectators; 
    j["teamOne"] = v.teamOne; 
  }
  inline void from_json(const json& j, LolLobbyLobbyCustomGameLobby& v) {
    v.teamTwo = j.at("teamTwo").get<std::vector<LolLobbyLobbyMember>>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.configuration = j.at("configuration").get<LolLobbyLobbyCustomGameConfiguration>(); 
    v.practiceGameRewardsDisabledReasons = j.at("practiceGameRewardsDisabledReasons").get<std::vector<std::string>>(); 
    v.lobbyName = j.at("lobbyName").get<std::string>(); 
    v.lobbyPassword = j.at("lobbyPassword").get<std::string>(); 
    v.spectators = j.at("spectators").get<std::vector<LolLobbyLobbyMember>>(); 
    v.teamOne = j.at("teamOne").get<std::vector<LolLobbyLobbyMember>>(); 
  }
}