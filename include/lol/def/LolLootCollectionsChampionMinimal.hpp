#pragma once
#include "../base_def.hpp" 
#include "LolLootCollectionsOwnership.hpp"
namespace lol {
  struct LolLootCollectionsChampionMinimal { 
    int32_t id;
    LolLootCollectionsOwnership ownership; 
  };
  inline void to_json(json& j, const LolLootCollectionsChampionMinimal& v) {
    j["id"] = v.id; 
    j["ownership"] = v.ownership; 
  }
  inline void from_json(const json& j, LolLootCollectionsChampionMinimal& v) {
    v.id = j.at("id").get<int32_t>(); 
    v.ownership = j.at("ownership").get<LolLootCollectionsOwnership>(); 
  }
}