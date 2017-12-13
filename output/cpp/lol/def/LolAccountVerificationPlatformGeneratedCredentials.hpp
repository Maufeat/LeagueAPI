#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolAccountVerificationPlatformGeneratedCredentials { 
    json gasToken;
    std::string username;
    std::string password; 
  };
  void to_json(json& j, const LolAccountVerificationPlatformGeneratedCredentials& v) {
  j["gasToken"] = v.gasToken; 
  j["username"] = v.username; 
  j["password"] = v.password; 
  }
  void from_json(const json& j, LolAccountVerificationPlatformGeneratedCredentials& v) {
  v.gasToken = j.at("gasToken").get<json>(); 
  v.username = j.at("username").get<std::string>(); 
  v.password = j.at("password").get<std::string>(); 
  }
}