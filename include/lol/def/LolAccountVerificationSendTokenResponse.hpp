#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolAccountVerificationSendTokenResponse { 
    bool success;
    std::string message;
    int32_t status;
    int32_t smsTokenExpireDurationInSec; 
  };
  inline void to_json(json& j, const LolAccountVerificationSendTokenResponse& v) {
    j["success"] = v.success; 
    j["message"] = v.message; 
    j["status"] = v.status; 
    j["smsTokenExpireDurationInSec"] = v.smsTokenExpireDurationInSec; 
  }
  inline void from_json(const json& j, LolAccountVerificationSendTokenResponse& v) {
    v.success = j.at("success").get<bool>(); 
    v.message = j.at("message").get<std::string>(); 
    v.status = j.at("status").get<int32_t>(); 
    v.smsTokenExpireDurationInSec = j.at("smsTokenExpireDurationInSec").get<int32_t>(); 
  }
}