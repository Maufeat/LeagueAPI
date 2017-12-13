#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyQueueCustomGameSpectatorPolicy.hpp>
#include <lol/def/LolLobbyQueueGameTypeConfig.hpp>
namespace lol {
  struct LolLobbyLobbyCustomGameConfiguration { 
    std::string gameMutator;
    LolLobbyQueueGameTypeConfig mutators;
    int32_t mapId;
    std::string tournamentPassbackUrl;
    std::string gameMode;
    int32_t teamSize;
    std::string tournamentGameMode;
    LolLobbyQueueCustomGameSpectatorPolicy spectatorPolicy;
    std::string tournamentPassbackDataPacket;
    LolLobbyQueueGameTypeConfig gameTypeConfig;
    std::string gameServerRegion;
    uint32_t maxPlayerCount; 
  };
  void to_json(json& j, const LolLobbyLobbyCustomGameConfiguration& v) {
  j["gameMutator"] = v.gameMutator; 
  j["mutators"] = v.mutators; 
  j["mapId"] = v.mapId; 
  j["tournamentPassbackUrl"] = v.tournamentPassbackUrl; 
  j["gameMode"] = v.gameMode; 
  j["teamSize"] = v.teamSize; 
  j["tournamentGameMode"] = v.tournamentGameMode; 
  j["spectatorPolicy"] = v.spectatorPolicy; 
  j["tournamentPassbackDataPacket"] = v.tournamentPassbackDataPacket; 
  j["gameTypeConfig"] = v.gameTypeConfig; 
  j["gameServerRegion"] = v.gameServerRegion; 
  j["maxPlayerCount"] = v.maxPlayerCount; 
  }
  void from_json(const json& j, LolLobbyLobbyCustomGameConfiguration& v) {
  v.gameMutator = j.at("gameMutator").get<std::string>(); 
  v.mutators = j.at("mutators").get<LolLobbyQueueGameTypeConfig>(); 
  v.mapId = j.at("mapId").get<int32_t>(); 
  v.tournamentPassbackUrl = j.at("tournamentPassbackUrl").get<std::string>(); 
  v.gameMode = j.at("gameMode").get<std::string>(); 
  v.teamSize = j.at("teamSize").get<int32_t>(); 
  v.tournamentGameMode = j.at("tournamentGameMode").get<std::string>(); 
  v.spectatorPolicy = j.at("spectatorPolicy").get<LolLobbyQueueCustomGameSpectatorPolicy>(); 
  v.tournamentPassbackDataPacket = j.at("tournamentPassbackDataPacket").get<std::string>(); 
  v.gameTypeConfig = j.at("gameTypeConfig").get<LolLobbyQueueGameTypeConfig>(); 
  v.gameServerRegion = j.at("gameServerRegion").get<std::string>(); 
  v.maxPlayerCount = j.at("maxPlayerCount").get<uint32_t>(); 
  }
}