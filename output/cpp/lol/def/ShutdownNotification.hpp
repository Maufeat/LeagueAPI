#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/ShutdownReason.hpp>
namespace lol {
  struct ShutdownNotification { 
    std::string additionalInfo;
    float countdown;
    ShutdownReason reason; 
  };
  void to_json(json& j, const ShutdownNotification& v) {
  j["additionalInfo"] = v.additionalInfo; 
  j["countdown"] = v.countdown; 
  j["reason"] = v.reason; 
  }
  void from_json(const json& j, ShutdownNotification& v) {
  v.additionalInfo = j.at("additionalInfo").get<std::string>(); 
  v.countdown = j.at("countdown").get<float>(); 
  v.reason = j.at("reason").get<ShutdownReason>(); 
  }
}