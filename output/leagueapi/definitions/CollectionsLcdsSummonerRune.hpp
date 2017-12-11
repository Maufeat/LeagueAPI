#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct CollectionsLcdsSummonerRune { /**/ 
    uint32_t runeId;/**/
    int32_t quantity;/**/
    uint64_t purchased;/**/
    uint64_t summonerId;/**/
    uint64_t purchaseDate;/**/
  };
  static void to_json(json& j, const CollectionsLcdsSummonerRune& v) { 
    j["runeId"] = v.runeId;
    j["quantity"] = v.quantity;
    j["purchased"] = v.purchased;
    j["summonerId"] = v.summonerId;
    j["purchaseDate"] = v.purchaseDate;
  }
  static void from_json(const json& j, CollectionsLcdsSummonerRune& v) { 
    v.runeId = j.at("runeId").get<uint32_t>(); 
    v.quantity = j.at("quantity").get<int32_t>(); 
    v.purchased = j.at("purchased").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>(); 
  }
} 