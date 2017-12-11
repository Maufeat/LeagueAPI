#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PatcherP2PStatus.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<PatcherP2PStatus> GetPatcherV1P2pStatus (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/patcher/v1/p2p/status?", { 
    }, { 
    },"") };
  }
} 