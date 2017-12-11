#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolCollectionsCollectionsSummonerSpells.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolCollectionsCollectionsSummonerSpells> GetLolCollectionsV1InventoriesBySummonerIdSpells (const https::Info& _info_,
      const uint64_t& summonerId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/spells?", { 
    }, { 
    },"") };
  }
} 