#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChampionsCollectionsChampionPlayableCounts.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChampionsCollectionsChampionPlayableCounts> GetLolChampionsV1InventoriesBySummonerIdChampionsPlayableCount (const https::Info& _info_,
      const uint64_t& summonerId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/champions-playable-count?", { 
    }, { 
    },"") };
  }
} 