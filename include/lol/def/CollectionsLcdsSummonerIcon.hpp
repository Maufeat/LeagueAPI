#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct CollectionsLcdsSummonerIcon { 
    uint64_t summonerId;
    uint64_t purchaseDate;
    int32_t iconId; 
  };
  inline void to_json(json& j, const CollectionsLcdsSummonerIcon& v) {
    j["summonerId"] = v.summonerId; 
    j["purchaseDate"] = v.purchaseDate; 
    j["iconId"] = v.iconId; 
  }
  inline void from_json(const json& j, CollectionsLcdsSummonerIcon& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>(); 
    v.iconId = j.at("iconId").get<int32_t>(); 
  }
}