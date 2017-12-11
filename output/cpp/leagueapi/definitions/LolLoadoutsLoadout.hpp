#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLoadoutsLoadout { /**/ 
    std::map<std::string, json> items;/**/
    uint32_t id;/**/
    std::string name;/**/
  };
  static void to_json(json& j, const LolLoadoutsLoadout& v) { 
    j["items"] = v.items;
    j["id"] = v.id;
    j["name"] = v.name;
  }
  static void from_json(const json& j, LolLoadoutsLoadout& v) { 
    v.items = j.at("items").get<std::map<std::string, json>>(); 
    v.id = j.at("id").get<uint32_t>(); 
    v.name = j.at("name").get<std::string>(); 
  }
} 