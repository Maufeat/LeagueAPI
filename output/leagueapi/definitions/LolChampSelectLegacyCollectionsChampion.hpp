#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolChampSelectLegacyCollectionsOwnership.hpp>"

namespace leagueapi {
  struct LolChampSelectLegacyCollectionsChampion { /**/ 
    LolChampSelectLegacyCollectionsOwnership ownership;/**/
    bool freeToPlay;/**/
    int32_t id;/**/
  };
  static void to_json(json& j, const LolChampSelectLegacyCollectionsChampion& v) { 
    j["ownership"] = v.ownership;
    j["freeToPlay"] = v.freeToPlay;
    j["id"] = v.id;
  }
  static void from_json(const json& j, LolChampSelectLegacyCollectionsChampion& v) { 
    v.ownership = j.at("ownership").get<LolChampSelectLegacyCollectionsOwnership>(); 
    v.freeToPlay = j.at("freeToPlay").get<bool>(); 
    v.id = j.at("id").get<int32_t>(); 
  }
} 