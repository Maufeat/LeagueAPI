#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEmailVerificationRemoteEmailVerificationSession { 
    std::string email;
    bool emailVerified; 
  };
  inline void to_json(json& j, const LolEmailVerificationRemoteEmailVerificationSession& v) {
    j["email"] = v.email; 
    j["emailVerified"] = v.emailVerified; 
  }
  inline void from_json(const json& j, LolEmailVerificationRemoteEmailVerificationSession& v) {
    v.email = j.at("email").get<std::string>(); 
    v.emailVerified = j.at("emailVerified").get<bool>(); 
  }
}