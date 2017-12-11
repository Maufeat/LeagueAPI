#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Exits the application and runs a given executable just before it shuts down.*/
  static https::Result<void> PostProcessControlV1ProcessExitAndRun (const https::Info& _info_,
      const std::string& executablePath /**/,
      const std::string& workingDir /**/,
      const std::vector<std::string>& args /**/ )
  { 
    return { https::Do(_info_, "post", "/process-control/v1/process/exit-and-run?", { 
      { "executablePath", to_string(executablePath) },
      { "workingDir", to_string(workingDir) },
    }, { 
    }, { 
      { "args", to_string(args) },
    }, true ) };
  }
} 