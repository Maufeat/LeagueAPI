#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLoginLoginSessionWallet.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLoginLoginSessionWallet> GetLolLoginV1Wallet (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-login/v1/wallet?", { 
    }, { 
    },"") };
  }
} 