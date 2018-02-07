#pragma once
#include "../base_def.hpp" 
#include "ShutdownReason.hpp"
namespace lol {
  struct ShutdownNotification { 
    ShutdownReason reason;
    float countdown;
    std::string additionalInfo; 
  };
  inline void to_json(json& j, const ShutdownNotification& v) {
    j["reason"] = v.reason; 
    j["countdown"] = v.countdown; 
    j["additionalInfo"] = v.additionalInfo; 
  }
  inline void from_json(const json& j, ShutdownNotification& v) {
    v.reason = j.at("reason").get<ShutdownReason>(); 
    v.countdown = j.at("countdown").get<float>(); 
    v.additionalInfo = j.at("additionalInfo").get<std::string>(); 
  }
}