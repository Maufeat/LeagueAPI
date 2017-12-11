#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/CollectionsLcdsSummonerIcon.hpp>"

namespace leagueapi {
  struct CollectionsLcdsSummonerIconInventoryDTO { /**/ 
    std::vector<CollectionsLcdsSummonerIcon> summonerIcons;/**/
    uint64_t summonerId;/**/
    std::string dateString;/**/
  };
  static void to_json(json& j, const CollectionsLcdsSummonerIconInventoryDTO& v) { 
    j["summonerIcons"] = v.summonerIcons;
    j["summonerId"] = v.summonerId;
    j["dateString"] = v.dateString;
  }
  static void from_json(const json& j, CollectionsLcdsSummonerIconInventoryDTO& v) { 
    v.summonerIcons = j.at("summonerIcons").get<std::vector<CollectionsLcdsSummonerIcon>>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.dateString = j.at("dateString").get<std::string>(); 
  }
} 