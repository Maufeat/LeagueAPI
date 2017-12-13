#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyLobbyCustomGameConfiguration.hpp>
#include <lol/def/LolLobbyLobbyMember.hpp>
namespace lol {
  struct LolLobbyLobbyCustomGameLobby { 
    std::string lobbyName;
    LolLobbyLobbyCustomGameConfiguration configuration;
    std::vector<std::string> practiceGameRewardsDisabledReasons;
    uint64_t gameId;
    std::vector<LolLobbyLobbyMember> teamOne;
    std::vector<LolLobbyLobbyMember> teamTwo;
    std::string lobbyPassword;
    std::vector<LolLobbyLobbyMember> spectators; 
  };
  void to_json(json& j, const LolLobbyLobbyCustomGameLobby& v) {
    j["lobbyName"] = v.lobbyName; 
    j["configuration"] = v.configuration; 
    j["practiceGameRewardsDisabledReasons"] = v.practiceGameRewardsDisabledReasons; 
    j["gameId"] = v.gameId; 
    j["teamOne"] = v.teamOne; 
    j["teamTwo"] = v.teamTwo; 
    j["lobbyPassword"] = v.lobbyPassword; 
    j["spectators"] = v.spectators; 
  }
  void from_json(const json& j, LolLobbyLobbyCustomGameLobby& v) {
    v.lobbyName = j.at("lobbyName").get<std::string>(); 
    v.configuration = j.at("configuration").get<LolLobbyLobbyCustomGameConfiguration>(); 
    v.practiceGameRewardsDisabledReasons = j.at("practiceGameRewardsDisabledReasons").get<std::vector<std::string>>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.teamOne = j.at("teamOne").get<std::vector<LolLobbyLobbyMember>>(); 
    v.teamTwo = j.at("teamTwo").get<std::vector<LolLobbyLobbyMember>>(); 
    v.lobbyPassword = j.at("lobbyPassword").get<std::string>(); 
    v.spectators = j.at("spectators").get<std::vector<LolLobbyLobbyMember>>(); 
  }
}