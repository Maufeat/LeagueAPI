#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolGameflowV1SessionEvent (const https::Info& _info_,
      const std::string& session /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-gameflow/v1/session/event?", { 
    }, { 
    },session) };
  }
} 