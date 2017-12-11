#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolMissionsV1MissionsByMissionId (const https::Info& _info_,
      const std::string& missionId /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-missions/v1/missions/"+to_string(missionId)+"?", { 
    }, { 
    },"") };
  }
} 