#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolMatchmakingMatchmakingSearchResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<json> PutLolMatchmakingV1Search (const https::Info& _info_,
      const LolMatchmakingMatchmakingSearchResource& search /**/ )
  { 
    return { https::Do(_info_, "put", "/lol-matchmaking/v1/search?", { 
    }, { 
    },search) };
  }
} 