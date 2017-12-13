#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPersonalizedOffersAuthenticationRequest { 
    std::string tokenType;
    std::string token; 
  };
  void to_json(json& j, const LolPersonalizedOffersAuthenticationRequest& v) {
  j["tokenType"] = v.tokenType; 
  j["token"] = v.token; 
  }
  void from_json(const json& j, LolPersonalizedOffersAuthenticationRequest& v) {
  v.tokenType = j.at("tokenType").get<std::string>(); 
  v.token = j.at("token").get<std::string>(); 
  }
}