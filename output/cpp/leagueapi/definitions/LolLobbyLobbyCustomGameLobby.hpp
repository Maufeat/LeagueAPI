#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolLobbyLobbyCustomGameConfiguration.hpp>
#include <leagueapi/definitions/LolLobbyLobbyMember.hpp>

namespace leagueapi {
  struct LolLobbyLobbyCustomGameLobby { /**/ 
    std::vector<LolLobbyLobbyMember> spectators;/**/
    std::vector<LolLobbyLobbyMember> teamOne;/**/
    uint64_t gameId;/**/
    std::string lobbyName;/**/
    std::string lobbyPassword;/**/
    std::vector<std::string> practiceGameRewardsDisabledReasons;/**/
    LolLobbyLobbyCustomGameConfiguration configuration;/**/
    std::vector<LolLobbyLobbyMember> teamTwo;/**/
  };
  static void to_json(json& j, const LolLobbyLobbyCustomGameLobby& v) { 
    j["spectators"] = v.spectators;
    j["teamOne"] = v.teamOne;
    j["gameId"] = v.gameId;
    j["lobbyName"] = v.lobbyName;
    j["lobbyPassword"] = v.lobbyPassword;
    j["practiceGameRewardsDisabledReasons"] = v.practiceGameRewardsDisabledReasons;
    j["configuration"] = v.configuration;
    j["teamTwo"] = v.teamTwo;
  }
  static void from_json(const json& j, LolLobbyLobbyCustomGameLobby& v) { 
    v.spectators = j.at("spectators").get<std::vector<LolLobbyLobbyMember>>(); 
    v.teamOne = j.at("teamOne").get<std::vector<LolLobbyLobbyMember>>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.lobbyName = j.at("lobbyName").get<std::string>(); 
    v.lobbyPassword = j.at("lobbyPassword").get<std::string>(); 
    v.practiceGameRewardsDisabledReasons = j.at("practiceGameRewardsDisabledReasons").get<std::vector<std::string>>(); 
    v.configuration = j.at("configuration").get<LolLobbyLobbyCustomGameConfiguration>(); 
    v.teamTwo = j.at("teamTwo").get<std::vector<LolLobbyLobbyMember>>(); 
  }
} 