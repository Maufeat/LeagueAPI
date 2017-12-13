#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolCollectionsGameDataChampionMasteryGroup.hpp>
namespace lol {
  struct LolCollectionsGameDataChampionMasteryTree { 
    std::vector<LolCollectionsGameDataChampionMasteryGroup> groups; 
  };
  void to_json(json& j, const LolCollectionsGameDataChampionMasteryTree& v) {
  j["groups"] = v.groups; 
  }
  void from_json(const json& j, LolCollectionsGameDataChampionMasteryTree& v) {
  v.groups = j.at("groups").get<std::vector<LolCollectionsGameDataChampionMasteryGroup>>(); 
  }
}