#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PlayerMissionDTO.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<PlayerMissionDTO>> GetLolMissionsV1Missions (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-missions/v1/missions?", { 
    }, { 
    }) };
  }
} 