#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PatcherStatus.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<PatcherStatus> GetPatcherV1Status (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/patcher/v1/status?", { 
    }, { 
    },"") };
  }
} 