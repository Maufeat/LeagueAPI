#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> GetLolPlatformConfigV1NamespacesByNs (const https::Info& _info_,
      const std::string& ns /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-platform-config/v1/namespaces/"+to_string(ns)+"?", { 
    }, { 
    }) };
  }
} 