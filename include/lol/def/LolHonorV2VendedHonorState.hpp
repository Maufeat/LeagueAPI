#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolHonorV2VendedHonorState { 
    int32_t checkpoint;
    bool rewardsLocked;
    int32_t level; 
  };
  inline void to_json(json& j, const LolHonorV2VendedHonorState& v) {
    j["checkpoint"] = v.checkpoint; 
    j["rewardsLocked"] = v.rewardsLocked; 
    j["level"] = v.level; 
  }
  inline void from_json(const json& j, LolHonorV2VendedHonorState& v) {
    v.checkpoint = j.at("checkpoint").get<int32_t>(); 
    v.rewardsLocked = j.at("rewardsLocked").get<bool>(); 
    v.level = j.at("level").get<int32_t>(); 
  }
}