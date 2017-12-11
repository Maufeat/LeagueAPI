#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolCollectionsCollectionsMasteryPage.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolCollectionsCollectionsMasteryPage> PutLolCollectionsV1InventoriesBySummonerIdMasteryBookPages (const https::Info& _info_,
      const uint64_t& summonerId /**/,
      const LolCollectionsCollectionsMasteryPage& resource /**/ )
  { 
    return { https::Do(_info_, "put", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/mastery-book/pages?", { 
    }, { 
    },resource) };
  }
} 