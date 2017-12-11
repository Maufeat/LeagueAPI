#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChampionsCollectionsChampionMinimal.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolChampionsCollectionsChampionMinimal>> GetLolChampionsV1InventoriesBySummonerIdChampionsMinimal (const https::Info& _info_,
      const uint64_t& summonerId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/champions-minimal?", { 
    }, { 
    },"") };
  }
} 