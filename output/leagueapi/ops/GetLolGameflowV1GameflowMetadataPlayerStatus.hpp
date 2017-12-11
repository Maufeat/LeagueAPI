#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolGameflowPlayerStatus.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolGameflowPlayerStatus> GetLolGameflowV1GameflowMetadataPlayerStatus (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-gameflow/v1/gameflow-metadata/player-status?", { 
    }, { 
    },"") };
  }
} 