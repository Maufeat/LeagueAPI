#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolHonorV2ProfileInfo { 
    int32_t honorLevel;
    bool rewardsLocked;
    int32_t checkpoint; 
  };
  inline void to_json(json& j, const LolHonorV2ProfileInfo& v) {
    j["honorLevel"] = v.honorLevel; 
    j["rewardsLocked"] = v.rewardsLocked; 
    j["checkpoint"] = v.checkpoint; 
  }
  inline void from_json(const json& j, LolHonorV2ProfileInfo& v) {
    v.honorLevel = j.at("honorLevel").get<int32_t>(); 
    v.rewardsLocked = j.at("rewardsLocked").get<bool>(); 
    v.checkpoint = j.at("checkpoint").get<int32_t>(); 
  }
}