#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEmailVerificationAccessToken { 
    std::string token;
    uint64_t expiry; 
  };
  inline void to_json(json& j, const LolEmailVerificationAccessToken& v) {
    j["token"] = v.token; 
    j["expiry"] = v.expiry; 
  }
  inline void from_json(const json& j, LolEmailVerificationAccessToken& v) {
    v.token = j.at("token").get<std::string>(); 
    v.expiry = j.at("expiry").get<uint64_t>(); 
  }
}