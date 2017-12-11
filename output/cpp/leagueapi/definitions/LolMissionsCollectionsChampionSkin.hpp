#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolMissionsCollectionsOwnership.hpp>

namespace leagueapi {
  struct LolMissionsCollectionsChampionSkin { /**/ 
    LolMissionsCollectionsOwnership ownership;/**/
    int32_t id;/**/
    int32_t championId;/**/
  };
  static void to_json(json& j, const LolMissionsCollectionsChampionSkin& v) { 
    j["ownership"] = v.ownership;
    j["id"] = v.id;
    j["championId"] = v.championId;
  }
  static void from_json(const json& j, LolMissionsCollectionsChampionSkin& v) { 
    v.ownership = j.at("ownership").get<LolMissionsCollectionsOwnership>(); 
    v.id = j.at("id").get<int32_t>(); 
    v.championId = j.at("championId").get<int32_t>(); 
  }
} 