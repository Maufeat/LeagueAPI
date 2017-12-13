#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolMissionsCollectionsOwnership.hpp>
#include <lol/def/LolMissionsCollectionsChampionSkin.hpp>
namespace lol {
  struct LolMissionsCollectionsChampion { 
    LolMissionsCollectionsOwnership ownership;
    std::vector<LolMissionsCollectionsChampionSkin> skins;
    bool freeToPlay;
    int32_t id; 
  };
  void to_json(json& j, const LolMissionsCollectionsChampion& v) {
  j["ownership"] = v.ownership; 
  j["skins"] = v.skins; 
  j["freeToPlay"] = v.freeToPlay; 
  j["id"] = v.id; 
  }
  void from_json(const json& j, LolMissionsCollectionsChampion& v) {
  v.ownership = j.at("ownership").get<LolMissionsCollectionsOwnership>(); 
  v.skins = j.at("skins").get<std::vector<LolMissionsCollectionsChampionSkin>>(); 
  v.freeToPlay = j.at("freeToPlay").get<bool>(); 
  v.id = j.at("id").get<int32_t>(); 
  }
}