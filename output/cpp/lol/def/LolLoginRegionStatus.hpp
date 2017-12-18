#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolLoginRegionStatus { 
    bool isLQFallbackAllowed;
    bool isUserInfoEnabled;
    bool enabled;
    std::string platformId; 
  };
  inline void to_json(json& j, const LolLoginRegionStatus& v) {
    j["isLQFallbackAllowed"] = v.isLQFallbackAllowed; 
    j["isUserInfoEnabled"] = v.isUserInfoEnabled; 
    j["enabled"] = v.enabled; 
    j["platformId"] = v.platformId; 
  }
  inline void from_json(const json& j, LolLoginRegionStatus& v) {
    v.isLQFallbackAllowed = j.at("isLQFallbackAllowed").get<bool>(); 
    v.isUserInfoEnabled = j.at("isUserInfoEnabled").get<bool>(); 
    v.enabled = j.at("enabled").get<bool>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
  }
}