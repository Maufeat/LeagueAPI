#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLobbyLobbyBotDifficulty.hpp>
namespace lol {
  struct LolLobbyLobbyBotChampion { 
    std::vector<LolLobbyLobbyBotDifficulty> botDifficulties;
    int32_t id;
    bool active;
    std::string name; 
  };
  void to_json(json& j, const LolLobbyLobbyBotChampion& v) {
  j["botDifficulties"] = v.botDifficulties; 
  j["id"] = v.id; 
  j["active"] = v.active; 
  j["name"] = v.name; 
  }
  void from_json(const json& j, LolLobbyLobbyBotChampion& v) {
  v.botDifficulties = j.at("botDifficulties").get<std::vector<LolLobbyLobbyBotDifficulty>>(); 
  v.id = j.at("id").get<int32_t>(); 
  v.active = j.at("active").get<bool>(); 
  v.name = j.at("name").get<std::string>(); 
  }
}