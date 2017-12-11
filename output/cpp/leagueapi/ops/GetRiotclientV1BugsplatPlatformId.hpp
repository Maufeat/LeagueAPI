#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Get the bugsplat platform id.*/
  static https::Result<std::string> GetRiotclientV1BugsplatPlatformId (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/riotclient/v1/bugsplat/platform-id?", { 
    }, { 
    }) };
  }
} 