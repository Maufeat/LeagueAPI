#pragma once
#include "../base_def.hpp" 
#include "CollectionsLcdsSummonerRune.hpp"
namespace lol {
  struct CollectionsLcdsSummonerRuneInventory { 
    std::vector<CollectionsLcdsSummonerRune> summonerRunes;
    std::string dateString;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const CollectionsLcdsSummonerRuneInventory& v) {
    j["summonerRunes"] = v.summonerRunes; 
    j["dateString"] = v.dateString; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, CollectionsLcdsSummonerRuneInventory& v) {
    v.summonerRunes = j.at("summonerRunes").get<std::vector<CollectionsLcdsSummonerRune>>(); 
    v.dateString = j.at("dateString").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}