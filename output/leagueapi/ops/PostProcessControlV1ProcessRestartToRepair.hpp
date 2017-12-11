#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Restarts the application in order to perform a full repair (including self repair).*/
  static https::Result<void> PostProcessControlV1ProcessRestartToRepair (const https::Info& _info_,
      const std::string& productId /**/ )
  { 
    return { https::Do(_info_, "post", "/process-control/v1/process/restart-to-repair?", { 
      { "productId", https::to_string(productId) },
    }, { 
    },"") };
  }
} 