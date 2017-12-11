#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolStoreCatalogItem.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolStoreCatalogItem> GetLolStoreV1SkinsBySkinId (const https::Info& _info_,
      const int32_t& skinId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-store/v1/skins/"+to_string(skinId)+"?", { 
    }, { 
    }) };
  }
} 