#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PlayerClubMembership.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<PlayerClubMembership> GetLolClubsV1ClubsMembership (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-clubs/v1/clubs/membership?", { 
    }, { 
    }) };
  }
} 