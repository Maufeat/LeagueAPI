#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolInventoryAccessTokenResource { 
    std::vector<std::string> scopes;
    uint64_t expiry;
    std::string token; 
  };
  void to_json(json& j, const LolInventoryAccessTokenResource& v) {
  j["scopes"] = v.scopes; 
  j["expiry"] = v.expiry; 
  j["token"] = v.token; 
  }
  void from_json(const json& j, LolInventoryAccessTokenResource& v) {
  v.scopes = j.at("scopes").get<std::vector<std::string>>(); 
  v.expiry = j.at("expiry").get<uint64_t>(); 
  v.token = j.at("token").get<std::string>(); 
  }
}