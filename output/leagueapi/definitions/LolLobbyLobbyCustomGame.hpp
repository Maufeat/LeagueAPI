#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyLobbyCustomGame { /**/ 
    int32_t filledPlayerSlots;/**/
    std::string gameType;/**/
    std::string spectatorPolicy;/**/
    uint64_t id;/**/
    uint64_t maxSpectatorSlots;/**/
    std::string lobbyName;/**/
    std::string ownerSummonerName;/**/
    int32_t filledSpectatorSlots;/**/
    std::string passbackUrl;/**/
    int32_t maxPlayerSlots;/**/
    int32_t mapId;/**/
    bool hasPassword;/**/
  };
  static void to_json(json& j, const LolLobbyLobbyCustomGame& v) { 
    j["filledPlayerSlots"] = v.filledPlayerSlots;
    j["gameType"] = v.gameType;
    j["spectatorPolicy"] = v.spectatorPolicy;
    j["id"] = v.id;
    j["maxSpectatorSlots"] = v.maxSpectatorSlots;
    j["lobbyName"] = v.lobbyName;
    j["ownerSummonerName"] = v.ownerSummonerName;
    j["filledSpectatorSlots"] = v.filledSpectatorSlots;
    j["passbackUrl"] = v.passbackUrl;
    j["maxPlayerSlots"] = v.maxPlayerSlots;
    j["mapId"] = v.mapId;
    j["hasPassword"] = v.hasPassword;
  }
  static void from_json(const json& j, LolLobbyLobbyCustomGame& v) { 
    v.filledPlayerSlots = j.at("filledPlayerSlots").get<int32_t>(); 
    v.gameType = j.at("gameType").get<std::string>(); 
    v.spectatorPolicy = j.at("spectatorPolicy").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.maxSpectatorSlots = j.at("maxSpectatorSlots").get<uint64_t>(); 
    v.lobbyName = j.at("lobbyName").get<std::string>(); 
    v.ownerSummonerName = j.at("ownerSummonerName").get<std::string>(); 
    v.filledSpectatorSlots = j.at("filledSpectatorSlots").get<int32_t>(); 
    v.passbackUrl = j.at("passbackUrl").get<std::string>(); 
    v.maxPlayerSlots = j.at("maxPlayerSlots").get<int32_t>(); 
    v.mapId = j.at("mapId").get<int32_t>(); 
    v.hasPassword = j.at("hasPassword").get<bool>(); 
  }
} 