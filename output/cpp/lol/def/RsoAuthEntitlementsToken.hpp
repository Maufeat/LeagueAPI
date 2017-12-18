#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct RsoAuthEntitlementsToken { 
    std::vector<std::string> entitlements;
    uint64_t expiry;
    std::string token; 
  };
  inline void to_json(json& j, const RsoAuthEntitlementsToken& v) {
    j["entitlements"] = v.entitlements; 
    j["expiry"] = v.expiry; 
    j["token"] = v.token; 
  }
  inline void from_json(const json& j, RsoAuthEntitlementsToken& v) {
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>(); 
    v.expiry = j.at("expiry").get<uint64_t>(); 
    v.token = j.at("token").get<std::string>(); 
  }
}