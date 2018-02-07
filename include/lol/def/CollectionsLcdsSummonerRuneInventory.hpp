#pragma once
#include "../base_def.hpp" 
#include "CollectionsLcdsSummonerRune.hpp"
namespace lol {
  struct CollectionsLcdsSummonerRuneInventory { 
    std::string dateString;
    uint64_t summonerId;
    std::vector<CollectionsLcdsSummonerRune> summonerRunes; 
  };
  inline void to_json(json& j, const CollectionsLcdsSummonerRuneInventory& v) {
    j["dateString"] = v.dateString; 
    j["summonerId"] = v.summonerId; 
    j["summonerRunes"] = v.summonerRunes; 
  }
  inline void from_json(const json& j, CollectionsLcdsSummonerRuneInventory& v) {
    v.dateString = j.at("dateString").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerRunes = j.at("summonerRunes").get<std::vector<CollectionsLcdsSummonerRune>>(); 
  }
}