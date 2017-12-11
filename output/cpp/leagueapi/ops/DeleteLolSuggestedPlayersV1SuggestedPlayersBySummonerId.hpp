#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> DeleteLolSuggestedPlayersV1SuggestedPlayersBySummonerId (const https::Info& _info_,
      const uint64_t& summonerId /**/ )
  { 
    return { https::Do(_info_, "delete", "/lol-suggested-players/v1/suggested-players/"+to_string(summonerId)+"?", { 
    }, { 
    }) };
  }
} 