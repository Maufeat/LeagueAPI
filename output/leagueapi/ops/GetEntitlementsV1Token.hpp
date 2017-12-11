#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/EntitlementsToken.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<EntitlementsToken> GetEntitlementsV1Token (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/entitlements/v1/token?", { 
    }, { 
    },"") };
  }
} 