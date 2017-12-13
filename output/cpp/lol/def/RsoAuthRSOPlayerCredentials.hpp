#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct RsoAuthRSOPlayerCredentials { 
    std::string platformId;
    std::string username;
    std::string password; 
  };
  void to_json(json& j, const RsoAuthRSOPlayerCredentials& v) {
  j["platformId"] = v.platformId; 
  j["username"] = v.username; 
  j["password"] = v.password; 
  }
  void from_json(const json& j, RsoAuthRSOPlayerCredentials& v) {
  v.platformId = j.at("platformId").get<std::string>(); 
  v.username = j.at("username").get<std::string>(); 
  v.password = j.at("password").get<std::string>(); 
  }
}