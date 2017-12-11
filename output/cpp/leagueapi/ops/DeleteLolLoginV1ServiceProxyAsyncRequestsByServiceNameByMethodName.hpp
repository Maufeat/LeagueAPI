#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> DeleteLolLoginV1ServiceProxyAsyncRequestsByServiceNameByMethodName (const https::Info& _info_,
      const std::string& serviceName /**/,
      const std::string& methodName /**/,
      const uint32_t& pluginId /**/ )
  { 
    return { https::Do(_info_, "delete", "/lol-login/v1/service-proxy-async-requests/"+to_string(serviceName)+"/"+to_string(methodName)+"?", { 
      { "pluginId", to_string(pluginId) },
    }, { 
    }) };
  }
} 