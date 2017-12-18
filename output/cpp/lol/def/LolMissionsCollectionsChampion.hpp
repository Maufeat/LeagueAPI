#pragma once
#include "../base_def.hpp" 
#include "LolMissionsCollectionsChampionSkin.hpp"
#include "LolMissionsCollectionsOwnership.hpp"
namespace lol {
  struct LolMissionsCollectionsChampion { 
    LolMissionsCollectionsOwnership ownership;
    bool freeToPlay;
    std::vector<LolMissionsCollectionsChampionSkin> skins;
    int32_t id; 
  };
  inline void to_json(json& j, const LolMissionsCollectionsChampion& v) {
    j["ownership"] = v.ownership; 
    j["freeToPlay"] = v.freeToPlay; 
    j["skins"] = v.skins; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolMissionsCollectionsChampion& v) {
    v.ownership = j.at("ownership").get<LolMissionsCollectionsOwnership>(); 
    v.freeToPlay = j.at("freeToPlay").get<bool>(); 
    v.skins = j.at("skins").get<std::vector<LolMissionsCollectionsChampionSkin>>(); 
    v.id = j.at("id").get<int32_t>(); 
  }
}