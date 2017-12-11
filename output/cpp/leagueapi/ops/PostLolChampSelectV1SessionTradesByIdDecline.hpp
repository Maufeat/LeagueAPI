#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolChampSelectV1SessionTradesByIdDecline (const https::Info& _info_,
      const int64_t& id /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-champ-select/v1/session/trades/"+to_string(id)+"/decline?", { 
    }, { 
    }) };
  }
} 