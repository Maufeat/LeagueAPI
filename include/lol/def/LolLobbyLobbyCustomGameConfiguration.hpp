#pragma once
#include "../base_def.hpp" 
#include "LolLobbyQueueCustomGameSpectatorPolicy.hpp"
#include "LolLobbyQueueGameTypeConfig.hpp"
namespace lol {
  struct LolLobbyLobbyCustomGameConfiguration { 
    std::string tournamentPassbackUrl;
    std::string gameMutator;
    int32_t teamSize;
    uint32_t maxPlayerCount;
    std::string tournamentPassbackDataPacket;
    LolLobbyQueueGameTypeConfig gameTypeConfig;
    int32_t mapId;
    LolLobbyQueueCustomGameSpectatorPolicy spectatorPolicy;
    std::string gameMode;
    std::string tournamentGameMode;
    std::string gameServerRegion;
    LolLobbyQueueGameTypeConfig mutators; 
  };
  inline void to_json(json& j, const LolLobbyLobbyCustomGameConfiguration& v) {
    j["tournamentPassbackUrl"] = v.tournamentPassbackUrl; 
    j["gameMutator"] = v.gameMutator; 
    j["teamSize"] = v.teamSize; 
    j["maxPlayerCount"] = v.maxPlayerCount; 
    j["tournamentPassbackDataPacket"] = v.tournamentPassbackDataPacket; 
    j["gameTypeConfig"] = v.gameTypeConfig; 
    j["mapId"] = v.mapId; 
    j["spectatorPolicy"] = v.spectatorPolicy; 
    j["gameMode"] = v.gameMode; 
    j["tournamentGameMode"] = v.tournamentGameMode; 
    j["gameServerRegion"] = v.gameServerRegion; 
    j["mutators"] = v.mutators; 
  }
  inline void from_json(const json& j, LolLobbyLobbyCustomGameConfiguration& v) {
    v.tournamentPassbackUrl = j.at("tournamentPassbackUrl").get<std::string>(); 
    v.gameMutator = j.at("gameMutator").get<std::string>(); 
    v.teamSize = j.at("teamSize").get<int32_t>(); 
    v.maxPlayerCount = j.at("maxPlayerCount").get<uint32_t>(); 
    v.tournamentPassbackDataPacket = j.at("tournamentPassbackDataPacket").get<std::string>(); 
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolLobbyQueueGameTypeConfig>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.spectatorPolicy = j.at("spectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.tournamentGameMode = j.at("tournamentGameMode").get<std::string>(); 
    v.gameServerRegion = j.at("gameServerRegion").get<std::string>(); 
    v.mutators = j.at("mutators").get<LolLobbyQueueGameTypeConfig>(); 
  }
}