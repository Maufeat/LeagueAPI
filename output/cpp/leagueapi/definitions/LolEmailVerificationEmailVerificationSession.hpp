#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolEmailVerificationEmailVerificationSession { /**/ 
    bool emailVerified;/**/
    std::string email;/**/
  };
  static void to_json(json& j, const LolEmailVerificationEmailVerificationSession& v) { 
    j["emailVerified"] = v.emailVerified;
    j["email"] = v.email;
  }
  static void from_json(const json& j, LolEmailVerificationEmailVerificationSession& v) { 
    v.emailVerified = j.at("emailVerified").get<bool>(); 
    v.email = j.at("email").get<std::string>(); 
  }
} 