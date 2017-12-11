#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolCollectionsGameDataChampionSummary { /**/ 
    int32_t id;/**/
  };
  static void to_json(json& j, const LolCollectionsGameDataChampionSummary& v) { 
    j["id"] = v.id;
  }
  static void from_json(const json& j, LolCollectionsGameDataChampionSummary& v) { 
    v.id = j.at("id").get<int32_t>(); 
  }
} 