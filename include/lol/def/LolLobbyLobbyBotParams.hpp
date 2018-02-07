#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace lol {
  struct LolLobbyLobbyBotParams { 
    int32_t championId;
    LolLobbyLobbyBotDifficulty botDifficulty;
    std::string teamId; 
  };
  inline void to_json(json& j, const LolLobbyLobbyBotParams& v) {
    j["championId"] = v.championId; 
    j["botDifficulty"] = v.botDifficulty; 
    j["teamId"] = v.teamId; 
  }
  inline void from_json(const json& j, LolLobbyLobbyBotParams& v) {
    v.championId = j.at("championId").get<int32_t>(); 
    v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty>(); 
    v.teamId = j.at("teamId").get<std::string>(); 
  }
}