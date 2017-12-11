#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Quits the application.*/
  static https::Result<void> PostProcessControlV1ProcessQuit (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/process-control/v1/process/quit?", { 
    }, { 
    }) };
  }
} 