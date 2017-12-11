#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolCollectionsCollectionsRunePage.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolCollectionsCollectionsRunePage> PutLolCollectionsV1InventoriesBySummonerIdRuneBookSelectPageByPageId (const https::Info& _info_,
      const uint64_t& summonerId /**/,
      const uint32_t& pageId /**/ )
  { 
    return { https::Do(_info_, "put", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/rune-book/select-page/"+to_string(pageId)+"?", { 
    }, { 
    },"") };
  }
} 