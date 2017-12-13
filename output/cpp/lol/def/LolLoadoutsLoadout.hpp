#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLoadoutsLoadout { 
    std::string name;
    std::map<std::string, json> items;
    uint32_t id; 
  };
  void to_json(json& j, const LolLoadoutsLoadout& v) {
    j["name"] = v.name; 
    j["items"] = v.items; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, LolLoadoutsLoadout& v) {
    v.name = j.at("name").get<std::string>(); 
    v.items = j.at("items").get<std::map<std::string, json>>(); 
    v.id = j.at("id").get<uint32_t>(); 
  }
}