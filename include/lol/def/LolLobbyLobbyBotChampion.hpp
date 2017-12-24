#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace lol {
  struct LolLobbyLobbyBotChampion { 
    int32_t id;
    bool active;
    std::vector<LolLobbyLobbyBotDifficulty> botDifficulties;
    std::string name; 
  };
  inline void to_json(json& j, const LolLobbyLobbyBotChampion& v) {
    j["id"] = v.id; 
    j["active"] = v.active; 
    j["botDifficulties"] = v.botDifficulties; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, LolLobbyLobbyBotChampion& v) {
    v.id = j.at("id").get<int32_t>(); 
    v.active = j.at("active").get<bool>(); 
    v.botDifficulties = j.at("botDifficulties").get<std::vector<LolLobbyLobbyBotDifficulty>>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}