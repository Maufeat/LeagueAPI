#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Registers the process and includes it with the performance information.*/
  static https::Result<void> PostPerformanceV1ProcessByProcessId (const https::Info& _info_,
      const uint32_t& processId /*Id of the process to track performance information.*/ )
  { 
    return { https::Do(_info_, "post", "/performance/v1/process/"+to_string(processId)+"?", { 
    }, { 
    }) };
  }
} 