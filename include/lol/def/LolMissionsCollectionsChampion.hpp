#pragma once
#include "../base_def.hpp" 
#include "LolMissionsCollectionsChampionSkin.hpp"
#include "LolMissionsCollectionsOwnership.hpp"
namespace lol {
  struct LolMissionsCollectionsChampion { 
    std::vector<LolMissionsCollectionsChampionSkin> skins;
    bool freeToPlay;
    int32_t id;
    LolMissionsCollectionsOwnership ownership; 
  };
  inline void to_json(json& j, const LolMissionsCollectionsChampion& v) {
    j["skins"] = v.skins; 
    j["freeToPlay"] = v.freeToPlay; 
    j["id"] = v.id; 
    j["ownership"] = v.ownership; 
  }
  inline void from_json(const json& j, LolMissionsCollectionsChampion& v) {
    v.skins = j.at("skins").get<std::vector<LolMissionsCollectionsChampionSkin>>(); 
    v.freeToPlay = j.at("freeToPlay").get<bool>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.ownership = j.at("ownership").get<LolMissionsCollectionsOwnership>(); 
  }
}