#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolCollectionsGameDataChampionMasteryRow { /**/ 
    std::vector<uint32_t> masteries;/**/
  };
  static void to_json(json& j, const LolCollectionsGameDataChampionMasteryRow& v) { 
    j["masteries"] = v.masteries;
  }
  static void from_json(const json& j, LolCollectionsGameDataChampionMasteryRow& v) { 
    v.masteries = j.at("masteries").get<std::vector<uint32_t>>(); 
  }
} 