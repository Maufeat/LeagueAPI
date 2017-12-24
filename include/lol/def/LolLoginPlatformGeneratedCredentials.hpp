#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLoginPlatformGeneratedCredentials { 
    std::string username;
    json gasToken;
    std::string password; 
  };
  inline void to_json(json& j, const LolLoginPlatformGeneratedCredentials& v) {
    j["username"] = v.username; 
    j["gasToken"] = v.gasToken; 
    j["password"] = v.password; 
  }
  inline void from_json(const json& j, LolLoginPlatformGeneratedCredentials& v) {
    v.username = j.at("username").get<std::string>(); 
    v.gasToken = j.at("gasToken").get<json>(); 
    v.password = j.at("password").get<std::string>(); 
  }
}