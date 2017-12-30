#pragma once
#include "../base_def.hpp" 
#include "CollectionsLcdsSummonerRune.hpp"
namespace lol {
  struct CollectionsLcdsSummonerRuneInventory { 
    std::vector<CollectionsLcdsSummonerRune> summonerRunes;
    uint64_t summonerId;
    std::string dateString; 
  };
  inline void to_json(json& j, const CollectionsLcdsSummonerRuneInventory& v) {
    j["summonerRunes"] = v.summonerRunes; 
    j["summonerId"] = v.summonerId; 
    j["dateString"] = v.dateString; 
  }
  inline void from_json(const json& j, CollectionsLcdsSummonerRuneInventory& v) {
    v.summonerRunes = j.at("summonerRunes").get<std::vector<CollectionsLcdsSummonerRune>>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.dateString = j.at("dateString").get<std::string>(); 
  }
}