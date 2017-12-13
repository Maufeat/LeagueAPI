#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LogSeverityLevels {  
    Always_e = 3,
    Error_e = 2,
    Okay_e = 0,
    Warning_e = 1,
  };
  void to_json(json& j, const LogSeverityLevels& v) {
    if(v == LogSeverityLevels::Always_e) {
      j = "Always";
      return;
    }
    if(v == LogSeverityLevels::Error_e) {
      j = "Error";
      return;
    }
    if(v == LogSeverityLevels::Okay_e) {
      j = "Okay";
      return;
    }
    if(v == LogSeverityLevels::Warning_e) {
      j = "Warning";
      return;
    }
  }
  void from_json(const json& j, LogSeverityLevels& v) {
    if(j.get<std::string>() == "Always") {
      v = LogSeverityLevels::Always_e;
      return;
    } 
    if(j.get<std::string>() == "Error") {
      v = LogSeverityLevels::Error_e;
      return;
    } 
    if(j.get<std::string>() == "Okay") {
      v = LogSeverityLevels::Okay_e;
      return;
    } 
    if(j.get<std::string>() == "Warning") {
      v = LogSeverityLevels::Warning_e;
      return;
    } 
  }
}