#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLoginRegionStatus { 
    std::string platformId;
    bool isLQFallbackAllowed;
    bool enabled;
    bool isUserInfoEnabled; 
  };
  inline void to_json(json& j, const LolLoginRegionStatus& v) {
    j["platformId"] = v.platformId; 
    j["isLQFallbackAllowed"] = v.isLQFallbackAllowed; 
    j["enabled"] = v.enabled; 
    j["isUserInfoEnabled"] = v.isUserInfoEnabled; 
  }
  inline void from_json(const json& j, LolLoginRegionStatus& v) {
    v.platformId = j.at("platformId").get<std::string>(); 
    v.isLQFallbackAllowed = j.at("isLQFallbackAllowed").get<bool>(); 
    v.enabled = j.at("enabled").get<bool>(); 
    v.isUserInfoEnabled = j.at("isUserInfoEnabled").get<bool>(); 
  }
}