#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LogSeverityLevels.hpp>
namespace lol {
  struct LogEvent { 
    std::string message;
    LogSeverityLevels severity; 
  };
  inline void to_json(json& j, const LogEvent& v) {
    j["message"] = v.message; 
    j["severity"] = v.severity; 
  }
  inline void from_json(const json& j, LogEvent& v) {
    v.message = j.at("message").get<std::string>(); 
    v.severity = j.at("severity").get<LogSeverityLevels>(); 
  }
}