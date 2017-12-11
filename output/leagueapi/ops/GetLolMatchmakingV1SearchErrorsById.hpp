#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolMatchmakingMatchmakingSearchErrorResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolMatchmakingMatchmakingSearchErrorResource> GetLolMatchmakingV1SearchErrorsById (const https::Info& _info_,
      const int32_t& id /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-matchmaking/v1/search/errors/"+to_string(id)+"?", { 
    }, { 
    },"") };
  }
} 