#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Returns current memory usage by callstack site*/
  static https::Result<json> MemoryUsage (const https::Info& _info_ ,
      const std::optional<uint32_t>& minSize = std::nullopt /*Minimum size of total allocations at call site in order to print (optional: MEMORYUSAGE_MINSIZE default)*/,
      const std::optional<uint32_t>& minCount = std::nullopt /*Minimum count of total allocations at call site in order to print (optional: MEMORYUSAGE_MINCOUNT default)*/)
  { 
    return { https::Do(_info_, "post", "/MemoryUsage?", { 
      { "minSize", to_string(minSize) },
      { "minCount", to_string(minCount) },
    }, { 
    }) };
  }
} 