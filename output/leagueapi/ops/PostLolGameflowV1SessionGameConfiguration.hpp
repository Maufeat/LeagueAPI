#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolGameflowQueue.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolGameflowV1SessionGameConfiguration (const https::Info& _info_,
      const LolGameflowQueue& queue /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-gameflow/v1/session/game-configuration?", { 
    }, { 
    },queue) };
  }
} 