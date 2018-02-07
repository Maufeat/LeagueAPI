#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolHonorV2VendedHonorState { 
    int32_t level;
    int32_t checkpoint;
    bool rewardsLocked; 
  };
  inline void to_json(json& j, const LolHonorV2VendedHonorState& v) {
    j["level"] = v.level; 
    j["checkpoint"] = v.checkpoint; 
    j["rewardsLocked"] = v.rewardsLocked; 
  }
  inline void from_json(const json& j, LolHonorV2VendedHonorState& v) {
    v.level = j.at("level").get<int32_t>(); 
    v.checkpoint = j.at("checkpoint").get<int32_t>(); 
    v.rewardsLocked = j.at("rewardsLocked").get<bool>(); 
  }
}