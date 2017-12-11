#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolMissionsCollectionsChampionSkin.hpp>
#include <leagueapi/definitions/LolMissionsCollectionsOwnership.hpp>

namespace leagueapi {
  struct LolMissionsCollectionsChampion { /**/ 
    LolMissionsCollectionsOwnership ownership;/**/
    std::vector<LolMissionsCollectionsChampionSkin> skins;/**/
    bool freeToPlay;/**/
    int32_t id;/**/
  };
  static void to_json(json& j, const LolMissionsCollectionsChampion& v) { 
    j["ownership"] = v.ownership;
    j["skins"] = v.skins;
    j["freeToPlay"] = v.freeToPlay;
    j["id"] = v.id;
  }
  static void from_json(const json& j, LolMissionsCollectionsChampion& v) { 
    v.ownership = j.at("ownership").get<LolMissionsCollectionsOwnership>(); 
    v.skins = j.at("skins").get<std::vector<LolMissionsCollectionsChampionSkin>>(); 
    v.freeToPlay = j.at("freeToPlay").get<bool>(); 
    v.id = j.at("id").get<int32_t>(); 
  }
} 