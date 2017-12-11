#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PutPatcherV1SelfUpdateRestart (const https::Info& _info_,
      const bool& forceRestartOnSelfUpdate /**/ )
  { 
    return { https::Do(_info_, "put", "/patcher/v1/self-update-restart?", { 
      { "forceRestartOnSelfUpdate", https::to_string(forceRestartOnSelfUpdate) },
    }, { 
    },"") };
  }
} 