#pragma once
#include "../base_def.hpp" 
#include "LolMissionsCollectionsChampionSkin.hpp"
#include "LolMissionsCollectionsOwnership.hpp"
namespace lol {
  struct LolMissionsCollectionsChampion { 
    int32_t id;
    bool freeToPlay;
    std::vector<LolMissionsCollectionsChampionSkin> skins;
    LolMissionsCollectionsOwnership ownership; 
  };
  inline void to_json(json& j, const LolMissionsCollectionsChampion& v) {
    j["id"] = v.id; 
    j["freeToPlay"] = v.freeToPlay; 
    j["skins"] = v.skins; 
    j["ownership"] = v.ownership; 
  }
  inline void from_json(const json& j, LolMissionsCollectionsChampion& v) {
    v.id = j.at("id").get<int32_t>(); 
    v.freeToPlay = j.at("freeToPlay").get<bool>(); 
    v.skins = j.at("skins").get<std::vector<LolMissionsCollectionsChampionSkin>>(); 
    v.ownership = j.at("ownership").get<LolMissionsCollectionsOwnership>(); 
  }
}