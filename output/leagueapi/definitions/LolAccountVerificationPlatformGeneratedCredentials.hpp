#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolAccountVerificationPlatformGeneratedCredentials { /**/ 
    json gasToken;/**/
    std::string username;/**/
    std::string password;/**/
  };
  static void to_json(json& j, const LolAccountVerificationPlatformGeneratedCredentials& v) { 
    j["gasToken"] = v.gasToken;
    j["username"] = v.username;
    j["password"] = v.password;
  }
  static void from_json(const json& j, LolAccountVerificationPlatformGeneratedCredentials& v) { 
    v.gasToken = j.at("gasToken").get<json>(); 
    v.username = j.at("username").get<std::string>(); 
    v.password = j.at("password").get<std::string>(); 
  }
} 