#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::string> GetLolLobbyV2CommsToken (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-lobby/v2/comms/token?", { 
    }, { 
    },"") };
  }
} 