#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolCollectionsCollectionsSummonerIcons { /**/ 
    uint64_t summonerId;/**/
    std::vector<int32_t> icons;/**/
  };
  static void to_json(json& j, const LolCollectionsCollectionsSummonerIcons& v) { 
    j["summonerId"] = v.summonerId;
    j["icons"] = v.icons;
  }
  static void from_json(const json& j, LolCollectionsCollectionsSummonerIcons& v) { 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.icons = j.at("icons").get<std::vector<int32_t>>(); 
  }
} 