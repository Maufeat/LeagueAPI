#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChampionsGameDataChampionSpell { 
    std::string description;
    std::string name; 
  };
  inline void to_json(json& j, const LolChampionsGameDataChampionSpell& v) {
    j["description"] = v.description; 
    j["name"] = v.name; 
  }
  inline void from_json(const json& j, LolChampionsGameDataChampionSpell& v) {
    v.description = j.at("description").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}