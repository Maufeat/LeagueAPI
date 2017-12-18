#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyServiceProxyPayload { 
    std::string body;
    std::string method;
    std::string url; 
  };
  inline void to_json(json& j, const LolLobbyServiceProxyPayload& v) {
    j["body"] = v.body; 
    j["method"] = v.method; 
    j["url"] = v.url; 
  }
  inline void from_json(const json& j, LolLobbyServiceProxyPayload& v) {
    v.body = j.at("body").get<std::string>(); 
    v.method = j.at("method").get<std::string>(); 
    v.url = j.at("url").get<std::string>(); 
  }
}