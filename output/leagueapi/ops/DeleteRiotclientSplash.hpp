#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Hide the splash screen.*/
  static https::Result<void> DeleteRiotclientSplash (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "delete", "/riotclient/splash?", { 
    }, { 
    },"") };
  }
} 