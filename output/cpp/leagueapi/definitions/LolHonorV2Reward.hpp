#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolHonorV2Reward { /**/ 
    int32_t quantity;/**/
    std::string rewardType;/**/
    std::string message;/**/
  };
  static void to_json(json& j, const LolHonorV2Reward& v) { 
    j["quantity"] = v.quantity;
    j["rewardType"] = v.rewardType;
    j["message"] = v.message;
  }
  static void from_json(const json& j, LolHonorV2Reward& v) { 
    v.quantity = j.at("quantity").get<int32_t>(); 
    v.rewardType = j.at("rewardType").get<std::string>(); 
    v.message = j.at("message").get<std::string>(); 
  }
} 