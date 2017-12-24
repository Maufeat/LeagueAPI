#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RsoAuthEntitlementsToken { 
    uint64_t expiry;
    std::vector<std::string> entitlements;
    std::string token; 
  };
  inline void to_json(json& j, const RsoAuthEntitlementsToken& v) {
    j["expiry"] = v.expiry; 
    j["entitlements"] = v.entitlements; 
    j["token"] = v.token; 
  }
  inline void from_json(const json& j, RsoAuthEntitlementsToken& v) {
    v.expiry = j.at("expiry").get<uint64_t>(); 
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>(); 
    v.token = j.at("token").get<std::string>(); 
  }
}