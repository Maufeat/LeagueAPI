#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClashTournamentGameEnd.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<LolClashTournamentGameEnd> GetLolClashV1GameEnd (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-clash/v1/gameEnd?", { 
    }, { 
    },"") };
  }
} 