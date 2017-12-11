#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Retrieves a completed scheduler trace.*/
  static https::Result<json> GetRiotclientTrace (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/riotclient/trace?", { 
    }, { 
    }) };
  }
} 