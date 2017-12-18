#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolCollectionsGameDataChampionMasteryRow.hpp>
namespace lol {
  struct LolCollectionsGameDataChampionMasteryGroup { 
    std::vector<LolCollectionsGameDataChampionMasteryRow> rows;
    uint32_t id; 
  };
  inline void to_json(json& j, const LolCollectionsGameDataChampionMasteryGroup& v) {
    j["rows"] = v.rows; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolCollectionsGameDataChampionMasteryGroup& v) {
    v.rows = j.at("rows").get<std::vector<LolCollectionsGameDataChampionMasteryRow>>(); 
    v.id = j.at("id").get<uint32_t>(); 
  }
}