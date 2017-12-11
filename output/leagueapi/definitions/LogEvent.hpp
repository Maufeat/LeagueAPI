#pragma once
#include <leagueapi/base.hpp>
#include "<leagueapi/definitions/LogSeverityLevels.hpp>"

namespace leagueapi {
  struct LogEvent { /*Describes a log entry.*/ 
    std::string message;/**/
    LogSeverityLevels severity;/**/
  };
  static void to_json(json& j, const LogEvent& v) { 
    j["message"] = v.message;
    j["severity"] = v.severity;
  }
  static void from_json(const json& j, LogEvent& v) { 
    v.message = j.at("message").get<std::string>(); 
    v.severity = j.at("severity").get<LogSeverityLevels>(); 
  }
} 