#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChampSelectChampSelectTradeContract.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolChampSelectChampSelectTradeContract>> GetLolChampSelectV1SessionTrades (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-champ-select/v1/session/trades?", { 
    }, { 
    }) };
  }
} 