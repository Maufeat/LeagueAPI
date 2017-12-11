#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/ProcessControlProcess.hpp>

namespace leagueapi::op {
  /*Returns information about the process-control.*/
  static https::Result<ProcessControlProcess> GetProcessControlV1Process (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/process-control/v1/process?", { 
    }, { 
    },"") };
  }
} 