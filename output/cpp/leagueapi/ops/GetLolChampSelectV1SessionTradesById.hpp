#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChampSelectChampSelectTradeContract.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChampSelectChampSelectTradeContract> GetLolChampSelectV1SessionTradesById (const https::Info& _info_,
      const int64_t& id /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-champ-select/v1/session/trades/"+to_string(id)+"?", { 
    }, { 
    }) };
  }
} 