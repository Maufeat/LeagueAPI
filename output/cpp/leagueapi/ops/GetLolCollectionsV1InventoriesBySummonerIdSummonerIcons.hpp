#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolCollectionsCollectionsSummonerIcons.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolCollectionsCollectionsSummonerIcons> GetLolCollectionsV1InventoriesBySummonerIdSummonerIcons (const https::Info& _info_,
      const uint64_t& summonerId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/summoner-icons?", { 
    }, { 
    }) };
  }
} 