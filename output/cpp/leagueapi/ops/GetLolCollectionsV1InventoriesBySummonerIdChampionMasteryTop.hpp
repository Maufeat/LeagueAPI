#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolCollectionsCollectionsTopChampionMasteries.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolCollectionsCollectionsTopChampionMasteries> GetLolCollectionsV1InventoriesBySummonerIdChampionMasteryTop (const https::Info& _info_,
      const uint64_t& summonerId /**/,
      const uint64_t& limit /**/ ,
      const std::optional<std::string>& sortRule = std::nullopt /**/)
  { 
    return { https::Do(_info_, "get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/champion-mastery/top?", { 
      { "limit", to_string(limit) },
      { "sortRule", to_string(sortRule) },
    }, { 
    }) };
  }
} 