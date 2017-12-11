#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolCollectionsGameDataChampionMasteryGroup.hpp>"

namespace leagueapi {
  struct LolCollectionsGameDataChampionMasteryTree { /**/ 
    std::vector<LolCollectionsGameDataChampionMasteryGroup> groups;/**/
  };
  static void to_json(json& j, const LolCollectionsGameDataChampionMasteryTree& v) { 
    j["groups"] = v.groups;
  }
  static void from_json(const json& j, LolCollectionsGameDataChampionMasteryTree& v) { 
    v.groups = j.at("groups").get<std::vector<LolCollectionsGameDataChampionMasteryGroup>>(); 
  }
} 