#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolEmailVerificationEmailVerificationSession { 
    std::string email;
    bool emailVerified; 
  };
  void to_json(json& j, const LolEmailVerificationEmailVerificationSession& v) {
    j["email"] = v.email; 
    j["emailVerified"] = v.emailVerified; 
  }
  void from_json(const json& j, LolEmailVerificationEmailVerificationSession& v) {
    v.email = j.at("email").get<std::string>(); 
    v.emailVerified = j.at("emailVerified").get<bool>(); 
  }
}