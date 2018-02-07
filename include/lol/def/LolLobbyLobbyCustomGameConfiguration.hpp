#pragma once
#include "../base_def.hpp" 
#include "LolLobbyQueueGameTypeConfig.hpp"
#include "LolLobbyQueueCustomGameSpectatorPolicy.hpp"
namespace lol {
  struct LolLobbyLobbyCustomGameConfiguration { 
    int32_t mapId;
    std::string gameMode;
    std::string gameMutator;
    LolLobbyQueueGameTypeConfig mutators;
    LolLobbyQueueGameTypeConfig gameTypeConfig;
    LolLobbyQueueCustomGameSpectatorPolicy spectatorPolicy;
    int32_t teamSize;
    uint32_t maxPlayerCount;
    std::string tournamentGameMode;
    std::string tournamentPassbackUrl;
    std::string tournamentPassbackDataPacket;
    std::string gameServerRegion; 
  };
  inline void to_json(json& j, const LolLobbyLobbyCustomGameConfiguration& v) {
    j["mapId"] = v.mapId; 
    j["gameMode"] = v.gameMode; 
    j["gameMutator"] = v.gameMutator; 
    j["mutators"] = v.mutators; 
    j["gameTypeConfig"] = v.gameTypeConfig; 
    j["spectatorPolicy"] = v.spectatorPolicy; 
    j["teamSize"] = v.teamSize; 
    j["maxPlayerCount"] = v.maxPlayerCount; 
    j["tournamentGameMode"] = v.tournamentGameMode; 
    j["tournamentPassbackUrl"] = v.tournamentPassbackUrl; 
    j["tournamentPassbackDataPacket"] = v.tournamentPassbackDataPacket; 
    j["gameServerRegion"] = v.gameServerRegion; 
  }
  inline void from_json(const json& j, LolLobbyLobbyCustomGameConfiguration& v) {
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.mutators = j.at("mutators").get<LolLobbyQueueGameTypeConfig>(); 
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolLobbyQueueGameTypeConfig>(); 
    v.spectatorPolicy = j.at("spectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy>(); 
    v.teamSize = j.at("teamSize").get<int32_t>(); 
    v.maxPlayerCount = j.at("maxPlayerCount").get<uint32_t>(); 
    v.tournamentGameMode = j.at("tournamentGameMode").get<std::string>(); 
    v.tournamentPassbackUrl = j.at("tournamentPassbackUrl").get<std::string>(); 
    v.tournamentPassbackDataPacket = j.at("tournamentPassbackDataPacket").get<std::string>(); 
    v.gameServerRegion = j.at("gameServerRegion").get<std::string>(); 
  }
}