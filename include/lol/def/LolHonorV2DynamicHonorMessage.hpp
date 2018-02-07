#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolHonorV2DynamicHonorMessage { 
    std::string messageId;
    int32_t value; 
  };
  inline void to_json(json& j, const LolHonorV2DynamicHonorMessage& v) {
    j["messageId"] = v.messageId; 
    j["value"] = v.value; 
  }
  inline void from_json(const json& j, LolHonorV2DynamicHonorMessage& v) {
    v.messageId = j.at("messageId").get<std::string>(); 
    v.value = j.at("value").get<int32_t>(); 
  }
}