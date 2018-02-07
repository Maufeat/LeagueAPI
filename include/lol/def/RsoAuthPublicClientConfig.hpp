#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct RsoAuthPublicClientConfig { 
    std::string url;
    std::string clientId; 
  };
  inline void to_json(json& j, const RsoAuthPublicClientConfig& v) {
    j["url"] = v.url; 
    j["clientId"] = v.clientId; 
  }
  inline void from_json(const json& j, RsoAuthPublicClientConfig& v) {
    v.url = j.at("url").get<std::string>(); 
    v.clientId = j.at("clientId").get<std::string>(); 
  }
}