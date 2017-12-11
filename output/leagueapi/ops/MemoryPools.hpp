#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Returns current pool usage*/
  static https::Result<json> MemoryPools (const https::Info& _info_ ,
      const std::optional<std::string>& contextName = std::nullopt /*Name of the context to find (optional)*/)
  { 
    return { https::Do(_info_, "post", "/MemoryPools?", { 
      { "contextName", https::to_string(contextName) },
    }, { 
    },"") };
  }
} 