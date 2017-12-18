#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolAccountVerificationDeviceResponse { 
    int32_t status;
    bool success;
    std::string message; 
  };
  inline void to_json(json& j, const LolAccountVerificationDeviceResponse& v) {
    j["status"] = v.status; 
    j["success"] = v.success; 
    j["message"] = v.message; 
  }
  inline void from_json(const json& j, LolAccountVerificationDeviceResponse& v) {
    v.status = j.at("status").get<int32_t>(); 
    v.success = j.at("success").get<bool>(); 
    v.message = j.at("message").get<std::string>(); 
  }
}