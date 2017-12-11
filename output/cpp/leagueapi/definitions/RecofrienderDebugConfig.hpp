#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct RecofrienderDebugConfig { /**/ 
    std::optional<bool> isHttpLoggingEnabled;/**/
  };
  static void to_json(json& j, const RecofrienderDebugConfig& v) { 
    j["isHttpLoggingEnabled"] = v.isHttpLoggingEnabled;
  }
  static void from_json(const json& j, RecofrienderDebugConfig& v) { 
    v.isHttpLoggingEnabled = j.at("isHttpLoggingEnabled").get<std::optional<bool>>(); 
  }
} 