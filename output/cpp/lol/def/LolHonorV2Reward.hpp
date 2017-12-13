#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolHonorV2Reward { 
    int32_t quantity;
    std::string rewardType;
    std::string message; 
  };
  void to_json(json& j, const LolHonorV2Reward& v) {
  j["quantity"] = v.quantity; 
  j["rewardType"] = v.rewardType; 
  j["message"] = v.message; 
  }
  void from_json(const json& j, LolHonorV2Reward& v) {
  v.quantity = j.at("quantity").get<int32_t>(); 
  v.rewardType = j.at("rewardType").get<std::string>(); 
  v.message = j.at("message").get<std::string>(); 
  }
}