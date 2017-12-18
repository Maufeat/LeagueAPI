#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyCollectionsChampion { 
    bool botEnabled;
    std::string name;
    bool active;
    int32_t id; 
  };
  inline void to_json(json& j, const LolLobbyCollectionsChampion& v) {
    j["botEnabled"] = v.botEnabled; 
    j["name"] = v.name; 
    j["active"] = v.active; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolLobbyCollectionsChampion& v) {
    v.botEnabled = j.at("botEnabled").get<bool>(); 
    v.name = j.at("name").get<std::string>(); 
    v.active = j.at("active").get<bool>(); 
    v.id = j.at("id").get<int32_t>(); 
  }
}