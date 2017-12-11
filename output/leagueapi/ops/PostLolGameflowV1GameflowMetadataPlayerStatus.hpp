#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolGameflowPlayerStatus.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolGameflowV1GameflowMetadataPlayerStatus (const https::Info& _info_,
      const LolGameflowPlayerStatus& playerStatus /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-gameflow/v1/gameflow-metadata/player-status?", { 
    }, { 
    },playerStatus) };
  }
} 