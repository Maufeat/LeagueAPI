#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolAccountVerificationIsVerifiedResponse { 
    bool success;
    std::string message;
    int32_t status; 
  };
  inline void to_json(json& j, const LolAccountVerificationIsVerifiedResponse& v) {
    j["success"] = v.success; 
    j["message"] = v.message; 
    j["status"] = v.status; 
  }
  inline void from_json(const json& j, LolAccountVerificationIsVerifiedResponse& v) {
    v.success = j.at("success").get<bool>(); 
    v.message = j.at("message").get<std::string>(); 
    v.status = j.at("status").get<int32_t>(); 
  }
}