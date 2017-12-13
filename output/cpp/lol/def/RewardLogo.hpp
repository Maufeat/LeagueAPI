#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct RewardLogo { 
    int32_t logo;
    int32_t memberOwnedCount; 
  };
  void to_json(json& j, const RewardLogo& v) {
  j["logo"] = v.logo; 
  j["memberOwnedCount"] = v.memberOwnedCount; 
  }
  void from_json(const json& j, RewardLogo& v) {
  v.logo = j.at("logo").get<int32_t>(); 
  v.memberOwnedCount = j.at("memberOwnedCount").get<int32_t>(); 
  }
}