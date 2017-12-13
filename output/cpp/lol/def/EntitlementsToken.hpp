#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct EntitlementsToken { 
    std::string issuer;
    std::string accessToken;
    std::vector<std::string> entitlements;
    std::string token;
    std::string subject; 
  };
  void to_json(json& j, const EntitlementsToken& v) {
  j["issuer"] = v.issuer; 
  j["accessToken"] = v.accessToken; 
  j["entitlements"] = v.entitlements; 
  j["token"] = v.token; 
  j["subject"] = v.subject; 
  }
  void from_json(const json& j, EntitlementsToken& v) {
  v.issuer = j.at("issuer").get<std::string>(); 
  v.accessToken = j.at("accessToken").get<std::string>(); 
  v.entitlements = j.at("entitlements").get<std::vector<std::string>>(); 
  v.token = j.at("token").get<std::string>(); 
  v.subject = j.at("subject").get<std::string>(); 
  }
}