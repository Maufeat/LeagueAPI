#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolAccountVerificationVerifyResponse { 
    std::string message;
    int32_t status;
    bool success; 
  };
  void to_json(json& j, const LolAccountVerificationVerifyResponse& v) {
  j["message"] = v.message; 
  j["status"] = v.status; 
  j["success"] = v.success; 
  }
  void from_json(const json& j, LolAccountVerificationVerifyResponse& v) {
  v.message = j.at("message").get<std::string>(); 
  v.status = j.at("status").get<int32_t>(); 
  v.success = j.at("success").get<bool>(); 
  }
}