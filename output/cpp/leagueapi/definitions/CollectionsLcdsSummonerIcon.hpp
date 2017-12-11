#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct CollectionsLcdsSummonerIcon { /**/ 
    uint64_t summonerId;/**/
    int32_t iconId;/**/
    uint64_t purchaseDate;/**/
  };
  static void to_json(json& j, const CollectionsLcdsSummonerIcon& v) { 
    j["summonerId"] = v.summonerId;
    j["iconId"] = v.iconId;
    j["purchaseDate"] = v.purchaseDate;
  }
  static void from_json(const json& j, CollectionsLcdsSummonerIcon& v) { 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.iconId = j.at("iconId").get<int32_t>(); 
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>(); 
  }
} 