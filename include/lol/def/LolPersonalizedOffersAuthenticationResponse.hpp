#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPersonalizedOffersAuthenticationResponse { 
    std::string token;
    std::string expiration; 
  };
  inline void to_json(json& j, const LolPersonalizedOffersAuthenticationResponse& v) {
    j["token"] = v.token; 
    j["expiration"] = v.expiration; 
  }
  inline void from_json(const json& j, LolPersonalizedOffersAuthenticationResponse& v) {
    v.token = j.at("token").get<std::string>(); 
    v.expiration = j.at("expiration").get<std::string>(); 
  }
}