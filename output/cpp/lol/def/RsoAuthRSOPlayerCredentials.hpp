#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct RsoAuthRSOPlayerCredentials { 
    std::string password;
    std::string username;
    std::string platformId; 
  };
  void to_json(json& j, const RsoAuthRSOPlayerCredentials& v) {
  j["password"] = v.password; 
  j["username"] = v.username; 
  j["platformId"] = v.platformId; 
  }
  void from_json(const json& j, RsoAuthRSOPlayerCredentials& v) {
  v.password = j.at("password").get<std::string>(); 
  v.username = j.at("username").get<std::string>(); 
  v.platformId = j.at("platformId").get<std::string>(); 
  }
}