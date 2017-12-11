#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolClashEntitlementsToken { /**/ 
    std::string accessToken;/**/
    std::vector<std::string> entitlements;/**/
    std::string token;/**/
  };
  static void to_json(json& j, const LolClashEntitlementsToken& v) { 
    j["accessToken"] = v.accessToken;
    j["entitlements"] = v.entitlements;
    j["token"] = v.token;
  }
  static void from_json(const json& j, LolClashEntitlementsToken& v) { 
    v.accessToken = j.at("accessToken").get<std::string>(); 
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>(); 
    v.token = j.at("token").get<std::string>(); 
  }
} 