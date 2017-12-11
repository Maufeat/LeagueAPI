#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolLoginV1NewPlayerFlowCompleted (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/lol-login/v1/new-player-flow-completed?", { 
    }, { 
    },"") };
  }
} 