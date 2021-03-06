#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct CollectionsLcdsSummonerIcon { 
    int32_t iconId;
    uint64_t purchaseDate;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const CollectionsLcdsSummonerIcon& v) {
    j["iconId"] = v.iconId; 
    j["purchaseDate"] = v.purchaseDate; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, CollectionsLcdsSummonerIcon& v) {
    v.iconId = j.at("iconId").get<int32_t>(); 
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}