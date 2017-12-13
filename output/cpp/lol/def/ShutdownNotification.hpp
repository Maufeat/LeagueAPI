#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/ShutdownReason.hpp>
namespace lol {
  struct ShutdownNotification { 
    float countdown;
    ShutdownReason reason;
    std::string additionalInfo; 
  };
  void to_json(json& j, const ShutdownNotification& v) {
  j["countdown"] = v.countdown; 
  j["reason"] = v.reason; 
  j["additionalInfo"] = v.additionalInfo; 
  }
  void from_json(const json& j, ShutdownNotification& v) {
  v.countdown = j.at("countdown").get<float>(); 
  v.reason = j.at("reason").get<ShutdownReason>(); 
  v.additionalInfo = j.at("additionalInfo").get<std::string>(); 
  }
}