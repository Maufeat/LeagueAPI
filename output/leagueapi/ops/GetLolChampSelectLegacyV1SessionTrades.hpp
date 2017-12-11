#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChampSelectLegacyChampSelectTradeContract.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolChampSelectLegacyChampSelectTradeContract>> GetLolChampSelectLegacyV1SessionTrades (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-champ-select-legacy/v1/session/trades?", { 
    }, { 
    },"") };
  }
} 