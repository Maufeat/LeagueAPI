#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Get the current Ux state.*/
  static https::Result<std::string> GetRiotclientUxState (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/riotclient/ux-state?", { 
    }, { 
    }) };
  }
} 