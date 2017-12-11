#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolRankedStatsPluginStatus.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolRankedStatsPluginStatus> GetLolRankedStatsV1Status (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-ranked-stats/v1/status?", { 
    }, { 
    },"") };
  }
} 