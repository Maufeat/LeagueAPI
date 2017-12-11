#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLoginUsernameAndPassword { /**/ 
    std::string username;/**/
    std::string password;/**/
  };
  static void to_json(json& j, const LolLoginUsernameAndPassword& v) { 
    j["username"] = v.username;
    j["password"] = v.password;
  }
  static void from_json(const json& j, LolLoginUsernameAndPassword& v) { 
    v.username = j.at("username").get<std::string>(); 
    v.password = j.at("password").get<std::string>(); 
  }
} 