#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolCollectionsCollectionsWardSkin.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolCollectionsCollectionsWardSkin>> GetLolCollectionsV1InventoriesBySummonerIdWardSkins (const https::Info& _info_,
      const uint64_t& summonerId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-collections/v1/inventories/"+to_string(summonerId)+"/ward-skins?", { 
    }, { 
    },"") };
  }
} 