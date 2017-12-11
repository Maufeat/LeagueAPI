#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolGameflowGameflowAvailability.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolGameflowGameflowAvailability> GetLolGameflowV1Availability (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-gameflow/v1/availability?", { 
    }, { 
    },"") };
  }
} 