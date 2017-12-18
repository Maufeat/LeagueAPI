#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/CollectionsLcdsSummonerIcon.hpp>
namespace lol {
  struct CollectionsLcdsSummonerIconInventoryDTO { 
    std::vector<CollectionsLcdsSummonerIcon> summonerIcons;
    std::string dateString;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const CollectionsLcdsSummonerIconInventoryDTO& v) {
    j["summonerIcons"] = v.summonerIcons; 
    j["dateString"] = v.dateString; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, CollectionsLcdsSummonerIconInventoryDTO& v) {
    v.summonerIcons = j.at("summonerIcons").get<std::vector<CollectionsLcdsSummonerIcon>>(); 
    v.dateString = j.at("dateString").get<std::string>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}