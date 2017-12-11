#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Returns whether the ux has crashed or not*/
  static https::Result<uint32_t> GetRiotclientUxCrashCount (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/riotclient/ux-crash-count?", { 
    }, { 
    },"") };
  }
} 