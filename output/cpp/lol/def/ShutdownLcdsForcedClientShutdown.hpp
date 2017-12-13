#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct ShutdownLcdsForcedClientShutdown { 
    std::string additionalInfo;
    std::string reason; 
  };
  void to_json(json& j, const ShutdownLcdsForcedClientShutdown& v) {
    j["additionalInfo"] = v.additionalInfo; 
    j["reason"] = v.reason; 
  }
  void from_json(const json& j, ShutdownLcdsForcedClientShutdown& v) {
    v.additionalInfo = j.at("additionalInfo").get<std::string>(); 
    v.reason = j.at("reason").get<std::string>(); 
  }
}