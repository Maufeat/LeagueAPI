#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/SanitizerSanitizerStatus.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<SanitizerSanitizerStatus> GetSanitizerV1Status (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/sanitizer/v1/status?", { 
    }, { 
    },"") };
  }
} 