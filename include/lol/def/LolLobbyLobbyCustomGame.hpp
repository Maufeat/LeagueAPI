#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyLobbyCustomGame { 
    std::string passbackUrl;
    std::string spectatorPolicy;
    std::string lobbyName;
    std::string gameType;
    int32_t mapId;
    uint64_t maxSpectatorSlots;
    bool hasPassword;
    int32_t filledSpectatorSlots;
    uint64_t id;
    std::string ownerSummonerName;
    int32_t maxPlayerSlots;
    int32_t filledPlayerSlots; 
  };
  inline void to_json(json& j, const LolLobbyLobbyCustomGame& v) {
    j["passbackUrl"] = v.passbackUrl; 
    j["spectatorPolicy"] = v.spectatorPolicy; 
    j["lobbyName"] = v.lobbyName; 
    j["gameType"] = v.gameType; 
    j["mapId"] = v.mapId; 
    j["maxSpectatorSlots"] = v.maxSpectatorSlots; 
    j["hasPassword"] = v.hasPassword; 
    j["filledSpectatorSlots"] = v.filledSpectatorSlots; 
    j["id"] = v.id; 
    j["ownerSummonerName"] = v.ownerSummonerName; 
    j["maxPlayerSlots"] = v.maxPlayerSlots; 
    j["filledPlayerSlots"] = v.filledPlayerSlots; 
  }
  inline void from_json(const json& j, LolLobbyLobbyCustomGame& v) {
    v.passbackUrl = j.at("passbackUrl").get<std::string>(); 
    v.spectatorPolicy = j.at("spectatorPolicy").get<std::string>(); 
    v.lobbyName = j.at("lobbyName").get<std::string>(); 
    v.gameType = j.at("gameType").get<std::string>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.maxSpectatorSlots = j.at("maxSpectatorSlots").get<uint64_t>(); 
    v.hasPassword = j.at("hasPassword").get<bool>(); 
    v.filledSpectatorSlots = j.at("filledSpectatorSlots").get<int32_t>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.ownerSummonerName = j.at("ownerSummonerName").get<std::string>(); 
    v.maxPlayerSlots = j.at("maxPlayerSlots").get<int32_t>(); 
    v.filledPlayerSlots = j.at("filledPlayerSlots").get<int32_t>(); 
  }
}