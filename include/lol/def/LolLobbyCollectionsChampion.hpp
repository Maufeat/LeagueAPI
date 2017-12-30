#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyCollectionsChampion { 
    std::string name;
    bool botEnabled;
    int32_t id;
    bool active; 
  };
  inline void to_json(json& j, const LolLobbyCollectionsChampion& v) {
    j["name"] = v.name; 
    j["botEnabled"] = v.botEnabled; 
    j["id"] = v.id; 
    j["active"] = v.active; 
  }
  inline void from_json(const json& j, LolLobbyCollectionsChampion& v) {
    v.name = j.at("name").get<std::string>(); 
    v.botEnabled = j.at("botEnabled").get<bool>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.active = j.at("active").get<bool>(); 
  }
}