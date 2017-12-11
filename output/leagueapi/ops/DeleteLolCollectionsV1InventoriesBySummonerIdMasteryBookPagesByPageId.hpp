#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> DeleteLolCollectionsV1InventoriesBySummonerIdMasteryBookPagesByPageId (const https::Info& _info_,
      const uint64_t& summonerId /**/,
      const uint32_t& pageId /**/ )
  { 
    return { https::Do(_info_, "delete", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/mastery-book/pages/"+to_string(pageId)+"?", { 
    }, { 
    },"") };
  }
} 