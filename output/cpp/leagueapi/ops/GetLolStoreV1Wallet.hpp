#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolStoreWallet.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolStoreWallet> GetLolStoreV1Wallet (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-store/v1/wallet?", { 
    }, { 
    }) };
  }
} 