#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RecofrienderDebugConfig { 
    std::optional<bool> isHttpLoggingEnabled; 
  };
  inline void to_json(json& j, const RecofrienderDebugConfig& v) {
    if(v.isHttpLoggingEnabled)
      j["isHttpLoggingEnabled"] = *v.isHttpLoggingEnabled;
  }
  inline void from_json(const json& j, RecofrienderDebugConfig& v) {
    if(auto it = j.find("isHttpLoggingEnabled"); it != j.end() && !it->is_null())
      v.isHttpLoggingEnabled = it->get<std::optional<bool>>(); 
  }
}