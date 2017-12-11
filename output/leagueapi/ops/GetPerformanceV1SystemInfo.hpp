#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Returns hardware and software specs for the machine the client is running on.*/
  static https::Result<json> GetPerformanceV1SystemInfo (const https::Info& _info_ ,
      const std::optional<int32_t>& full = std::nullopt /*Returns all available system information*/)
  { 
    return { https::Do(_info_, "get", "/performance/v1/system-info?", { 
      { "full", https::to_string(full) },
    }, { 
    },"") };
  }
} 