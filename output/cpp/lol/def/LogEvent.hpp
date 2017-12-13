#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LogSeverityLevels.hpp>
namespace lol {
  struct LogEvent { 
    std::string message;
    LogSeverityLevels severity; 
  };
  void to_json(json& j, const LogEvent& v) {
  j["message"] = v.message; 
  j["severity"] = v.severity; 
  }
  void from_json(const json& j, LogEvent& v) {
  v.message = j.at("message").get<std::string>(); 
  v.severity = j.at("severity").get<LogSeverityLevels>(); 
  }
}