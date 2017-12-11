#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolRankedStatsRankedData.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolRankedStatsRankedData> GetLolRankedStatsV1StatsBySummonerId (const https::Info& _info_,
      const uint64_t& summonerId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-ranked-stats/v1/stats/"+to_string(summonerId)+"?", { 
    }, { 
    }) };
  }
} 