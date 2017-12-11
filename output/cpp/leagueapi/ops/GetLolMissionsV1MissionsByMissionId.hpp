#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PlayerMissionDTO.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<PlayerMissionDTO> GetLolMissionsV1MissionsByMissionId (const https::Info& _info_,
      const std::string& missionId /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-missions/v1/missions/"+to_string(missionId)+"?", { 
    }, { 
    }) };
  }
} 