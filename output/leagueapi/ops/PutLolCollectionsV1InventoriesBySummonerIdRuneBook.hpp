#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolCollectionsCollectionsRuneBook.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolCollectionsCollectionsRuneBook> PutLolCollectionsV1InventoriesBySummonerIdRuneBook (const https::Info& _info_,
      const uint64_t& summonerId /**/,
      const LolCollectionsCollectionsRuneBook& resource /**/ )
  { 
    return { https::Do(_info_, "put", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/rune-book?", { 
    }, { 
    },resource) };
  }
} 