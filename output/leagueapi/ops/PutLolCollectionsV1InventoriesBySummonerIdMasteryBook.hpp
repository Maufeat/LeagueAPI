#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolCollectionsCollectionsMasteryBook.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolCollectionsCollectionsMasteryBook> PutLolCollectionsV1InventoriesBySummonerIdMasteryBook (const https::Info& _info_,
      const uint64_t& summonerId /**/,
      const LolCollectionsCollectionsMasteryBook& resource /**/ )
  { 
    return { https::Do(_info_, "put", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/mastery-book?", { 
    }, { 
    },resource) };
  }
} 