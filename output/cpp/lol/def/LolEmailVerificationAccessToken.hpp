#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolEmailVerificationAccessToken { 
    uint64_t expiry;
    std::string token; 
  };
  void to_json(json& j, const LolEmailVerificationAccessToken& v) {
  j["expiry"] = v.expiry; 
  j["token"] = v.token; 
  }
  void from_json(const json& j, LolEmailVerificationAccessToken& v) {
  v.expiry = j.at("expiry").get<uint64_t>(); 
  v.token = j.at("token").get<std::string>(); 
  }
}