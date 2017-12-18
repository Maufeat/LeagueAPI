#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RsoAuthAccessToken { 
    std::vector<std::string> scopes;
    uint64_t expiry;
    std::string token; 
  };
  inline void to_json(json& j, const RsoAuthAccessToken& v) {
    j["scopes"] = v.scopes; 
    j["expiry"] = v.expiry; 
    j["token"] = v.token; 
  }
  inline void from_json(const json& j, RsoAuthAccessToken& v) {
    v.scopes = j.at("scopes").get<std::vector<std::string>>(); 
    v.expiry = j.at("expiry").get<uint64_t>(); 
    v.token = j.at("token").get<std::string>(); 
  }
}