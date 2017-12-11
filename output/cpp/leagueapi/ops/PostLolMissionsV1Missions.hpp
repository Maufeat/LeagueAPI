#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolMissionsV1Missions (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/lol-missions/v1/missions?", { 
    }, { 
    }) };
  }
} 