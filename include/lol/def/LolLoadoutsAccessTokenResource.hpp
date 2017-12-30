#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLoadoutsAccessTokenResource { 
    uint64_t expiry;
    std::string token;
    std::vector<std::string> scopes; 
  };
  inline void to_json(json& j, const LolLoadoutsAccessTokenResource& v) {
    j["expiry"] = v.expiry; 
    j["token"] = v.token; 
    j["scopes"] = v.scopes; 
  }
  inline void from_json(const json& j, LolLoadoutsAccessTokenResource& v) {
    v.expiry = j.at("expiry").get<uint64_t>(); 
    v.token = j.at("token").get<std::string>(); 
    v.scopes = j.at("scopes").get<std::vector<std::string>>(); 
  }
}