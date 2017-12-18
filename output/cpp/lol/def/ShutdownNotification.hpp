#pragma once
#include "../base_def.hpp" 
#include "ShutdownReason.hpp"
namespace lol {
  struct ShutdownNotification { 
    std::string additionalInfo;
    float countdown;
    ShutdownReason reason; 
  };
  inline void to_json(json& j, const ShutdownNotification& v) {
    j["additionalInfo"] = v.additionalInfo; 
    j["countdown"] = v.countdown; 
    j["reason"] = v.reason; 
  }
  inline void from_json(const json& j, ShutdownNotification& v) {
    v.additionalInfo = j.at("additionalInfo").get<std::string>(); 
    v.countdown = j.at("countdown").get<float>(); 
    v.reason = j.at("reason").get<ShutdownReason>(); 
  }
}