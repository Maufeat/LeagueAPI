#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPersonalizedOffersAuthenticationResponse { 
    std::string expiration;
    std::string token; 
  };
  inline void to_json(json& j, const LolPersonalizedOffersAuthenticationResponse& v) {
    j["expiration"] = v.expiration; 
    j["token"] = v.token; 
  }
  inline void from_json(const json& j, LolPersonalizedOffersAuthenticationResponse& v) {
    v.expiration = j.at("expiration").get<std::string>(); 
    v.token = j.at("token").get<std::string>(); 
  }
}