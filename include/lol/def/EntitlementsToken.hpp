#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct EntitlementsToken { 
    std::string subject;
    std::string accessToken;
    std::vector<std::string> entitlements;
    std::string issuer;
    std::string token; 
  };
  inline void to_json(json& j, const EntitlementsToken& v) {
    j["subject"] = v.subject; 
    j["accessToken"] = v.accessToken; 
    j["entitlements"] = v.entitlements; 
    j["issuer"] = v.issuer; 
    j["token"] = v.token; 
  }
  inline void from_json(const json& j, EntitlementsToken& v) {
    v.subject = j.at("subject").get<std::string>(); 
    v.accessToken = j.at("accessToken").get<std::string>(); 
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>(); 
    v.issuer = j.at("issuer").get<std::string>(); 
    v.token = j.at("token").get<std::string>(); 
  }
}