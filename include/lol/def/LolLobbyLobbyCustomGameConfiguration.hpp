#pragma once
#include "../base_def.hpp" 
#include "LolLobbyQueueCustomGameSpectatorPolicy.hpp"
#include "LolLobbyQueueGameTypeConfig.hpp"
namespace lol {
  struct LolLobbyLobbyCustomGameConfiguration { 
    int32_t teamSize;
    std::string tournamentPassbackUrl;
    LolLobbyQueueGameTypeConfig mutators;
    LolLobbyQueueGameTypeConfig gameTypeConfig;
    LolLobbyQueueCustomGameSpectatorPolicy spectatorPolicy;
    std::string gameMutator;
    int32_t mapId;
    std::string gameMode;
    std::string gameServerRegion;
    uint32_t maxPlayerCount;
    std::string tournamentGameMode;
    std::string tournamentPassbackDataPacket; 
  };
  inline void to_json(json& j, const LolLobbyLobbyCustomGameConfiguration& v) {
    j["teamSize"] = v.teamSize; 
    j["tournamentPassbackUrl"] = v.tournamentPassbackUrl; 
    j["mutators"] = v.mutators; 
    j["gameTypeConfig"] = v.gameTypeConfig; 
    j["spectatorPolicy"] = v.spectatorPolicy; 
    j["gameMutator"] = v.gameMutator; 
    j["mapId"] = v.mapId; 
    j["gameMode"] = v.gameMode; 
    j["gameServerRegion"] = v.gameServerRegion; 
    j["maxPlayerCount"] = v.maxPlayerCount; 
    j["tournamentGameMode"] = v.tournamentGameMode; 
    j["tournamentPassbackDataPacket"] = v.tournamentPassbackDataPacket; 
  }
  inline void from_json(const json& j, LolLobbyLobbyCustomGameConfiguration& v) {
    v.teamSize = j.at("teamSize").get<int32_t>(); 
    v.tournamentPassbackUrl = j.at("tournamentPassbackUrl").get<std::string>(); 
    v.mutators = j.at("mutators").get<LolLobbyQueueGameTypeConfig>(); 
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolLobbyQueueGameTypeConfig>(); 
    v.spectatorPolicy = j.at("spectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy>(); 
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.gameServerRegion = j.at("gameServerRegion").get<std::string>(); 
    v.maxPlayerCount = j.at("maxPlayerCount").get<uint32_t>(); 
    v.tournamentGameMode = j.at("tournamentGameMode").get<std::string>(); 
    v.tournamentPassbackDataPacket = j.at("tournamentPassbackDataPacket").get<std::string>(); 
  }
}