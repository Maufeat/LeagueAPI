#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct EntitlementsToken { 
    std::vector<std::string> entitlements;
    std::string accessToken;
    std::string issuer;
    std::string subject;
    std::string token; 
  };
  inline void to_json(json& j, const EntitlementsToken& v) {
    j["entitlements"] = v.entitlements; 
    j["accessToken"] = v.accessToken; 
    j["issuer"] = v.issuer; 
    j["subject"] = v.subject; 
    j["token"] = v.token; 
  }
  inline void from_json(const json& j, EntitlementsToken& v) {
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>(); 
    v.accessToken = j.at("accessToken").get<std::string>(); 
    v.issuer = j.at("issuer").get<std::string>(); 
    v.subject = j.at("subject").get<std::string>(); 
    v.token = j.at("token").get<std::string>(); 
  }
}