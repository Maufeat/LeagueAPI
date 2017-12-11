#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Get the TCP port number that the remoting server is listening on.*/
  static https::Result<uint16_t> GetRiotclientAppPort (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/riotclient/app-port?", { 
    }, { 
    }) };
  }
} 