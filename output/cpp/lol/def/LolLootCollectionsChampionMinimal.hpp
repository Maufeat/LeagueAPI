#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolLootCollectionsOwnership.hpp>
namespace lol {
  struct LolLootCollectionsChampionMinimal { 
    LolLootCollectionsOwnership ownership;
    int32_t id; 
  };
  inline void to_json(json& j, const LolLootCollectionsChampionMinimal& v) {
    j["ownership"] = v.ownership; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolLootCollectionsChampionMinimal& v) {
    v.ownership = j.at("ownership").get<LolLootCollectionsOwnership>(); 
    v.id = j.at("id").get<int32_t>(); 
  }
}