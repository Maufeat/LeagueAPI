#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolCollectionsCollectionsWardSkin.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolCollectionsCollectionsWardSkin> GetLolCollectionsV1InventoriesBySummonerIdWardSkinsByWardSkinId (const https::Info& _info_,
      const uint64_t& summonerId /**/,
      const int64_t& wardSkinId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/ward-skins/"+to_string(wardSkinId)+"?", { 
    }, { 
    }) };
  }
} 