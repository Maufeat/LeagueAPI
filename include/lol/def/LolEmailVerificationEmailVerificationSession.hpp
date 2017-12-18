#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEmailVerificationEmailVerificationSession { 
    std::string email;
    bool emailVerified; 
  };
  inline void to_json(json& j, const LolEmailVerificationEmailVerificationSession& v) {
    j["email"] = v.email; 
    j["emailVerified"] = v.emailVerified; 
  }
  inline void from_json(const json& j, LolEmailVerificationEmailVerificationSession& v) {
    v.email = j.at("email").get<std::string>(); 
    v.emailVerified = j.at("emailVerified").get<bool>(); 
  }
}