#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Adds the enclosed log to the app's bugsplat report.*/
  static https::Result<void> PostRiotclientV1BugsplatLogs (const https::Info& _info_,
      const std::string& logFilePath /*Full path to the log file.*/ )
  { 
    return { https::Do(_info_, "post", "/riotclient/v1/bugsplat/logs?", { 
    }, { 
    },logFilePath) };
  }
} 