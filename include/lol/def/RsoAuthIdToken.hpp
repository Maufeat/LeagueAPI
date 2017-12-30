#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RsoAuthIdToken { 
    std::string token;
    uint64_t expiry; 
  };
  inline void to_json(json& j, const RsoAuthIdToken& v) {
    j["token"] = v.token; 
    j["expiry"] = v.expiry; 
  }
  inline void from_json(const json& j, RsoAuthIdToken& v) {
    v.token = j.at("token").get<std::string>(); 
    v.expiry = j.at("expiry").get<uint64_t>(); 
  }
}