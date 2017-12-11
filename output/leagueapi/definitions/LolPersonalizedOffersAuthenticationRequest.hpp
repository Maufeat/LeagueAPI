#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolPersonalizedOffersAuthenticationRequest { /**/ 
    std::string token;/**/
    std::string tokenType;/**/
  };
  static void to_json(json& j, const LolPersonalizedOffersAuthenticationRequest& v) { 
    j["token"] = v.token;
    j["tokenType"] = v.tokenType;
  }
  static void from_json(const json& j, LolPersonalizedOffersAuthenticationRequest& v) { 
    v.token = j.at("token").get<std::string>(); 
    v.tokenType = j.at("tokenType").get<std::string>(); 
  }
} 