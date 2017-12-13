#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyLobbyBotDifficulty.hpp>
namespace lol {
  struct LolLobbyLobbyBotParams { 
    std::string teamId;
    LolLobbyLobbyBotDifficulty botDifficulty;
    int32_t championId; 
  };
  void to_json(json& j, const LolLobbyLobbyBotParams& v) {
  j["teamId"] = v.teamId; 
  j["botDifficulty"] = v.botDifficulty; 
  j["championId"] = v.championId; 
  }
  void from_json(const json& j, LolLobbyLobbyBotParams& v) {
  v.teamId = j.at("teamId").get<std::string>(); 
  v.botDifficulty = j.at("botDifficulty").get<LolLobbyLobbyBotDifficulty>(); 
  v.championId = j.at("championId").get<int32_t>(); 
  }
}