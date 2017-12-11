#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolCollectionsGameDataChampionMasteryRow.hpp>

namespace leagueapi {
  struct LolCollectionsGameDataChampionMasteryGroup { /**/ 
    std::vector<LolCollectionsGameDataChampionMasteryRow> rows;/**/
    uint32_t id;/**/
  };
  static void to_json(json& j, const LolCollectionsGameDataChampionMasteryGroup& v) { 
    j["rows"] = v.rows;
    j["id"] = v.id;
  }
  static void from_json(const json& j, LolCollectionsGameDataChampionMasteryGroup& v) { 
    v.rows = j.at("rows").get<std::vector<LolCollectionsGameDataChampionMasteryRow>>(); 
    v.id = j.at("id").get<uint32_t>(); 
  }
} 