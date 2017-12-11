#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PlayerClub.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<std::vector<PlayerClub>> GetLolClubsV1Clubs (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-clubs/v1/clubs?", { 
    }, { 
    },"") };
  }
} 