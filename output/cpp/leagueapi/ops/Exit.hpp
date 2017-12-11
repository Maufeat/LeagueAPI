#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Closes the connection.*/
  static https::Result<json> Exit (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/Exit?", { 
    }, { 
    }) };
  }
} 