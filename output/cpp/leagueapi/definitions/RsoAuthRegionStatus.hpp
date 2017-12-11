#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct RsoAuthRegionStatus { /**/ 
    bool enabled;/**/
    bool isUserInfoEnabled;/**/
    bool isLQFallbackAllowed;/**/
    std::string platformId;/**/
  };
  static void to_json(json& j, const RsoAuthRegionStatus& v) { 
    j["enabled"] = v.enabled;
    j["isUserInfoEnabled"] = v.isUserInfoEnabled;
    j["isLQFallbackAllowed"] = v.isLQFallbackAllowed;
    j["platformId"] = v.platformId;
  }
  static void from_json(const json& j, RsoAuthRegionStatus& v) { 
    v.enabled = j.at("enabled").get<bool>(); 
    v.isUserInfoEnabled = j.at("isUserInfoEnabled").get<bool>(); 
    v.isLQFallbackAllowed = j.at("isLQFallbackAllowed").get<bool>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
  }
} 