#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyCollectionsChampion { 
    int32_t id;
    bool active;
    bool botEnabled;
    std::string name; 
  };
  inline void to_json(json& j, const LolLobbyCollectionsChampion& v) {
    j["id"] = v.id; 
    j["active"] = v.active; 
    j["botEnabled"] = v.botEnabled; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, LolLobbyCollectionsChampion& v) {
    v.id = j.at("id").get<int32_t>(); 
    v.active = j.at("active").get<bool>(); 
    v.botEnabled = j.at("botEnabled").get<bool>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}