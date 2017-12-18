#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct CollectionsLcdsSummonerRune { 
    uint64_t purchaseDate;
    int32_t quantity;
    uint64_t purchased;
    uint32_t runeId;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const CollectionsLcdsSummonerRune& v) {
    j["purchaseDate"] = v.purchaseDate; 
    j["quantity"] = v.quantity; 
    j["purchased"] = v.purchased; 
    j["runeId"] = v.runeId; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, CollectionsLcdsSummonerRune& v) {
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>(); 
    v.quantity = j.at("quantity").get<int32_t>(); 
    v.purchased = j.at("purchased").get<uint64_t>(); 
    v.runeId = j.at("runeId").get<uint32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}