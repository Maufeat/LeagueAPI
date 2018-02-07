#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLoadoutsAccessTokenResource { 
    std::string token;
    std::vector<std::string> scopes;
    uint64_t expiry; 
  };
  inline void to_json(json& j, const LolLoadoutsAccessTokenResource& v) {
    j["token"] = v.token; 
    j["scopes"] = v.scopes; 
    j["expiry"] = v.expiry; 
  }
  inline void from_json(const json& j, LolLoadoutsAccessTokenResource& v) {
    v.token = j.at("token").get<std::string>(); 
    v.scopes = j.at("scopes").get<std::vector<std::string>>(); 
    v.expiry = j.at("expiry").get<uint64_t>(); 
  }
}