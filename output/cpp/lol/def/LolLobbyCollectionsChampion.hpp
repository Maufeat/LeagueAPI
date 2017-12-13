#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLobbyCollectionsChampion { 
    std::string name;
    bool botEnabled;
    bool active;
    int32_t id; 
  };
  void to_json(json& j, const LolLobbyCollectionsChampion& v) {
  j["name"] = v.name; 
  j["botEnabled"] = v.botEnabled; 
  j["active"] = v.active; 
  j["id"] = v.id; 
  }
  void from_json(const json& j, LolLobbyCollectionsChampion& v) {
  v.name = j.at("name").get<std::string>(); 
  v.botEnabled = j.at("botEnabled").get<bool>(); 
  v.active = j.at("active").get<bool>(); 
  v.id = j.at("id").get<int32_t>(); 
  }
}