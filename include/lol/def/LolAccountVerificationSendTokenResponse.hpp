#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolAccountVerificationSendTokenResponse { 
    int32_t status;
    bool success;
    std::string message;
    int32_t smsTokenExpireDurationInSec; 
  };
  inline void to_json(json& j, const LolAccountVerificationSendTokenResponse& v) {
    j["status"] = v.status; 
    j["success"] = v.success; 
    j["message"] = v.message; 
    j["smsTokenExpireDurationInSec"] = v.smsTokenExpireDurationInSec; 
  }
  inline void from_json(const json& j, LolAccountVerificationSendTokenResponse& v) {
    v.status = j.at("status").get<int32_t>(); 
    v.success = j.at("success").get<bool>(); 
    v.message = j.at("message").get<std::string>(); 
    v.smsTokenExpireDurationInSec = j.at("smsTokenExpireDurationInSec").get<int32_t>(); 
  }
}