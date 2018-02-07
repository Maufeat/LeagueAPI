#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyLobbyCustomGame { 
    uint64_t id;
    std::string gameType;
    int32_t mapId;
    std::string ownerSummonerName;
    std::string spectatorPolicy;
    int32_t filledSpectatorSlots;
    uint64_t maxSpectatorSlots;
    int32_t filledPlayerSlots;
    int32_t maxPlayerSlots;
    std::string lobbyName;
    bool hasPassword;
    std::string passbackUrl; 
  };
  inline void to_json(json& j, const LolLobbyLobbyCustomGame& v) {
    j["id"] = v.id; 
    j["gameType"] = v.gameType; 
    j["mapId"] = v.mapId; 
    j["ownerSummonerName"] = v.ownerSummonerName; 
    j["spectatorPolicy"] = v.spectatorPolicy; 
    j["filledSpectatorSlots"] = v.filledSpectatorSlots; 
    j["maxSpectatorSlots"] = v.maxSpectatorSlots; 
    j["filledPlayerSlots"] = v.filledPlayerSlots; 
    j["maxPlayerSlots"] = v.maxPlayerSlots; 
    j["lobbyName"] = v.lobbyName; 
    j["hasPassword"] = v.hasPassword; 
    j["passbackUrl"] = v.passbackUrl; 
  }
  inline void from_json(const json& j, LolLobbyLobbyCustomGame& v) {
    v.id = j.at("id").get<uint64_t>(); 
    v.gameType = j.at("gameType").get<std::string>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.ownerSummonerName = j.at("ownerSummonerName").get<std::string>(); 
    v.spectatorPolicy = j.at("spectatorPolicy").get<std::string>(); 
    v.filledSpectatorSlots = j.at("filledSpectatorSlots").get<int32_t>(); 
    v.maxSpectatorSlots = j.at("maxSpectatorSlots").get<uint64_t>(); 
    v.filledPlayerSlots = j.at("filledPlayerSlots").get<int32_t>(); 
    v.maxPlayerSlots = j.at("maxPlayerSlots").get<int32_t>(); 
    v.lobbyName = j.at("lobbyName").get<std::string>(); 
    v.hasPassword = j.at("hasPassword").get<bool>(); 
    v.passbackUrl = j.at("passbackUrl").get<std::string>(); 
  }
}