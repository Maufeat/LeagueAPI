#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChampionsGameDataChampionSummary { /**/ 
    int32_t id;/**/
  };
  static void to_json(json& j, const LolChampionsGameDataChampionSummary& v) { 
    j["id"] = v.id;
  }
  static void from_json(const json& j, LolChampionsGameDataChampionSummary& v) { 
    v.id = j.at("id").get<int32_t>(); 
  }
} 