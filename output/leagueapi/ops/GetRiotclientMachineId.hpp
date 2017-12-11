#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Base64 encoded uuid identifying the user's machine*/
  static https::Result<std::string> GetRiotclientMachineId (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/riotclient/machine-id?", { 
    }, { 
    },"") };
  }
} 