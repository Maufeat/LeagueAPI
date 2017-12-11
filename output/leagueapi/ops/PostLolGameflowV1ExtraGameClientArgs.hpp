#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolGameflowV1ExtraGameClientArgs (const https::Info& _info_,
      const std::vector<std::string>& extraGameClientArgs /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-gameflow/v1/extra-game-client-args?", { 
    }, { 
    },extraGameClientArgs) };
  }
} 