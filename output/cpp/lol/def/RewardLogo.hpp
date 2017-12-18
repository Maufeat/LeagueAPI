#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct RewardLogo { 
    int32_t memberOwnedCount;
    int32_t logo; 
  };
  inline void to_json(json& j, const RewardLogo& v) {
    j["memberOwnedCount"] = v.memberOwnedCount; 
    j["logo"] = v.logo; 
  }
  inline void from_json(const json& j, RewardLogo& v) {
    v.memberOwnedCount = j.at("memberOwnedCount").get<int32_t>(); 
    v.logo = j.at("logo").get<int32_t>(); 
  }
}