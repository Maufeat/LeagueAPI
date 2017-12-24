#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLoadoutsLoadout { 
    uint32_t id;
    std::map<std::string, json> items;
    std::string name; 
  };
  inline void to_json(json& j, const LolLoadoutsLoadout& v) {
    j["id"] = v.id; 
    j["items"] = v.items; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, LolLoadoutsLoadout& v) {
    v.id = j.at("id").get<uint32_t>(); 
    v.items = j.at("items").get<std::map<std::string, json>>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}