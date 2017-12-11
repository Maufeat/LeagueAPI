#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/ClubPreferences.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<ClubPreferences> GetLolClubsV1ClubsMembershipPreferences (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/lol-clubs/v1/clubs/membership/preferences?", { 
    }, { 
    }) };
  }
} 