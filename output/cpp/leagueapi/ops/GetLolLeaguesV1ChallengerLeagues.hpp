#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLeaguesApexLeagues.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolLeaguesApexLeagues> GetLolLeaguesV1ChallengerLeagues (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-leagues/v1/challenger-leagues?", { 
    }, { 
    }) };
  }
} 