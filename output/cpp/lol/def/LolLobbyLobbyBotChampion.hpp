#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyLobbyBotDifficulty.hpp>
namespace lol {
  struct LolLobbyLobbyBotChampion { 
    std::vector<LolLobbyLobbyBotDifficulty> botDifficulties;
    std::string name;
    bool active;
    int32_t id; 
  };
  void to_json(json& j, const LolLobbyLobbyBotChampion& v) {
  j["botDifficulties"] = v.botDifficulties; 
  j["name"] = v.name; 
  j["active"] = v.active; 
  j["id"] = v.id; 
  }
  void from_json(const json& j, LolLobbyLobbyBotChampion& v) {
  v.botDifficulties = j.at("botDifficulties").get<std::vector<LolLobbyLobbyBotDifficulty>>(); 
  v.name = j.at("name").get<std::string>(); 
  v.active = j.at("active").get<bool>(); 
  v.id = j.at("id").get<int32_t>(); 
  }
}