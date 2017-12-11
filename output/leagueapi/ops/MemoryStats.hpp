#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Returns aggregate information about memory usage*/
  static https::Result<json> MemoryStats (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/MemoryStats?", { 
    }, { 
    },"") };
  }
} 