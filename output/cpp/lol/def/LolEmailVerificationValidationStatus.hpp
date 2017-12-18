#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolEmailVerificationValidationStatus { 
    std::string emailStatus; 
  };
  inline void to_json(json& j, const LolEmailVerificationValidationStatus& v) {
    j["emailStatus"] = v.emailStatus; 
  }
  inline void from_json(const json& j, LolEmailVerificationValidationStatus& v) {
    v.emailStatus = j.at("emailStatus").get<std::string>(); 
  }
}