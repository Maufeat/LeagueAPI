#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Minimize the ux process and all its windows if it exists. This does not kill the ux.*/
  static https::Result<void> PostRiotclientUxMinimize (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/riotclient/ux-minimize?", { 
    }, { 
    }) };
  }
} 