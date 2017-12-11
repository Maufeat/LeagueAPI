#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/MissionIdsDTO.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PutLolMissionsV2Missions (const https::Info& _info_,
      const MissionIdsDTO& missionIds /**/ )
  { 
    return { https::Do(_info_, "put", "/lol-missions/v2/missions?", { 
    }, { 
    },missionIds) };
  }
} 