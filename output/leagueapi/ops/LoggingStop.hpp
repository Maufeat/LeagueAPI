#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Finalizes the logging system.*/
  static https::Result<void> LoggingStop (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/LoggingStop?", { 
    }, { 
    },"") };
  }
} 