#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PostLolGameflowV1BasicTutorialStart (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/lol-gameflow/v1/basic-tutorial/start?", { 
    }, { 
    }) };
  }
} 