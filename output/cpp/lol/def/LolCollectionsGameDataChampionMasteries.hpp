#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolCollectionsGameDataChampionMasteryTree.hpp>
namespace lol {
  struct LolCollectionsGameDataChampionMasteries { 
    LolCollectionsGameDataChampionMasteryTree tree; 
  };
  void to_json(json& j, const LolCollectionsGameDataChampionMasteries& v) {
  j["tree"] = v.tree; 
  }
  void from_json(const json& j, LolCollectionsGameDataChampionMasteries& v) {
  v.tree = j.at("tree").get<LolCollectionsGameDataChampionMasteryTree>(); 
  }
}