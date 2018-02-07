#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLoadoutsLoadout { 
    uint32_t id;
    std::string name;
    std::map<std::string, json> items; 
  };
  inline void to_json(json& j, const LolLoadoutsLoadout& v) {
    j["id"] = v.id; 
    j["name"] = v.name; 
    j["items"] = v.items; 
  }
  inline void from_json(const json& j, LolLoadoutsLoadout& v) {
    v.id = j.at("id").get<uint32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.items = j.at("items").get<std::map<std::string, json>>(); 
  }
}