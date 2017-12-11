#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Return the auth token used by the remoting server*/
  static https::Result<std::string> GetRiotclientAuthToken (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/riotclient/auth-token?", { 
    }, { 
    }) };
  }
} 