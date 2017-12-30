#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolHonorV2VendedHonorState { 
    bool rewardsLocked;
    int32_t level;
    int32_t checkpoint; 
  };
  inline void to_json(json& j, const LolHonorV2VendedHonorState& v) {
    j["rewardsLocked"] = v.rewardsLocked; 
    j["level"] = v.level; 
    j["checkpoint"] = v.checkpoint; 
  }
  inline void from_json(const json& j, LolHonorV2VendedHonorState& v) {
    v.rewardsLocked = j.at("rewardsLocked").get<bool>(); 
    v.level = j.at("level").get<int32_t>(); 
    v.checkpoint = j.at("checkpoint").get<int32_t>(); 
  }
}