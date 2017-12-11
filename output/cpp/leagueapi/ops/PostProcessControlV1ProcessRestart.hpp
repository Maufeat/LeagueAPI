#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Restarts the application.  Does nothing if there is already a waiting delayed restart.  Optionally accepts specific version to restart.*/
  static https::Result<void> PostProcessControlV1ProcessRestart (const https::Info& _info_,
      const uint32_t& delaySeconds /**/ ,
      const std::optional<uint32_t>& restartVersion = std::nullopt /**/)
  { 
    return { https::Do(_info_, "post", "/process-control/v1/process/restart?", { 
      { "delaySeconds", to_string(delaySeconds) },
      { "restartVersion", to_string(restartVersion) },
    }, { 
    }) };
  }
} 