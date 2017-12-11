#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/LolLobbyEligibility.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<LolLobbyEligibility>> PostLolLobbyV2LobbyEligibilityPremade (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby/v2/lobby/eligibility/premade?", { 
    }, { 
    },"") };
  }
} 