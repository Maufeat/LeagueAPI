#pragma once
#include "../base_def.hpp" 
#include "LolHonorV2DynamicHonorMessage.hpp"
namespace lol {
  struct LolHonorV2VendedReward { 
    std::string rewardType;
    int32_t quantity;
    LolHonorV2DynamicHonorMessage dynamicHonorMessage; 
  };
  inline void to_json(json& j, const LolHonorV2VendedReward& v) {
    j["rewardType"] = v.rewardType; 
    j["quantity"] = v.quantity; 
    j["dynamicHonorMessage"] = v.dynamicHonorMessage; 
  }
  inline void from_json(const json& j, LolHonorV2VendedReward& v) {
    v.rewardType = j.at("rewardType").get<std::string>(); 
    v.quantity = j.at("quantity").get<int32_t>(); 
    v.dynamicHonorMessage = j.at("dynamicHonorMessage").get<LolHonorV2DynamicHonorMessage>(); 
  }
}