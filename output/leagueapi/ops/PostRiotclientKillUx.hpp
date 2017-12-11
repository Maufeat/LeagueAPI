#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Kills the ux process.*/
  static https::Result<void> PostRiotclientKillUx (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/riotclient/kill-ux?", { 
    }, { 
    },"") };
  }
} 