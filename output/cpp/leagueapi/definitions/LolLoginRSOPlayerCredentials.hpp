#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLoginRSOPlayerCredentials { /**/ 
    std::string platformId;/**/
    std::string username;/**/
    std::string password;/**/
  };
  static void to_json(json& j, const LolLoginRSOPlayerCredentials& v) { 
    j["platformId"] = v.platformId;
    j["username"] = v.username;
    j["password"] = v.password;
  }
  static void from_json(const json& j, LolLoginRSOPlayerCredentials& v) { 
    v.platformId = j.at("platformId").get<std::string>(); 
    v.username = j.at("username").get<std::string>(); 
    v.password = j.at("password").get<std::string>(); 
  }
} 