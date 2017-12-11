#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Launches the ux process.*/
  static https::Result<void> PostRiotclientLaunchUx (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/riotclient/launch-ux?", { 
    }, { 
    }) };
  }
} 