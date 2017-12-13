#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct RecofrienderDebugConfig { 
    std::optional<bool> isHttpLoggingEnabled; 
  };
  void to_json(json& j, const RecofrienderDebugConfig& v) {
  j["isHttpLoggingEnabled"] = v.isHttpLoggingEnabled; 
  }
  void from_json(const json& j, RecofrienderDebugConfig& v) {
  v.isHttpLoggingEnabled = j.at("isHttpLoggingEnabled").get<std::optional<bool>>(); 
  }
}