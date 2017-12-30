#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyLobbyCustomGame { 
    uint64_t id;
    int32_t filledPlayerSlots;
    std::string ownerSummonerName;
    std::string passbackUrl;
    bool hasPassword;
    int32_t filledSpectatorSlots;
    int32_t mapId;
    std::string gameType;
    std::string lobbyName;
    int32_t maxPlayerSlots;
    std::string spectatorPolicy;
    uint64_t maxSpectatorSlots; 
  };
  inline void to_json(json& j, const LolLobbyLobbyCustomGame& v) {
    j["id"] = v.id; 
    j["filledPlayerSlots"] = v.filledPlayerSlots; 
    j["ownerSummonerName"] = v.ownerSummonerName; 
    j["passbackUrl"] = v.passbackUrl; 
    j["hasPassword"] = v.hasPassword; 
    j["filledSpectatorSlots"] = v.filledSpectatorSlots; 
    j["mapId"] = v.mapId; 
    j["gameType"] = v.gameType; 
    j["lobbyName"] = v.lobbyName; 
    j["maxPlayerSlots"] = v.maxPlayerSlots; 
    j["spectatorPolicy"] = v.spectatorPolicy; 
    j["maxSpectatorSlots"] = v.maxSpectatorSlots; 
  }
  inline void from_json(const json& j, LolLobbyLobbyCustomGame& v) {
    v.id = j.at("id").get<uint64_t>(); 
    v.filledPlayerSlots = j.at("filledPlayerSlots").get<int32_t>(); 
    v.ownerSummonerName = j.at("ownerSummonerName").get<std::string>(); 
    v.passbackUrl = j.at("passbackUrl").get<std::string>(); 
    v.hasPassword = j.at("hasPassword").get<bool>(); 
    v.filledSpectatorSlots = j.at("filledSpectatorSlots").get<int32_t>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.gameType = j.at("gameType").get<std::string>(); 
    v.lobbyName = j.at("lobbyName").get<std::string>(); 
    v.maxPlayerSlots = j.at("maxPlayerSlots").get<int32_t>(); 
    v.spectatorPolicy = j.at("spectatorPolicy").get<std::string>(); 
    v.maxSpectatorSlots = j.at("maxSpectatorSlots").get<uint64_t>(); 
  }
}