#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RsoAuthEntitlementsToken { 
    std::string token;
    std::vector<std::string> entitlements;
    uint64_t expiry; 
  };
  inline void to_json(json& j, const RsoAuthEntitlementsToken& v) {
    j["token"] = v.token; 
    j["entitlements"] = v.entitlements; 
    j["expiry"] = v.expiry; 
  }
  inline void from_json(const json& j, RsoAuthEntitlementsToken& v) {
    v.token = j.at("token").get<std::string>(); 
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>(); 
    v.expiry = j.at("expiry").get<uint64_t>(); 
  }
}