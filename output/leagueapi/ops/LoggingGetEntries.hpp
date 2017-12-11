#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LogEvent.hpp>

namespace leagueapi::op {
  /*Gets all buffered log entries since the last call.*/
  static https::Result<std::vector<LogEvent>> LoggingGetEntries (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/LoggingGetEntries?", { 
    }, { 
    },"") };
  }
} 