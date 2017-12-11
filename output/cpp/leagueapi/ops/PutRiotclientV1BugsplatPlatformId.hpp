#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Tags the bugsplat with a platform id so it can be filtered more easily.*/
  static https::Result<void> PutRiotclientV1BugsplatPlatformId (const https::Info& _info_,
      const std::string& platformId /*The platform id that should be reported to bugsplat.*/ )
  { 
    return { https::Do(_info_, "put", "/riotclient/v1/bugsplat/platform-id?", { 
    }, { 
    },platformId) };
  }
} 