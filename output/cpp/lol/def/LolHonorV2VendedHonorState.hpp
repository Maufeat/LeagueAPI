#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolHonorV2VendedHonorState { 
    int32_t level;
    bool rewardsLocked;
    int32_t checkpoint; 
  };
  inline void to_json(json& j, const LolHonorV2VendedHonorState& v) {
    j["level"] = v.level; 
    j["rewardsLocked"] = v.rewardsLocked; 
    j["checkpoint"] = v.checkpoint; 
  }
  inline void from_json(const json& j, LolHonorV2VendedHonorState& v) {
    v.level = j.at("level").get<int32_t>(); 
    v.rewardsLocked = j.at("rewardsLocked").get<bool>(); 
    v.checkpoint = j.at("checkpoint").get<int32_t>(); 
  }
}