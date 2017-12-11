#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLobbyServiceProxyPayload { /**/ 
    std::string method;/**/
    std::string url;/**/
    std::string body;/**/
  };
  static void to_json(json& j, const LolLobbyServiceProxyPayload& v) { 
    j["method"] = v.method;
    j["url"] = v.url;
    j["body"] = v.body;
  }
  static void from_json(const json& j, LolLobbyServiceProxyPayload& v) { 
    v.method = j.at("method").get<std::string>(); 
    v.url = j.at("url").get<std::string>(); 
    v.body = j.at("body").get<std::string>(); 
  }
} 