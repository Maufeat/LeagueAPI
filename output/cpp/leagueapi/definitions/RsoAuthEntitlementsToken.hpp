#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct RsoAuthEntitlementsToken { /**/ 
    uint64_t expiry;/**/
    std::vector<std::string> entitlements;/**/
    std::string token;/**/
  };
  static void to_json(json& j, const RsoAuthEntitlementsToken& v) { 
    j["expiry"] = v.expiry;
    j["entitlements"] = v.entitlements;
    j["token"] = v.token;
  }
  static void from_json(const json& j, RsoAuthEntitlementsToken& v) { 
    v.expiry = j.at("expiry").get<uint64_t>(); 
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>(); 
    v.token = j.at("token").get<std::string>(); 
  }
} 