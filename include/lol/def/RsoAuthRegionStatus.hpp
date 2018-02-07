#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RsoAuthRegionStatus { 
    std::string platformId;
    bool enabled;
    bool isLQFallbackAllowed;
    bool isUserInfoEnabled; 
  };
  inline void to_json(json& j, const RsoAuthRegionStatus& v) {
    j["platformId"] = v.platformId; 
    j["enabled"] = v.enabled; 
    j["isLQFallbackAllowed"] = v.isLQFallbackAllowed; 
    j["isUserInfoEnabled"] = v.isUserInfoEnabled; 
  }
  inline void from_json(const json& j, RsoAuthRegionStatus& v) {
    v.platformId = j.at("platformId").get<std::string>(); 
    v.enabled = j.at("enabled").get<bool>(); 
    v.isLQFallbackAllowed = j.at("isLQFallbackAllowed").get<bool>(); 
    v.isUserInfoEnabled = j.at("isUserInfoEnabled").get<bool>(); 
  }
}