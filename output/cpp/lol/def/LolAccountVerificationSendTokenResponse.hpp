#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolAccountVerificationSendTokenResponse { 
    int32_t smsTokenExpireDurationInSec;
    std::string message;
    int32_t status;
    bool success; 
  };
  void to_json(json& j, const LolAccountVerificationSendTokenResponse& v) {
  j["smsTokenExpireDurationInSec"] = v.smsTokenExpireDurationInSec; 
  j["message"] = v.message; 
  j["status"] = v.status; 
  j["success"] = v.success; 
  }
  void from_json(const json& j, LolAccountVerificationSendTokenResponse& v) {
  v.smsTokenExpireDurationInSec = j.at("smsTokenExpireDurationInSec").get<int32_t>(); 
  v.message = j.at("message").get<std::string>(); 
  v.status = j.at("status").get<int32_t>(); 
  v.success = j.at("success").get<bool>(); 
  }
}