#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEmailVerificationEmailUpdate { 
    std::string password;
    std::string email; 
  };
  inline void to_json(json& j, const LolEmailVerificationEmailUpdate& v) {
    j["password"] = v.password; 
    j["email"] = v.email; 
  }
  inline void from_json(const json& j, LolEmailVerificationEmailUpdate& v) {
    v.password = j.at("password").get<std::string>(); 
    v.email = j.at("email").get<std::string>(); 
  }
}