#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::string> PostLolLoginV1ServiceProxyUuidRequests (const https::Info& _info_,
      const std::string& serviceName /**/,
      const std::string& methodName /**/,
      const uint32_t& pluginId /**/,
      const std::string& payload /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-login/v1/service-proxy-uuid-requests?", { 
      { "serviceName", https::to_string(serviceName) },
      { "methodName", https::to_string(methodName) },
      { "pluginId", https::to_string(pluginId) },
      { "payload", https::to_string(payload) },
    }, { 
    },"") };
  }
} 