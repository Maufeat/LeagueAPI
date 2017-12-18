#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChampionsGameDataChampionSummary { 
    int32_t id; 
  };
  inline void to_json(json& j, const LolChampionsGameDataChampionSummary& v) {
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolChampionsGameDataChampionSummary& v) {
    v.id = j.at("id").get<int32_t>(); 
  }
}