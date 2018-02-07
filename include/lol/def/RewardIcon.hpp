#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RewardIcon { 
    int32_t icon;
    int32_t memberOwnedCount; 
  };
  inline void to_json(json& j, const RewardIcon& v) {
    j["icon"] = v.icon; 
    j["memberOwnedCount"] = v.memberOwnedCount; 
  }
  inline void from_json(const json& j, RewardIcon& v) {
    v.icon = j.at("icon").get<int32_t>(); 
    v.memberOwnedCount = j.at("memberOwnedCount").get<int32_t>(); 
  }
}