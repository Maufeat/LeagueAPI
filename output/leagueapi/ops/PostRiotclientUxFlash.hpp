#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Flash the ux process' main window and the taskbar/dock icon, if they exist.*/
  static https::Result<void> PostRiotclientUxFlash (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/riotclient/ux-flash?", { 
    }, { 
    },"") };
  }
} 