#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyLobbyCustomGame { 
    std::string lobbyName;
    int32_t mapId;
    std::string passbackUrl;
    int32_t maxPlayerSlots;
    bool hasPassword;
    std::string ownerSummonerName;
    std::string spectatorPolicy;
    int32_t filledPlayerSlots;
    uint64_t maxSpectatorSlots;
    int32_t filledSpectatorSlots;
    uint64_t id;
    std::string gameType; 
  };
  inline void to_json(json& j, const LolLobbyLobbyCustomGame& v) {
    j["lobbyName"] = v.lobbyName; 
    j["mapId"] = v.mapId; 
    j["passbackUrl"] = v.passbackUrl; 
    j["maxPlayerSlots"] = v.maxPlayerSlots; 
    j["hasPassword"] = v.hasPassword; 
    j["ownerSummonerName"] = v.ownerSummonerName; 
    j["spectatorPolicy"] = v.spectatorPolicy; 
    j["filledPlayerSlots"] = v.filledPlayerSlots; 
    j["maxSpectatorSlots"] = v.maxSpectatorSlots; 
    j["filledSpectatorSlots"] = v.filledSpectatorSlots; 
    j["id"] = v.id; 
    j["gameType"] = v.gameType; 
  }
  inline void from_json(const json& j, LolLobbyLobbyCustomGame& v) {
    v.lobbyName = j.at("lobbyName").get<std::string>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.passbackUrl = j.at("passbackUrl").get<std::string>(); 
    v.maxPlayerSlots = j.at("maxPlayerSlots").get<int32_t>(); 
    v.hasPassword = j.at("hasPassword").get<bool>(); 
    v.ownerSummonerName = j.at("ownerSummonerName").get<std::string>(); 
    v.spectatorPolicy = j.at("spectatorPolicy").get<std::string>(); 
    v.filledPlayerSlots = j.at("filledPlayerSlots").get<int32_t>(); 
    v.maxSpectatorSlots = j.at("maxSpectatorSlots").get<uint64_t>(); 
    v.filledSpectatorSlots = j.at("filledSpectatorSlots").get<int32_t>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.gameType = j.at("gameType").get<std::string>(); 
  }
}