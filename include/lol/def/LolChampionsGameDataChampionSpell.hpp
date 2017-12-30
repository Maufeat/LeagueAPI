#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChampionsGameDataChampionSpell { 
    std::string name;
    std::string description; 
  };
  inline void to_json(json& j, const LolChampionsGameDataChampionSpell& v) {
    j["name"] = v.name; 
    j["description"] = v.description; 
  }
  inline void from_json(const json& j, LolChampionsGameDataChampionSpell& v) {
    v.name = j.at("name").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
  }
}