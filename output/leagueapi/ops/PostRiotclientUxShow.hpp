#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Shows the ux process if it exists; create and show if it does not.*/
  static https::Result<void> PostRiotclientUxShow (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/riotclient/ux-show?", { 
    }, { 
    },"") };
  }
} 