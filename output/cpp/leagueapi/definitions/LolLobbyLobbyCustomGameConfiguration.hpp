#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolLobbyQueueGameTypeConfig.hpp>
#include <leagueapi/definitions/LolLobbyQueueCustomGameSpectatorPolicy.hpp>

namespace leagueapi {
  struct LolLobbyLobbyCustomGameConfiguration { /**/ 
    std::string gameMutator;/**/
    LolLobbyQueueCustomGameSpectatorPolicy spectatorPolicy;/**/
    std::string tournamentGameMode;/**/
    std::string gameServerRegion;/**/
    std::string tournamentPassbackDataPacket;/**/
    std::string tournamentPassbackUrl;/**/
    LolLobbyQueueGameTypeConfig gameTypeConfig;/**/
    LolLobbyQueueGameTypeConfig mutators;/**/
    uint32_t maxPlayerCount;/**/
    int32_t teamSize;/**/
    int32_t mapId;/**/
    std::string gameMode;/**/
  };
  static void to_json(json& j, const LolLobbyLobbyCustomGameConfiguration& v) { 
    j["gameMutator"] = v.gameMutator;
    j["spectatorPolicy"] = v.spectatorPolicy;
    j["tournamentGameMode"] = v.tournamentGameMode;
    j["gameServerRegion"] = v.gameServerRegion;
    j["tournamentPassbackDataPacket"] = v.tournamentPassbackDataPacket;
    j["tournamentPassbackUrl"] = v.tournamentPassbackUrl;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["mutators"] = v.mutators;
    j["maxPlayerCount"] = v.maxPlayerCount;
    j["teamSize"] = v.teamSize;
    j["mapId"] = v.mapId;
    j["gameMode"] = v.gameMode;
  }
  static void from_json(const json& j, LolLobbyLobbyCustomGameConfiguration& v) { 
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.spectatorPolicy = j.at("spectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy>(); 
    v.tournamentGameMode = j.at("tournamentGameMode").get<std::string>(); 
    v.gameServerRegion = j.at("gameServerRegion").get<std::string>(); 
    v.tournamentPassbackDataPacket = j.at("tournamentPassbackDataPacket").get<std::string>(); 
    v.tournamentPassbackUrl = j.at("tournamentPassbackUrl").get<std::string>(); 
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolLobbyQueueGameTypeConfig>(); 
    v.mutators = j.at("mutators").get<LolLobbyQueueGameTypeConfig>(); 
    v.maxPlayerCount = j.at("maxPlayerCount").get<uint32_t>(); 
    v.teamSize = j.at("teamSize").get<int32_t>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
  }
} 