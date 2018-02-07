#pragma once
#include "../base_def.hpp" 
#include "LolLobbyLobbyBotDifficulty.hpp"
namespace lol {
  struct LolLobbyLobbyBotChampion { 
    bool active;
    int32_t id;
    std::string name;
    std::vector<LolLobbyLobbyBotDifficulty> botDifficulties; 
  };
  inline void to_json(json& j, const LolLobbyLobbyBotChampion& v) {
    j["active"] = v.active; 
    j["id"] = v.id; 
    j["name"] = v.name; 
    j["botDifficulties"] = v.botDifficulties; 
  }
  inline void from_json(const json& j, LolLobbyLobbyBotChampion& v) {
    v.active = j.at("active").get<bool>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.botDifficulties = j.at("botDifficulties").get<std::vector<LolLobbyLobbyBotDifficulty>>(); 
  }
}