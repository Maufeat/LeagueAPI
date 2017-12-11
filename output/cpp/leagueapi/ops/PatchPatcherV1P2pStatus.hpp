#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PatcherP2PStatusUpdate.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PatchPatcherV1P2pStatus (const https::Info& _info_,
      const PatcherP2PStatusUpdate& data /**/ )
  { 
    return { https::Do(_info_, "patch", "/patcher/v1/p2p/status?", { 
    }, { 
    },data) };
  }
} 