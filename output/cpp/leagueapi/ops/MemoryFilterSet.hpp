#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Sets the filter parameters for when to print to the log. Use MemoryFilterEnable to start/stop the print outs*/
  static https::Result<void> MemoryFilterSet (const https::Info& _info_ ,
      const std::optional<uint32_t>& minSize = std::nullopt /*Optional filter for minimum size to output*/,
      const std::optional<uint32_t>& maxSize = std::nullopt /*Optional filter for maximum size to output*/,
      const std::optional<std::string>& minAddress = std::nullopt /*Optional filter for minimum address in hex to output*/,
      const std::optional<std::string>& maxAddress = std::nullopt /*Optional filter for maximum address in hex to output*/)
  { 
    return { https::Do(_info_, "post", "/MemoryFilterSet?", { 
      { "minSize", to_string(minSize) },
      { "maxSize", to_string(maxSize) },
      { "minAddress", to_string(minAddress) },
      { "maxAddress", to_string(maxAddress) },
    }, { 
    }) };
  }
} 