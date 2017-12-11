#pragma once
#include <leagueapi/base.hpp>
namespace leagueapi {
  enum class LogSeverityLevels { /*Allowable severity levels for log events.*/ 
    Always_e = 3, /*Always logged, regardless of program's state*/ 
    Error_e = 2, /*Critical failure; thread may terminate*/ 
    Okay_e = 0, /*Progress nominal (used for INFO and TRACE)*/ 
    Warning_e = 1, /*Progress expected to continue, despite issues*/ 
  };
  static void to_json(json& j, const LogSeverityLevels& v) {
    switch(v) { 
    case LogSeverityLevels::Always_e:
      j = "Always";
    break;
    case LogSeverityLevels::Error_e:
      j = "Error";
    break;
    case LogSeverityLevels::Okay_e:
      j = "Okay";
    break;
    case LogSeverityLevels::Warning_e:
      j = "Warning";
    break;
    };
  }
  static void from_json(const json& j, LogSeverityLevels& v) {
    auto s = j.get<std::string>(); 
    if(s == "Always") {
      v = LogSeverityLevels::Always_e;
      return;
    } 
    if(s == "Error") {
      v = LogSeverityLevels::Error_e;
      return;
    } 
    if(s == "Okay") {
      v = LogSeverityLevels::Okay_e;
      return;
    } 
    if(s == "Warning") {
      v = LogSeverityLevels::Warning_e;
      return;
    } 
  }
} 