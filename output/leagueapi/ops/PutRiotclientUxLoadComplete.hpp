#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Ux notification that it has completed loading the main window.*/
  static https::Result<void> PutRiotclientUxLoadComplete (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "put", "/riotclient/ux-load-complete?", { 
    }, { 
    },"") };
  }
} 