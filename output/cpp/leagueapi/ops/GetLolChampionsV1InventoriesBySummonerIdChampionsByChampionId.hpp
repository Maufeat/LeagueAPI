#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChampionsCollectionsChampion.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChampionsCollectionsChampion> GetLolChampionsV1InventoriesBySummonerIdChampionsByChampionId (const https::Info& _info_,
      const uint64_t& summonerId /**/,
      const int32_t& championId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-champions/v1/inventories/"+to_string(summonerId)+"/champions/"+to_string(championId)+"?", { 
    }, { 
    }) };
  }
} 