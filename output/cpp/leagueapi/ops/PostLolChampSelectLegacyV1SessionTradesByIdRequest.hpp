#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolChampSelectLegacyChampSelectTradeContract.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolChampSelectLegacyChampSelectTradeContract> PostLolChampSelectLegacyV1SessionTradesByIdRequest (const https::Info& _info_,
      const int64_t& id /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-champ-select-legacy/v1/session/trades/"+to_string(id)+"/request?", { 
    }, { 
    }) };
  }
} 