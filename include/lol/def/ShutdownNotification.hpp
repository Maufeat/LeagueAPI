#pragma once
#include "../base_def.hpp" 
#include "ShutdownReason.hpp"
namespace lol {
  struct ShutdownNotification { 
    float countdown;
    ShutdownReason reason;
    std::string additionalInfo; 
  };
  inline void to_json(json& j, const ShutdownNotification& v) {
    j["countdown"] = v.countdown; 
    j["reason"] = v.reason; 
    j["additionalInfo"] = v.additionalInfo; 
  }
  inline void from_json(const json& j, ShutdownNotification& v) {
    v.countdown = j.at("countdown").get<float>(); 
    v.reason = j.at("reason").get<ShutdownReason>(); 
    v.additionalInfo = j.at("additionalInfo").get<std::string>(); 
  }
}