#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ShutdownLcdsForcedClientShutdown { 
    std::string reason;
    std::string additionalInfo; 
  };
  inline void to_json(json& j, const ShutdownLcdsForcedClientShutdown& v) {
    j["reason"] = v.reason; 
    j["additionalInfo"] = v.additionalInfo; 
  }
  inline void from_json(const json& j, ShutdownLcdsForcedClientShutdown& v) {
    v.reason = j.at("reason").get<std::string>(); 
    v.additionalInfo = j.at("additionalInfo").get<std::string>(); 
  }
}