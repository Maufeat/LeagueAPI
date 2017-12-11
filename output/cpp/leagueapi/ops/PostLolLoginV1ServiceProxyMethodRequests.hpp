#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolLoginV1ServiceProxyMethodRequests (const https::Info& _info_,
      const std::string& serviceName /**/,
      const std::string& methodName /**/,
      const std::string& responseMethodName /**/,
      const std::string& responseErrorName /**/,
      const uint32_t& pluginId /**/,
      const std::string& payload /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-login/v1/service-proxy-method-requests?", { 
      { "serviceName", to_string(serviceName) },
      { "methodName", to_string(methodName) },
      { "responseMethodName", to_string(responseMethodName) },
      { "responseErrorName", to_string(responseErrorName) },
      { "pluginId", to_string(pluginId) },
      { "payload", to_string(payload) },
    }, { 
    }) };
  }
} 