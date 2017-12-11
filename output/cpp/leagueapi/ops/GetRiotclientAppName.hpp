#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Application name without file extension*/
  static https::Result<std::string> GetRiotclientAppName (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/riotclient/app-name?", { 
    }, { 
    }) };
  }
} 