#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPersonalizedOffersAuthenticationRequest { 
    std::string tokenType;
    std::string token; 
  };
  inline void to_json(json& j, const LolPersonalizedOffersAuthenticationRequest& v) {
    j["tokenType"] = v.tokenType; 
    j["token"] = v.token; 
  }
  inline void from_json(const json& j, LolPersonalizedOffersAuthenticationRequest& v) {
    v.tokenType = j.at("tokenType").get<std::string>(); 
    v.token = j.at("token").get<std::string>(); 
  }
}