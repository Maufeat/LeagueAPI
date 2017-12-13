#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChampionsCollectionsChampionSpell { 
    std::string description;
    std::string name; 
  };
  void to_json(json& j, const LolChampionsCollectionsChampionSpell& v) {
    j["description"] = v.description; 
    j["name"] = v.name; 
  }
  void from_json(const json& j, LolChampionsCollectionsChampionSpell& v) {
    v.description = j.at("description").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
  }
}