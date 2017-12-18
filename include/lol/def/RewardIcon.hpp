#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RewardIcon { 
    int32_t memberOwnedCount;
    int32_t icon; 
  };
  inline void to_json(json& j, const RewardIcon& v) {
    j["memberOwnedCount"] = v.memberOwnedCount; 
    j["icon"] = v.icon; 
  }
  inline void from_json(const json& j, RewardIcon& v) {
    v.memberOwnedCount = j.at("memberOwnedCount").get<int32_t>(); 
    v.icon = j.at("icon").get<int32_t>(); 
  }
}