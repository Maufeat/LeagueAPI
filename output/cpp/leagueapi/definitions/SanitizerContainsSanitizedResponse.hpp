#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct SanitizerContainsSanitizedResponse { /**/ 
    bool contains;/**/
  };
  static void to_json(json& j, const SanitizerContainsSanitizedResponse& v) { 
    j["contains"] = v.contains;
  }
  static void from_json(const json& j, SanitizerContainsSanitizedResponse& v) { 
    v.contains = j.at("contains").get<bool>(); 
  }
} 