#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolPersonalizedOffersAuthenticationResponse { /**/ 
    std::string expiration;/**/
    std::string token;/**/
  };
  static void to_json(json& j, const LolPersonalizedOffersAuthenticationResponse& v) { 
    j["expiration"] = v.expiration;
    j["token"] = v.token;
  }
  static void from_json(const json& j, LolPersonalizedOffersAuthenticationResponse& v) { 
    v.expiration = j.at("expiration").get<std::string>(); 
    v.token = j.at("token").get<std::string>(); 
  }
} 