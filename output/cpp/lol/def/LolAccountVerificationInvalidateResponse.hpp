#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolAccountVerificationInvalidateResponse { 
    int32_t status;
    bool success;
    std::string message;
    int32_t smsTokenExpireDurationInSec; 
  };
  void to_json(json& j, const LolAccountVerificationInvalidateResponse& v) {
    j["status"] = v.status; 
    j["success"] = v.success; 
    j["message"] = v.message; 
    j["smsTokenExpireDurationInSec"] = v.smsTokenExpireDurationInSec; 
  }
  void from_json(const json& j, LolAccountVerificationInvalidateResponse& v) {
    v.status = j.at("status").get<int32_t>(); 
    v.success = j.at("success").get<bool>(); 
    v.message = j.at("message").get<std::string>(); 
    v.smsTokenExpireDurationInSec = j.at("smsTokenExpireDurationInSec").get<int32_t>(); 
  }
}