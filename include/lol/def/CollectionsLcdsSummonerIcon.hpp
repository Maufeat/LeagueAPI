#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct CollectionsLcdsSummonerIcon { 
    uint64_t purchaseDate;
    uint64_t summonerId;
    int32_t iconId; 
  };
  inline void to_json(json& j, const CollectionsLcdsSummonerIcon& v) {
    j["purchaseDate"] = v.purchaseDate; 
    j["summonerId"] = v.summonerId; 
    j["iconId"] = v.iconId; 
  }
  inline void from_json(const json& j, CollectionsLcdsSummonerIcon& v) {
    v.purchaseDate = j.at("purchaseDate").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.iconId = j.at("iconId").get<int32_t>(); 
  }
}