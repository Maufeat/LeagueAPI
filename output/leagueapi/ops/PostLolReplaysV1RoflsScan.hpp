#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolReplaysV1RoflsScan (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/lol-replays/v1/rofls/scan?", { 
    }, { 
    },"") };
  }
} 