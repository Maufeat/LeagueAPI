#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolCollectionsGameDataChampionMasteryRow { 
    std::vector<uint32_t> masteries; 
  };
  void to_json(json& j, const LolCollectionsGameDataChampionMasteryRow& v) {
    j["masteries"] = v.masteries; 
  }
  void from_json(const json& j, LolCollectionsGameDataChampionMasteryRow& v) {
    v.masteries = j.at("masteries").get<std::vector<uint32_t>>(); 
  }
}