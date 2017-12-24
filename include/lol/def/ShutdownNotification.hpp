#pragma once
#include "../base_def.hpp" 
#include "ShutdownReason.hpp"
namespace lol {
  struct ShutdownNotification { 
    ShutdownReason reason;
    std::string additionalInfo;
    float countdown; 
  };
  inline void to_json(json& j, const ShutdownNotification& v) {
    j["reason"] = v.reason; 
    j["additionalInfo"] = v.additionalInfo; 
    j["countdown"] = v.countdown; 
  }
  inline void from_json(const json& j, ShutdownNotification& v) {
    v.reason = j.at("reason").get<ShutdownReason>(); 
    v.additionalInfo = j.at("additionalInfo").get<std::string>(); 
    v.countdown = j.at("countdown").get<float>(); 
  }
}