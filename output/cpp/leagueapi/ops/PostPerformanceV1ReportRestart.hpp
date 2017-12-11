#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /*Restarts the CPU timing information and returns the results from PerfReportProcesses*/
  static https::Result<json> PostPerformanceV1ReportRestart (const https::Info& _info_ ,
      const std::optional<int32_t>& sampleLength = std::nullopt /*Time in seconds for each CPU timing sample.*/,
      const std::optional<int32_t>& sampleCount = std::nullopt /*Number of samples to record.*/)
  { 
    return { https::Do(_info_, "post", "/performance/v1/report/restart?", { 
      { "sampleLength", to_string(sampleLength) },
      { "sampleCount", to_string(sampleCount) },
    }, { 
    }) };
  }
} 