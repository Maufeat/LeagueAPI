#pragma once
#include "../base_def.hpp" 
#include "LolCollectionsGameDataChampionMasteryGroup.hpp"
namespace lol {
  struct LolCollectionsGameDataChampionMasteryTree { 
    std::vector<LolCollectionsGameDataChampionMasteryGroup> groups; 
  };
  inline void to_json(json& j, const LolCollectionsGameDataChampionMasteryTree& v) {
    j["groups"] = v.groups; 
  }
  inline void from_json(const json& j, LolCollectionsGameDataChampionMasteryTree& v) {
    v.groups = j.at("groups").get<std::vector<LolCollectionsGameDataChampionMasteryGroup>>(); 
  }
}