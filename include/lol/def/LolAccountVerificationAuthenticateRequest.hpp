#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolAccountVerificationAuthenticateRequest { 
    std::string username;
    std::string password; 
  };
  inline void to_json(json& j, const LolAccountVerificationAuthenticateRequest& v) {
    j["username"] = v.username; 
    j["password"] = v.password; 
  }
  inline void from_json(const json& j, LolAccountVerificationAuthenticateRequest& v) {
    v.username = j.at("username").get<std::string>(); 
    v.password = j.at("password").get<std::string>(); 
  }
}