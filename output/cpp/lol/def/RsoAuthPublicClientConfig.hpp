#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct RsoAuthPublicClientConfig { 
    std::string clientId;
    std::string url; 
  };
  void to_json(json& j, const RsoAuthPublicClientConfig& v) {
    j["clientId"] = v.clientId; 
    j["url"] = v.url; 
  }
  void from_json(const json& j, RsoAuthPublicClientConfig& v) {
    v.clientId = j.at("clientId").get<std::string>(); 
    v.url = j.at("url").get<std::string>(); 
  }
}