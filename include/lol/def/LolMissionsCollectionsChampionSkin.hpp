#pragma once
#include "../base_def.hpp" 
#include "LolMissionsCollectionsOwnership.hpp"
namespace lol {
  struct LolMissionsCollectionsChampionSkin { 
    int32_t id;
    int32_t championId;
    LolMissionsCollectionsOwnership ownership; 
  };
  inline void to_json(json& j, const LolMissionsCollectionsChampionSkin& v) {
    j["id"] = v.id; 
    j["championId"] = v.championId; 
    j["ownership"] = v.ownership; 
  }
  inline void from_json(const json& j, LolMissionsCollectionsChampionSkin& v) {
    v.id = j.at("id").get<int32_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.ownership = j.at("ownership").get<LolMissionsCollectionsOwnership>(); 
  }
}