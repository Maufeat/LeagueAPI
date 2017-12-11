#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Get the current runtime affinity of the application.*/
  static https::Result<json> GetRiotclientAffinity (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/riotclient/affinity?", { 
    }, { 
    }) };
  }
} 