#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct RsoAuthPublicClientConfig { /**/ 
    std::string clientId;/**/
    std::string url;/**/
  };
  static void to_json(json& j, const RsoAuthPublicClientConfig& v) { 
    j["clientId"] = v.clientId;
    j["url"] = v.url;
  }
  static void from_json(const json& j, RsoAuthPublicClientConfig& v) { 
    v.clientId = j.at("clientId").get<std::string>(); 
    v.url = j.at("url").get<std::string>(); 
  }
} 