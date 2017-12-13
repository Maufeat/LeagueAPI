#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMissionsCollectionsOwnership.hpp>
namespace lol {
  struct LolMissionsCollectionsChampionSkin { 
    LolMissionsCollectionsOwnership ownership;
    int32_t championId;
    int32_t id; 
  };
  void to_json(json& j, const LolMissionsCollectionsChampionSkin& v) {
    j["ownership"] = v.ownership; 
    j["championId"] = v.championId; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, LolMissionsCollectionsChampionSkin& v) {
    v.ownership = j.at("ownership").get<LolMissionsCollectionsOwnership>(); 
    v.championId = j.at("championId").get<int32_t>(); 
    v.id = j.at("id").get<int32_t>(); 
  }
}