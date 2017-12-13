#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolEmailVerificationEmailVerificationSession { 
    bool emailVerified;
    std::string email; 
  };
  void to_json(json& j, const LolEmailVerificationEmailVerificationSession& v) {
  j["emailVerified"] = v.emailVerified; 
  j["email"] = v.email; 
  }
  void from_json(const json& j, LolEmailVerificationEmailVerificationSession& v) {
  v.emailVerified = j.at("emailVerified").get<bool>(); 
  v.email = j.at("email").get<std::string>(); 
  }
}