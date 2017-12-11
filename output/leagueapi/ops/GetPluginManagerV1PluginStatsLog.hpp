#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Write the current plugin stats for the log file.*/
  static https::Result<void> GetPluginManagerV1PluginStatsLog (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/plugin-manager/v1/plugin-stats/log?", { 
    }, { 
    },"") };
  }
} 