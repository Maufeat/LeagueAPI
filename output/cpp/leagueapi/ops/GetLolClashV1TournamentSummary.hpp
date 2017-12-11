#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolClashTournamentSummary.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolClashTournamentSummary>> GetLolClashV1TournamentSummary (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-clash/v1/tournament-summary?", { 
    }, { 
    }) };
  }
} 