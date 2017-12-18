#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolAccountVerificationIsVerifiedResponse { 
    int32_t status;
    bool success;
    std::string message; 
  };
  inline void to_json(json& j, const LolAccountVerificationIsVerifiedResponse& v) {
    j["status"] = v.status; 
    j["success"] = v.success; 
    j["message"] = v.message; 
  }
  inline void from_json(const json& j, LolAccountVerificationIsVerifiedResponse& v) {
    v.status = j.at("status").get<int32_t>(); 
    v.success = j.at("success").get<bool>(); 
    v.message = j.at("message").get<std::string>(); 
  }
}