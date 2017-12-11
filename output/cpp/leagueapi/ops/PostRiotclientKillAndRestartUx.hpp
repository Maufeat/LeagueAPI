#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Kills the ux process and restarts it. Used only when the ux process crashes.*/
  static https::Result<void> PostRiotclientKillAndRestartUx (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/riotclient/kill-and-restart-ux?", { 
    }, { 
    }) };
  }
} 