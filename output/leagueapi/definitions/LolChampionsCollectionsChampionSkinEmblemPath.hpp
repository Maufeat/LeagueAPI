#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChampionsCollectionsChampionSkinEmblemPath { /**/ 
    std::string small;/**/
    std::string large;/**/
  };
  static void to_json(json& j, const LolChampionsCollectionsChampionSkinEmblemPath& v) { 
    j["small"] = v.small;
    j["large"] = v.large;
  }
  static void from_json(const json& j, LolChampionsCollectionsChampionSkinEmblemPath& v) { 
    v.small = j.at("small").get<std::string>(); 
    v.large = j.at("large").get<std::string>(); 
  }
} 