#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Show the splash screen.*/
  static https::Result<void> PutRiotclientSplash (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "put", "/riotclient/splash?", { 
    }, { 
    },"") };
  }
} 