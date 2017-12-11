#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolCollectionsCollectionsRunePage.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolCollectionsCollectionsRunePage> PutLolCollectionsV1InventoriesBySummonerIdRuneBookPagesByPageId (const https::Info& _info_,
      const uint64_t& summonerId /**/,
      const uint32_t& pageId /**/,
      const LolCollectionsCollectionsRunePage& resource /**/ )
  { 
    return { https::Do(_info_, "put", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/rune-book/pages/"+to_string(pageId)+"?", { 
    }, { 
    },resource) };
  }
} 