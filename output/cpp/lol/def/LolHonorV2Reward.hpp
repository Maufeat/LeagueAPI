#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolHonorV2Reward { 
    std::string message;
    int32_t quantity;
    std::string rewardType; 
  };
  void to_json(json& j, const LolHonorV2Reward& v) {
    j["message"] = v.message; 
    j["quantity"] = v.quantity; 
    j["rewardType"] = v.rewardType; 
  }
  void from_json(const json& j, LolHonorV2Reward& v) {
    v.message = j.at("message").get<std::string>(); 
    v.quantity = j.at("quantity").get<int32_t>(); 
    v.rewardType = j.at("rewardType").get<std::string>(); 
  }
}