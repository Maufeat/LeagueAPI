#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/CollectionsLcdsSummonerRune.hpp>

namespace leagueapi {
  struct CollectionsLcdsSummonerRuneInventory { /**/ 
    uint64_t summonerId;/**/
    std::string dateString;/**/
    std::vector<CollectionsLcdsSummonerRune> summonerRunes;/**/
  };
  static void to_json(json& j, const CollectionsLcdsSummonerRuneInventory& v) { 
    j["summonerId"] = v.summonerId;
    j["dateString"] = v.dateString;
    j["summonerRunes"] = v.summonerRunes;
  }
  static void from_json(const json& j, CollectionsLcdsSummonerRuneInventory& v) { 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.dateString = j.at("dateString").get<std::string>(); 
    v.summonerRunes = j.at("summonerRunes").get<std::vector<CollectionsLcdsSummonerRune>>(); 
  }
} 