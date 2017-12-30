#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct EntitlementsToken { 
    std::string accessToken;
    std::string token;
    std::string issuer;
    std::string subject;
    std::vector<std::string> entitlements; 
  };
  inline void to_json(json& j, const EntitlementsToken& v) {
    j["accessToken"] = v.accessToken; 
    j["token"] = v.token; 
    j["issuer"] = v.issuer; 
    j["subject"] = v.subject; 
    j["entitlements"] = v.entitlements; 
  }
  inline void from_json(const json& j, EntitlementsToken& v) {
    v.accessToken = j.at("accessToken").get<std::string>(); 
    v.token = j.at("token").get<std::string>(); 
    v.issuer = j.at("issuer").get<std::string>(); 
    v.subject = j.at("subject").get<std::string>(); 
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>(); 
  }
}