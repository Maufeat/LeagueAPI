#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMissionsCollectionsOwnership.hpp>
namespace lol {
  struct LolMissionsCollectionsChampionSkin { 
    LolMissionsCollectionsOwnership ownership;
    int32_t id;
    int32_t championId; 
  };
  void to_json(json& j, const LolMissionsCollectionsChampionSkin& v) {
  j["ownership"] = v.ownership; 
  j["id"] = v.id; 
  j["championId"] = v.championId; 
  }
  void from_json(const json& j, LolMissionsCollectionsChampionSkin& v) {
  v.ownership = j.at("ownership").get<LolMissionsCollectionsOwnership>(); 
  v.id = j.at("id").get<int32_t>(); 
  v.championId = j.at("championId").get<int32_t>(); 
  }
}