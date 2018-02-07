#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolHonorV2ServiceProxyRetrieveProfileResponse { 
    int32_t honorLevel;
    int32_t checkpoint;
    bool rewardsLocked; 
  };
  inline void to_json(json& j, const LolHonorV2ServiceProxyRetrieveProfileResponse& v) {
    j["honorLevel"] = v.honorLevel; 
    j["checkpoint"] = v.checkpoint; 
    j["rewardsLocked"] = v.rewardsLocked; 
  }
  inline void from_json(const json& j, LolHonorV2ServiceProxyRetrieveProfileResponse& v) {
    v.honorLevel = j.at("honorLevel").get<int32_t>(); 
    v.checkpoint = j.at("checkpoint").get<int32_t>(); 
    v.rewardsLocked = j.at("rewardsLocked").get<bool>(); 
  }
}