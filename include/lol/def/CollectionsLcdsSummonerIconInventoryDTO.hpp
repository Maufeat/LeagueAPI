#pragma once
#include "../base_def.hpp" 
#include "CollectionsLcdsSummonerIcon.hpp"
namespace lol {
  struct CollectionsLcdsSummonerIconInventoryDTO { 
    uint64_t summonerId;
    std::string dateString;
    std::vector<CollectionsLcdsSummonerIcon> summonerIcons; 
  };
  inline void to_json(json& j, const CollectionsLcdsSummonerIconInventoryDTO& v) {
    j["summonerId"] = v.summonerId; 
    j["dateString"] = v.dateString; 
    j["summonerIcons"] = v.summonerIcons; 
  }
  inline void from_json(const json& j, CollectionsLcdsSummonerIconInventoryDTO& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.dateString = j.at("dateString").get<std::string>(); 
    v.summonerIcons = j.at("summonerIcons").get<std::vector<CollectionsLcdsSummonerIcon>>(); 
  }
}