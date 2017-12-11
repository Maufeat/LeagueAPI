#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolLootCollectionsOwnership.hpp>"

namespace leagueapi {
  struct LolLootCollectionsChampionMinimal { /**/ 
    LolLootCollectionsOwnership ownership;/**/
    int32_t id;/**/
  };
  static void to_json(json& j, const LolLootCollectionsChampionMinimal& v) { 
    j["ownership"] = v.ownership;
    j["id"] = v.id;
  }
  static void from_json(const json& j, LolLootCollectionsChampionMinimal& v) { 
    v.ownership = j.at("ownership").get<LolLootCollectionsOwnership>(); 
    v.id = j.at("id").get<int32_t>(); 
  }
} 