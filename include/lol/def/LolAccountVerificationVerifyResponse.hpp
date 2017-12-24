#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolAccountVerificationVerifyResponse { 
    bool success;
    std::string message;
    int32_t status; 
  };
  inline void to_json(json& j, const LolAccountVerificationVerifyResponse& v) {
    j["success"] = v.success; 
    j["message"] = v.message; 
    j["status"] = v.status; 
  }
  inline void from_json(const json& j, LolAccountVerificationVerifyResponse& v) {
    v.success = j.at("success").get<bool>(); 
    v.message = j.at("message").get<std::string>(); 
    v.status = j.at("status").get<int32_t>(); 
  }
}