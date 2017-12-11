#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClashRosterStats.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolClashRosterStats> GetLolClashV1RosterByRosterIdStats (const https::Info& _info_,
      const int64_t& rosterId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-clash/v1/roster/"+to_string(rosterId)+"/stats?", { 
    }, { 
    },"") };
  }
} 