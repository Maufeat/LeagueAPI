#pragma once
#include "../base_def.hpp" 
#include "LolCollectionsGameDataChampionMasteryRow.hpp"
namespace lol {
  struct LolCollectionsGameDataChampionMasteryGroup { 
    uint32_t id;
    std::vector<LolCollectionsGameDataChampionMasteryRow> rows; 
  };
  inline void to_json(json& j, const LolCollectionsGameDataChampionMasteryGroup& v) {
    j["id"] = v.id; 
    j["rows"] = v.rows; 
  }
  inline void from_json(const json& j, LolCollectionsGameDataChampionMasteryGroup& v) {
    v.id = j.at("id").get<uint32_t>(); 
    v.rows = j.at("rows").get<std::vector<LolCollectionsGameDataChampionMasteryRow>>(); 
  }
}