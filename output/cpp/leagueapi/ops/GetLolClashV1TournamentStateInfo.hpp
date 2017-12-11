#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClashTournamentStateInfo.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolClashTournamentStateInfo>> GetLolClashV1TournamentStateInfo (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-clash/v1/tournament-state-info?", { 
    }, { 
    }) };
  }
} 