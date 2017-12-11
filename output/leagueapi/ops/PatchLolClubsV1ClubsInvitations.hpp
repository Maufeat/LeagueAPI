#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PlayerClubMembership.hpp>
#include <leagueapi/definitions/ClubInvite.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<PlayerClubMembership> PatchLolClubsV1ClubsInvitations (const https::Info& _info_,
      const ClubInvite& invitation /**/ )
  { 
    return { https::Do(_info_, "patch", "/lol-clubs/v1/clubs/invitations?", { 
    }, { 
    },invitation) };
  }
} 