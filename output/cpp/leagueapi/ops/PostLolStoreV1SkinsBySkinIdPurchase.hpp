#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolStoreItemCost.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolStoreV1SkinsBySkinIdPurchase (const https::Info& _info_,
      const int32_t& skinId /**/,
      const LolStoreItemCost& cost /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-store/v1/skins/"+to_string(skinId)+"/purchase?", { 
    }, { 
    },cost) };
  }
} 