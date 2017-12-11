#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/LolMissionsCollectionsOwnership.hpp>

namespace leagueapi {
  struct LolMissionsCollectionsWardSkin { /**/ 
    LolMissionsCollectionsOwnership ownership;/**/
    int64_t id;/**/
  };
  static void to_json(json& j, const LolMissionsCollectionsWardSkin& v) { 
    j["ownership"] = v.ownership;
    j["id"] = v.id;
  }
  static void from_json(const json& j, LolMissionsCollectionsWardSkin& v) { 
    v.ownership = j.at("ownership").get<LolMissionsCollectionsOwnership>(); 
    v.id = j.at("id").get<int64_t>(); 
  }
} 