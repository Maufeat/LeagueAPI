#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LolCollectionsCollectionsOwnership.hpp>"

namespace leagueapi {
  struct LolCollectionsCollectionsSummonerIcon { /**/ 
    LolCollectionsCollectionsOwnership ownership;/**/
    int32_t iconId;/**/
  };
  static void to_json(json& j, const LolCollectionsCollectionsSummonerIcon& v) { 
    j["ownership"] = v.ownership;
    j["iconId"] = v.iconId;
  }
  static void from_json(const json& j, LolCollectionsCollectionsSummonerIcon& v) { 
    v.ownership = j.at("ownership").get<LolCollectionsCollectionsOwnership>(); 
    v.iconId = j.at("iconId").get<int32_t>(); 
  }
} 