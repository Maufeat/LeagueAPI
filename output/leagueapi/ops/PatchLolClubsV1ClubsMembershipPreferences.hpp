#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/ClubPreferences.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<ClubPreferences> PatchLolClubsV1ClubsMembershipPreferences (const https::Info& _info_,
      const ClubPreferences& preferences /**/ )
  { 
    return { https::Do(_info_, "patch", "/lol-clubs/v1/clubs/membership/preferences?", { 
    }, { 
    },preferences) };
  }
} 