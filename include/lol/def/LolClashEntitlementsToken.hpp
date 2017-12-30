#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashEntitlementsToken { 
    std::string accessToken;
    std::string token;
    std::vector<std::string> entitlements; 
  };
  inline void to_json(json& j, const LolClashEntitlementsToken& v) {
    j["accessToken"] = v.accessToken; 
    j["token"] = v.token; 
    j["entitlements"] = v.entitlements; 
  }
  inline void from_json(const json& j, LolClashEntitlementsToken& v) {
    v.accessToken = j.at("accessToken").get<std::string>(); 
    v.token = j.at("token").get<std::string>(); 
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>(); 
  }
}