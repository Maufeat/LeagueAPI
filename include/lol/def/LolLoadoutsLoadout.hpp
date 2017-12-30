#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLoadoutsLoadout { 
    std::string name;
    uint32_t id;
    std::map<std::string, json> items; 
  };
  inline void to_json(json& j, const LolLoadoutsLoadout& v) {
    j["name"] = v.name; 
    j["id"] = v.id; 
    j["items"] = v.items; 
  }
  inline void from_json(const json& j, LolLoadoutsLoadout& v) {
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<uint32_t>(); 
    v.items = j.at("items").get<std::map<std::string, json>>(); 
  }
}