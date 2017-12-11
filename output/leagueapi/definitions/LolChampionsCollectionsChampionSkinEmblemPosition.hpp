#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChampionsCollectionsChampionSkinEmblemPosition { /**/ 
    std::string vertical;/**/
    std::string horizontal;/**/
  };
  static void to_json(json& j, const LolChampionsCollectionsChampionSkinEmblemPosition& v) { 
    j["vertical"] = v.vertical;
    j["horizontal"] = v.horizontal;
  }
  static void from_json(const json& j, LolChampionsCollectionsChampionSkinEmblemPosition& v) { 
    v.vertical = j.at("vertical").get<std::string>(); 
    v.horizontal = j.at("horizontal").get<std::string>(); 
  }
} 