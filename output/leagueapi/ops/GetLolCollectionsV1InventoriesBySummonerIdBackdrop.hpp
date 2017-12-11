#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolCollectionsCollectionsSummonerBackdrop.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolCollectionsCollectionsSummonerBackdrop> GetLolCollectionsV1InventoriesBySummonerIdBackdrop (const https::Info& _info_,
      const uint64_t& summonerId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/backdrop?", { 
    }, { 
    },"") };
  }
} 