#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Memory filter prints to the log when memory is allocated or freed that matches the filter parameters set in MemoryFilterSet*/
  static https::Result<void> MemoryFilterEnable (const https::Info& _info_ ,
      const std::optional<int32_t>& enable = std::nullopt /*Enable/disable the memory filter*/)
  { 
    return { https::Do(_info_, "post", "/MemoryFilterEnable?", { 
      { "enable", https::to_string(enable) },
    }, { 
    },"") };
  }
} 