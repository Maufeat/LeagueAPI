#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChampionsCollectionsChampionSpell { 
    std::string name;
    std::string description; 
  };
  inline void to_json(json& j, const LolChampionsCollectionsChampionSpell& v) {
    j["name"] = v.name; 
    j["description"] = v.description; 
  }
  inline void from_json(const json& j, LolChampionsCollectionsChampionSpell& v) {
    v.name = j.at("name").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
  }
}