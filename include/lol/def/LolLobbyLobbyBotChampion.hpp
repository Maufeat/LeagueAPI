#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace lol {
  struct LolLobbyLobbyBotChampion { 
    std::string name;
    int32_t id;
    bool active;
    std::vector<LolLobbyLobbyBotDifficulty> botDifficulties; 
  };
  inline void to_json(json& j, const LolLobbyLobbyBotChampion& v) {
    j["name"] = v.name; 
    j["id"] = v.id; 
    j["active"] = v.active; 
    j["botDifficulties"] = v.botDifficulties; 
  }
  inline void from_json(const json& j, LolLobbyLobbyBotChampion& v) {
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.active = j.at("active").get<bool>(); 
    v.botDifficulties = j.at("botDifficulties").get<std::vector<LolLobbyLobbyBotDifficulty>>(); 
  }
}