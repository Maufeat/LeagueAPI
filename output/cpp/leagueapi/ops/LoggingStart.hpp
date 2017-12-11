#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LogSeverityLevels.hpp>

namespace leagueapi::op {
  /*Initializes the logging system.*/
  static https::Result<void> LoggingStart (const https::Info& _info_ ,
      const std::optional<bool>& buffered = std::nullopt /*Specifies whether logs will be buffered for LoggingGetEntries to work*/,
      const std::optional<LogSeverityLevels>& severity = std::nullopt /*Minimum severity level to fire a log event*/)
  { 
    return { https::Do(_info_, "post", "/LoggingStart?", { 
      { "buffered", to_string(buffered) },
      { "severity", to_string(severity) },
    }, { 
    }) };
  }
} 