#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RsoAuthRegionStatus { 
    bool isLQFallbackAllowed;
    bool enabled;
    bool isUserInfoEnabled;
    std::string platformId; 
  };
  inline void to_json(json& j, const RsoAuthRegionStatus& v) {
    j["isLQFallbackAllowed"] = v.isLQFallbackAllowed; 
    j["enabled"] = v.enabled; 
    j["isUserInfoEnabled"] = v.isUserInfoEnabled; 
    j["platformId"] = v.platformId; 
  }
  inline void from_json(const json& j, RsoAuthRegionStatus& v) {
    v.isLQFallbackAllowed = j.at("isLQFallbackAllowed").get<bool>(); 
    v.enabled = j.at("enabled").get<bool>(); 
    v.isUserInfoEnabled = j.at("isUserInfoEnabled").get<bool>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
  }
}