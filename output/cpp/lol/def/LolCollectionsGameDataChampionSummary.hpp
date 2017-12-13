#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolCollectionsGameDataChampionSummary { 
    int32_t id; 
  };
  void to_json(json& j, const LolCollectionsGameDataChampionSummary& v) {
    j["id"] = v.id; 
  }
  void from_json(const json& j, LolCollectionsGameDataChampionSummary& v) {
    v.id = j.at("id").get<int32_t>(); 
  }
}