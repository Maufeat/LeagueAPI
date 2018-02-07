#pragma once
#include "../base_def.hpp" 
#include "CollectionsLcdsSummonerIcon.hpp"
namespace lol {
  struct CollectionsLcdsSummonerIconInventoryDTO { 
    std::string dateString;
    uint64_t summonerId;
    std::vector<CollectionsLcdsSummonerIcon> summonerIcons; 
  };
  inline void to_json(json& j, const CollectionsLcdsSummonerIconInventoryDTO& v) {
    j["dateString"] = v.dateString; 
    j["summonerId"] = v.summonerId; 
    j["summonerIcons"] = v.summonerIcons; 
  }
  inline void from_json(const json& j, CollectionsLcdsSummonerIconInventoryDTO& v) {
    v.dateString = j.at("dateString").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.summonerIcons = j.at("summonerIcons").get<std::vector<CollectionsLcdsSummonerIcon>>(); 
  }
}