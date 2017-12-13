#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolEmailVerificationEmailUpdate { 
    std::string email;
    std::string password; 
  };
  void to_json(json& j, const LolEmailVerificationEmailUpdate& v) {
  j["email"] = v.email; 
  j["password"] = v.password; 
  }
  void from_json(const json& j, LolEmailVerificationEmailUpdate& v) {
  v.email = j.at("email").get<std::string>(); 
  v.password = j.at("password").get<std::string>(); 
  }
}