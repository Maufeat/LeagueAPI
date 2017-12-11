#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Unloads the UX process*/
  static https::Result<void> PostRiotclientUnload (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/riotclient/unload?", { 
    }, { 
    }) };
  }
} 