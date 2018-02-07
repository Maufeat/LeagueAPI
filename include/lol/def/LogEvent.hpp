#pragma once
#include "../base_def.hpp" 
#include "LogSeverityLevels.hpp"
namespace lol {
  struct LogEvent { 
    LogSeverityLevels severity;
    std::string message; 
  };
  inline void to_json(json& j, const LogEvent& v) {
    j["severity"] = v.severity; 
    j["message"] = v.message; 
  }
  inline void from_json(const json& j, LogEvent& v) {
    v.severity = j.at("severity").get<LogSeverityLevels>(); 
    v.message = j.at("message").get<std::string>(); 
  }
}