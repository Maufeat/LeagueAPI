#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolCollectionsGameDataChampionMasteryTree.hpp>

namespace leagueapi {
  struct LolCollectionsGameDataChampionMasteries { /**/ 
    LolCollectionsGameDataChampionMasteryTree tree;/**/
  };
  static void to_json(json& j, const LolCollectionsGameDataChampionMasteries& v) { 
    j["tree"] = v.tree;
  }
  static void from_json(const json& j, LolCollectionsGameDataChampionMasteries& v) { 
    v.tree = j.at("tree").get<LolCollectionsGameDataChampionMasteryTree>(); 
  }
} 