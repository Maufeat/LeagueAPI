#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChampSelectLegacyChampSelectTradeContract.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChampSelectLegacyChampSelectTradeContract> GetLolChampSelectLegacyV1SessionTradesById (const https::Info& _info_,
      const int64_t& id /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-champ-select-legacy/v1/session/trades/"+to_string(id)+"?", { 
    }, { 
    },"") };
  }
} 