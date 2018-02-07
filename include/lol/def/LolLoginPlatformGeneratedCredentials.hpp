#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLoginPlatformGeneratedCredentials { 
    std::string username;
    std::string password;
    json gasToken; 
  };
  inline void to_json(json& j, const LolLoginPlatformGeneratedCredentials& v) {
    j["username"] = v.username; 
    j["password"] = v.password; 
    j["gasToken"] = v.gasToken; 
  }
  inline void from_json(const json& j, LolLoginPlatformGeneratedCredentials& v) {
    v.username = j.at("username").get<std::string>(); 
    v.password = j.at("password").get<std::string>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
  }
}