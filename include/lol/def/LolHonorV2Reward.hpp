#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolHonorV2Reward { 
    std::string message;
    std::string rewardType;
    int32_t quantity; 
  };
  inline void to_json(json& j, const LolHonorV2Reward& v) {
    j["message"] = v.message; 
    j["rewardType"] = v.rewardType; 
    j["quantity"] = v.quantity; 
  }
  inline void from_json(const json& j, LolHonorV2Reward& v) {
    v.message = j.at("message").get<std::string>(); 
    v.rewardType = j.at("rewardType").get<std::string>(); 
    v.quantity = j.at("quantity").get<int32_t>(); 
  }
}