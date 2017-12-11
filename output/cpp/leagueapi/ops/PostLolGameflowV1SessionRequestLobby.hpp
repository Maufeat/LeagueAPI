#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<bool> PostLolGameflowV1SessionRequestLobby (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/lol-gameflow/v1/session/request-lobby?", { 
    }, { 
    }) };
  }
} 