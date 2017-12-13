#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolPersonalizedOffersAuthenticationRequest { 
    std::string token;
    std::string tokenType; 
  };
  void to_json(json& j, const LolPersonalizedOffersAuthenticationRequest& v) {
  j["token"] = v.token; 
  j["tokenType"] = v.tokenType; 
  }
  void from_json(const json& j, LolPersonalizedOffersAuthenticationRequest& v) {
  v.token = j.at("token").get<std::string>(); 
  v.tokenType = j.at("tokenType").get<std::string>(); 
  }
}