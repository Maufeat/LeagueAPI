#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyCollectionsChampion { 
    bool active;
    bool botEnabled;
    int32_t id;
    std::string name; 
  };
  inline void to_json(json& j, const LolLobbyCollectionsChampion& v) {
    j["active"] = v.active; 
    j["botEnabled"] = v.botEnabled; 
    j["id"] = v.id; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, LolLobbyCollectionsChampion& v) {
    v.active = j.at("active").get<bool>(); 
    v.botEnabled = j.at("botEnabled").get<bool>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}