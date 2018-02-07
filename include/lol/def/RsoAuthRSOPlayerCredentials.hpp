#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RsoAuthRSOPlayerCredentials { 
    std::string username;
    std::string password;
    std::string platformId; 
  };
  inline void to_json(json& j, const RsoAuthRSOPlayerCredentials& v) {
    j["username"] = v.username; 
    j["password"] = v.password; 
    j["platformId"] = v.platformId; 
  }
  inline void from_json(const json& j, RsoAuthRSOPlayerCredentials& v) {
    v.username = j.at("username").get<std::string>(); 
    v.password = j.at("password").get<std::string>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
  }
}