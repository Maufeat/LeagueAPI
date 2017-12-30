#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RsoAuthEntitlementsToken { 
    uint64_t expiry;
    std::string token;
    std::vector<std::string> entitlements; 
  };
  inline void to_json(json& j, const RsoAuthEntitlementsToken& v) {
    j["expiry"] = v.expiry; 
    j["token"] = v.token; 
    j["entitlements"] = v.entitlements; 
  }
  inline void from_json(const json& j, RsoAuthEntitlementsToken& v) {
    v.expiry = j.at("expiry").get<uint64_t>(); 
    v.token = j.at("token").get<std::string>(); 
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>(); 
  }
}