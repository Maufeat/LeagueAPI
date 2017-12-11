#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<std::string>> GetLolGameflowV1ExtraGameClientArgs (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-gameflow/v1/extra-game-client-args?", { 
    }, { 
    }) };
  }
} 