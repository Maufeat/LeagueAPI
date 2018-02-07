#pragma once
#include "../base_def.hpp" 
#include "LolMissionsCollectionsOwnership.hpp"
namespace lol {
  struct LolMissionsCollectionsChampionSkin { 
    int32_t championId;
    int32_t id;
    LolMissionsCollectionsOwnership ownership; 
  };
  inline void to_json(json& j, const LolMissionsCollectionsChampionSkin& v) {
    j["championId"] = v.championId; 
    j["id"] = v.id; 
    j["ownership"] = v.ownership; 
  }
  inline void from_json(const json& j, LolMissionsCollectionsChampionSkin& v) {
    v.championId = j.at("championId").get<int32_t>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.ownership = j.at("ownership").get<LolMissionsCollectionsOwnership>(); 
  }
}